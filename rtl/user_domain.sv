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

assign interrupts_o = '0;

// Terminate bus, this address region is currently not used -> error
obi_err_sbr #(
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

endmodule
