// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>

module croc_ecp5 (
  input  logic pad_clk_48_i,
  input  logic pad_usr_btn_i,
  output logic pad_status_o,

  input  logic pad_jtag_tck_i,
  input  logic pad_jtag_tdi_i,
  output logic pad_jtag_tdo_o,
  input  logic pad_jtag_tms_i,

  input  logic pad_uart_rx_i,
  output logic pad_uart_tx_o,

  inout  logic [2:0] pad_gpio_io
);

  logic clk_48_i;
  logic status_o;
  logic jtag_tck_i;
  logic jtag_tdi_i;
  logic jtag_tms_i;
  logic jtag_tdo_o;
  logic uart_rx_i;
  logic uart_tx_o;
  logic [2:0] gpio_o;
  logic [2:0] gpio_i;
  logic [2:0] gpio_out_en_o;

  croc_ecp5_io i_croc_ecp5_io (
    .pad_clk_48_i   ( pad_clk_48_i   ),
    .pad_usr_btn_i  ( pad_usr_btn_i  ),
    .pad_status_o   ( pad_status_o   ),
    .pad_jtag_tck_i ( pad_jtag_tck_i ),
    .pad_jtag_tdi_i ( pad_jtag_tdi_i ),
    .pad_jtag_tdo_o ( pad_jtag_tdo_o ),
    .pad_jtag_tms_i ( pad_jtag_tms_i ),
    .pad_uart_rx_i  ( pad_uart_rx_i  ),
    .pad_uart_tx_o  ( pad_uart_tx_o  ),
    .pad_gpio_io    ( pad_gpio_io    ),
    .clk_48_i       ( clk_48_i       ),
    .usr_btn_i      ( usr_btn_i      ),
    .status_o       ( status_o       ),
    .jtag_tck_i     ( jtag_tck_i     ),
    .jtag_tdi_i     ( jtag_tdi_i     ),
    .jtag_tdo_o     ( jtag_tdo_o     ),
    .jtag_tms_i     ( jtag_tms_i     ),
    .uart_rx_i      ( uart_rx_i      ),
    .uart_tx_o      ( uart_tx_o      ),
    .gpio_o         ( gpio_o         ),
    .gpio_i         ( gpio_i         ),
    .gpio_out_en_o  ( gpio_out_en_o  )
  );

  // frequency reduction
  logic [11:0] count_d, count_q;
  always_ff @(posedge clk_48_i) begin : proc_counter
    count_q <= count_d;
  end
  assign count_d = count_q + 1;

  // invert gpios
  logic [2:0] gpio_no;
  assign gpio_o = ~gpio_no;

  croc_soc #(
    .GpioCount( 3 )
  )
  i_croc_soc (
    .clk_i           ( count_q[1]  ),
    .rst_ni          ( usr_btn_i   ),
    .ref_clk_i       ( count_q[11] ),
    .testmode_i      ( 1'b0        ),
    .fetch_en_i      ( 1'b1        ),
    .status_o        ( status_o    ),

    .jtag_tck_i      ( jtag_tck_i ),
    .jtag_tdi_i      ( jtag_tdi_i ),
    .jtag_tdo_o      ( jtag_tdo_o ),
    .jtag_tms_i      ( jtag_tms_i ),
    .jtag_trst_ni    ( 1'b1       ),

    .uart_rx_i       ( uart_rx_i ),
    .uart_tx_o       ( uart_tx_o ),

    .gpio_i          ( gpio_i        ),
    .gpio_o          ( gpio_no       ),
    .gpio_out_en_o   ( gpio_out_en_o )
  );

endmodule
