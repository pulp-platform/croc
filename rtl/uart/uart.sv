`include "common_cells/registers.svh"

module uart #(
    /// The OBI configuration for all ports.
    parameter obi_pkg::obi_cfg_t ObiCfg = obi_pkg::ObiDefaultConfig,
    /// OBI request type
    parameter type obi_req_t = logic,
    /// OBI response type
    parameter type obi_rsp_t = logic
) (
    input logic      clk_i,  // Primary input clock, the control interface is synchronous to this clock. 
    input logic      rst_ni, // Asynchronous active-low reset
    
    // OBI request interface
    input  obi_req_t obi_req_i, // a.addr, a.we, a.be, a.wdata, a.aid, a.a_optional | rready, req
    // OBI response interface
    output obi_rsp_t obi_rsp_o, // r.rdata, r.rid, r.err, r.r_optional | gnt, rvalid
    
    output logic     irq,    // Interrupt line 
    output logic     irq_n,  // Negated Interrupt line 

    input  logic     rxd_i,    // Serial Input 
    output logic     txd_o,    // Serial Output

    input  logic     cts_n,  // Modem Inp Clear To Send
    input  logic     dsr_n,  // Modem Inp Data Send Request
    input  logic     ri_n,   // Modem Inp Ring Indicator
    input  logic     cd_n,   // Modem Inp Carrier Detect
    output logic     rts_n,  // Modem Oup Ready To Send
    output logic     dtr_n   // Modem Oup DaTa Ready
    //output logic     out1_n, // Modem Oup DaTa Ready, Optional GPIO
    //output logic     out2_n, // Modem Oup DaTa Ready, Optional GPIO
);
  // Import the UART package for definitions and parameters
  import uart_pkg::*;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // INSTANTIATIONS //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //--Receiver-and-Transmitter-Interface----------------------------------------------------------
  logic rxd;
  logic txd;

  //--Receiver-Interrupt-Interface----------------------------------------------------------------
  logic rx_fifo_trigger;
  logic rx_timeout;

  //--Register-Interface-Signals------------------------------------------------------------------
  uart_reg_read_t  reg_read;
  uart_reg_write_t reg_write;
  
  ////////////////////////////////////////////////////////////////////////////////////////////////
  // REGISTER INTERFACE //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  uart_register #(
    .obi_req_t     (obi_req_t),
    .obi_rsp_t     (obi_rsp_t)
  ) i_uart_register (
    .clk_i,
    .rst_ni,

    .obi_req_i,
    .obi_rsp_o,

    .uart_reg_read (reg_read),
    .uart_reg_write(reg_write)
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // MODEM CONTROL //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  uart_modem #(
  ) i_uart_modem (
    .clk_i,
    .rst_ni,

    .reg_read,
    .reg_write,

    .cts_n,  
    .dsr_n,  
    .ri_n,  
    .cd_n,  
    .rts_n, 
    .dtr_n   
  );

  //--Loopback-Mode-------------------------------------------------------------------------------
  assign txd_o = (reg_read.mcr.strct.loopback == 1'b1) ? 1'b1 : txd;
  assign rxd   = (reg_read.mcr.strct.loopback == 1'b1) ? txd  : rxd_i;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // BAUDRATE GENERATION //
  ////////////////////////////////////////////////////////////////////////////////////////////////
  
  uart_baudgeneration #(
  ) i_uart_baudgeneration (
    .clk_i,
    .rst_ni,

    .reg_read,

    .oversample_rate_o     (oversample_rate_i),
    .oversample_rate_edge_o(oversample_rate_edge_i),
    .double_baud_rate_o    (double_baud_rate_i),
    .baud_rate_o           (baud_rate_i)
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // RECEIVE //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  uart_rx # (
  ) i_uart_rx (
    .clk_i,
    .rst_ni,
    
    .oversample_rate     (oversample_rate_i),
    .oversample_rate_edge(oversample_rate_edge_i),
    .baud_rate           (baud_rate_i),

    .rxd,

    .reg_read,
    .reg_write,

    .trigger             (rx_fifo_trigger), 
    .timeout             (rx_timeout)
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // TRANSMIT //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  uart_tx # (
  ) i_uart_tx (
    .clk_i,
    .rst_ni,

    .baud_rate       (baud_rate_i),
    .oversample_rate (oversample_rate_i),
    .double_baud_rate(double_baud_rate_i),

    .txd,

    .reg_read,
    .reg_write
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // INTERRUPT CONTROL //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  uart_interrupts #(
    parameters
  ) i_uart_interrupts (
    .clk_i,
    .rst_ni,

    .reg_read,
    .reg_write,

    .rx_fifo_trigger,
    .rx_timeout,

    .irq,
    .irq_n
  );

endmodule