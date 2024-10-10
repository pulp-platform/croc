// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

module user_domain import croc_pkg::*; #() (
  input  logic      clk_i,
  input  logic      ref_clk_i,
  input  logic      rst_ni,
  input  logic      test_enable_i,

  input  sbr_obi_req_t xbar_user_obi_req_i,
  output sbr_obi_rsp_t xbar_user_obi_rsp_o,

  output logic [NumExternalIrqs-1:0] interrupts_o
);

/*assign interrupts_o = '0;  addr_decode #(
    .NoIndices ( NumPeriphs      ),
    .NoRules   ( NumPeriphRules  ),
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ),
    .rule_t    ( addr_map_rule_t ),
    .Napot     ( 1'b0 )
  ) i_addr_decode_periphs (
    .addr_i           ( xbar_periph_obi_req.a.addr ),
    .addr_map_i       ( periph_addr_map ),
    .idx_o            ( periph_idx      ),
    .dec_valid_o      (),
    .dec_error_o      (),
    .en_default_idx_i ( 1'b1 ),
    .default_idx_i    ( '0 )
  );

  obi_demux #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMgrPorts ( NumPeriphs    ),
    .NumMaxTrans ( 2 )
  ) i_obi_demux (
    .clk_i,
    .rst_ni,

    .sbr_port_select_i ( periph_idx     ),
    .sbr_port_req_i    ( xbar_periph_obi_req ),
    .sbr_port_rsp_o    ( xbar_periph_obi_rsp ),

    .mgr_ports_req_o   ( all_periph_obi_req ),
    .mgr_ports_rsp_i   ( all_periph_obi_rsp )
  );*/

rom #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t )
  ) i_rom (
    .clk_i,
    .rst_ni,
    .obi_req_i  ( xbar_user_obi_req_i ),
    .obi_rsp_o  ( xbar_user_obi_rsp_o )
  );

// Terminate bus, this address region is currently not used -> error
/*obi_err_sbr #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMaxTrans ( 1             ),
    .RspData     ( 32'hBADCAB1E  )
  ) i_err_sbr (
    .clk_i,
    .rst_ni,
    .testmode_i ( test_enable_i ),
    .obi_req_i  ( xbar_user_obi_req_i ),
    .obi_rsp_o  ( xbar_user_obi_rsp_o )
  );
*/

endmodule
