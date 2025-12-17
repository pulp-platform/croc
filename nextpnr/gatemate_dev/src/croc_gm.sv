// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>

module croc_gm (
  input  logic pad_clk_i,
  input  logic pad_button_i,
  output logic pad_status_o,

  input  logic pad_jtag_tck_i,
  input  logic pad_jtag_tdi_i,
  output logic pad_jtag_tdo_o,
  input  logic pad_jtag_tms_i,

  input  logic pad_uart_rx_i,
  output logic pad_uart_tx_o,

  inout  logic pad_gpio_0_io,
  inout  logic pad_gpio_1_io,
  inout  logic pad_gpio_2_io
);


  // frequency reduction
  logic [22:0] count_d, count_q;
  always_ff @(posedge pad_clk_i) begin : proc_counter
    count_q <= count_d;
  end
  assign count_d = count_q + 1;

  // bidir pad driver
  logic [2:0] gpio_i;
  logic [2:0] gpio_o;
  logic [2:0] gpio_out_en_o;

  assign gpio_i[0] = pad_gpio_0_io;
  assign gpio_i[1] = pad_gpio_1_io;
  assign gpio_i[2] = pad_gpio_2_io;
  assign pad_gpio_0_io = gpio_out_en_o[0] ? ~gpio_o[0] : 1'bZ;
  assign pad_gpio_1_io = gpio_out_en_o[1] ? ~gpio_o[1] : 1'bZ;
  assign pad_gpio_2_io = gpio_out_en_o[2] ? ~gpio_o[2] : 1'bZ;

  croc_soc #(
    .GpioCount( 3 )
  )
  i_croc_soc (
    .clk_i           ( count_q[0]   ),
    .rst_ni          ( pad_button_i ),
    .ref_clk_i       ( count_q[9]   ),
    .testmode_i      ( 1'b0         ),
    .fetch_en_i      ( 1'b1         ),
    .status_o        ( pad_status_o ),

    .jtag_tck_i      ( pad_jtag_tck_i ),
    .jtag_tdi_i      ( pad_jtag_tdi_i ),
    .jtag_tdo_o      ( pad_jtag_tdo_o ),
    .jtag_tms_i      ( pad_jtag_tms_i ),
    .jtag_trst_ni    ( 1'b1       ),

    .uart_rx_i       ( pad_uart_rx_i ),
    .uart_tx_o       ( pad_uart_tx_o ),

    .gpio_i          ( gpio_i        ),
    .gpio_o          ( gpio_o        ),
    .gpio_out_en_o   ( gpio_out_en_o )
  );

endmodule
