// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>

// pin mapping chosen for the OrangeCrab FPGA

module croc_ecp5_io (
  input  logic pad_clk_48_i,
  input  logic pad_usr_btn_i,
  output logic pad_status_o,

  input  logic pad_jtag_tck_i,
  input  logic pad_jtag_tdi_i,
  output logic pad_jtag_tdo_o,
  input  logic pad_jtag_tms_i,

  input  logic pad_uart_rx_i,
  output logic pad_uart_tx_o,

  inout  logic [2:0] pad_gpio_io,

  output logic clk_48_i,
  output logic usr_btn_i,
  input  logic status_o,

  output logic jtag_tck_i,
  output logic jtag_tdi_i,
  input  logic jtag_tdo_o,
  output logic jtag_tms_i,

  output logic uart_rx_i,
  input  logic uart_tx_o,

  input  logic [2:0] gpio_o,
  output logic [2:0] gpio_i,
  input  logic [2:0] gpio_out_en_o
);

  // get the clock from the oscillator
  (* LOC="A9" *) (* IO_TYPE="LVCMOS33" *)
  TRELLIS_IO #(.DIR("INPUT")) i_pad_clk_48_i (.B(pad_clk_48_i), .O(clk_48_i));

  (* LOC="J17" *) (* IO_TYPE="SSTL135_I" *)
  TRELLIS_IO #(.DIR("INPUT")) i_pad_usr_btn_i (.B(pad_usr_btn_i), .O(usr_btn_i));

  (* LOC="H4" *) (* IO_TYPE="LVCMOS33" *)
  TRELLIS_IO #(.DIR("OUTPUT")) i_pad_status_o (.B(pad_status_o), .I(status_o));

  (* LOC="G4" *) (* IO_TYPE="LVCMOS33" *)
  TRELLIS_IO #(.DIR("INPUT")) i_pad_jtag_tck_i (.B(pad_jtag_tck_i), .O(jtag_tck_i));

  (* LOC="T17" *) (* IO_TYPE="LVCMOS33" *)
  TRELLIS_IO #(.DIR("INPUT")) i_pad_jtag_tdi_i (.B(pad_jtag_tdi_i), .O(jtag_tdi_i));

  (* LOC="R17" *) (* IO_TYPE="LVCMOS33" *)
  TRELLIS_IO #(.DIR("OUTPUT")) i_pad_jtag_tdo_o (.B(pad_jtag_tdo_o), .I(jtag_tdo_o));

  (* LOC="N16" *) (* IO_TYPE="LVCMOS33" *)
  TRELLIS_IO #(.DIR("INPUT")) i_pad_jtag_tms_i (.B(pad_jtag_tms_i), .O(jtag_tms_i));

  (* LOC="N15" *) (* IO_TYPE="LVCMOS33" *)
  TRELLIS_IO #(.DIR("INPUT")) i_pad_uart_rx_i (.B(pad_uart_rx_i), .O(uart_rx_i));

  (* LOC="N17" *) (* IO_TYPE="LVCMOS33" *)
  TRELLIS_IO #(.DIR("OUTPUT")) i_pad_uart_tx_o (.B(pad_uart_tx_o), .I(uart_tx_o));

  (* LOC="K4" *) (* IO_TYPE="LVCMOS33" *)
  TRELLIS_IO #(.DIR("BIDIR")) i_pad_gpio_0_io (.B(pad_gpio_io[0]), .I(gpio_o[0]), .O(gpio_i[0]), .T(~gpio_out_en_o[0]));

  (* LOC="M3" *) (* IO_TYPE="LVCMOS33" *)
  TRELLIS_IO #(.DIR("BIDIR")) i_pad_gpio_1_io (.B(pad_gpio_io[1]), .I(gpio_o[1]), .O(gpio_i[1]), .T(~gpio_out_en_o[1]));

  (* LOC="J3" *) (* IO_TYPE="LVCMOS33" *)
  TRELLIS_IO #(.DIR("BIDIR")) i_pad_gpio_2_io (.B(pad_gpio_io[2]), .I(gpio_o[2]), .O(gpio_i[2]), .T(~gpio_out_en_o[2]));

endmodule
