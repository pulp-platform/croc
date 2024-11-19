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

  input  wire fetch_en_i,
  output wire status_o,

  inout  wire gpio0_io,
  inout  wire gpio1_io,
  inout  wire gpio2_io,
  inout  wire gpio3_io,
  inout  wire gpio4_io,
  inout  wire gpio5_io,
  inout  wire gpio6_io,
  inout  wire gpio7_io,
  inout  wire gpio8_io,
  inout  wire gpio9_io,
  inout  wire gpio10_io,
  inout  wire gpio11_io,
  inout  wire gpio12_io,
  inout  wire gpio13_io,
  inout  wire gpio14_io,
  inout  wire gpio15_io,

  output wire neopixel_data_o,

  input  wire uart2_rxd_i,
  output wire uart2_txd_o,
  input  wire uart2_cts_n_i,
  input  wire uart2_dsr_n_i,
  input  wire uart2_ri_n_i,
  input  wire uart2_cd_n_i,
  output wire uart2_rts_n_o,
  output wire uart2_dtr_n_o
); 

    logic soc_clk_i;
    logic soc_rst_ni;
    logic soc_ref_clk_i;

    logic soc_jtag_tck_i;
    logic soc_jtag_trst_ni;
    logic soc_jtag_tms_i;
    logic soc_jtag_tdi_i;
    logic soc_jtag_tdo_o;

    logic soc_fetch_en_i;
    logic soc_status_o;

    localparam int unsigned GpioCount = 16;

    logic [GpioCount-1:0] soc_gpio_i;             
    logic [GpioCount-1:0] soc_gpio_o;            
    logic [GpioCount-1:0] soc_gpio_out_en_o; // Output enable signal; 0 -> input, 1 -> output

    logic soc_neopixel_data_o;

    logic soc_uart2_rxd_i;
    logic soc_uart2_txd_o;
    logic soc_uart2_cts_n_i;
    logic soc_uart2_dsr_n_i;
    logic soc_uart2_ri_n_i;
    logic soc_uart2_cd_n_i;
    logic soc_uart2_rts_n_o;
    logic soc_uart2_dtr_n_o;

    sg13g2_IOPadIn        pad_clk_i        (.pad(clk_i),        .p2c(soc_clk_i));
    sg13g2_IOPadIn        pad_rst_ni       (.pad(rst_ni),       .p2c(soc_rst_ni));
    sg13g2_IOPadIn        pad_ref_clk_i    (.pad(ref_clk_i),    .p2c(soc_ref_clk_i));

    sg13g2_IOPadIn        pad_jtag_tck_i   (.pad(jtag_tck_i),   .p2c(soc_jtag_tck_i));
    sg13g2_IOPadIn        pad_jtag_trst_ni (.pad(jtag_trst_ni), .p2c(soc_jtag_trst_ni));
    sg13g2_IOPadIn        pad_jtag_tms_i   (.pad(jtag_tms_i),   .p2c(soc_jtag_tms_i));
    sg13g2_IOPadIn        pad_jtag_tdi_i   (.pad(jtag_tdi_i),   .p2c(soc_jtag_tdi_i));
    sg13g2_IOPadOut16mA   pad_jtag_tdo_o   (.pad(jtag_tdo_o),   .c2p(soc_jtag_tdo_o));

    sg13g2_IOPadIn        pad_uart_rx_i    (.pad(uart_rx_i),    .p2c(soc_uart_rx_i));
    sg13g2_IOPadOut16mA   pad_uart_tx_o    (.pad(uart_tx_o),    .c2p(soc_uart_tx_o));

    sg13g2_IOPadIn        pad_fetch_en_i   (.pad(fetch_en_i),   .p2c(soc_fetch_en_i));
    sg13g2_IOPadOut16mA   pad_status_o     (.pad(status_o),     .c2p(soc_status_o));

    sg13g2_IOPadInOut30mA pad_gpio0_io     (.pad(gpio0_io),     .c2p(soc_gpio_o[0]),  .p2c(soc_gpio_i[0]),   .c2p_en(soc_gpio_out_en_o[0]));
    sg13g2_IOPadInOut30mA pad_gpio1_io     (.pad(gpio1_io),     .c2p(soc_gpio_o[1]),  .p2c(soc_gpio_i[1]),   .c2p_en(soc_gpio_out_en_o[1]));
    sg13g2_IOPadInOut30mA pad_gpio2_io     (.pad(gpio2_io),     .c2p(soc_gpio_o[2]),  .p2c(soc_gpio_i[2]),   .c2p_en(soc_gpio_out_en_o[2]));
    sg13g2_IOPadInOut30mA pad_gpio3_io     (.pad(gpio3_io),     .c2p(soc_gpio_o[3]),  .p2c(soc_gpio_i[3]),   .c2p_en(soc_gpio_out_en_o[3]));
    sg13g2_IOPadInOut30mA pad_gpio4_io     (.pad(gpio4_io),     .c2p(soc_gpio_o[4]),  .p2c(soc_gpio_i[4]),   .c2p_en(soc_gpio_out_en_o[4]));
    sg13g2_IOPadInOut30mA pad_gpio5_io     (.pad(gpio5_io),     .c2p(soc_gpio_o[5]),  .p2c(soc_gpio_i[5]),   .c2p_en(soc_gpio_out_en_o[5]));
    sg13g2_IOPadInOut30mA pad_gpio6_io     (.pad(gpio6_io),     .c2p(soc_gpio_o[6]),  .p2c(soc_gpio_i[6]),   .c2p_en(soc_gpio_out_en_o[6]));
    sg13g2_IOPadInOut30mA pad_gpio7_io     (.pad(gpio7_io),     .c2p(soc_gpio_o[7]),  .p2c(soc_gpio_i[7]),   .c2p_en(soc_gpio_out_en_o[7]));
    sg13g2_IOPadInOut30mA pad_gpio8_io     (.pad(gpio8_io),     .c2p(soc_gpio_o[8]),  .p2c(soc_gpio_i[8]),   .c2p_en(soc_gpio_out_en_o[8]));
    sg13g2_IOPadInOut30mA pad_gpio9_io     (.pad(gpio9_io),     .c2p(soc_gpio_o[9]),  .p2c(soc_gpio_i[9]),   .c2p_en(soc_gpio_out_en_o[9]));
    sg13g2_IOPadInOut30mA pad_gpio10_io    (.pad(gpio10_io),    .c2p(soc_gpio_o[10]), .p2c(soc_gpio_i[10]),  .c2p_en(soc_gpio_out_en_o[10]));
    sg13g2_IOPadInOut30mA pad_gpio11_io    (.pad(gpio11_io),    .c2p(soc_gpio_o[11]), .p2c(soc_gpio_i[11]),  .c2p_en(soc_gpio_out_en_o[11]));
    sg13g2_IOPadInOut30mA pad_gpio12_io    (.pad(gpio12_io),    .c2p(soc_gpio_o[12]), .p2c(soc_gpio_i[12]),  .c2p_en(soc_gpio_out_en_o[12]));
    sg13g2_IOPadInOut30mA pad_gpio13_io    (.pad(gpio13_io),    .c2p(soc_gpio_o[13]), .p2c(soc_gpio_i[13]),  .c2p_en(soc_gpio_out_en_o[13]));
    sg13g2_IOPadInOut30mA pad_gpio14_io    (.pad(gpio14_io),    .c2p(soc_gpio_o[14]), .p2c(soc_gpio_i[14]),  .c2p_en(soc_gpio_out_en_o[14]));
    sg13g2_IOPadInOut30mA pad_gpio15_io    (.pad(gpio15_io),    .c2p(soc_gpio_o[15]), .p2c(soc_gpio_i[15]),  .c2p_en(soc_gpio_out_en_o[15]));

    sg13g2_IOPadOut30mA   pad_neopixel_data_o     (.pad(neopixel_data_o),     .c2p(soc_neopixel_data_o));

    sg13g2_IOPadIn        pad_uart2_rxd_i   (.pad(uart2_rxd_i  ), .p2c(soc_uart2_rxd_i));
    sg13g2_IOPadOut16mA   pad_uart2_txd_o   (.pad(uart2_txd_o  ), .c2p(soc_uart2_txd_o));
    sg13g2_IOPadIn        pad_uart2_cts_n_i (.pad(uart2_cts_n_i), .p2c(soc_uart2_cts_n_i));
    sg13g2_IOPadIn        pad_uart2_dsr_n_i (.pad(uart2_dsr_n_i), .p2c(soc_uart2_dsr_n_i));
    sg13g2_IOPadIn        pad_uart2_ri_n_i  (.pad(uart2_ri_n_i ), .p2c(soc_uart2_ri_n_i));
    sg13g2_IOPadIn        pad_uart2_cd_n_i  (.pad(uart2_cd_n_i ), .p2c(soc_uart2_cd_n_i));
    sg13g2_IOPadOut16mA   pad_uart2_rts_n_o (.pad(uart2_rts_n_o), .c2p(soc_uart2_rts_n_o));
    sg13g2_IOPadOut16mA   pad_uart2_dtr_n_o (.pad(uart2_dtr_n_o), .c2p(soc_uart2_dtr_n_o));

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

  croc_soc #(
    .GpioCount( GpioCount )
  )
  i_croc_soc (
    .clk_i           ( soc_clk_i      ),
    .rst_ni          ( soc_rst_ni     ),
    .ref_clk_i       ( soc_ref_clk_i  ),
    .testmode_i      ( 1'b0           ),
    .fetch_en_i      ( soc_fetch_en_i ),
    .status_o        ( soc_status_o   ),

    .jtag_tck_i      ( soc_jtag_tck_i   ),
    .jtag_tdi_i      ( soc_jtag_tdi_i   ),
    .jtag_tdo_o      ( soc_jtag_tdo_o   ),
    .jtag_tms_i      ( soc_jtag_tms_i   ),
    .jtag_trst_ni    ( soc_jtag_trst_ni ),

    .uart_rx_i       ( soc_uart_rx_i ),
    .uart_tx_o       ( soc_uart_tx_o ),

    .gpio_i          ( soc_gpio_i        ),             
    .gpio_o          ( soc_gpio_o        ),            
    .gpio_out_en_o   ( soc_gpio_out_en_o ),

    .neopixel_data_o ( soc_neopixel_data_o ),

    .uart2_rxd_i     ( soc_uart2_rxd_i   ),    
    .uart2_txd_o     ( soc_uart2_txd_o   ),   
    .uart2_cts_n_i   ( soc_uart2_cts_n_i ), 
    .uart2_dsr_n_i   ( soc_uart2_dsr_n_i ),  
    .uart2_ri_n_i    ( soc_uart2_ri_n_i  ), 
    .uart2_cd_n_i    ( soc_uart2_cd_n_i  ),   
    .uart2_rts_n_o   ( soc_uart2_rts_n_o ),
    .uart2_dtr_n_o   ( soc_uart2_dtr_n_o )   
  );

endmodule
