`include "common_cells/registers.svh"

module neopixel import neopixel_pkg::*; #(
    parameter obi_pkg::obi_cfg_t           SbrObiCfg      = obi_pkg::ObiDefaultConfig,
    /// Regbus request struct type.
    parameter type sbr_obi_req_t          = logic,
    /// Regbus response struct type.
    parameter type sbr_obi_rsp_t          = logic,
    parameter obi_pkg::obi_cfg_t           MgrObiCfg      = obi_pkg::ObiDefaultConfig,
    /// Regbus request struct type.
    parameter type mgr_obi_req_t          = logic,
    /// Regbus response struct type.
    parameter type mgr_obi_rsp_t          = logic
)(
    /// Primary input clock. The control interface is suposed to be synchronous to
    /// this clock.
    input logic clk_i,
    /// Asynchronous active-low reset
    input logic rst_ni,
    /// Testmode
    input logic testmode_i,

    /// This is the Subordinate, we want something from the neopixel
    /// Control interface request side using register_interface protocol.
    /// OBI request interface : a.addr, a.we, a.be, a.wdata, a.aid, a.a_optional | rready, req
    input  sbr_obi_req_t obi_req_i,
    /// Control interface request side using register_interface protocol.
    /// OBI response interface : r.rdata, r.rid, r.err, r.r_optional | gnt, rvalid
    output sbr_obi_rsp_t obi_rsp_o,

    /// This is a Manager, he wants something from somewhere else
    /// Control interface request side using register_interface protocol.
    /// OBI request interface : a.addr, a.we, a.be, a.wdata, a.aid, a.a_optional | rready, req
    output mgr_obi_req_t mgr_obi_req_o,
    /// Control interface request side using register_interface protocol.
    /// OBI response interface : r.rdata, r.rid, r.err, r.r_optional | gnt, rvalid
    input  mgr_obi_rsp_t mgr_obi_rsp_i,

    output logic fifo_interrupt_o,

    /// Output to NeoPixel data line
    output logic data_o
);

    /////////////////////////////////
    // Neopixel`s Manager Bus: DMA //
    /////////////////////////////////

    // ----------------------------------------------------------------------------------------------------
    // Converter for the mgr bus
    // ----------------------------------------------------------------------------------------------------
    // We need this since the DMA only works with a rready signal and all the other modules don't

    mgr_dma_obi_req_t dma_obi_req;
    mgr_dma_obi_rsp_t dma_obi_rsp;

    // Signals for dma and converter
    croc_pkg::mgr_obi_a_chan_t dma_sbr_a_chan;
    croc_pkg::mgr_obi_r_chan_t dma_sbr_r_chan;
    logic dma_req, dma_gnt, dma_rvalid;
    // we want rready
    logic dma_rready;

    // Signals for Mgr bus from outside and converter
    croc_pkg::mgr_obi_a_chan_t mgr_a_chan;
    croc_pkg::mgr_obi_r_chan_t mgr_r_chan;
    logic mgr_req, mgr_gnt, mgr_rvalid;

    always_comb begin
        dma_sbr_a_chan = dma_obi_req.a;
        dma_req = dma_obi_req.req;
        dma_rready = dma_obi_req.rready;
        dma_obi_rsp.r = dma_sbr_r_chan;
        dma_obi_rsp.gnt = dma_gnt;
        dma_obi_rsp.rvalid = dma_rvalid;

        mgr_obi_req_o.a = mgr_a_chan;
        mgr_obi_req_o.req = mgr_req;
        mgr_r_chan = mgr_obi_rsp_i.r;
        mgr_gnt = mgr_obi_rsp_i.gnt;
        mgr_rvalid = mgr_obi_rsp_i.rvalid;
    end

    obi_rready_converter #(
        .obi_a_chan_t ( croc_pkg::mgr_obi_a_chan_t ),
        .obi_r_chan_t ( croc_pkg::mgr_obi_r_chan_t )
    ) i_obi_rready_converter (
        .clk_i,
        .rst_ni,
        .test_mode_i ( testmode_i ),

        .sbr_a_chan_i   ( dma_sbr_a_chan    ),
        .req_i          ( dma_req           ),
        .gnt_o          ( dma_gnt           ),
        .sbr_r_chan_o   ( dma_sbr_r_chan    ),
        .rvalid_o       ( dma_rvalid        ),
        .rready_i       ( dma_rready        ),

        .mgr_a_chan_o   ( mgr_a_chan    ),
        .req_o          ( mgr_req       ),
        .gnt_i          ( mgr_gnt       ),
        .mgr_r_chan_i   ( mgr_r_chan    ),
        .rvalid_i       ( mgr_rvalid    )
    );

    // ----------------------------------------------------------------------------------------------------
    // DMA
    // ----------------------------------------------------------------------------------------------------

    // Signal exchange between register and neopixel_dma module
    dma_write_reg_union_t dma_constraints;

    // Signals to check if we can load new data into FIFO
    logic dma_req_ready;
    logic dma_req_valid_d, dma_req_valid_q;
    logic dma_read_data_once_q, dma_read_data_once_d;

    // Signal exchange between FIFO and DMA
    logic [RegisterDepth - 1:0]   dma_fifo_data;
    logic dma_fifo_valid;
    logic fifo_full;

    // Signal calculation for DMA
    assign dma_req_valid_d = dma_constraints.str.valid[0];
    assign dma_read_data_once_d = (dma_req_valid_d & ~dma_req_valid_q)?
                0 : dma_read_data_once_q | dma_req_ready;

    `FF(dma_read_data_once_q, dma_read_data_once_d, '0, clk_i, rst_ni)
    `FF(dma_req_valid_q, dma_req_valid_d, '0, clk_i, rst_ni)

    neopixel_dma #(
        .ObiCfg         ( MgrDmaObiCfg     ),
        .obi_a_chan_t   ( neopixel_pkg::mgr_dma_obi_a_chan_t),
        .obi_req_t      ( mgr_dma_obi_req_t ),
        .obi_rsp_t      ( mgr_dma_obi_rsp_t )
    ) i_dma (
        .clk_i,
        .rst_ni,

        .src_addr_i         ( dma_constraints.str.src_addr  ),
        .num_bytes_i        ( dma_constraints.str.num_bytes     ),

        .req_valid_i        ( dma_req_valid_q & ~dma_read_data_once_q ),
        .req_ready_o        ( dma_req_ready     ),

        .transfer_done_o    (),

        .obi_req_o          ( dma_obi_req       ),
        .obi_rsp_i          ( dma_obi_rsp       ),

        .fifo_data_o        ( dma_fifo_data     ),
        .fifo_valid_o       ( dma_fifo_valid    ),
        .fifo_ready_i       ( ~fifo_full        ),

        .busy_o             ()
    );

    ////////////////////////////
    // Neopixel`s Subordinate //
    ////////////////////////////

    //----------------------------------------------------------------------------------------------------
    // Neopixel`s Subordinate Bus
    //----------------------------------------------------------------------------------------------------

    sbr_obi_req_t [NumNeoPixelAddress-1:0] all_neopixel_obi_req;
    sbr_obi_rsp_t [NumNeoPixelAddress-1:0] all_neopixel_obi_rsp;

    // Error Subordinate Bus
    sbr_obi_req_t neopixel_error_obi_req;
    sbr_obi_rsp_t neopixel_error_obi_rsp;

    // Register Subordinate Bus
    sbr_obi_req_t neopixel_register_obi_req;
    sbr_obi_rsp_t neopixel_register_obi_rsp;

    // Neopixel Subordinate Bus
    sbr_obi_req_t neopixel_fifo_obi_req;
    sbr_obi_rsp_t neopixel_fifo_obi_rsp;

    assign neopixel_error_obi_req             = all_neopixel_obi_req[NeoPixelError];
    assign all_neopixel_obi_rsp[NeoPixelError]    = neopixel_error_obi_rsp;

    assign neopixel_register_obi_req          = all_neopixel_obi_req[NeoPixelRegister];
    assign all_neopixel_obi_rsp[NeoPixelRegister] = neopixel_register_obi_rsp;

    assign neopixel_fifo_obi_req              = all_neopixel_obi_req[NeoPixelFifo];
    assign all_neopixel_obi_rsp[NeoPixelFifo]     = neopixel_fifo_obi_rsp;

    //----------------------------------------------------------------------------------------------------
    // demultiplex to user subordinates according to address map
    //----------------------------------------------------------------------------------------------------

    logic [cf_math_pkg::idx_width(NumNeoPixelAddress)-1:0] neopixel_idx;

    addr_decode #(
        .NoIndices ( NumNeoPixelAddress             ),
        .NoRules   ( NumNeoPixelAddressRules        ),
        .addr_t    ( logic[SbrObiCfg.DataWidth-1:0]    ),
        .rule_t    ( addr_map_rule_t                ),
        .Napot     ( 1'b0                           )
    ) i_addr_decode_periphs (
        .addr_i           ( obi_req_i.a.addr    ),
        .addr_map_i       ( neopixel_addr_map   ),
        .idx_o            ( neopixel_idx        ),
        .dec_valid_o      (),
        .dec_error_o      (),
        .en_default_idx_i ( 1'b1 ),
        .default_idx_i    ( '0   )
    );

    obi_demux #(
        .ObiCfg      ( SbrObiCfg               ),
        .obi_req_t   ( sbr_obi_req_t            ),
        .obi_rsp_t   ( sbr_obi_rsp_t            ),
        .NumMgrPorts ( NumNeoPixelAddress   ),
        .NumMaxTrans ( 2                    )
    ) i_obi_demux (
        .clk_i,
        .rst_ni,

        .sbr_port_select_i ( neopixel_idx   ),
        .sbr_port_req_i    ( obi_req_i      ),
        .sbr_port_rsp_o    ( obi_rsp_o      ),

        .mgr_ports_req_o   ( all_neopixel_obi_req    ),
        .mgr_ports_rsp_i   ( all_neopixel_obi_rsp    )
    );

    //----------------------------------------------------------------------------------------------------
    // Neopixel Subordinates///
    //----------------------------------------------------------------------------------------------------

    // Error Subordinate
    obi_err_sbr #(
        .ObiCfg      ( SbrObiCfg       ),
        .obi_req_t   ( sbr_obi_req_t    ),
        .obi_rsp_t   ( sbr_obi_rsp_t    ),
        .NumMaxTrans ( 1            ),
        .RspData     ( 32'hBADCAB1E )
    ) i_err_sbr (
        .clk_i,
        .rst_ni,
        .testmode_i,
        .obi_req_i  ( neopixel_error_obi_req    ),
        .obi_rsp_o  ( neopixel_error_obi_rsp    )
    );

    // Signal exchange between register and neopixel_controller module
    neopixel_write_reg_union_t timing_constraints;

    // Signal exchange between register and obi_write_to_fifo module
    logic [1:0] fifo_access;

    // Register for several things
    neopixel_reg #(
        .ObiCfg      ( SbrObiCfg        ),
        .obi_req_t   ( sbr_obi_req_t     ),
        .obi_rsp_t   ( sbr_obi_rsp_t     )
    ) i_neopixel_reg (
        .clk_i,
        .rst_ni,

        .obi_req_i              ( neopixel_register_obi_req),
        .obi_rsp_o              ( neopixel_register_obi_rsp),

        .timing_constraints_o   ( timing_constraints ),

        .dma_constraints_o      ( dma_constraints ),

        .fifo_access_o (fifo_access)
    );

    // Signal exchange between fifo and neopixel_controller module
    logic [23:0] fifo_data;
    logic fifo_pop, fifo_empty;
    logic fifo_interrupt;

    // write to fifo that the controller can read stuff from the fifo
    // OBI and the DMA is able to write to it

    write_to_fifo #(
        .ObiCfg     ( SbrObiCfg         ),
        .obi_req_t  ( sbr_obi_req_t     ),
        .obi_rsp_t  ( sbr_obi_rsp_t     )
    ) i_write_to_fifo (
        .clk_i,
        .rst_ni,

        .fifo_empty_o   ( fifo_empty    ),
        .fifo_full_o    ( fifo_full     ),
        .fifo_data_o    ( fifo_data     ),
        .fifo_pop_i     ( fifo_pop      ),

        .dma_data_i         ( dma_fifo_data  ),
        .dma_valid_push_i   ( dma_fifo_valid ),

        .fifo_access_i (fifo_access),

        .obi_req_i  ( neopixel_fifo_obi_req ),
        .obi_rsp_o  ( neopixel_fifo_obi_rsp ),

        .fifo_interrupt_o ( fifo_interrupt )
    );

    assign fifo_interrupt_o = fifo_interrupt;

    //----------------------------------------------------------------------------------------------------
    // Neopixel Controller ///
    //----------------------------------------------------------------------------------------------------

    neopixel_controller #(
    ) i_neopixel_controller (
        .clk_i,
        .rst_ni,

        .fifo_empty_i   ( fifo_empty    ),
        .fifo_data_i    ( fifo_data     ),
        .fifo_pop_o     ( fifo_pop      ),

        .timing_constraints_i   ( timing_constraints ),

        .data_o ( data_o    )
    );

endmodule
