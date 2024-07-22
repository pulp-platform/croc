// Copyright 2024 ETH Zurich and University of Bologna.
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the "License"); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

module croc_soc import croc_pkg::*; #() (
  input  logic clk_i,
  input  logic rst_ni,
  input  logic ref_clk_i,
  input  logic test_enable_i,

  input  logic jtag_tck_i,
  input  logic jtag_tdi_i,
  output logic jtag_tdo_o,
  input  logic jtag_tms_i,
  input  logic jtag_trst_ni,

  input  logic uart_rx_i,
  output logic uart_tx_o,

  input  logic irq0_i,
  output logic status_o
);

  logic synced_rst_n;

  rstgen i_rstgen (
    .clk_i,
    .rst_ni,
    .test_mode_i ( test_enable_i ),
    .rst_no      ( synced_rst_n  ),
    .init_no ( )
  );

sbr_obi_req_t xbar_user_obi_req;
sbr_obi_rsp_t xbar_user_obi_rsp;

logic test_enable = 1'b0;
logic [NumExternalIrqs-1:0] interrupts;

croc_domain #(
) i_croc (
  .clk_i,
  .rst_ni ( synced_rst_n ),
  .ref_clk_i,
  .test_enable_i ( test_enable ),

  .jtag_tck_i,
  .jtag_tdi_i,
  .jtag_tdo_o,
  .jtag_tms_i,
  .jtag_trst_ni,

  .uart_rx_i,
  .uart_tx_o,

  .xbar_user_obi_req_o ( xbar_user_obi_req ),
  .xbar_user_obi_rsp_i ( xbar_user_obi_rsp ),

  .irq0_i       ( irq0_i     ),
  .interrupts_i ( interrupts ),
  .core_sleep_o ( status_o   )
);

user_domain #(    
) i_user (
  .clk_i,
  .rst_ni ( synced_rst_n ),
  .ref_clk_i,
  .test_enable_i ( test_enable ),

  .xbar_user_obi_req_i ( xbar_user_obi_req ),
  .xbar_user_obi_rsp_o ( xbar_user_obi_rsp ),

  .interrupts_o ( interrupts )
);

endmodule
