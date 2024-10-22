// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

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
  output logic status_o,

  //todo gpio pads
  input  logic [NrGPIOs-1:0] gpio_in,            // Input from GPIO pins
  output logic [NrGPIOs-1:0] gpio_out,            // Output to GPIO pins
  output logic [NrGPIOs-1:0] gpio_tx_en_o        // TX enable signal 0 -> input, 1 -> output
);

  logic synced_rst_n, synced_irq0;

  rstgen i_rstgen (
    .clk_i,
    .rst_ni,
    .test_mode_i ( test_enable_i ),
    .rst_no      ( synced_rst_n  ),
    .init_no ( )
  );

  sync #(
      .STAGES     (    2 ),
      .ResetValue ( 1'b0 )
    ) i_ext_intr_sync (
      .clk_i,
      .rst_ni   ( synced_rst_n ),
      .serial_i ( irq0_i       ),
      .serial_o ( synced_irq0  )
    );

//Connection between Croc_domain and User_domain: User Sbr, Croc Mgr
sbr_obi_req_t xbar_user_sbr_obi_req;
sbr_obi_rsp_t xbar_user_sbr_obi_rsp;

//Connection between Croc_domain and User_domain: Croc Sbr, User Mgr
mgr_obi_req_t xbar_croc_sbr_obi_req;
mgr_obi_rsp_t xbar_croc_sbr_obi_rsp;

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


  .xbar_user_sbr_obi_req_o  ( xbar_user_sbr_obi_req ),
  .xbar_user_sbr_obi_rsp_i  ( xbar_user_sbr_obi_rsp ),

  .xbar_croc_sbr_obi_req_i  ( xbar_croc_sbr_obi_req ),
  .xbar_croc_sbr_obi_rsp_o  ( xbar_croc_sbr_obi_rsp ),

  .irq0_i       ( synced_irq0 ),
  .interrupts_i ( interrupts  ),
  .core_sleep_o ( status_o    )
);

user_domain #(    
) i_user (
  .clk_i,
  .rst_ni ( synced_rst_n ),
  .ref_clk_i,
  .test_enable_i ( test_enable ),

  //todo gpiopads
  .gpio_in        (soc_gpio_in      ),             
  .gpio_out       (soc_gpio_out     ),            
  .gpio_tx_en_o   (soc_gpio_tx_en_o ),

  .xbar_user_sbr_obi_req_i ( xbar_user_sbr_obi_req ),
  .xbar_user_sbr_obi_rsp_o ( xbar_user_sbr_obi_rsp ),

  .xbar_croc_sbr_obi_req_o ( xbar_croc_sbr_obi_req ),
  .xbar_croc_sbr_obi_rsp_i ( xbar_croc_sbr_obi_rsp ),

  .interrupts_o ( interrupts )
);

endmodule
