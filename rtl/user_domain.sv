// Copyright 2024 ETH Zurich and University of Bologna.
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the "License"); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

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
