// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>

`include "idma/typedef.svh"
`include "common_cells/registers.svh"

module croc_idma #(
    /// The OBI Mrg configuration.
    parameter obi_pkg::obi_cfg_t ObiMrgCfg  = obi_pkg::ObiDefaultConfig,
    /// The OBI Mrg configuration.
    parameter obi_pkg::obi_cfg_t ObiSbrCfg  = obi_pkg::ObiDefaultConfig,
    /// With of a transfer: max transfer size is `2**TFLenWidth` bytes
    parameter int unsigned TFLenWidth       = ObiMrgCfg.AddrWidth,
    /// OBI A manager channel type
    parameter type obi_mrg_a_chan_t   = logic,
    /// OBI R manager channel type
    parameter type obi_mrg_r_chan_t   = logic,
    /// OBI manager request struct type.
    parameter type obi_mrg_req_t      = logic,
    /// OBI manager response struct type.
    parameter type obi_mrg_rsp_t      = logic,
    /// OBI subordinate request struct type.
    parameter type obi_sbr_req_t      = logic,
    /// OBI subordinate response struct type.
    parameter type obi_sbr_rsp_t      = logic
)(
    input  logic     clk_i,
    input  logic     rst_ni,
    /// OBI config port
    input  obi_sbr_req_t obi_cfg_req_i,
    output obi_sbr_rsp_t obi_cfg_rsp_o,
    /// OBI iDMA read port
    output obi_mrg_req_t obi_read_req_o,
    input  obi_mrg_rsp_t obi_read_rsp_i,
    /// OBI iDMA write port
    output obi_mrg_req_t obi_write_req_o,
    input  obi_mrg_rsp_t obi_write_rsp_i,
    // Status
    output logic     busy_o,
    output logic     irq_o
);

    ////////////////
    // Parameters //
    ////////////////
    // Dependent types
    typedef logic [ObiMrgCfg.AddrWidth-1:0]   addr_t;
    typedef logic [ObiMrgCfg.DataWidth-1:0]   data_t;
    typedef logic [ObiMrgCfg.DataWidth/8-1:0] strb_t;
    typedef logic [TFLenWidth-1:0]            tf_len_t;
    typedef logic [ObiMrgCfg.IdWidth-1:0]     mgr_id_t;
    typedef logic [ObiSbrCfg.IdWidth-1:0]     sbr_id_t;
    typedef logic [8:0]                       word_addr_t;

    // Register offsets
    localparam word_addr_t CONF_OFFSET         = 9'h 00;
    localparam word_addr_t NEXT_ID_OFFSET      = 9'h 44;
    localparam word_addr_t DONE_ID_OFFSET      = 9'h 84;
    localparam word_addr_t DST_ADDR_OFFSET     = 9'h d0;
    localparam word_addr_t SRC_ADDR_OFFSET     = 9'h d8;
    localparam word_addr_t LENGTH_OFFSET       = 9'h e0;
    localparam word_addr_t DST_STRIDE_2_OFFSET = 9'h e8;
    localparam word_addr_t SRC_STRIDE_2_OFFSET = 9'h f0;
    localparam word_addr_t REPS_2_OFFSET       = 9'h f8;

    // iDMA request / response types
    localparam int unsigned NumDim = 32'd2;
    `IDMA_TYPEDEF_FULL_REQ_T(idma_req_t, mgr_id_t, addr_t, tf_len_t)
    `IDMA_TYPEDEF_FULL_ND_REQ_T(idma_nd_req_t, idma_req_t, tf_len_t, tf_len_t)
    `IDMA_TYPEDEF_FULL_RSP_T(idma_rsp_t, addr_t)


    // OBI bus with rready
    typedef struct packed {
        obi_mrg_a_chan_t a;
        logic            req;
        logic            rready;
    } idma_mgr_obi_req_t;

    // Meta channels
    typedef struct packed {
        obi_mrg_a_chan_t a_chan;
    } obi_read_meta_channel_t;

    typedef struct packed {
        obi_read_meta_channel_t obi;
    } read_meta_channel_t;

    typedef struct packed {
        obi_mrg_a_chan_t a_chan;
    } obi_write_meta_channel_t;

    typedef struct packed {
        obi_write_meta_channel_t obi;
    } write_meta_channel_t;

    // Local Signals
    idma_nd_req_t         idma_job_req;
    idma_nd_req_t         idma_nd_req;
    idma_req_t            idma_req;
    idma_rsp_t            idma_rsp;
    logic                 job_req_valid;
    logic                 job_req_ready;
    logic                 nd_req_valid;
    logic                 nd_req_ready;
    logic                 req_valid;
    logic                 req_ready;
    logic                 rsp_valid;
    logic                 rsp_ready;
    logic [31:0]          reg_read_data;

    // Busy
    idma_pkg::idma_busy_t idma_busy;
    logic                 nd_busy;

    // Job transfer signals
    logic                 issue;
    logic                 retire;
    logic [31:0]          next_job_id;
    logic [31:0]          complete_job_id;

    idma_mgr_obi_req_t idma_obi_read_req;
    obi_mrg_rsp_t      idma_obi_read_rsp;

    idma_mgr_obi_req_t idma_obi_write_req;
    obi_mrg_rsp_t      idma_obi_write_rsp;


    ///////////////
    // Registers //
    ///////////////
    // bit enable from byte enable
    data_t bmsk;
    logic  r_err;

    for (genvar i = 0; unsigned'(i) < ObiSbrCfg.DataWidth / 8; ++i ) begin : gen_bmsk
      assign bmsk[8*i +: 8] = {8{obi_cfg_req_i.a.be[i]}};
    end

    // Store OBI request on arrival, read on response (we need to keep all read-related OBI signals)
    logic       we_d,        we_q;
    logic       req_d,       req_q;
    logic       w_err_q,     w_err_d;
    word_addr_t word_addr_d, word_addr_q;
    sbr_id_t    id_d,        id_q;

    // DMA register storage
    logic       nd_ena_d,   nd_ena_q;
    addr_t      src_addr_d, src_addr_q;
    addr_t      dst_addr_d, dst_addr_q;
    tf_len_t    tf_len_d,   tf_len_q;
    tf_len_t    src_str_d,  src_str_q;
    tf_len_t    dst_str_d,  dst_str_q;
    tf_len_t    num_rep_d,  num_rep_q;

    // Assign bus request to storage signals
    assign we_d        = obi_cfg_req_i.a.we;
    assign req_d       = obi_cfg_req_i.req;
    assign word_addr_d = obi_cfg_req_i.a.addr[8:0];
    assign id_d        = obi_cfg_req_i.a.aid;

    // Assign bus response
    always_comb begin : proc_obi_cfg_rsp
        obi_cfg_rsp_o = '0;
        obi_cfg_rsp_o.r.rid   = id_q;
        obi_cfg_rsp_o.r.err   = (req_q & we_q) ? w_err_q : r_err;
        obi_cfg_rsp_o.r.rdata = reg_read_data;
        obi_cfg_rsp_o.rvalid  = req_q;
        obi_cfg_rsp_o.gnt     = word_addr_d == NEXT_ID_OFFSET ?
                                obi_cfg_req_i.req & job_req_ready : obi_cfg_req_i.req; 
    end

    // OBI Storage
    `FF(nd_ena_q,    nd_ena_d,    '0, clk_i, rst_ni)
    `FF(id_q,        id_d,        '0, clk_i, rst_ni)
    `FF(word_addr_q, word_addr_d, '0, clk_i, rst_ni)
    `FF(req_q,       req_d,       '0, clk_i, rst_ni)
    `FF(we_q,        we_d,        '0, clk_i, rst_ni)
    `FF(w_err_q,     w_err_d,     '0, clk_i, rst_ni)

    // DMA register storage
    `FF(src_addr_q, src_addr_d, '0, clk_i, rst_ni)
    `FF(dst_addr_q, dst_addr_d, '0, clk_i, rst_ni)
    `FF(tf_len_q,   tf_len_d,   '0, clk_i, rst_ni)
    `FF(src_str_q,  src_str_d,  '0, clk_i, rst_ni)
    `FF(dst_str_q,  dst_str_d,  '0, clk_i, rst_ni)
    `FF(num_rep_q,  num_rep_d,  '0, clk_i, rst_ni)


    ////////////////////
    // Register Write //
    ////////////////////
    always_comb begin : obi_reg_write

        // defaults
        nd_ena_d   = nd_ena_q;
        dst_addr_d = dst_addr_q;
        src_addr_d = src_addr_q;
        tf_len_d   = tf_len_q;
        dst_str_d  = dst_str_q;
        src_str_d  = src_str_q;
        num_rep_d  = num_rep_q;
        w_err_d    = 1'b0;

        if (obi_cfg_req_i.a.we & obi_cfg_req_i.req) begin
            case (word_addr_d)

                CONF_OFFSET: begin
                    nd_ena_d = (~bmsk & nd_ena_q) | (bmsk[11] & obi_cfg_req_i.a.wdata[11]);
                end

                DST_ADDR_OFFSET: begin
                    dst_addr_d = (~bmsk & dst_addr_q) | (bmsk & obi_cfg_req_i.a.wdata);
                end

                SRC_ADDR_OFFSET: begin
                    src_addr_d = (~bmsk & src_addr_q) | (bmsk & obi_cfg_req_i.a.wdata);
                end

                LENGTH_OFFSET: begin
                    tf_len_d = (~bmsk & tf_len_q) | (bmsk[TFLenWidth-1:0] & obi_cfg_req_i.a.wdata[TFLenWidth-1:0]);
                end

                DST_STRIDE_2_OFFSET: begin
                    dst_str_d = (~bmsk & dst_str_q) | (bmsk[TFLenWidth-1:0] & obi_cfg_req_i.a.wdata[TFLenWidth-1:0]);
                end

                SRC_STRIDE_2_OFFSET: begin
                    src_str_d = (~bmsk & src_str_q) | (bmsk[TFLenWidth-1:0] & obi_cfg_req_i.a.wdata[TFLenWidth-1:0]);
                end

                REPS_2_OFFSET: begin
                    num_rep_d = (~bmsk & num_rep_q) | (bmsk[TFLenWidth-1:0] & obi_cfg_req_i.a.wdata[TFLenWidth-1:0]);
                end

                // iIvalid access
                default: begin
                    w_err_d = 1'b1;
                end
            endcase
        end
    end

    ///////////////////
    // Register Read //
    ///////////////////
    always_comb begin : obi_reg_read

        // defaults
        job_req_valid = 1'b0;
        r_err         = 1'b0;
        reg_read_data = '0;

        if (~we_q & req_q) begin
            case (word_addr_q)
                CONF_OFFSET: begin
                    reg_read_data = {ObiSbrCfg.DataWidth {1'b0}} | nd_ena_q << 11;
                end

                NEXT_ID_OFFSET: begin
                    reg_read_data = next_job_id;
                    job_req_valid = 1'b1;
                end

                DONE_ID_OFFSET: begin
                    reg_read_data = complete_job_id;
                end

                DST_ADDR_OFFSET: begin
                    reg_read_data = dst_addr_q;
                end

                SRC_ADDR_OFFSET: begin
                    reg_read_data = src_addr_q;
                end

                LENGTH_OFFSET: begin
                    reg_read_data = {ObiSbrCfg.DataWidth {1'b0}} | tf_len_q;
                end

                DST_STRIDE_2_OFFSET: begin
                    reg_read_data = {ObiSbrCfg.DataWidth {1'b0}} | dst_str_q;
                end

                SRC_STRIDE_2_OFFSET: begin
                    reg_read_data = {ObiSbrCfg.DataWidth {1'b0}} | src_str_q;
                end

                REPS_2_OFFSET: begin
                    reg_read_data = {ObiSbrCfg.DataWidth {1'b0}} | num_rep_q;
                end

                // iIvalid access
                default: begin
                    r_err = 1'b1;
                end
            endcase
        end
    end


    ///////////////
    // Instances //
    ///////////////
    // Transfer ID gen
    idma_transfer_id_gen #(
        .IdWidth(32'd32)
    ) i_idma_transfer_id_gen (
        .clk_i,
        .rst_ni,
        .issue_i    ( issue           ),
        .retire_i   ( retire          ),
        .next_o     ( next_job_id     ),
        .completed_o( complete_job_id )
    );

    assign issue = nd_req_valid & nd_req_ready;


    // Job FIFO
    stream_fifo #(
        .FALL_THROUGH ( 1'b0          ),
        .DEPTH        ( 32'd2         ),
        .T            ( idma_nd_req_t )
    ) i_stream_fifo_jobs (
        .clk_i,
        .rst_ni,
        .flush_i    ( 1'b0                ),
        .testmode_i ( 1'b0                ),
        .usage_o    ( /* NOT CONNECTED */ ),
        .data_i     ( idma_job_req        ),
        .valid_i    ( job_req_valid       ),
        .ready_o    ( job_req_ready       ),
        .data_o     ( idma_nd_req         ),
        .valid_o    ( nd_req_valid        ),
        .ready_i    ( nd_req_ready        )
    );

    // Assemble job request
    always_comb begin : assemble_idma_job
        idma_job_req                            = '0;
        idma_job_req.burst_req.length           = tf_len_q;
        idma_job_req.burst_req.src_addr         = src_addr_q;
        idma_job_req.burst_req.dst_addr         = dst_addr_q;
        idma_job_req.burst_req.opt.src_protocol = idma_pkg::OBI;
        idma_job_req.burst_req.opt.dst_protocol = idma_pkg::OBI;
        if (nd_ena_q) begin
            idma_job_req.d_req[0].reps              = num_rep_q;
            idma_job_req.d_req[0].src_strides       = src_str_q;
            idma_job_req.d_req[0].dst_strides       = dst_str_q;
        end else begin
            idma_job_req.d_req[0].reps              = 1;
            idma_job_req.d_req[0].src_strides       = '0;
            idma_job_req.d_req[0].dst_strides       = '0;
        end
    end

    // 2D extension
    idma_nd_midend #(
        .NumDim        ( 32'd2         ),
        .addr_t        ( addr_t        ),
        .idma_req_t    ( idma_req_t    ),
        .idma_rsp_t    ( idma_rsp_t    ),
        .idma_nd_req_t ( idma_nd_req_t ),
        .RepWidths     ( TFLenWidth    )
    ) i_idma_nd_midend (
        .clk_i,
        .rst_ni,
        .nd_req_i          ( idma_nd_req         ),
        .nd_req_valid_i    ( nd_req_valid        ),
        .nd_req_ready_o    ( nd_req_ready        ),
        .nd_rsp_o          ( /* NOT CONNECTED */ ),
        .nd_rsp_valid_o    ( retire              ),
        .nd_rsp_ready_i    ( 1'b1                ),
        .burst_req_o       ( idma_req            ),
        .burst_req_valid_o ( req_valid           ),
        .burst_req_ready_i ( req_ready           ),
        .burst_rsp_i       ( idma_rsp            ),
        .burst_rsp_valid_i ( rsp_valid           ),
        .burst_rsp_ready_o ( rsp_ready           ),
        .busy_o            ( nd_busy             )
    );

    // Connect busy signals
    assign irq_o  = retire;
    assign busy_o = |idma_busy | nd_busy;


    // DMA
    idma_backend_rw_obi #(
        .CombinedShifter      ( 1'b0                        ),
        .DataWidth            ( ObiMrgCfg.DataWidth         ),
        .AddrWidth            ( ObiMrgCfg.AddrWidth         ),
        .AxiIdWidth           ( ObiMrgCfg.IdWidth           ),
        .UserWidth            ( 32'd1                       ),
        .TFLenWidth           ( TFLenWidth                  ),
        .MaskInvalidData      ( 1'b1                        ),
        .BufferDepth          ( 32'd3                       ),
        .RAWCouplingAvail     ( 1'b0                        ),
        .HardwareLegalizer    ( 1'b1                        ),
        .RejectZeroTransfers  ( 1'b1                        ),
        .ErrorCap             ( idma_pkg::NO_ERROR_HANDLING ),
        .PrintFifoInfo        ( 1'b0                        ),
        .NumAxInFlight        ( 32'd2                       ),
        .MemSysDepth          ( 32'd0                       ),
        .idma_req_t           ( idma_req_t                  ),
        .idma_rsp_t           ( idma_rsp_t                  ),
        .idma_eh_req_t        ( idma_pkg::idma_eh_req_t     ),
        .idma_busy_t          ( idma_pkg::idma_busy_t       ),
        .obi_req_t            ( idma_mgr_obi_req_t          ),
        .obi_rsp_t            ( obi_mrg_rsp_t               ),
        .write_meta_channel_t ( write_meta_channel_t        ),
        .read_meta_channel_t  ( read_meta_channel_t         )
    ) i_idma_backend_rw_obi  (
        .clk_i,
        .rst_ni,
        .testmode_i       ( 1'b0                ),
        .idma_req_i       ( idma_req            ),
        .req_valid_i      ( req_valid           ),
        .req_ready_o      ( req_ready           ),
        .idma_rsp_o       ( idma_rsp            ),
        .rsp_valid_o      ( rsp_valid           ),
        .rsp_ready_i      ( rsp_ready           ),
        .idma_eh_req_i    (  '0                 ),
        .eh_req_valid_i   ( 1'b0                ),
        .eh_req_ready_o   ( /* NOT CONNECTED */ ),
        .obi_read_req_o   ( idma_obi_read_req   ),
        .obi_read_rsp_i   ( idma_obi_read_rsp   ),
        .obi_write_req_o  ( idma_obi_write_req  ),
        .obi_write_rsp_i  ( idma_obi_write_rsp  ),
        .busy_o           ( idma_busy           )
    );

    // read converter
    obi_rready_converter #(
        .obi_a_chan_t ( obi_mrg_a_chan_t ),
        .obi_r_chan_t ( obi_mrg_r_chan_t ),
        .CombRspReq   ( 1'b0            )
    ) i_obi_rready_converter_read (
        .clk_i,
        .rst_ni,
        .test_mode_i    ( 1'b0              ),

        .sbr_a_chan_i   ( idma_obi_read_req.a      ),
        .req_i          ( idma_obi_read_req.req    ),
        .gnt_o          ( idma_obi_read_rsp.gnt    ),
        .sbr_r_chan_o   ( idma_obi_read_rsp.r      ),
        .rvalid_o       ( idma_obi_read_rsp.rvalid ),
        .rready_i       ( idma_obi_read_req.rready ),

        .mgr_a_chan_o   ( obi_read_req_o.a      ),
        .req_o          ( obi_read_req_o.req    ),
        .gnt_i          ( obi_read_rsp_i.gnt    ),
        .mgr_r_chan_i   ( obi_read_rsp_i.r      ),
        .rvalid_i       ( obi_read_rsp_i.rvalid )
    );

    // write converter
    obi_rready_converter #(
        .obi_a_chan_t ( obi_mrg_a_chan_t ),
        .obi_r_chan_t ( obi_mrg_r_chan_t )
    ) i_obi_rready_converter_write (
        .clk_i,
        .rst_ni,
        .test_mode_i    ( 1'b0              ),

        .sbr_a_chan_i   ( idma_obi_write_req.a      ),
        .req_i          ( idma_obi_write_req.req    ),
        .gnt_o          ( idma_obi_write_rsp.gnt    ),
        .sbr_r_chan_o   ( idma_obi_write_rsp.r      ),
        .rvalid_o       ( idma_obi_write_rsp.rvalid ),
        .rready_i       ( idma_obi_write_req.rready ),

        .mgr_a_chan_o   ( obi_write_req_o.a      ),
        .req_o          ( obi_write_req_o.req    ),
        .gnt_i          ( obi_write_rsp_i.gnt    ),
        .mgr_r_chan_i   ( obi_write_rsp_i.r      ),
        .rvalid_i       ( obi_write_rsp_i.rvalid )
    );

endmodule
