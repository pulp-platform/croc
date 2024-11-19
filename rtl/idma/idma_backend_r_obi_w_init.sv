// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>
// - Tobias Senti <tsenti@ethz.ch>

`include "idma/guard.svh"

/// The iDMA backend implements an arbitrary 1D copy engine
module idma_backend_r_obi_w_init #(
    /// Data width
    parameter int unsigned DataWidth        = 32'd16,
    /// Address width
    parameter int unsigned AddrWidth        = 32'd24,
    /// AXI user width
    parameter int unsigned UserWidth        = 32'd1,
    /// AXI ID width
    parameter int unsigned AxiIdWidth       = 32'd1,
    /// Number of transaction that can be in-flight concurrently
    parameter int unsigned NumAxInFlight    = 32'd2,
    /// The depth of the internal reorder buffer:
    /// - '2': minimal possible configuration
    /// - '3': efficiently handle misaligned transfers (recommended)
    parameter int unsigned BufferDepth      = 32'd2,
    /// With of a transfer: max transfer size is `2**TFLenWidth` bytes
    parameter int unsigned TFLenWidth       = 32'd24,
    /// The depth of the memory system the backend is attached to
    parameter int unsigned MemSysDepth      = 32'd0,
    /// Should both data shifts be done before the dataflow element?
    /// If this is enabled, then the data inserted into the dataflow element
    /// will no longer be word aligned, but only a single shifter is needed
    parameter bit          CombinedShifter  = 1'b0,
    /// Should the `R`-`AW` coupling hardware be present? (recommended)
    parameter bit          RAWCouplingAvail = 1'b0,
    /// Mask invalid data on the manager interface
    parameter bit MaskInvalidData            = 1'b1,
    /// Should hardware legalization be present? (recommended)
    /// If not, software legalization is required to ensure the transfers are
    /// AXI4-conformal
    parameter bit HardwareLegalizer          = 1'b1,
    /// Reject zero-length transfers
    parameter bit RejectZeroTransfers        = 1'b1,
    /// Should the error handler be present?
    parameter idma_pkg::error_cap_e ErrorCap = idma_pkg::NO_ERROR_HANDLING,
    /// Print the info of the FIFO configuration
    parameter bit PrintFifoInfo              = 1'b0,
    /// 1D iDMA request type
    parameter type idma_req_t                = logic,
    /// iDMA response type
    parameter type idma_rsp_t                = logic,
    /// Error Handler request type
    parameter type idma_eh_req_t             = logic,
    /// iDMA busy signal
    parameter type idma_busy_t               = logic,
    /// Memory Init Request and Response channel type
    parameter type init_req_t = logic,
    parameter type init_rsp_t = logic,
    /// OBI Request and Response channel type
    parameter type obi_req_t = logic,
    parameter type obi_rsp_t = logic,
    /// Address Read Channel type
    parameter type read_meta_channel_t  = logic,
    /// Address Write Channel type
    parameter type write_meta_channel_t = logic,
    /// Strobe Width (do not override!)
    parameter int unsigned StrbWidth    = DataWidth / 8,
    /// Offset Width (do not override!)
    parameter int unsigned OffsetWidth  = $clog2(StrbWidth)
)(
    /// Clock
    input  logic clk_i,
    /// Asynchronous reset, active low
    input  logic rst_ni,
    /// Testmode in
    input  logic testmode_i,

    /// 1D iDMA request
    input  idma_req_t idma_req_i,
    /// 1D iDMA request valid
    input  logic req_valid_i,
    /// 1D iDMA request ready
    output logic req_ready_o,

    /// iDMA response
    output idma_rsp_t idma_rsp_o,
    /// iDMA response valid
    output logic rsp_valid_o,
    /// iDMA response ready
    input  logic rsp_ready_i,

    /// Error handler request
    input  idma_eh_req_t idma_eh_req_i,
    /// Error handler request valid
    input  logic eh_req_valid_i,
    /// Error handler request ready
    output logic eh_req_ready_o,

    /// OBI read request
    output obi_req_t obi_read_req_o,
    /// OBI read response
    input  obi_rsp_t obi_read_rsp_i,

    /// Memory Init write request
    output init_req_t init_write_req_o,
    /// Memory Init write response
    input  init_rsp_t init_write_rsp_i,

    /// iDMA busy flags
    output idma_busy_t busy_o
);

    /// The localparam MetaFifoDepth holds the maximum number of transfers that can be
    /// in-flight under any circumstances.
    localparam int unsigned MetaFifoDepth = BufferDepth + NumAxInFlight + MemSysDepth;

    /// Address type
    typedef logic [AddrWidth-1:0]   addr_t;
    /// DAta type
    typedef logic [DataWidth-1:0]   data_t;
    /// Strobe type
    typedef logic [StrbWidth-1:0]   strb_t;
    /// User type
    typedef logic [UserWidth-1:0]   user_t;
    /// ID type
    typedef logic [AxiIdWidth-1:0]  id_t;
    /// Offset type
    typedef logic [OffsetWidth-1:0] offset_t;
    /// Transfer length type
    typedef logic [TFLenWidth-1:0]  tf_len_t;

    /// The datapath read request type holds all the information required to configure the read
    /// part of the datapath. The type consists of:
    /// - `offset`: The bus offset of the read
    /// - `trailer`: How many empty bytes are required to pad the transfer to a multiple of the
    ///              bus width.
    /// - `shift`: The amount the data needs to be shifted
    /// - `decouple_aw`: If the transfer has the AW decoupled from the R
    /// - `is_single`: Is this transfer just one beat long? `(len == 0)`
    typedef struct packed {
        idma_pkg::protocol_e src_protocol;
        offset_t             offset;
        offset_t             tailer;
        offset_t             shift;
        logic                decouple_aw;
        logic                is_single;
    } r_dp_req_t;

    /// The datapath read response type provides feedback from the read part of the datapath:
    /// - `resp`: The response from the R channel of the AXI4 manager interface
    /// - `last`: The last flag from the R channel of the AXI4 manager interface
    /// - `first`: Is the current item first beat in the burst
    typedef struct packed {
        idma_pkg::resp_t resp;
        logic            last;
        logic            first;
    } r_dp_rsp_t;

    /// The datapath write request type holds all the information required to configure the write
    /// part of the datapath. The type consists of:
    /// - `offset`: The bus offset of the write
    /// - `trailer`: How many empty bytes are required to pad the transfer to a multiple of the
    ///              bus width.
    /// - `shift`: The amount the data needs to be shifted
    /// - `num_beats`: The number of beats this burst consist of
    /// - `is_single`: Is this transfer just one beat long? `(len == 0)`
    typedef struct packed {
        idma_pkg::protocol_e dst_protocol;
        offset_t             offset;
        offset_t             tailer;
        offset_t             shift;
        idma_pkg::len_t      num_beats;
        logic                is_single;
    } w_dp_req_t;

    /// The datapath write response type provides feedback from the write part of the datapath:
    /// - `resp`: The response from the B channel of the AXI4 manager interface
    /// - `user`: The user field from the B channel of the AXI4 manager interface
    typedef struct packed {
        idma_pkg::resp_t resp;
        user_t           user;
    } w_dp_rsp_t;

    /// The iDMA read request bundles an `AR` type and a datapath read response type together.
    typedef struct packed {
        r_dp_req_t          r_dp_req;
        read_meta_channel_t ar_req;
    } idma_r_req_t;

    /// The iDMA write request bundles an `AW` type and a datapath write response type together. It
    /// has an additional flags:
    /// - `last`: indicating the current burst is the last one of the generic 1D transfer currently
    ///    being processed
    /// - `midend_last`: The current transfer is marked by the controlling as last
    /// - `decouple_aw`: indicates this is an R-AW decoupled transfer
    typedef struct packed {
        w_dp_req_t           w_dp_req;
        write_meta_channel_t aw_req;
        logic                last;
        logic                super_last;
        logic                decouple_aw;
    } idma_w_req_t;

    /// The mutable transfer options type holds important information that is mutated by the
    /// `legalizer` block.
    typedef struct packed {
        idma_pkg::protocol_e    src_protocol;
        idma_pkg::protocol_e    dst_protocol;
        offset_t                read_shift;
        offset_t                write_shift;
        logic                   decouple_rw;
        logic                   decouple_aw;
        logic [2:0]             src_max_llen;
        logic [2:0]             dst_max_llen;
        logic                   src_reduce_len;
        logic                   dst_reduce_len;
        id_t                    axi_id;
        idma_pkg::axi_options_t src_axi_opt;
        idma_pkg::axi_options_t dst_axi_opt;
        logic                   super_last;
    } idma_mut_tf_opt_t;

    /// The mutable transfer type holds important information that is mutated by the
    /// `legalizer` block.
    typedef struct packed {
        tf_len_t length;
        addr_t   addr;
        logic    valid;
        addr_t   base_addr;
    } idma_mut_tf_t;


    // datapath busy indicates the datapath is actively working on a transfer. It is composed of
    // the activity of the buffer as well as both the read and write machines
    logic dp_busy;
    // blanks invalid data
    logic dp_poison;

    // read and write requests and their handshaking signals
    idma_r_req_t r_req;
    idma_w_req_t w_req;
    logic        r_valid, w_valid;
    logic        r_ready, w_ready;

    // It the current transfer the last burst in the 1D transfer?
    logic w_last_burst;
    logic w_last_ready;

    // Super last flag: The current transfer is indicated as the last one by the controlling
    // unit; e.g. by a midend
    logic w_super_last;

    // Datapath FIFO signals -> used to decouple legalizer and datapath
    logic r_dp_req_in_ready,  w_dp_req_in_ready;
    logic r_dp_req_out_valid, w_dp_req_out_valid;
    logic r_dp_req_out_ready, w_dp_req_out_ready;
    r_dp_req_t r_dp_req_out;
    w_dp_req_t w_dp_req_out;

    // datapah responses
    r_dp_rsp_t r_dp_rsp;
    w_dp_rsp_t w_dp_rsp;
    logic r_dp_rsp_valid, w_dp_rsp_valid;
    logic r_dp_rsp_ready, w_dp_rsp_ready;

    // Ax handshaking
    logic ar_ready,    ar_ready_dp;
    logic aw_ready,    aw_ready_dp;
    logic aw_valid_dp, ar_valid_dp;

    // Ax request from R-AW coupler to datapath
    write_meta_channel_t aw_req_dp;

    // Ax request from the decoupling stage to the datapath
    read_meta_channel_t ar_req_dp;

    // flush and preemptively empty the legalizer
    logic legalizer_flush, legalizer_kill;

    /// intermediate signals to reject zero length transfers
    logic      is_length_zero;
    logic      req_valid;
    idma_rsp_t idma_rsp;
    logic      rsp_valid;
    logic      rsp_ready;

    // Respone Channel valid and ready -> needed for bursting
    logic r_chan_valid;
    logic r_chan_ready;

    //--------------------------------------
    // Reject Zero Length Transfers
    //--------------------------------------
    if (RejectZeroTransfers) begin : gen_reject_zero_transfers
        // is the current transfer length 0?
        assign is_length_zero = idma_req_i.length == '0;

        // bypass valid as long as length is not zero, otherwise suppress it
        assign req_valid = is_length_zero ? 1'b0 : req_valid_i;

        // modify response
        always_comb begin : proc_modify_response_zero_length
            // default: bypass
            idma_rsp_o  = idma_rsp;
            rsp_ready   = rsp_ready_i;
            rsp_valid_o = rsp_valid;

            // a zero transfer happens
            if (is_length_zero & req_valid_i & req_ready_o) begin
                // block backend
                rsp_ready = 1'b0;
                // generate new response
                rsp_valid_o             = 1'b1;
                idma_rsp_o              =  '0;
                idma_rsp_o.last         = 1'b1;
                idma_rsp_o.error        = 1'b1;
                idma_rsp_o.pld.err_type = idma_pkg::BACKEND;
            end
        end

    // just bypass signals
    end else begin : gen_bypass_zero_transfers
        // bypass
        assign req_valid   = req_valid_i;
        assign idma_rsp_o  = idma_rsp;
        assign rsp_ready   = rsp_ready_i;
        assign rsp_valid_o = rsp_valid;
    end


    //--------------------------------------
    // Legalization
    //--------------------------------------
    if (HardwareLegalizer) begin : gen_hw_legalizer
        // hardware legalizer is present
        idma_legalizer_r_obi_w_init #(
            .CombinedShifter   ( CombinedShifter   ),
            .DataWidth         ( DataWidth         ),
            .AddrWidth         ( AddrWidth         ),
            .idma_req_t        ( idma_req_t        ),
            .idma_r_req_t      ( idma_r_req_t      ),
            .idma_w_req_t      ( idma_w_req_t      ),
            .idma_mut_tf_t     ( idma_mut_tf_t     ),
            .idma_mut_tf_opt_t ( idma_mut_tf_opt_t )
        ) i_idma_legalizer (
            .clk_i     ( clk_i             ),
            .rst_ni    ( rst_ni            ),
            .req_i     ( idma_req_i        ),
            .valid_i   ( req_valid         ),
            .ready_o   ( req_ready_o       ),
            .r_req_o   ( r_req             ),
            .w_req_o   ( w_req             ),
            .r_valid_o ( r_valid           ),
            .w_valid_o ( w_valid           ),
            .r_ready_i ( r_ready           ),
            .w_ready_i ( w_ready           ),
            .flush_i   ( legalizer_flush   ),
            .kill_i    ( legalizer_kill    ),
            .r_busy_o  ( busy_o.r_leg_busy ),
            .w_busy_o  ( busy_o.w_leg_busy )
        );

    end else begin : gen_no_hw_legalizer
        // stream fork is used to synchronize the two decoupled channels without the need for a
        // FIFO here.
        stream_fork #(
            .N_OUP   ( 32'd2 )
        ) i_stream_fork (
            .clk_i   ( clk_i                ),
            .rst_ni  ( rst_ni               ),
            .valid_i ( req_valid            ),
            .ready_o ( req_ready_o          ),
            .valid_o ( { r_valid, w_valid } ),
            .ready_i ( { r_ready, w_ready } )
        );

        // local signal holding the length -> explicitly only doing the computation once
        idma_pkg::len_t len;
        assign len = ((idma_req_i.length + idma_req_i.src_addr[OffsetWidth-1:0] -
                     'd1) >> OffsetWidth);

        // assemble read datapath request
        assign r_req.r_dp_req = '{
            src_protocol: idma_req_i.opt.src_protocol,
            offset:      idma_req_i.src_addr[OffsetWidth-1:0],
            tailer:      OffsetWidth'(idma_req_i.length + idma_req_i.src_addr[OffsetWidth-1:0]),
            shift:       OffsetWidth'(idma_req_i.src_addr[OffsetWidth-1:0]),
            decouple_aw: idma_req_i.opt.beo.decouple_aw,
            is_single:   len == '0
        };

        // assemble write datapath request
        assign w_req.w_dp_req = '{
            dst_protocol: idma_req_i.opt.dst_protocol,
            offset:    idma_req_i.dst_addr[OffsetWidth-1:0],
            tailer:    OffsetWidth'(idma_req_i.length + idma_req_i.dst_addr[OffsetWidth-1:0]),
            shift:     OffsetWidth'(- idma_req_i.dst_addr[OffsetWidth-1:0]),
            num_beats: len,
            is_single: len == '0
        };

        // if the legalizer is bypassed; every burst is the last of the 1D transfer
        assign w_req.last = 1'b1;

        // assign the last flag of the controlling unit
        assign w_req.super_last = idma_req_i.opt.last;

        // bypass decouple signal
        assign w_req.decouple_aw = idma_req_i.opt.beo.decouple_aw;

        // there is no unit to be busy
        assign busy_o.r_leg_busy = 1'b0;
        assign busy_o.w_leg_busy = 1'b0;
    end

    // data path, meta channels, and last queues have to be ready for the legalizer to be ready
    assign r_ready = r_dp_req_in_ready & ar_ready;
    assign w_ready = w_dp_req_in_ready & aw_ready & w_last_ready;


    //--------------------------------------
    // Error handler
    //--------------------------------------
    if (ErrorCap == idma_pkg::ERROR_HANDLING) begin : gen_error_handler
        `IDMA_NONSYNTH_BLOCK(
        initial begin
            $fatal(1, "Error Handling only implemented for AXI to AXI DMA!");
        end
        )
    end else if (ErrorCap == idma_pkg::NO_ERROR_HANDLING) begin : gen_no_error_handler
        // bypass the signals, assign their neutral values
        assign idma_rsp.error     = 1'b0;
        assign idma_rsp.pld       = 1'b0;
        assign idma_rsp.last      = w_super_last;
        assign rsp_valid          = w_dp_rsp_valid & w_last_burst;
        assign eh_req_ready_o     = 1'b0;
        assign legalizer_flush    = 1'b0;
        assign legalizer_kill     = 1'b0;
        assign dp_poison          = 1'b0;
        assign r_dp_rsp_ready     = rsp_ready;
        assign w_dp_rsp_ready     = rsp_ready;
        assign busy_o.eh_fsm_busy = 1'b0;
        assign busy_o.eh_cnt_busy = 1'b0;

    end else begin : gen_param_error
        `IDMA_NONSYNTH_BLOCK(
        initial begin
            $fatal(1, "Unexpected Error Capability");
        end
        )
    end


    //--------------------------------------
    // Datapath busy signal
    //--------------------------------------
    assign dp_busy = busy_o.buffer_busy |
                     busy_o.r_dp_busy   |
                     busy_o.w_dp_busy;


    //--------------------------------------
    // Datapath decoupling
    //--------------------------------------
    stream_fifo_optimal_wrap #(
        .Depth     ( NumAxInFlight ),
        .type_t    ( r_dp_req_t    ),
        .PrintInfo ( PrintFifoInfo )
    ) i_r_dp_req (
        .clk_i      ( clk_i               ),
        .rst_ni     ( rst_ni              ),
        .testmode_i ( testmode_i          ),
        .flush_i    ( 1'b0                ),
        .usage_o    ( /* NOT CONNECTED */ ),
        .data_i     ( r_req.r_dp_req      ),
        .valid_i    ( r_valid             ),
        .ready_o    ( r_dp_req_in_ready   ),
        .data_o     ( r_dp_req_out        ),
        .valid_o    ( r_dp_req_out_valid  ),
        .ready_i    ( r_dp_req_out_ready  )
    );

    stream_fifo_optimal_wrap #(
        .Depth     ( NumAxInFlight ),
        .type_t    ( w_dp_req_t    ),
        .PrintInfo ( PrintFifoInfo )
    ) i_w_dp_req (
        .clk_i      ( clk_i               ),
        .rst_ni     ( rst_ni              ),
        .testmode_i ( testmode_i          ),
        .flush_i    ( 1'b0                ),
        .usage_o    ( /* NOT CONNECTED */ ),
        .data_i     ( w_req.w_dp_req      ),
        .valid_i    ( w_valid             ),
        .ready_o    ( w_dp_req_in_ready   ),
        .data_o     ( w_dp_req_out        ),
        .valid_o    ( w_dp_req_out_valid  ),
        .ready_i    ( w_dp_req_out_ready  )
    );

    // Add fall-through register to allow the input to be ready if the output is not. This
    // does not add a cycle of delay

    fall_through_register #(
        .T          ( read_meta_channel_t )
    ) i_ar_fall_through_register (
        .clk_i      ( clk_i             ),
        .rst_ni     ( rst_ni            ),
        .testmode_i ( testmode_i        ),
        .clr_i      ( 1'b0              ),
        .valid_i    ( r_valid           ),
        .ready_o    ( ar_ready          ),
        .data_i     ( r_req.ar_req ),
        .valid_o    ( ar_valid_dp       ),
        .ready_i    ( ar_ready_dp       ),
        .data_o     ( ar_req_dp         )
    );


    //--------------------------------------
    // Last flag store
    //--------------------------------------
    stream_fifo_optimal_wrap #(
        .Depth        ( MetaFifoDepth ),
        .type_t       ( logic [1:0]   ),
        .PrintInfo    ( PrintFifoInfo )
    ) i_w_last (
        .clk_i      ( clk_i                           ),
        .rst_ni     ( rst_ni                          ),
        .testmode_i ( testmode_i                      ),
        .flush_i    ( 1'b0                            ),
        .usage_o    ( /* NOT CONNECTED */             ),
        .data_i     ( {w_req.super_last, w_req.last}  ),
        .valid_i    ( w_valid & w_ready               ),
        .ready_o    ( w_last_ready                    ),
        .data_o     ( {w_super_last, w_last_burst}    ),
        .valid_o    ( /* NOT CONNECTED */             ),
        .ready_i    ( w_dp_rsp_valid & w_dp_rsp_ready )
    );

    //--------------------------------------
    // Transport Layer / Datapath
    //--------------------------------------
    idma_transport_layer_r_obi_w_init #(
        .NumAxInFlight               ( NumAxInFlight               ),
        .DataWidth                   ( DataWidth                   ),
        .BufferDepth                 ( BufferDepth                 ),
        .MaskInvalidData             ( MaskInvalidData             ),
        .PrintFifoInfo               ( PrintFifoInfo               ),
        .r_dp_req_t                  ( r_dp_req_t                  ),
        .w_dp_req_t                  ( w_dp_req_t                  ),
        .r_dp_rsp_t                  ( r_dp_rsp_t                  ),
        .w_dp_rsp_t                  ( w_dp_rsp_t                  ),
        .write_meta_channel_t        ( write_meta_channel_t        ),
        .read_meta_channel_t         ( read_meta_channel_t         ),
        .init_req_t                   ( init_req_t                   ),
        .init_rsp_t                   ( init_rsp_t                   ),
        .obi_req_t                   ( obi_req_t                   ),
        .obi_rsp_t                   ( obi_rsp_t                   )
    ) i_idma_transport_layer (
        .clk_i           ( clk_i                ),
        .rst_ni          ( rst_ni               ),
        .testmode_i      ( testmode_i           ),
        .obi_read_req_o  ( obi_read_req_o       ),
        .obi_read_rsp_i  ( obi_read_rsp_i       ),
        .init_write_req_o ( init_write_req_o      ),
        .init_write_rsp_i ( init_write_rsp_i      ),
        .r_dp_req_i      ( r_dp_req_out         ),
        .r_dp_valid_i    ( r_dp_req_out_valid   ),
        .r_dp_ready_o    ( r_dp_req_out_ready   ),
        .r_dp_rsp_o      ( r_dp_rsp             ),
        .r_dp_valid_o    ( r_dp_rsp_valid       ),
        .r_dp_ready_i    ( r_dp_rsp_ready       ),
        .w_dp_req_i      ( w_dp_req_out         ),
        .w_dp_valid_i    ( w_dp_req_out_valid   ),
        .w_dp_ready_o    ( w_dp_req_out_ready   ),
        .w_dp_rsp_o      ( w_dp_rsp             ),
        .w_dp_valid_o    ( w_dp_rsp_valid       ),
        .w_dp_ready_i    ( w_dp_rsp_ready       ),
        .ar_req_i        ( ar_req_dp            ),
        .ar_valid_i      ( ar_valid_dp          ),
        .ar_ready_o      ( ar_ready_dp          ),
        .aw_req_i        ( aw_req_dp            ),
        .aw_valid_i      ( aw_valid_dp          ),
        .aw_ready_o      ( aw_ready_dp          ),
        .dp_poison_i     ( dp_poison            ),
        .r_dp_busy_o     ( busy_o.r_dp_busy     ),
        .w_dp_busy_o     ( busy_o.w_dp_busy     ),
        .buffer_busy_o   ( busy_o.buffer_busy   ),
        .r_chan_ready_o  ( r_chan_ready         ),
        .r_chan_valid_o  ( r_chan_valid         )
    );

    //--------------------------------------
    // R-AW channel coupler
    //--------------------------------------

    if (RAWCouplingAvail) begin : gen_r_aw_coupler
        `IDMA_NONSYNTH_BLOCK(
        initial begin
            $fatal(1, "Channel Coupler only implemented for AXI DMAs!");
        end
        )
    end else begin : gen_r_aw_bypass
        // Add fall-through register to allow the input to be ready if the output is not. This
        // does not add a cycle of delay
        fall_through_register #(
            .T          ( write_meta_channel_t        )
        ) i_aw_fall_through_register (
            .clk_i      ( clk_i             ),
            .rst_ni     ( rst_ni            ),
            .testmode_i ( testmode_i        ),
            .clr_i      ( 1'b0              ),
            .valid_i    ( w_valid           ),
            .ready_o    ( aw_ready          ),
            .data_i     ( w_req.aw_req      ),
            .valid_o    ( aw_valid_dp       ),
            .ready_i    ( aw_ready_dp       ),
            .data_o     ( aw_req_dp         )
        );

        // no unit: not busy
        assign busy_o.raw_coupler_busy = 1'b0;
    end


    //--------------------------------------
    // Assertions
    //--------------------------------------
    `IDMA_NONSYNTH_BLOCK(
    initial begin : proc_assert_params
        axi_addr_width : assert(AddrWidth >= 32'd12) else
            $fatal(1, "Parameter `AddrWidth` has to be >= 12!");
        axi_id_width   : assert(AxiIdWidth > 32'd0) else
            $fatal(1, "Parameter `AxiIdWidth` has to be > 0!");
        axi_data_width : assert(DataWidth inside {32'd16, 32'd32, 32'd64, 32'd128, 32'd256,
                                                  32'd512, 32'd1028}) else
            $fatal(1, "Parameter `DataWidth` has to be at least 16 and inside the AXI4 spec!");
        axi_user_width : assert(UserWidth > 32'd0) else
            $fatal(1, "Parameter `UserWidth` has to be > 0!");
        num_ax_in_flight : assert(NumAxInFlight > 32'd1) else
            $fatal(1, "Parameter `NumAxInFlight` has to be > 1!");
        buffer_depth : assert(BufferDepth > 32'd1) else
            $fatal(1, "Parameter `BufferDepth` has to be > 1!");
        tf_len_width : assert(TFLenWidth >= 32'd12) else
            $fatal(1, "Parameter `BufferDepth` has to be >= 12!");
        tf_len_width_max : assert(TFLenWidth <= AddrWidth) else
            $fatal(1, "Parameter `TFLenWidth` has to be <= `AddrWidth`!");
    end
    )

endmodule

