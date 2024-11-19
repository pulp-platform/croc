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
  reg_read_t         reg_read;
  reg_write_t        reg_write;
  rx_reg_write_t     rx_reg_write;
  tx_reg_write_t     tx_reg_write;
  modem_reg_write_t  modem_reg_write;
  intrpt_reg_write_t intrpt_reg_write;

  //--Baudenable-Interface-Signals----------------------------------------------------------------
  logic oversample_rate_edge_i;
  logic double_rate_edge_i;
  logic baud_rate_edge_i;
  
  ////////////////////////////////////////////////////////////////////////////////////////////////
  // REGISTER INTERFACE //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  always_comb begin
    reg_write.rhr             = rx_reg_write.rhr;
    reg_write.isr             = intrpt_reg_write.isr;
    reg_write.fcr_rx_fifo_rst = rx_reg_write.fcr_rx_fifo_rst;
    reg_write.fcr_tx_fifo_rst = tx_reg_write.fcr_tx_fifo_rst;
    reg_write.lsr.arr         = { rx_reg_write.lsr_fifo_err, tx_reg_write.lsr_tx_empty , 
                                  tx_reg_write.lsr_thr_empty, rx_reg_write.lsr_break_intrpt, 
                                  rx_reg_write.lsr_frame_err , rx_reg_write.lsr_par_err,
                                  rx_reg_write.lsr_overrun_err , rx_reg_write.lsr_data_ready };
    reg_write.msr             = modem_reg_write.msr;

    reg_write.fcr_rx_valid    = rx_reg_write.fcr_rx_valid;
    reg_write.fcr_tx_valid    = tx_reg_write.fcr_tx_valid;
    reg_write.rhr_valid       = rx_reg_write.rhr_valid;
    reg_write.isr_valid       = intrpt_reg_write.isr_valid;
    reg_write.lsr_valid       = { rx_reg_write.lsr_valid[5], tx_reg_write.lsr_valid,
                                  rx_reg_write.lsr_valid[4:0] };
    reg_write.msr_valid       = modem_reg_write.msr_valid;
  end

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

    .cts_n,  
    .dsr_n,  
    .ri_n,  
    .cd_n,  
    .rts_n, 
    .dtr_n,

    .reg_read,
    .reg_write (modem_reg_write)
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

    .oversample_rate_edge_o(oversample_rate_edge_i),
    .double_rate_edge_o    (double_rate_edge_i),
    .baud_rate_edge_o      (baud_rate_edge_i),

    .reg_read
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // RECEIVE //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  uart_rx # (
  ) i_uart_rx (
    .clk_i,
    .rst_ni,
    
    .oversample_rate_edge(oversample_rate_edge_i),
    .baud_rate_edge      (baud_rate_edge_i),

    .rxd,

    .trigger             (rx_fifo_trigger), 
    .timeout             (rx_timeout),

    .reg_read,
    .reg_write           (rx_reg_write)
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // TRANSMIT //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  uart_tx # (
  ) i_uart_tx (
    .clk_i,
    .rst_ni,

    .baud_rate_edge  (baud_rate_edge_i),
    .double_rate_edge(double_rate_edge_i),

    .txd,

    .reg_read,
    .reg_write       (tx_reg_write)
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // INTERRUPT CONTROL //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  uart_interrupts #(
  ) i_uart_interrupts (
    .clk_i,
    .rst_ni,

    .rx_fifo_trigger,
    .rx_timeout,

    .irq,
    .irq_n,

    .reg_read,
    .reg_x     (reg_write),
    .reg_write (intrpt_reg_write)
  );

endmodule
