// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

module user_domain import user_pkg::*; import croc_pkg::*; #(
  parameter int unsigned GpioCount = 16
) (
  input  logic      clk_i,
  input  logic      ref_clk_i,
  input  logic      rst_ni,
  input  logic      testmode_i,
  
`ifdef RELOBI
  input  sbr_relobi_req_t user_sbr_obi_req_i, // User Sbr (req_o), Croc Mgr (rsp_i)
  output sbr_relobi_rsp_t user_sbr_obi_rsp_o,
`else
  input  sbr_obi_req_t user_sbr_obi_req_i, // User Sbr (rsp_o), Croc Mgr (req_i)
  output sbr_obi_rsp_t user_sbr_obi_rsp_o,
`endif

`ifdef RELOBI
  output mgr_relobi_req_t user_mgr_obi_req_o, // User Mgr (req_o), Croc Sbr (rsp_i)
  input  mgr_relobi_rsp_t user_mgr_obi_rsp_i,
`else
  output mgr_obi_req_t user_mgr_obi_req_o, // User Mgr (req_o), Croc Sbr (rsp_i)
  input  mgr_obi_rsp_t user_mgr_obi_rsp_i,
`endif

  input  logic [      GpioCount-1:0] gpio_in_sync_i, // synchronized GPIO inputs
  output logic [NumExternalIrqs-1:0] interrupts_o // interrupts to core
);

  assign interrupts_o = '0;  


  //////////////////////
  // User Manager MUX //
  /////////////////////

  // No manager so we don't need a obi_mux module and just terminate the request properly
  assign user_mgr_obi_req_o = '0;


  ////////////////////////////
  // User Subordinate DEMUX //
  ////////////////////////////

  // ----------------------------------------------------------------------------------------------
  // User Subordinate Buses
  // ----------------------------------------------------------------------------------------------
  
  // collection of signals from the demultiplexer
`ifdef RELOBI
  sbr_relobi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req;
  sbr_relobi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp;
`else
  sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req;
  sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp;
`endif

  // Error Subordinate Bus
`ifdef RELOBI
  sbr_relobi_req_t user_error_obi_req;
  sbr_relobi_rsp_t user_error_obi_rsp;
`else
  sbr_obi_req_t user_error_obi_req;
  sbr_obi_rsp_t user_error_obi_rsp;
`endif

  // Fanout into more readable signals
  assign user_error_obi_req              = all_user_sbr_obi_req[UserError];
  assign all_user_sbr_obi_rsp[UserError] = user_error_obi_rsp;


  //-----------------------------------------------------------------------------------------------
  // Demultiplex to User Subordinates according to address map
  //-----------------------------------------------------------------------------------------------

  logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx;

  addr_decode #(
    .NoIndices ( NumDemuxSbr                    ),
    .NoRules   ( NumDemuxSbrRules               ),
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ),
    .rule_t    ( addr_map_rule_t                ),
    .Napot     ( 1'b0                           )
  ) i_addr_decode_periphs (
    .addr_i           ( user_sbr_obi_req_i.a.addr[31:0] ),
    .addr_map_i       ( user_addr_map             ),
    .idx_o            ( user_idx                  ),
    .dec_valid_o      (),
    .dec_error_o      (),
    .en_default_idx_i ( 1'b1 ),
    .default_idx_i    ( '0   )
  );

`ifdef RELOBI
  relobi_demux #(
    .obi_req_t   ( sbr_relobi_req_t ),
    .obi_rsp_t   ( sbr_relobi_rsp_t ),
    .obi_r_chan_t (sbr_relobi_r_chan_t),
    .obi_r_optional_t (logic),
    .TmrSelect ( 1'b1 ),
`else
  obi_demux #(
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
`endif
    .ObiCfg      ( SbrObiCfg     ),
    .NumMgrPorts ( NumDemuxSbr   ),
    .NumMaxTrans ( 2             )
  ) i_obi_demux (
    .clk_i,
    .rst_ni,

`ifdef RELOBI
    .sbr_port_select_i ( {3{user_idx}}             ),
`else
    .sbr_port_select_i ( user_idx                  ),
`endif
    .sbr_port_req_i    ( user_sbr_obi_req_i   ),
    .sbr_port_rsp_o    ( user_sbr_obi_rsp_o   ),

    .mgr_ports_req_o   ( all_user_sbr_obi_req ),
    .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp )

`ifdef RELOBI
    ,.fault_o           ()
`endif
  );


//-------------------------------------------------------------------------------------------------
// User Subordinates
//-------------------------------------------------------------------------------------------------

  // Error Subordinate
`ifdef RELOBI
  relobi_err_sbr #(
    .obi_req_t   ( sbr_relobi_req_t ),
    .obi_rsp_t   ( sbr_relobi_rsp_t ),
    .a_optional_t ( logic ),
    .r_optional_t ( logic ),
`else
  obi_err_sbr #(
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
`endif
    .ObiCfg      ( SbrObiCfg     ),
    .NumMaxTrans ( 1             ),
    .RspData     ( 32'hBADCAB1E  )
  ) i_user_err (
    .clk_i,
    .rst_ni,
    .testmode_i ( testmode_i      ),
    .obi_req_i  ( user_error_obi_req ),
    .obi_rsp_o  ( user_error_obi_rsp )
`ifdef RELOBI
    ,.fault_o ()
`endif
  );

endmodule
