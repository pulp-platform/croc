// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>

`include "common_cells/registers.svh"
`include "idma/guard.svh"

/// ND midend for the iDMA. This module takes an n-dimensional transfer and splits it into
/// individual 1d transfers handed to the backend.
module idma_nd_midend #(
    /// Number of dimensions. This has to be at least two as the first dimension is already
    /// handled by the backend itself
    parameter int unsigned NumDim = 32'd2,
    /// Address type
    parameter type addr_t = logic,
    /// 1D iDMA request type
    parameter type idma_req_t = logic,
    /// iDMA response type
    parameter type idma_rsp_t = logic,
    /// ND iDMA request type
    parameter type idma_nd_req_t = logic,
    /// The width of the counters holding the number of repetitions.
    parameter logic [NumDim-1:0][31:0] RepWidths  = '{default: 'd0}
) (
    /// Clock
    input  logic         clk_i,
    /// Asynchronous reset, active low
    input  logic         rst_ni,

    /// ND iDMA request
    input  idma_nd_req_t nd_req_i,
    /// ND iDMA request valid
    input  logic         nd_req_valid_i,
    /// ND iDMA request ready
    output logic         nd_req_ready_o,

    /// ND iDMA response
    output idma_rsp_t    nd_rsp_o,
    /// ND iDMA response valid
    output logic         nd_rsp_valid_o,
    /// ND iDMA response ready
    input  logic         nd_rsp_ready_i,

    /// 1D iDMA request
    output idma_req_t    burst_req_o,
    /// 1D iDMA request valid
    output logic         burst_req_valid_o,
    /// 1D iDMA request ready
    input  logic         burst_req_ready_i,

    /// iDMA 1D response
    input  idma_rsp_t    burst_rsp_i,
    /// iDMA 1D response valid
    input  logic         burst_rsp_valid_i,
    /// iDMA 1D response ready
    output logic         burst_rsp_ready_o,

    /// the backend is busy
    output logic         busy_o
);

    /// How many bits are required to index the counters
    localparam int unsigned StrideSelWidth = $clog2(NumDim-1) + 'd1;

    // The counter currently active (this is added to the address)
    logic [StrideSelWidth-1:0] stride_sel_d, stride_sel_q;

    // signal connecting the stages
    logic [NumDim-1:0] stage_done;
    logic [NumDim-2:0] stage_zero;
    logic [NumDim-2:0] stage_en;
    logic [NumDim-2:0] stage_clear;

    logic burst_sent_d, burst_sent_q;

    // signal signaling all zeros
    logic zero;

    // last burst of this ND transfer
    logic last;

    // the current address pointers
    addr_t src_addr_d, src_addr_q;
    addr_t dst_addr_d, dst_addr_q;

    // assign the handshaking signals on the input
    assign stage_done[0]  = nd_req_valid_i;
    assign last           = &(stage_done[NumDim-1:0]);
    assign nd_req_ready_o = last & nd_req_valid_i & burst_req_ready_i;

    // all stages are zero
    assign zero = &(stage_zero);

    // assign handshake on the output
    assign burst_req_valid_o = nd_req_valid_i & !zero;

    // buffer burst_req handshake
    assign burst_sent_d = burst_req_valid_o & burst_req_ready_i;


    //--------------------------------------
    // Repetition counters
    //--------------------------------------
    for (genvar d = 2; d <= NumDim; d++) begin : gen_dim_counters

        // local copy of the dimensional configuration of the counters
        localparam int unsigned RepWidth = RepWidths[d-2];

        // local signals
        logic [RepWidth-1:0] local_rep;
        logic                local_overflow;

        // dataflow: stage needs to be enabled and target ready
        assign stage_en   [d-2] = &(stage_done[d-2:0]) & burst_req_ready_i;
        assign stage_clear[d-2] = &(stage_done[d-1:0]) & burst_req_ready_i;

        // size conversion
        assign local_rep = nd_req_valid_i ? nd_req_i.d_req[d-2].reps[RepWidth-1:0] : '0;

        // bypass if num iterations is 0, mark stage as 0 stage:
        always_comb begin : proc_zero_bypass
            if (local_rep == '0) begin
                stage_done[d-1] = &(stage_done[d-2:0]);
                stage_zero[d-2] = 1'b1;
            end else begin
                stage_done[d-1] = local_overflow;
                stage_zero[d-2] = 1'b0;
            end
        end

        // number of repetitions counter
        idma_nd_counter #(
            .Width           ( RepWidth  )
        ) i_num_rep_counter (
            .clk_i,
            .rst_ni,
            .en_i    ( stage_en[d-2]       ),
            .clear_i ( stage_clear[d-2]    ),
            .limit_i ( local_rep           ),
            .done_o  ( local_overflow      )
        );
    end


    //--------------------------------------
    // Select the active stride
    //--------------------------------------
    // The popcount is used to identify the highest stage that is done. This is then added to the
    // current address register.
    popcount #(
        .INPUT_WIDTH ( NumDim-1  )
    ) i_popcount (
        .data_i      ( stage_clear  ),
        .popcount_o  ( stride_sel_d )
    );


    //--------------------------------------
    // Select the active stride
    //--------------------------------------
    always_comb begin : src_addr_calc
        if (stride_sel_q == NumDim - 1) begin
            src_addr_d = nd_req_i.burst_req.src_addr;
        end else begin
            if (burst_sent_q) begin
                src_addr_d = src_addr_q + nd_req_i.d_req[stride_sel_q].src_strides;
            end else begin
                src_addr_d = src_addr_q;
            end
        end
    end

    always_comb begin : dst_addr_calc
        if (stride_sel_q == NumDim - 1) begin
            dst_addr_d = nd_req_i.burst_req.dst_addr;
        end else begin
            if (burst_sent_q) begin
                dst_addr_d = dst_addr_q + nd_req_i.d_req[stride_sel_q].dst_strides;
            end else begin
                dst_addr_d = dst_addr_q;
            end
        end
    end


    //--------------------------------------
    // Request update
    //--------------------------------------
    always_comb begin : proc_assign_burst_output
        // bypass most of the request
        burst_req_o          = nd_req_i.burst_req;
        // adapt the addresses
        burst_req_o.src_addr = src_addr_d;
        burst_req_o.dst_addr = dst_addr_d;
        burst_req_o.opt.last = last;
    end


    //--------------------------------------
    // Response handling / Zero rejection
    //--------------------------------------
    always_comb begin : proc_modify_response_zero_length
        // default: bypass
        nd_rsp_o          = burst_rsp_i;
        nd_rsp_valid_o    = burst_rsp_valid_i & burst_rsp_i.last;
        burst_rsp_ready_o = nd_rsp_ready_i;

        // a zero transfer happens
        if (zero & nd_req_valid_i & nd_req_ready_o) begin
            // block backend
            burst_rsp_ready_o = 1'b0;
            // generate new response
            nd_rsp_valid_o        = 1'b1;
            nd_rsp_o              =  '0;
            nd_rsp_o.error        = 1'b1;
            nd_rsp_o.pld.err_type = idma_pkg::ND_MIDEND;
        end
    end


    //--------------------------------------
    // Busy signal
    //--------------------------------------
    assign busy_o = |(stage_done);


    //--------------------------------------
    // State
    //--------------------------------------
    `FFL(stride_sel_q, stride_sel_d, nd_req_valid_i, NumDim - 'd1, clk_i, rst_ni)
    `FFL(src_addr_q,   src_addr_d,   nd_req_valid_i, '0,           clk_i, rst_ni)
    `FFL(dst_addr_q,   dst_addr_d,   nd_req_valid_i, '0,           clk_i, rst_ni)
    `FF (burst_sent_q, burst_sent_d,                 '0,           clk_i, rst_ni)

    //--------------------------------------
    // Assertions
    //--------------------------------------
    `IDMA_NONSYNTH_BLOCK(
    initial begin : proc_assert_params
        num_dim : assert(NumDim >= 32'd2) else
            $fatal(1, "Parameter NumDim has to be >= 2!");
    end
    )

endmodule : idma_nd_midend


/// A simple counter needed for the n-dimensional midend.
module idma_nd_counter #(
    /// The width of the counter
    parameter int unsigned Width = 0
)(
    /// Clock
    input  logic             clk_i,
    /// Asynchronous reset, active low
    input  logic             rst_ni,
    /// Enable the counter
    input  logic             en_i,
    /// Clear the counter
    input  logic             clear_i,
    /// The limit where the counter overflows
    input  logic [Width-1:0] limit_i,
    /// Overflow signal
    output logic             done_o
);

    logic [Width-1:0] counter_q, counter_d;

    always_comb begin : proc_next_state
        counter_d = counter_q;
        if (clear_i) begin
            counter_d = 'd1;
        end else if (en_i) begin
            counter_d = counter_q + 'd1;
        end
    end

    assign done_o = counter_q == limit_i;

    // state
    `FF(counter_q, counter_d, 'd1, clk_i, rst_ni)

endmodule : idma_nd_counter
