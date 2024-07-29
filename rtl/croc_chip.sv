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
    logic soc_test_enable_i;

    logic soc_jtag_tck_i;
    logic soc_jtag_trst_ni;
    logic soc_jtag_tms_i;
    logic soc_jtag_tdi_i;
    logic soc_jtag_tdo_o;

    logic soc_irq0_i;
    logic soc_status_o;

    sg13g2_IOPadIn        pad_clk_i         (.pad(clk_i),           .p2c(soc_clk_i));
    sg13g2_IOPadIn        pad_rst_ni        (.pad(rst_ni),          .p2c(soc_rst_ni));
    sg13g2_IOPadIn        pad_ref_clk_i     (.pad(ref_clk_i),       .p2c(soc_ref_clk_i));
    assign soc_test_enable_i = '0;

    sg13g2_IOPadIn        pad_jtag_tck_i    (.pad(jtag_tck_i),      .p2c(soc_jtag_tck_i));
    sg13g2_IOPadIn        pad_jtag_trst_ni  (.pad(jtag_trst_ni),    .p2c(soc_jtag_trst_ni));
    sg13g2_IOPadIn        pad_jtag_tms_i    (.pad(jtag_tms_i),      .p2c(soc_jtag_tms_i));
    sg13g2_IOPadIn        pad_jtag_tdi_i    (.pad(jtag_tdi_i),      .p2c(soc_jtag_tdi_i));
    sg13g2_IOPadOut16mA   pad_jtag_tdo_o    (.pad(jtag_tdo_o),      .c2p(soc_jtag_tdo_o));

    sg13g2_IOPadIn        pad_uart_rx_i     (.pad(uart_rx_i),       .p2c(soc_uart_rx_i));
    sg13g2_IOPadOut16mA   pad_uart_tx_o     (.pad(uart_tx_o),       .c2p(soc_uart_tx_o));

    sg13g2_IOPadInOut16mA pad_irq0_i        (.pad(irq0_i),          .p2c(soc_irq0_i),   .c2p(), .c2p_en(1'b0));
    sg13g2_IOPadInOut16mA pad_status_o      (.pad(status_o),        .c2p(soc_status_o), .p2c(), .c2p_en(1'b1));

    (* dont_touch = "true" *)sg13g2_IOPadVdd pad_vdd0();
    (* dont_touch = "true" *)sg13g2_IOPadVdd pad_vdd1();
    (* dont_touch = "true" *)sg13g2_IOPadVdd pad_vdd2();
    (* dont_touch = "true" *)sg13g2_IOPadVdd pad_vdd3();

    (* dont_touch = "true" *)sg13g2_IOPadVss pad_vss0();
    (* dont_touch = "true" *)sg13g2_IOPadVss pad_vss1();
    (* dont_touch = "true" *)sg13g2_IOPadVss pad_vss2();
    (* dont_touch = "true" *)sg13g2_IOPadVss pad_vss3();

    (* dont_touch = "true" *)sg13g2_IOPadIOVdd pad_vddio0();
    (* dont_touch = "true" *)sg13g2_IOPadIOVdd pad_vddio1();
    (* dont_touch = "true" *)sg13g2_IOPadIOVdd pad_vddio2();
    (* dont_touch = "true" *)sg13g2_IOPadIOVdd pad_vddio3();

    (* dont_touch = "true" *)sg13g2_IOPadIOVss pad_vssio0();
    (* dont_touch = "true" *)sg13g2_IOPadIOVss pad_vssio1();
    (* dont_touch = "true" *)sg13g2_IOPadIOVss pad_vssio2();
    (* dont_touch = "true" *)sg13g2_IOPadIOVss pad_vssio3();
    (* dont_touch = "true" *)sg13g2_IOPadIOVss pad_vssio4();

  croc_soc #()
  i_croc_soc (
    .clk_i          ( soc_clk_i         ),
    .ref_clk_i      ( soc_rst_ni        ),
    .rst_ni         ( soc_ref_clk_i     ),
    .test_enable_i  ( soc_test_enable_i ),

    .jtag_tck_i     ( soc_jtag_tck_i    ),
    .jtag_tdi_i     ( soc_jtag_tdi_i    ),
    .jtag_tdo_o     ( soc_jtag_tdo_o    ),
    .jtag_tms_i     ( soc_jtag_tms_i    ),
    .jtag_trst_ni   ( soc_jtag_trst_ni  ),

    .uart_rx_i      ( soc_uart_rx_i ),
    .uart_tx_o      ( soc_uart_tx_o ),

    .irq0_i         ( soc_irq0_i   ),
    .status_o       ( soc_status_o )
  );

endmodule