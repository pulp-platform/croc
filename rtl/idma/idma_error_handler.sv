// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>

`include "common_cells/registers.svh"
`include "common_cells/assertions.svh"
`include "idma/guard.svh"

/// Handles AXI read and write error on the manager interface.
/// Currently two modes are supported:
/// - 'CONTINUE': just continue with the 1D transfer
/// - 'ABORT': abort the current 1D transfer
module idma_error_handler #(
    /// Number of active transfers in the data path as well as in the memory system
    parameter int unsigned MetaFifoDepth = 32'd0,
    /// Print the info of the FIFO configuration
    parameter bit PrintFifoInfo = 1'b0,
    /// 1D iDMA response type
    parameter type idma_rsp_t = logic,
    /// Error handling request type
    parameter type idma_eh_req_t = logic,
    /// Address type
    parameter type addr_t = logic,
    /// Read datapath response type
    parameter type r_dp_rsp_t = logic,
    /// Write datapath response type
    parameter type w_dp_rsp_t = logic
)(
    /// Clock
    input  logic clk_i,
    /// Asynchronous reset, active low
    input  logic rst_ni,
    /// Testmode in
    input  logic testmode_i,

    /// 1D iDMA response
    output idma_rsp_t rsp_o,
    /// 1D iDMA response valid
    output logic rsp_valid_o,
    /// 1D iDMA response ready
    input  logic rsp_ready_i,

    /// Error handling request
    input  idma_eh_req_t eh_i,
    /// Error handling request valid
    input  logic eh_valid_i,
    /// Error handling request ready
    output logic eh_ready_o,

    /// 1D iDMA request valid
    input  logic req_valid_i,
    /// 1D iDMA request ready
    input  logic req_ready_i,

    /// The current read address (burst address) injected into the datapath
    input  addr_t r_addr_i,
    /// The address is consumed by the datapath
    input  logic  r_consume_i,
    /// The current write address (burst address) injected into the datapath
    input  addr_t w_addr_i,
    /// The address is consumed by the datapath
    input  logic  w_consume_i,

    /// Invalidate the current burst transfer, stops emission of requests
    output logic legalizer_flush_o,
    /// Kill the active 1D transfer; reload a new transfer
    output logic legalizer_kill_o,

    /// The datapath is busy at the moment. This includes the read & write machines as well as the
    /// buffer.
    input  logic dp_busy_i,
    /// If the datapath has the ability to mask invalid data (MaskInvalidData set to True), this
    /// flag masks the output during flushes to reduce toggling activities
    output logic dp_poison_o,

    /// Read datapath response
    input  r_dp_rsp_t r_dp_rsp_i,
    /// Read datapath response valid
    input  logic r_dp_valid_i,
    /// Read datapath response ready
    output logic r_dp_ready_o,

    /// Write datapath response
    input  w_dp_rsp_t w_dp_rsp_i,
    /// Write datapath response valid
    input  logic w_dp_valid_i,
    /// Write datapath response ready
    output logic w_dp_ready_o,
    /// Write datapath currently works on last burst of a 1D transfer
    input  logic w_last_burst_i,
    /// The last flag which is assigned by the controlling unit
    input  logic w_super_last_i,

    /// Error handler is busy
    output logic fsm_busy_o,
    output logic cnt_busy_o
);

    /// The number of outstanding 1D transfers in the datapath needs to be tracked with a simple
    /// credit counter. Define the appropriate type here.
    typedef logic [$clog2(MetaFifoDepth)-1:0] num_outst_t;

    /// The state of the error handling FSM:
    /// - `IDLE`: The idle state, error handler operates in pass-trough
    /// - `WAIT`: Error occurred and the error handler waits now for a frontend response.
    /// - `WAIT_LAST_W`: Similar to `WAIT` state; but an error happened in the last write burst
    ///                  of a 1D transfer. We have to generate an additional response after handling
    ///                  the error using the `EMIT_EXTRA_RSP` state.
    /// - `EMIT_EXTRA_RSP`: Send an extra response
    /// - `LEG_FLUSH`: Flush the legalizer in the case of an aborted transfer
    typedef enum logic [2:0] {
        IDLE,
        WAIT,
        WAIT_LAST_W,
        EMIT_EXTRA_RSP,
        LEG_FLUSH
    } error_state_e;

    // FSM state
    error_state_e state_d, state_q;

    // Signals to interact with the address store FIFOs
    addr_t r_addr_head, w_addr_head;
    logic  r_store_pop, w_store_pop;

    // Number of outstanding 1D transfers in the datapath
    num_outst_t num_outst_d, num_outst_q;


    //--------------------------------------
    // Burst Address FIFOs
    //--------------------------------------
    // FIFO: read address
    // the read address FIFO is synchronized with the `i_w_last` FIFO in the backend. So at this
    // point now full handshaking is required.
    stream_fifo_optimal_wrap #(
        .Depth        ( MetaFifoDepth ),
        .type_t       ( addr_t        ),
        .PrintInfo    ( PrintFifoInfo )
    ) i_r_addr_store (
        .clk_i,
        .rst_ni,
        .testmode_i,
        .flush_i      ( 1'b0                ),
        .usage_o      ( /* NOT CONNECTED */ ),
        .data_i       ( r_addr_i            ),
        .valid_i      ( r_consume_i         ),
        .ready_o      ( /* NOT CONNECTED */ ),
        .data_o       ( r_addr_head         ),
        .valid_o      ( /* NOT CONNECTED */ ),
        .ready_i      ( r_store_pop         )
    );

    // FIFO: w address
    // the read address FIFO is synchronized with the `i_w_last` FIFO in the backend. So at this
    // point now full handshaking is required.
    stream_fifo_optimal_wrap #(
        .Depth        ( MetaFifoDepth ),
        .type_t       ( addr_t        ),
        .PrintInfo    ( PrintFifoInfo )
    ) i_w_addr_store (
        .clk_i,
        .rst_ni,
        .testmode_i,
        .flush_i      ( 1'b0                ),
        .usage_o      ( /* NOT CONNECTED */ ),
        .data_i       ( w_addr_i            ),
        .valid_i      ( w_consume_i         ),
        .ready_o      ( /* NOT CONNECTED */ ),
        .data_o       ( w_addr_head         ),
        .valid_o      ( /* NOT CONNECTED */ ),
        .ready_i      ( w_store_pop         )
    );

    // r/w store dataflow
    assign r_store_pop = r_dp_valid_i & r_dp_ready_o & r_dp_rsp_i.last;
    assign w_store_pop = w_dp_valid_i & w_dp_ready_o;


    //--------------------------------------
    // Outstanding Transfer Counter
    //--------------------------------------
    // 1D outstanding request counter in datapath
    always_comb begin : proc_outst_counter
        // default: keep countS
        num_outst_d = num_outst_q;

        // increase count on request launch:
        if (req_valid_i & req_ready_i) begin
            num_outst_d = num_outst_d + 'd1;
        end

        // decrease on completion (no error)
        if (rsp_valid_o & rsp_ready_i & !rsp_o.error) begin
            num_outst_d = num_outst_d - 'd1;
        end
    end


    //--------------------------------------
    // Error Handler FSM
    //--------------------------------------
    always_comb begin : proc_error_handler_fsm

        // defaults:
        // interfaces are idle
        rsp_o              =  '0;
        rsp_o.last         = w_super_last_i;
        rsp_valid_o        = 1'b0;
        eh_ready_o         = 1'b0;
        r_dp_ready_o       =  '0;
        w_dp_ready_o       =  '0;
        // keep datapath and legalizer active
        dp_poison_o        = 1'b0;
        legalizer_flush_o  = 1'b0;
        legalizer_kill_o   = 1'b0;
        // keep state
        state_d            = state_q;

        // FSM
        case (state_q)
            // idle state -> error handler is in pass-trough mode until an error occurs
            IDLE : begin

                // default: datapath is unblocked
                r_dp_ready_o = rsp_ready_i;
                w_dp_ready_o = rsp_ready_i;

                // a proper write response (lowest priority)
                if (w_dp_rsp_i.resp == idma_pkg::RESP_OKAY & w_dp_valid_i & w_last_burst_i) begin
                    rsp_o       =  '0;
                    rsp_o.last  = w_super_last_i;
                    rsp_valid_o = 1'b1;
                    //rb_out_ready = 1'b1; // pop buffer
                end

                // jump to wait if a write error happens (mid priority)
                if (w_dp_rsp_i.resp != idma_pkg::RESP_OKAY & w_dp_valid_i) begin
                    // assemble error package
                    rsp_o.error          = 1'b1;
                    rsp_o.last           = w_super_last_i;
                    rsp_o.pld.cause      = w_dp_rsp_i.resp;
                    rsp_o.pld.err_type   = idma_pkg::BUS_WRITE;
                    rsp_o.pld.burst_addr = w_addr_head;
                    //store_update         = 1'b1;
                    rsp_valid_o          = 1'b1;
                    // block read datapath response on write error
                    r_dp_ready_o         = 1'b0;
                    // go to one of the wait states
                    if (w_last_burst_i) begin
                        state_d = WAIT_LAST_W;
                    end else begin
                        state_d  = WAIT;
                    end
                end

                // jump to wait if a read error happens (highest priority)
                if (r_dp_rsp_i.resp != idma_pkg::RESP_OKAY & r_dp_valid_i) begin
                    // assemble error package
                    rsp_o.error          = 1'b1;
                    rsp_o.last           = w_super_last_i;
                    rsp_o.pld.cause      = r_dp_rsp_i.resp;
                    rsp_o.pld.err_type   = idma_pkg::BUS_READ;
                    rsp_o.pld.burst_addr = r_addr_head;
                    //store_update         = 1'b1;
                    rsp_valid_o          = 1'b1;
                    // block write datapath response on read error
                    w_dp_ready_o         = 1'b0;
                    // go to wait state
                    state_d              = WAIT;
                end
            end

            // wait state: error happened, we are waiting for the frontend to tell us what to do
            WAIT : begin
                // answer arrives
                if (eh_valid_i) begin
                    // continue case (~error reporting)
                    if (eh_i == idma_pkg::CONTINUE) begin
                        eh_ready_o = 1'b1;
                        state_d    = IDLE;
                    end
                    // abort
                    if (eh_i == idma_pkg::ABORT) begin
                        // in the case we have multiple outstanding 1D transfers in the datapath:
                        // - the transfers are small no flush required
                        // - some transfers might complete properly so no flush allowed!
                        // in this case just continue
                        if (num_outst_q > 'd1) begin
                            eh_ready_o = 1'b1;
                            state_d    = IDLE;
                        // we are aborting a long transfer (it is still in the legalizer and
                        // therefore the only active transfer in the datapath)
                        end else if (num_outst_q == 'd1) begin
                            eh_ready_o = 1'b1;
                            state_d    = LEG_FLUSH;
                        // the counter is 0 -> no transfer in the datapath. This is an impossible
                        // state
                        end else begin
                            `ASSERT_NEVER(inactive_tf_wait, 1'b1, clk_i, !rst_ni)
                        end
                    end
                end
            end

            // wait last write state: error happened, we are waiting for the frontend to tell us
            // what to do. This state is similar to the wait state with the difference that the
            // error happened on the last write burst of a 1D transfer. We need to emit an extra
            // response post error handling.
            WAIT_LAST_W : begin
                // continue case (~error reporting)
                if (eh_i == idma_pkg::CONTINUE) begin
                    eh_ready_o = 1'b1;
                    state_d = EMIT_EXTRA_RSP;
                end
                // abort
                if (eh_i == idma_pkg::ABORT) begin
                    // in the case we have multiple outstanding 1D transfers in the datapath:
                    // - the transfers are small no flush required
                    // - some transfers might complete properly so no flush allowed!
                    // in this case just continue
                    if (num_outst_q > 'd1) begin
                        eh_ready_o = 1'b1;
                        state_d    = EMIT_EXTRA_RSP;
                    // we are aborting a long transfer (it is still in the legalizer and
                    // therefore the only active transfer in the datapath)
                    end else if (num_outst_q == 'd1) begin
                        eh_ready_o = 1'b1;
                        state_d    = LEG_FLUSH;
                    // the counter is 0 -> no transfer in the datapath. This is an impossible
                    // state
                    end else begin
                        `ASSERT_NEVER(inactive_tf_wait_last_w, 1'b1, clk_i, !rst_ni)
                    end
                end
            end

            // emit an extra response and return to idle state
            EMIT_EXTRA_RSP : begin
                rsp_valid_o = 1'b1;
                if (rsp_ready_i) begin
                    state_d = IDLE;
                end
            end

            // flush the legalizer until the datapath is idle, then kill the active transfer
            // in the legalizer and emit a response
            LEG_FLUSH : begin
                dp_poison_o       = 1'b1;
                // flush legalizer
                legalizer_flush_o = 1'b1;
                // let the current transfer finish
                w_dp_ready_o = 1'b1;
                r_dp_ready_o = 1'b1;
                // once the datapath is idle return to idle
                if (!dp_busy_i) begin
                    state_d          = EMIT_EXTRA_RSP;
                    legalizer_kill_o = 1'b1;
                end
            end

            // default
            default :;
        endcase
    end


    //--------------------------------------
    // Busy signals
    //--------------------------------------
    assign fsm_busy_o = (state_q != IDLE);
    assign cnt_busy_o = (num_outst_q != '0);


    //--------------------------------------
    // State
    //--------------------------------------
    `FF(state_q,         state_d, IDLE, clk_i, rst_ni)
    `FF(num_outst_q, num_outst_d,   '0, clk_i, rst_ni)

endmodule
