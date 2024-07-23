// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

module croc_chip import croc_pkg::*; #() (
  input  wire clk_i,
  input  wire rst_ni,
  input  wire ref_clk_i,

  input  wire jtag_tck_i,
  input  wire jtag_trst_ni,
  input  wire jtag_tms_i,
  input  wire jtag_tdi_i,
  output wire jtag_tdo_o,

  input  wire uart_rx_i,
  output wire uart_tx_o,

  input  wire irq0_i,
  output wire status_o
);
    logic soc_clk_i;
    logic soc_rst_ni;
    logic soc_ref_clk_i;

    logic soc_jtag_tck_i;
    logic soc_jtag_trst_ni;
    logic soc_jtag_tms_i;
    logic soc_jtag_tdi_i;
    logic soc_jtag_tdo_o;

    logic soc_irq0_i;
    logic soc_status_o;

    ixc013_i16x pad_clk_i         (.PAD(clk_i),           .DOUT(soc_clk_i));
    ixc013_i16x pad_rst_ni        (.PAD(rst_ni),          .DOUT(soc_rst_ni));
    ixc013_i16x pad_ref_clk_i     (.PAD(ref_clk_i),       .DOUT(soc_ref_clk_i));

    ixc013_i16x pad_jtag_tck_i    (.PAD(jtag_tck_i),      .DOUT(soc_jtag_tck_i));
    ixc013_i16x pad_jtag_trst_ni  (.PAD(jtag_trst_ni),    .DOUT(soc_jtag_trst_ni));
    ixc013_i16x pad_jtag_tms_i    (.PAD(jtag_tms_i),      .DOUT(soc_jtag_tms_i));
    ixc013_i16x pad_jtag_tdi_i    (.PAD(jtag_tdi_i),      .DOUT(soc_jtag_tdi_i));
    ixc013_b16m pad_jtag_tdo_o    (.PAD(jtag_tdo_o),      .DIN(soc_jtag_tdi_i), .DOUT(), .OEN(1'b0));

    ixc013_i16x pad_uart_rx_i     (.PAD(uart_rx_i),       .DOUT(soc_uart_rx_i));
    ixc013_b16m pad_uart_tx_o     (.PAD(uart_tx_o),       .DIN(soc_uart_tx_o), .DOUT(), .OEN(1'b0));

    ixc013_i16x pad_irq0_i        (.PAD(irq0_i),          .DOUT(soc_irq0_i));
    ixc013_b16m pad_status_o      (.PAD(status_o),        .DIN(soc_status_o), .DOUT(), .OEN(1'b0));

    (* dont_touch = "true" *)vddcore pad_vdd0();
    (* dont_touch = "true" *)vddcore pad_vdd1();
    (* dont_touch = "true" *)vddcore pad_vdd2();
    (* dont_touch = "true" *)vddcore pad_vdd3();

    (* dont_touch = "true" *)gndcore pad_vss0();
    (* dont_touch = "true" *)gndcore pad_vss1();
    (* dont_touch = "true" *)gndcore pad_vss2();
    (* dont_touch = "true" *)gndcore pad_vss3();

    (* dont_touch = "true" *)vddpad pad_vddio0();
    (* dont_touch = "true" *)vddpad pad_vddio1();
    (* dont_touch = "true" *)vddpad pad_vddio2();
    (* dont_touch = "true" *)vddpad pad_vddio3();

    (* dont_touch = "true" *)gndpad pad_vssio0();
    (* dont_touch = "true" *)gndpad pad_vssio1();
    (* dont_touch = "true" *)gndpad pad_vssio2();
    (* dont_touch = "true" *)gndpad pad_vssio3();
    (* dont_touch = "true" *)gndpad pad_vssio4();

  croc_soc #()
  i_croc_soc (
    .clk_i          ( soc_clk_i        ),
    .ref_clk_i      ( soc_rst_ni       ),
    .rst_ni         ( soc_ref_clk_i    ),

    .jtag_tck_i     ( soc_jtag_tck_i   ),
    .jtag_tdi_i     ( soc_jtag_tdi_i   ),
    .jtag_tdo_o     ( soc_jtag_tdo_o   ),
    .jtag_tms_i     ( soc_jtag_tms_i   ),
    .jtag_trst_ni   ( soc_jtag_trst_ni ),

    .uart_rx_i      ( soc_uart_rx_i ),
    .uart_tx_o      ( soc_uart_tx_o ),

    .irq0_i         ( soc_irq0_i   ),
    .status_o       ( soc_status_o )
  );

endmodule