// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

module croc_domain import croc_pkg::*; #(
  parameter int unsigned GpioCount = 16
) (
  input  logic      clk_i,
  input  logic      rst_ni,
  input  logic      ref_clk_i,
  input  logic      testmode_i,
  input  logic      fetch_en_i,

  input  logic      jtag_tck_i,
  input  logic      jtag_tdi_i,
  output logic      jtag_tdo_o,
  input  logic      jtag_tms_i,
  input  logic      jtag_trst_ni,

  input  logic      uart_rx_i,
  output logic      uart_tx_o,

  input  logic [GpioCount-1:0] gpio_i,        // Input from GPIO pins
  output logic [GpioCount-1:0] gpio_o,        // Output to GPIO pins
  output logic [GpioCount-1:0] gpio_out_en_o, // Output enable signal; 0 -> input, 1 -> output

  output logic [GpioCount-1:0] gpio_in_sync_o, // synchronized GPIO inputs
  
  /// User OBI interface
  /// User as subordinate (from core to user module) 
  /// Address space 0x2000_0000 - 0x8000_0000
`ifdef RELOBI
  output sbr_relobi_req_t user_sbr_obi_req_o,
  input  sbr_relobi_rsp_t user_sbr_obi_rsp_i,
`else
  output sbr_obi_req_t user_sbr_obi_req_o,
  input  sbr_obi_rsp_t user_sbr_obi_rsp_i,
`endif

  /// User as manager (from user module to SRAM/peripherals)
`ifdef RELOBI
  input  mgr_relobi_req_t user_mgr_obi_req_i,
  output mgr_relobi_rsp_t user_mgr_obi_rsp_o,
`else
  input  mgr_obi_req_t user_mgr_obi_req_i,
  output mgr_obi_rsp_t user_mgr_obi_rsp_o,
`endif

  input  logic [NumExternalIrqs-1:0] interrupts_i,
  output logic core_busy_o
);

  // -----------------
  // Control Signals
  // -----------------
  logic sram_impl; // soc_ctrl -> SRAM config signals
  logic debug_req;
  logic fetch_enable;
  logic [31:0] boot_addr;

  // interrupts (irqs)
  logic uart_irq;
  logic gpio_irq;
  logic timer0_irq0;
  logic timer0_irq1;
  logic [15:0] interrupts;
  always_comb begin
    interrupts    = '0;
    interrupts[0] = timer0_irq1;
    interrupts[1] = uart_irq;
    interrupts[2] = gpio_irq;
    interrupts[3+:NumExternalIrqs] = interrupts_i;
  end

  // ----------------------------
  // Manager buses into crossbar
  // ----------------------------

  // Core instr bus
`ifdef RELOBI
  mgr_relobi_req_t core_instr_obi_req;
  mgr_relobi_rsp_t core_instr_obi_rsp;
`else
  mgr_obi_req_t core_instr_obi_req;
  mgr_obi_rsp_t core_instr_obi_rsp;
  assign core_instr_obi_req.a.aid = '0;
  assign core_instr_obi_req.a.we = '0;
  assign core_instr_obi_req.a.be = '1;
  assign core_instr_obi_req.a.wdata = '0;
  assign core_instr_obi_req.a.a_optional = '0;
`endif

  // Core data bus
`ifdef RELOBI
  mgr_relobi_req_t core_data_obi_req;
  mgr_relobi_rsp_t core_data_obi_rsp;
`else
  mgr_obi_req_t core_data_obi_req;
  mgr_obi_rsp_t core_data_obi_rsp;
  assign core_data_obi_req.a.aid = '0;
  assign core_data_obi_req.a.a_optional = '0;
`endif

  // dbg req bus
  mgr_obi_req_t dbg_req_obi_req;
  mgr_obi_rsp_t dbg_req_obi_rsp;
  assign dbg_req_obi_req.a.aid = '0;
  assign dbg_req_obi_req.a.a_optional = '0;

  // ----------------------------------
  // Subordinate buses out of crossbar
  // ----------------------------------
  // Main xbar subordinate buses, must align with addr map indices!
`ifdef RELOBI
  sbr_relobi_req_t [NumXbarSbr-1:0] all_sbr_obi_req;
  sbr_relobi_rsp_t [NumXbarSbr-1:0] all_sbr_obi_rsp;
`else
  sbr_obi_req_t [NumXbarSbr-1:0] all_sbr_obi_req;
  sbr_obi_rsp_t [NumXbarSbr-1:0] all_sbr_obi_rsp;
`endif

  // user bus defined in module port

  // mem bank buses
`ifdef RELOBI
  sbr_relobi_req_t [NumSramBanks-1:0] xbar_mem_bank_obi_req;
  sbr_relobi_rsp_t [NumSramBanks-1:0] xbar_mem_bank_obi_rsp;
`else
  sbr_obi_req_t [NumSramBanks-1:0] xbar_mem_bank_obi_req;
  sbr_obi_rsp_t [NumSramBanks-1:0] xbar_mem_bank_obi_rsp;
`endif

  // periph bus
`ifdef RELOBI
  sbr_relobi_req_t xbar_periph_obi_req;
  sbr_relobi_rsp_t xbar_periph_obi_rsp;
`else
  sbr_obi_req_t xbar_periph_obi_req;
  sbr_obi_rsp_t xbar_periph_obi_rsp;
`endif

  // error (connected to bus error slave)
`ifdef RELOBI
  sbr_relobi_req_t xbar_error_obi_req;
  sbr_relobi_rsp_t xbar_error_obi_rsp;
`else
  sbr_obi_req_t xbar_error_obi_req;
  sbr_obi_rsp_t xbar_error_obi_rsp;
`endif

  assign xbar_error_obi_req          = all_sbr_obi_req[XbarError];
  assign all_sbr_obi_rsp[XbarError]  = xbar_error_obi_rsp;

`ifdef RELOBI
  relobi_cut #(
    .ObiCfg ( SbrObiCfg ),
    .obi_req_t ( sbr_relobi_req_t ),
    .obi_rsp_t ( sbr_relobi_rsp_t ),
    .obi_a_chan_t ( sbr_relobi_a_chan_t ),
    .obi_r_chan_t ( sbr_relobi_r_chan_t ),
    .a_optional_t ( logic ),
    .r_optional_t ( logic )
  ) i_periph_cut (
    .clk_i ( clk_i ),
    .rst_ni ( rst_ni ),
    .sbr_port_req_i ( all_sbr_obi_req[XbarPeriph] ),
    .sbr_port_rsp_o ( all_sbr_obi_rsp[XbarPeriph] ),
    .mgr_port_req_o ( xbar_periph_obi_req ),
    .mgr_port_rsp_i ( xbar_periph_obi_rsp ),
    .fault_o ()
  );
`else
  obi_cut #(
    .ObiCfg ( SbrObiCfg ),
    .obi_a_chan_t ( sbr_obi_a_chan_t ),
    .obi_r_chan_t ( sbr_obi_r_chan_t ),
    .obi_req_t ( sbr_obi_req_t ),
    .obi_rsp_t ( sbr_obi_rsp_t )
  ) i_periph_cut (
    .clk_i ( clk_i ),
    .rst_ni ( rst_ni ),
    .sbr_port_req_i ( all_sbr_obi_req[XbarPeriph] ),
    .sbr_port_rsp_o ( all_sbr_obi_rsp[XbarPeriph] ),
    .mgr_port_req_o ( xbar_periph_obi_req ),
    .mgr_port_rsp_i ( xbar_periph_obi_rsp )
  );
`endif

  for (genvar i = 0; i < NumSramBanks; i++) begin : gen_xbar_sbr_connect
    assign xbar_mem_bank_obi_req[i]     = all_sbr_obi_req[XbarBank0+i];
    assign all_sbr_obi_rsp[XbarBank0+i] = xbar_mem_bank_obi_rsp[i];
  end

  assign user_sbr_obi_req_o          = all_sbr_obi_req[XbarUser];
  assign all_sbr_obi_rsp[XbarUser]   = user_sbr_obi_rsp_i;


  // -----------------
  // Peripheral buses
  // -----------------
  // array of subordinate buses from peripheral demultiplexer
`ifdef RELOBI
  sbr_relobi_req_t [NumPeriphs-1:0] all_periph_obi_req;
  sbr_relobi_rsp_t [NumPeriphs-1:0] all_periph_obi_rsp;
`else
  sbr_obi_req_t [NumPeriphs-1:0] all_periph_obi_req;
  sbr_obi_rsp_t [NumPeriphs-1:0] all_periph_obi_rsp;
`endif

  // Error bus
`ifdef RELOBI
  sbr_relobi_req_t error_obi_req;
  sbr_relobi_rsp_t error_obi_rsp;
`else
  sbr_obi_req_t error_obi_req;
  sbr_obi_rsp_t error_obi_rsp;
`endif

  // Debug mem bus
  sbr_obi_req_t dbg_mem_obi_req;
  sbr_obi_rsp_t dbg_mem_obi_rsp;

  // SoC control bus
`ifdef RELOBI
  sbr_relobi_req_t soc_ctrl_obi_req;
  sbr_relobi_rsp_t soc_ctrl_obi_rsp;
`else
  sbr_obi_req_t soc_ctrl_obi_req;
  sbr_obi_rsp_t soc_ctrl_obi_rsp;
`endif

  // UART periph bus
`ifdef TARGET_UART_TMRG
  sbr_obi_req_t [2:0] uart_obi_req;
  sbr_obi_rsp_t [2:0] uart_obi_rsp;
`else // TARGET_UART_TMRG
  sbr_obi_req_t uart_obi_req;
  sbr_obi_rsp_t uart_obi_rsp;
`endif

  // GPIO periph bus
  sbr_obi_req_t gpio_obi_req;
  sbr_obi_rsp_t gpio_obi_rsp;

  // Timer periph bus
`ifdef TARGET_TIMER_UNIT_TMRG
  sbr_obi_req_t [2:0] timer_obi_req;
  sbr_obi_rsp_t [2:0] timer_obi_rsp;
`else // TARGET_TIMER_UNIT_TMRG
  sbr_obi_req_t timer_obi_req;
  sbr_obi_rsp_t timer_obi_rsp;
`endif // TARGET_TIMER_UNIT_TMRG

  // HMR control bus
`ifdef TARGET_RELCORE
  sbr_obi_req_t [2:0] hmr_ctrl_obi_req;
  sbr_obi_rsp_t [2:0] hmr_ctrl_obi_rsp;
  apb_req_t [2:0] hmr_ctrl_apb_req;
  apb_resp_t [2:0] hmr_ctrl_apb_rsp;
`endif

  // Fanout to individual peripherals
  assign error_obi_req                     = all_periph_obi_req[PeriphError];
  assign all_periph_obi_rsp[PeriphError]   = error_obi_rsp;
  assign soc_ctrl_obi_req                  = all_periph_obi_req[PeriphSocCtrl];
  assign all_periph_obi_rsp[PeriphSocCtrl] = soc_ctrl_obi_rsp;
`ifdef RELOBI
  relobi_decoder #(
    .Cfg (SbrObiCfg),
    .relobi_req_t (sbr_relobi_req_t),
    .relobi_rsp_t (sbr_relobi_rsp_t),
    .obi_req_t (sbr_obi_req_t),
    .obi_rsp_t (sbr_obi_rsp_t),
    .a_optional_t (logic),
    .r_optional_t (logic)
  ) i_dbg_mem_decoder (
    .rel_req_i ( all_periph_obi_req[PeriphDebug] ),
    .rel_rsp_o ( all_periph_obi_rsp[PeriphDebug] ),
    .req_o ( dbg_mem_obi_req ),
    .rsp_i ( dbg_mem_obi_rsp ),
    .fault_o ()
  );
`ifdef TARGET_UART_TMRG
  sbr_relobi_rsp_t uart_relobi_rsp [2:0];
  relobi_tmr_r #(
    .ObiCfg       ( SbrObiCfg ),
    .obi_r_chan_t ( sbr_relobi_r_chan_t ),
    .r_optional_t ( logic )
  ) i_hmr_ctrl_tmr (
    .three_r_i ( {uart_relobi_rsp[2].r, uart_relobi_rsp[1].r, uart_relobi_rsp[0].r} ),
    .voted_r_o ( all_periph_obi_rsp[PeriphUart].r ),
    .fault_o   (  )
  );
  for (genvar i = 0; i < 3; i++) begin : gen_uart_obi_triple
    assign all_periph_obi_rsp[PeriphUart].gnt[i] = uart_relobi_rsp[i].gnt[0];
    assign all_periph_obi_rsp[PeriphUart].rvalid[i] = uart_relobi_rsp[i].rvalid[0];

    relobi_decoder #(
      .Cfg (SbrObiCfg),
      .relobi_req_t (sbr_relobi_req_t),
      .relobi_rsp_t (sbr_relobi_rsp_t),
      .obi_req_t (sbr_obi_req_t),
      .obi_rsp_t (sbr_obi_rsp_t),
      .a_optional_t (logic),
      .r_optional_t (logic)
    ) i_uart_decoder_tmr_part (
      .rel_req_i ( all_periph_obi_req[PeriphUart] ),
      .rel_rsp_o ( uart_relobi_rsp[i] ),
      .req_o ( uart_obi_req[i] ),
      .rsp_i ( uart_obi_rsp[i] ),
      .fault_o ()
    );
  end
`else // TARGET_UART_TMRG
  relobi_decoder #(
    .Cfg (SbrObiCfg),
    .relobi_req_t (sbr_relobi_req_t),
    .relobi_rsp_t (sbr_relobi_rsp_t),
    .obi_req_t (sbr_obi_req_t),
    .obi_rsp_t (sbr_obi_rsp_t),
    .a_optional_t (logic),
    .r_optional_t (logic)
  ) i_uart_decoder (
    .rel_req_i ( all_periph_obi_req[PeriphUart] ),
    .rel_rsp_o ( all_periph_obi_rsp[PeriphUart] ),
    .req_o ( uart_obi_req ),
    .rsp_i ( uart_obi_rsp ),
    .fault_o ()
  );
`endif // TARGET_UART_TMRG
  relobi_decoder #(
    .Cfg (SbrObiCfg),
    .relobi_req_t (sbr_relobi_req_t),
    .relobi_rsp_t (sbr_relobi_rsp_t),
    .obi_req_t (sbr_obi_req_t),
    .obi_rsp_t (sbr_obi_rsp_t),
    .a_optional_t (logic),
    .r_optional_t (logic)
  ) i_gpio_decoder (
    .rel_req_i ( all_periph_obi_req[PeriphGpio] ),
    .rel_rsp_o ( all_periph_obi_rsp[PeriphGpio] ),
    .req_o ( gpio_obi_req ),
    .rsp_i ( gpio_obi_rsp ),
    .fault_o ()
  );
`ifdef TARGET_TIMER_UNIT_TMRG
  sbr_relobi_rsp_t timer_relobi_rsp [2:0];
  relobi_tmr_r #(
    .ObiCfg       ( SbrObiCfg ),
    .obi_r_chan_t ( sbr_relobi_r_chan_t ),
    .r_optional_t ( logic )
  ) i_timer_tmr (
    .three_r_i ( {timer_relobi_rsp[2].r, timer_relobi_rsp[1].r, timer_relobi_rsp[0].r} ),
    .voted_r_o ( all_periph_obi_rsp[PeriphTimer].r ),
    .fault_o   (  )
  );
  for (genvar i = 0; i < 3; i++) begin :gen_timer_obi_triple
    assign all_periph_obi_rsp[PeriphTimer].gnt[i] = timer_relobi_rsp[i].gnt[0];
    assign all_periph_obi_rsp[PeriphTimer].rvalid[i] = timer_relobi_rsp[i].rvalid[0];

    relobi_decoder #(
      .Cfg (SbrObiCfg),
      .relobi_req_t (sbr_relobi_req_t),
      .relobi_rsp_t (sbr_relobi_rsp_t),
      .obi_req_t (sbr_obi_req_t),
      .obi_rsp_t (sbr_obi_rsp_t),
      .a_optional_t (logic),
      .r_optional_t (logic)
    ) i_timer_decoder_tmr_part (
      .rel_req_i ( all_periph_obi_req[PeriphTimer] ),
      .rel_rsp_o ( timer_relobi_rsp[i] ),
      .req_o ( timer_obi_req[i] ),
      .rsp_i ( timer_obi_rsp[i] ),
      .fault_o ()
    );
  end
`else // TARGET_TIMER_UNIT_TMRG
  relobi_decoder #(
    .Cfg (SbrObiCfg),
    .relobi_req_t (sbr_relobi_req_t),
    .relobi_rsp_t (sbr_relobi_rsp_t),
    .obi_req_t (sbr_obi_req_t),
    .obi_rsp_t (sbr_obi_rsp_t),
    .a_optional_t (logic),
    .r_optional_t (logic)
  ) i_timer_decoder (
    .rel_req_i ( all_periph_obi_req[PeriphTimer] ),
    .rel_rsp_o ( all_periph_obi_rsp[PeriphTimer] ),
    .req_o ( timer_obi_req ),
    .rsp_i ( timer_obi_rsp ),
    .fault_o ()
  );
`endif // TARGET_TIMER_UNIT_TMRG
`ifdef TARGET_RELCORE
  sbr_relobi_rsp_t hmr_ctrl_relobi_rsp [2:0];
  relobi_tmr_r #(
    .ObiCfg       ( SbrObiCfg ),
    .obi_r_chan_t ( sbr_relobi_r_chan_t ),
    .r_optional_t ( logic )
  ) i_hmr_ctrl_tmr_obi_r (
    .three_r_i ( {hmr_ctrl_relobi_rsp[2].r, hmr_ctrl_relobi_rsp[1].r, hmr_ctrl_relobi_rsp[0].r} ),
    .voted_r_o ( all_periph_obi_rsp[PeriphHmrCtrl].r ),
    .fault_o   (  )
  );
  for (genvar i = 0; i < 3; i++) begin : gen_hmr_ctrl_decoder_tmr_part
    assign all_periph_obi_rsp[PeriphHmrCtrl].gnt[i] = hmr_ctrl_relobi_rsp[i].gnt[0];
    assign all_periph_obi_rsp[PeriphHmrCtrl].rvalid[i] = hmr_ctrl_relobi_rsp[i].rvalid[0];

    relobi_decoder #(
      .Cfg (SbrObiCfg),
      .relobi_req_t (sbr_relobi_req_t),
      .relobi_rsp_t (sbr_relobi_rsp_t),
      .obi_req_t (sbr_obi_req_t),
      .obi_rsp_t (sbr_obi_rsp_t),
      .a_optional_t (logic),
      .r_optional_t (logic)
    ) i_hmr_ctrl_decoder_tmr_part (
      .rel_req_i ( all_periph_obi_req[PeriphHmrCtrl] ),
      .rel_rsp_o ( hmr_ctrl_relobi_rsp[i] ),
      .req_o ( hmr_ctrl_obi_req[i] ),
      .rsp_i ( hmr_ctrl_obi_rsp[i] ),
      .fault_o ()
    );
    obi_to_apb #(
      .ObiCfg    ( SbrObiCfg     ),
      .obi_req_t ( sbr_obi_req_t ),
      .obi_rsp_t ( sbr_obi_rsp_t ),
      .apb_req_t ( apb_req_t     ),
      .apb_rsp_t ( apb_resp_t    )
    ) i_hmr_ctrl_apb_tmr_part (
      .clk_i ( clk_i ),
      .rst_ni ( rst_ni ),
      .obi_req_i ( hmr_ctrl_obi_req[i] ),
      .obi_rsp_o ( hmr_ctrl_obi_rsp[i] ),
      .apb_req_o ( hmr_ctrl_apb_req[i] ),
      .apb_rsp_i ( hmr_ctrl_apb_rsp[i] )
    );
  end
`else // TARGET_RELCORE
  relobi_err_sbr #(
    .ObiCfg ( SbrObiCfg ),
    .obi_req_t ( sbr_relobi_req_t ),
    .obi_rsp_t ( sbr_relobi_rsp_t ),
    .a_optional_t ( logic ),
    .r_optional_t ( logic ),
    .NumMaxTrans ( 1 ),
    .RspData ( 32'hBADCAB1E )
  ) i_err_sbr (
    .clk_i ( clk_i ),
    .rst_ni ( rst_ni ),
    .testmode_i ( testmode_i ),
    .obi_req_i ( all_periph_obi_req[PeriphHmrCtrl] ),
    .obi_rsp_o ( all_periph_obi_rsp[PeriphHmrCtrl] )
  );
`endif // TARGET_RELCORE
`else // RELOBI
  assign dbg_mem_obi_req                   = all_periph_obi_req[PeriphDebug];
  assign all_periph_obi_rsp[PeriphDebug]   = dbg_mem_obi_rsp;
  assign uart_obi_req                      = all_periph_obi_req[PeriphUart];
  assign all_periph_obi_rsp[PeriphUart]    = uart_obi_rsp;
  assign gpio_obi_req                      = all_periph_obi_req[PeriphGpio];
  assign all_periph_obi_rsp[PeriphGpio]    = gpio_obi_rsp;
  assign timer_obi_req                     = all_periph_obi_req[PeriphTimer];
  assign all_periph_obi_rsp[PeriphTimer]   = timer_obi_rsp;
`ifdef TARGET_RELCORE
  assign all_periph_obi_rsp[PeriphHmrCtrl] = hmr_ctrl_obi_rsp[0];
  assign hmr_ctrl_obi_req[0]               = all_periph_obi_req[PeriphHmrCtrl];
  obi_to_apb #(
    .ObiCfg    ( SbrObiCfg     ),
    .obi_req_t ( sbr_obi_req_t ),
    .obi_rsp_t ( sbr_obi_rsp_t ),
    .apb_req_t ( apb_req_t     ),
    .apb_rsp_t ( apb_resp_t    )
  ) i_hmr_ctrl_apb (
    .clk_i ( clk_i ),
    .rst_ni ( rst_ni ),
    .obi_req_i ( hmr_ctrl_obi_req[0] ),
    .obi_rsp_o ( hmr_ctrl_obi_rsp[0] ),
    .apb_req_o ( hmr_ctrl_apb_req[0] ),
    .apb_rsp_i ( hmr_ctrl_apb_rsp[0] )
  );
  for (genvar i = 1; i < 3; i++) begin : gen_hmr_ctrl_decoder
    assign hmr_ctrl_apb_req[i] = hmr_ctrl_apb_req[0];
  end
`else // TARGET_RELCORE
  obi_err_sbr #(
    .ObiCfg ( SbrObiCfg ),
    .obi_req_t ( sbr_obi_req_t ),
    .obi_rsp_t ( sbr_obi_rsp_t ),
    .NumMaxTrans ( 1             ),
    .RspData     ( 32'hBADCAB1E  )
  ) i_obi_err_sbr (
    .clk_i ( clk_i ),
    .rst_ni ( rst_ni ),
    .testmode_i ( testmode_i ),
    .obi_req_i ( all_periph_obi_req[PeriphHmrCtrl] ),
    .obi_rsp_o ( all_periph_obi_rsp[PeriphHmrCtrl] )
  );
`endif // TARGET_RELCORE
`endif // RELOBI

  // -----------------
  // Core
  // -----------------
  core_wrap #(
  ) i_core_wrap (
    .clk_i,
    .rst_ni,
    .ref_clk_i,
    .test_enable_i    ( testmode_i  ),

    .irqs_i           ( interrupts  ),
    .timer0_irq_i     ( timer0_irq0 ),

    .boot_addr_i      ( boot_addr   ),

`ifdef RELOBI
    .rel_instr_req_o  ( core_instr_obi_req ),
    .rel_instr_rsp_i  ( core_instr_obi_rsp ),
    .rel_data_req_o   ( core_data_obi_req  ),
    .rel_data_rsp_i   ( core_data_obi_rsp  ),
`else
    .instr_req_o      ( core_instr_obi_req.req     ),
    .instr_gnt_i      ( core_instr_obi_rsp.gnt     ),
    .instr_rvalid_i   ( core_instr_obi_rsp.rvalid  ),
    .instr_addr_o     ( core_instr_obi_req.a.addr  ),
    .instr_rdata_i    ( core_instr_obi_rsp.r.rdata ),
    .instr_err_i      ( core_instr_obi_rsp.r.err   ),

    .data_req_o       ( core_data_obi_req.req      ),
    .data_gnt_i       ( core_data_obi_rsp.gnt      ),
    .data_rvalid_i    ( core_data_obi_rsp.rvalid   ),
    .data_we_o        ( core_data_obi_req.a.we     ),
    .data_be_o        ( core_data_obi_req.a.be     ),
    .data_addr_o      ( core_data_obi_req.a.addr   ),
    .data_wdata_o     ( core_data_obi_req.a.wdata  ),
    .data_rdata_i     ( core_data_obi_rsp.r.rdata  ),
    .data_err_i       ( core_data_obi_rsp.r.err    ),
`endif

`ifdef TARGET_RELCORE
    .apb_req_i        ( hmr_ctrl_apb_req ),
    .apb_resp_o       ( hmr_ctrl_apb_rsp ),
`endif

    .debug_req_i      ( debug_req    ),
    .fetch_enable_i   ( fetch_enable ),

    .core_busy_o     ( core_busy_o )
  );

  // -----------------
  // Debug Module
  // -----------------

  localparam dm::hartinfo_t HARTINFO = '{
    zero1: '0,
    nscratch: 2,
    zero0: '0,
    dataaccess: 1'b1,
    datasize: dm::DataCount,
    dataaddr: dm::DataAddr
  };
  dm::hartinfo_t hartinfo = HARTINFO;

  logic dmi_rst_n, dmi_req_valid, dmi_req_ready, dmi_resp_valid, dmi_resp_ready;
  dm::dmi_req_t dmi_req;
  dm::dmi_resp_t dmi_resp;

  dmi_jtag #(
    .IdcodeValue ( PulpJtagIdCode )
  ) i_dmi_jtag (
    .clk_i,
    .rst_ni,
    .testmode_i,

    .dmi_rst_no       ( dmi_rst_n      ),
    .dmi_req_o        ( dmi_req        ),
    .dmi_req_valid_o  ( dmi_req_valid  ),
    .dmi_req_ready_i  ( dmi_req_ready  ),

    .dmi_resp_i       ( dmi_resp       ),
    .dmi_resp_ready_o ( dmi_resp_ready ),
    .dmi_resp_valid_i ( dmi_resp_valid ),

    .tck_i            ( jtag_tck_i     ),
    .tms_i            ( jtag_tms_i     ),
    .trst_ni          ( jtag_trst_ni   ),
    .td_i             ( jtag_tdi_i     ),
    .td_o             ( jtag_tdo_o     ),
    .tdo_oe_o         ()
  );

  dm_obi_top #(
    .BusWidth   ( SbrObiCfg.DataWidth ),
    .IdWidth    ( SbrObiCfg.IdWidth   )
  ) i_dm_top (
    .clk_i,
    .rst_ni,
    .testmode_i,
    .ndmreset_o           (),
    .dmactive_o           (),
    .debug_req_o          ( debug_req  ),
    .unavailable_i        ( 1'b0       ),
    .hartinfo_i           ( hartinfo   ),

    .slave_req_i          ( dbg_mem_obi_req.req     ),
    .slave_we_i           ( dbg_mem_obi_req.a.we    ),
    .slave_addr_i         ( dbg_mem_obi_req.a.addr  ),
    .slave_be_i           ( dbg_mem_obi_req.a.be    ),
    .slave_wdata_i        ( dbg_mem_obi_req.a.wdata ),
    .slave_aid_i          ( dbg_mem_obi_req.a.aid   ),
    .slave_gnt_o          ( dbg_mem_obi_rsp.gnt     ),
    .slave_rvalid_o       ( dbg_mem_obi_rsp.rvalid  ),
    .slave_rdata_o        ( dbg_mem_obi_rsp.r.rdata ),
    .slave_rid_o          ( dbg_mem_obi_rsp.r.rid   ),

    .master_req_o         ( dbg_req_obi_req.req     ),
    .master_addr_o        ( dbg_req_obi_req.a.addr  ),
    .master_we_o          ( dbg_req_obi_req.a.we    ),
    .master_wdata_o       ( dbg_req_obi_req.a.wdata ),
    .master_be_o          ( dbg_req_obi_req.a.be    ),
    .master_gnt_i         ( dbg_req_obi_rsp.gnt     ),
    .master_rvalid_i      ( dbg_req_obi_rsp.rvalid  ),
    .master_rdata_i       ( dbg_req_obi_rsp.r.rdata ),
    .master_err_i         ( dbg_req_obi_rsp.r.err   ),
    .master_other_err_i   ( 1'b0                    ),

    .dmi_rst_ni           ( dmi_rst_n      ),
    .dmi_req_valid_i      ( dmi_req_valid  ),
    .dmi_req_ready_o      ( dmi_req_ready  ),
    .dmi_req_i            ( dmi_req        ),

    .dmi_resp_valid_o     ( dmi_resp_valid ),
    .dmi_resp_ready_i     ( dmi_resp_ready ),
    .dmi_resp_o           ( dmi_resp       )
  );
  // unused
  assign dbg_mem_obi_rsp.r.r_optional = 1'b0;
  assign dbg_mem_obi_rsp.r.err        = 1'b0;

  // -----------------
  // Main Interconnect
  // -----------------

`ifdef RELOBI
  mgr_relobi_req_t dbg_req_relobi_req;
  mgr_relobi_rsp_t dbg_req_relobi_rsp;

  relobi_encoder #(
    .Cfg (MgrObiCfg),
    .relobi_req_t (mgr_relobi_req_t),
    .relobi_rsp_t (mgr_relobi_rsp_t),
    .obi_req_t (mgr_obi_req_t),
    .obi_rsp_t (mgr_obi_rsp_t),
    .a_optional_t (logic),
    .r_optional_t (logic)
  ) i_dbg_req_encoder (
    .req_i (dbg_req_obi_req),
    .rsp_o (dbg_req_obi_rsp),
    .rel_req_o (dbg_req_relobi_req),
    .rel_rsp_i (dbg_req_relobi_rsp),
    .fault_o ()
  );

  relobi_xbar #(
    .SbrPortObiCfg      ( MgrObiCfg        ),
    .MgrPortObiCfg      ( SbrObiCfg        ),
    .sbr_port_obi_req_t ( mgr_relobi_req_t    ),
    .sbr_port_a_chan_t  ( mgr_relobi_a_chan_t ),
    .sbr_port_obi_rsp_t ( mgr_relobi_rsp_t    ),
    .sbr_port_r_chan_t  ( mgr_relobi_r_chan_t ),
    .mgr_port_obi_req_t ( sbr_relobi_req_t    ),
    .mgr_port_a_chan_t  ( sbr_relobi_a_chan_t ),
    .mgr_port_obi_rsp_t ( sbr_relobi_rsp_t    ),
    .mgr_port_r_chan_t  ( sbr_relobi_r_chan_t ),
    .a_optional_t ( logic ),
    .r_optional_t ( logic ),
    .NumSbrPorts        ( NumXbarManagers  ),
    .NumMgrPorts        ( NumXbarSbr       ),
    .NumMaxTrans        ( 2                ),
    .NumAddrRules       ( NumXbarSbrRules  ),
    .addr_map_rule_t    ( addr_map_rule_t  ),
    .UseIdForRouting    ( 1'b0             ),
    .Connectivity       ( '1               ),
    .TmrMap             ( 1'b1 ),
    .DecodeAbort        ( 1'b1 )
  ) i_main_xbar (
    .clk_i,
    .rst_ni,
    .testmode_i,

    .sbr_ports_req_i  ( {core_instr_obi_req, core_data_obi_req, dbg_req_relobi_req, user_mgr_obi_req_i } ), // from managers towards subordinates
    .sbr_ports_rsp_o  ( {core_instr_obi_rsp, core_data_obi_rsp, dbg_req_relobi_rsp, user_mgr_obi_rsp_o } ),
    .mgr_ports_req_o  ( all_sbr_obi_req ), // connections to subordinates
    .mgr_ports_rsp_i  ( all_sbr_obi_rsp ),

    .addr_map_i       ( {3{croc_addr_map}} ),
    .en_default_idx_i ( {3{4'b1111}}    ),
    .default_idx_i    ( '0              ),

    .fault_o ()
  );
`else
  obi_xbar #(
    .SbrPortObiCfg      ( MgrObiCfg        ),
    .MgrPortObiCfg      ( SbrObiCfg        ),
    .sbr_port_obi_req_t ( mgr_obi_req_t    ),
    .sbr_port_a_chan_t  ( mgr_obi_a_chan_t ),
    .sbr_port_obi_rsp_t ( mgr_obi_rsp_t    ),
    .sbr_port_r_chan_t  ( mgr_obi_r_chan_t ),
    .mgr_port_obi_req_t ( sbr_obi_req_t    ),
    .mgr_port_obi_rsp_t ( sbr_obi_rsp_t    ),
    .NumSbrPorts        ( NumXbarManagers  ),
    .NumMgrPorts        ( NumXbarSbr       ),
    .NumMaxTrans        ( 2                ),
    .NumAddrRules       ( NumXbarSbrRules  ),
    .addr_map_rule_t    ( addr_map_rule_t  ),
    .UseIdForRouting    ( 1'b0             ),
    .Connectivity       ( '1               )
  ) i_main_xbar (
    .clk_i,
    .rst_ni,
    .testmode_i,

    .sbr_ports_req_i  ( {core_instr_obi_req, core_data_obi_req, dbg_req_obi_req, user_mgr_obi_req_i } ), // from managers towards subordinates
    .sbr_ports_rsp_o  ( {core_instr_obi_rsp, core_data_obi_rsp, dbg_req_obi_rsp, user_mgr_obi_rsp_o } ),
    .mgr_ports_req_o  ( all_sbr_obi_req ), // connections to subordinates
    .mgr_ports_rsp_i  ( all_sbr_obi_rsp ),

    .addr_map_i       ( croc_addr_map   ),
    .en_default_idx_i ( 4'b1111          ),
    .default_idx_i    ( '0              )
  );
`endif

  // -----------------
  // Memories
  // -----------------

  for (genvar i = 0; i < NumSramBanks; i++) begin : gen_sram_bank
    logic bank_req, bank_we, bank_gnt, bank_single_err;
    logic [SbrObiCfg.AddrWidth-1:0] bank_byte_addr;
    logic [SramBankAddrWidth-1:0] bank_word_addr;
`ifdef RELOBI
    logic [SbrObiCfg.DataWidth+hsiao_ecc_pkg::min_ecc(SbrObiCfg.DataWidth)-1:0] bank_wdata, bank_rdata;
`else
    logic [SbrObiCfg.DataWidth-1:0] bank_wdata, bank_rdata;
    logic [SbrObiCfg.DataWidth/8-1:0] bank_be;
`endif

`ifdef RELOBI
    relobi_sram_shim #(
      .relobi_req_t ( sbr_relobi_req_t ),
      .relobi_rsp_t ( sbr_relobi_rsp_t ),
      .a_optional_t ( logic ),
      .r_optional_t ( logic ),
`else
    obi_sram_shim #(
      .obi_req_t ( sbr_obi_req_t ),
      .obi_rsp_t ( sbr_obi_rsp_t ),
`endif
      .ObiCfg    ( SbrObiCfg     )
    ) i_sram_shim (
      .clk_i,
      .rst_ni,

      .obi_req_i ( xbar_mem_bank_obi_req[i] ),
      .obi_rsp_o ( xbar_mem_bank_obi_rsp[i] ),

      .req_o   ( bank_req       ),
      .we_o    ( bank_we        ),
      .addr_o  ( bank_byte_addr ),
      .wdata_o ( bank_wdata     ),
`ifndef RELOBI
      .be_o    ( bank_be        ),
`endif

      .gnt_i   ( bank_gnt   ),
      .rdata_i ( bank_rdata )
`ifdef RELOBI
      ,.fault_o ()
`endif
    );

    assign bank_word_addr = bank_byte_addr[SbrObiCfg.AddrWidth-1:2];

    tc_sram_impl #(
      .NumWords  ( SramBankNumWords ),
`ifdef RELOBI
      .DataWidth ( 39 ),
      .SimInit ( "random" ),
`else
      .DataWidth ( 32 ),
`endif
      .NumPorts  (  1 ),
      .Latency   (  1 )
    ) i_sram (
      .clk_i,
      .rst_ni,

      .impl_i  ( sram_impl      ),
      .impl_o  ( ), // not connected

      .req_i   ( bank_req       ),
      .we_i    ( bank_we        ),
      .addr_i  ( bank_word_addr ),

      .wdata_i ( bank_wdata ),
`ifdef RELOBI
      .be_i    ( '1 ), // always write all data bits, no byte enables
`else
      .be_i    ( bank_be    ),
`endif
      .rdata_o ( bank_rdata )
    );

    assign bank_gnt = 1'b1;
  end


  // Xbar space error subordinate
`ifdef RELOBI
  relobi_err_sbr #(
    .obi_req_t   ( sbr_relobi_req_t ),
    .obi_rsp_t   ( sbr_relobi_rsp_t ),
    .a_optional_t ( logic ),
    .r_optional_t ( logic ),
`else
  obi_err_sbr #(
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
`endif
    .ObiCfg      ( SbrObiCfg     ),
    .NumMaxTrans ( 1             ),
    .RspData     ( 32'hBADCAB1E  )
  ) i_xbar_err (
    .clk_i,
    .rst_ni,
    .testmode_i,
    .obi_req_i  ( xbar_error_obi_req ),
    .obi_rsp_o  ( xbar_error_obi_rsp )

`ifdef RELOBI
    ,.fault_o ()
`endif
  );


  // -----------------
  // Peripherals
  // -----------------

  // demultiplex to peripherals according to address map
  logic [cf_math_pkg::idx_width(NumPeriphs)-1:0] periph_idx;

  addr_decode #(
    .NoIndices ( NumPeriphs                     ),
    .NoRules   ( NumPeriphRules                 ),
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ),
    .rule_t    ( addr_map_rule_t                ),
    .Napot     ( 1'b0                           )
  ) i_addr_decode_periphs (
    .addr_i           ( xbar_periph_obi_req.a.addr[31:0]  ),
    .addr_map_i       ( periph_addr_map             ),
    .idx_o            ( periph_idx                  ),
    .dec_valid_o      (),
    .dec_error_o      (),
    .en_default_idx_i ( 1'b1 ),
    .default_idx_i    ( '0 )
  );

`ifdef RELOBI
  relobi_demux #(
    .obi_req_t   ( sbr_relobi_req_t ),
    .obi_rsp_t   ( sbr_relobi_rsp_t ),
    .obi_r_chan_t ( sbr_relobi_r_chan_t ),
    .obi_r_optional_t ( logic ),
    .TmrSelect ( 1'b1 ),
`else
  obi_demux #(
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
`endif
    .ObiCfg      ( SbrObiCfg     ),
    .NumMgrPorts ( NumPeriphs    ),
    .NumMaxTrans ( 2             )
  ) i_obi_demux (
    .clk_i,
    .rst_ni,

`ifdef RELOBI
    .sbr_port_select_i ( {3{periph_idx}}           ),
`else
    .sbr_port_select_i ( periph_idx           ),
`endif
    .sbr_port_req_i    ( xbar_periph_obi_req  ),
    .sbr_port_rsp_o    ( xbar_periph_obi_rsp  ),

    .mgr_ports_req_o   ( all_periph_obi_req ),
    .mgr_ports_rsp_i   ( all_periph_obi_rsp )
`ifdef RELOBI
    ,.fault_o          ()
`endif
  );

  // Peripheral space error subordinate
`ifdef RELOBI
  relobi_err_sbr #(
    .obi_req_t   ( sbr_relobi_req_t ),
    .obi_rsp_t   ( sbr_relobi_rsp_t ),
    .a_optional_t ( logic ),
    .r_optional_t ( logic ),
`else
  obi_err_sbr #(
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
`endif
    .ObiCfg      ( SbrObiCfg     ),
    .NumMaxTrans ( 1             ),
    .RspData     ( 32'hBADCAB1E  )
  ) i_periph_err (
    .clk_i,
    .rst_ni,
    .testmode_i,
    .obi_req_i  ( error_obi_req ),
    .obi_rsp_o  ( error_obi_rsp )
`ifdef RELOBI
    ,.fault_o ()
`endif
  );

  // SoC Control
`ifdef RELOBI
  soc_ctrl_reg_pkg::soc_ctrl__in_t   hwif_in[3];
  soc_ctrl_reg_pkg::soc_ctrl__out_t  hwif_out[3];

  soc_ctrl_tmr_wrap #(
    .BootAddrDefault ( SramBaseAddr ),
    .ObiCfg    ( SbrObiCfg     ),
    .relobi_req_t ( sbr_relobi_req_t ),
    .relobi_rsp_t ( sbr_relobi_rsp_t ),
    .relobi_r_chan_t ( sbr_relobi_r_chan_t ),
    .r_optional_t ( logic ),
    .obi_req_t ( sbr_obi_req_t ),
    .obi_rsp_t ( sbr_obi_rsp_t ),
    .apb_req_t ( apb_req_t ),
    .apb_resp_t ( apb_resp_t )
  ) i_soc_ctrl (
    .clk_i,
    .rst_ni,

    .relobi_req_i  ( soc_ctrl_obi_req ),
    .relobi_rsp_o  ( soc_ctrl_obi_rsp ),

    .hwif_in         ( hwif_in ),
    .hwif_out        ( hwif_out )
  );

  TMR_voter_fail i_fetchen_vote (
    .a_i ( hwif_out[0].fetchen.fetchen.value | fetch_en_i ),
    .b_i ( hwif_out[1].fetchen.fetchen.value | fetch_en_i ),
    .c_i ( hwif_out[2].fetchen.fetchen.value | fetch_en_i ),
    .majority_o ( fetch_enable ),
    .fault_detected_o ()
  );
  bitwise_TMR_voter_fail #(
    .DataWidth ( 32 )
  ) i_bootaddr_vote (
    .a_i ( hwif_out[0].bootaddr.bootaddr.value ),
    .b_i ( hwif_out[1].bootaddr.bootaddr.value ),
    .c_i ( hwif_out[2].bootaddr.bootaddr.value ),
    .majority_o ( boot_addr ),
    .fault_detected_o ()
  );
  TMR_voter_fail i_sram_impl_vote (
    .a_i ( hwif_out[0].sram_dly.sram_dly.value ),
    .b_i ( hwif_out[1].sram_dly.sram_dly.value ),
    .c_i ( hwif_out[2].sram_dly.sram_dly.value ),
    .majority_o ( sram_impl ),
    .fault_detected_o ()
  );

  assign hwif_in[0] = '{default: '0};
  assign hwif_in[1] = '{default: '0};
  assign hwif_in[2] = '{default: '0};
`else
  apb_req_t soc_ctrl_apb_req;
  apb_resp_t soc_ctrl_apb_rsp;

  obi_to_apb #(
    .ObiCfg    ( SbrObiCfg     ),
    .obi_req_t ( sbr_obi_req_t ),
    .obi_rsp_t ( sbr_obi_rsp_t ),
    .apb_req_t ( apb_req_t     ),
    .apb_rsp_t ( apb_resp_t    )
  ) i_soc_ctrl_translate (
    .clk_i,
    .rst_ni,

    .obi_req_i     ( soc_ctrl_obi_req     ),
    .obi_rsp_o     ( soc_ctrl_obi_rsp     ),

    .apb_req_o     ( soc_ctrl_apb_req     ),
    .apb_rsp_i     ( soc_ctrl_apb_rsp     )
  );

  soc_ctrl_reg_pkg::soc_ctrl__in_t hwif_in;
  soc_ctrl_reg_pkg::soc_ctrl__out_t hwif_out;

  soc_ctrl_reg_top #(
    .BootAddrDefault ( SramBaseAddr )
  ) i_soc_ctrl (
    .clk ( clk_i ),
    .arst_n ( rst_ni ),

    .s_apb_psel ( soc_ctrl_apb_req.psel ),
    .s_apb_penable ( soc_ctrl_apb_req.penable ),
    .s_apb_pwrite ( soc_ctrl_apb_req.pwrite ),
    .s_apb_pprot ( soc_ctrl_apb_req.pprot ),
    .s_apb_paddr ( soc_ctrl_apb_req.paddr[soc_ctrl_reg_pkg::SOC_CTRL_REG_TOP_MIN_ADDR_WIDTH-1:0] ),
    .s_apb_pwdata ( soc_ctrl_apb_req.pwdata ),
    .s_apb_pstrb ( soc_ctrl_apb_req.pstrb ),
    .s_apb_pready ( soc_ctrl_apb_rsp.pready ),
    .s_apb_prdata ( soc_ctrl_apb_rsp.prdata ),
    .s_apb_pslverr ( soc_ctrl_apb_rsp.pslverr ),

    .hwif_in (hwif_in),
    .hwif_out (hwif_out)
  );

  assign fetch_enable = hwif_out.fetchen.fetchen.value | fetch_en_i;
  assign boot_addr    = hwif_out.bootaddr.bootaddr.value;
  assign sram_impl    = hwif_out.sram_dly.sram_dly.value;
  assign hwif_in      = '{
    default: '0
  };
`endif

  // UART
`ifdef TARGET_UART_TMRG
  obi_uartTMR #(
`else
  obi_uart #(
`endif
    .ObiCfg    ( SbrObiCfg     ),
    .obi_req_t ( sbr_obi_req_t ),
    .obi_rsp_t ( sbr_obi_rsp_t )
  ) i_uart (
    .clk_i,
    .rst_ni,

`ifdef TARGET_UART_TMRG
    .obi_req_iA ( uart_obi_req[0] ),
    .obi_req_iB ( uart_obi_req[1] ),
    .obi_req_iC ( uart_obi_req[2] ),
    .obi_rsp_oA ( uart_obi_rsp[0] ),
    .obi_rsp_oB ( uart_obi_rsp[1] ),
    .obi_rsp_oC ( uart_obi_rsp[2] ),
    .irq_oA     ( uart_irq     ),
    .irq_oB     (     ),
    .irq_oC     (     ),
    .irq_noA    ( ),
    .irq_noB    ( ),
    .irq_noC    ( ),
`else
    .obi_req_i ( uart_obi_req ),
    .obi_rsp_o ( uart_obi_rsp ),
    .irq_o     ( uart_irq     ),
    .irq_no    ( ),
`endif

    .rxd_i     ( uart_rx_i ),
    .txd_o     ( uart_tx_o ),

    // Modem control pins are optional
    .cts_ni    ( 1'b1 ),
    .dsr_ni    ( 1'b1 ),
    .ri_ni     ( 1'b1 ),
    .cd_ni     ( 1'b1 ),
    .rts_no    ( ),
    .dtr_no    ( ),
    .out1_no   ( ),
    .out2_no   ( )
`ifdef TARGET_UART_TMRG
    ,.tmrError (),
    .tmrErrorA (),
    .tmrErrorB (),
    .tmrErrorC ()
`endif
);

  // GPIO
  gpio #(
    .ObiCfg    ( SbrObiCfg     ),
    .obi_req_t ( sbr_obi_req_t ),
    .obi_rsp_t ( sbr_obi_rsp_t ),
    .GpioCount ( GpioCount     )
  ) i_gpio (
    .clk_i,
    .rst_ni,
    .gpio_i,                     
    .gpio_o,                   
    .gpio_out_en_o,          
    .gpio_in_sync_o,       
    .interrupt_o    ( gpio_irq     ),
    .obi_req_i      ( gpio_obi_req ),
    .obi_rsp_o      ( gpio_obi_rsp )
  );

  // Timer
`ifdef TARGET_TIMER_UNIT_TMRG
  timer_unitTMR #(
    .ID_WIDTH   ( SbrObiCfg.IdWidth )
  ) i_timer (
    .clk_i,
    .rst_ni,
    .ref_clk_i,

    .req_iA      ( timer_obi_req[0].req     ),
    .req_iB      ( timer_obi_req[1].req     ),
    .req_iC      ( timer_obi_req[2].req     ),
    .addr_iA     ( timer_obi_req[0].a.addr    ),
    .addr_iB     ( timer_obi_req[1].a.addr    ),
    .addr_iC     ( timer_obi_req[2].a.addr    ),
    .wen_iA      ( ~timer_obi_req[0].a.we     ),
    .wen_iB      ( ~timer_obi_req[1].a.we     ),
    .wen_iC      ( ~timer_obi_req[2].a.we     ),
    .wdata_iA    ( timer_obi_req[0].a.wdata   ),
    .wdata_iB    ( timer_obi_req[1].a.wdata   ),
    .wdata_iC    ( timer_obi_req[2].a.wdata   ),
    .be_iA       ( timer_obi_req[0].a.be      ),
    .be_iB       ( timer_obi_req[1].a.be      ),
    .be_iC       ( timer_obi_req[2].a.be      ),
    .id_iA       ( timer_obi_req[0].a.aid      ),
    .id_iB       ( timer_obi_req[1].a.aid      ),
    .id_iC       ( timer_obi_req[2].a.aid      ),
    .gnt_oA      ( timer_obi_rsp[0].gnt     ),
    .gnt_oB      ( timer_obi_rsp[1].gnt     ),
    .gnt_oC      ( timer_obi_rsp[2].gnt     ),
    .r_valid_oA  ( timer_obi_rsp[0].rvalid  ),
    .r_valid_oB  ( timer_obi_rsp[1].rvalid  ),
    .r_valid_oC  ( timer_obi_rsp[2].rvalid  ),
    .r_opc_oA    (  ),
    .r_opc_oB    (  ),
    .r_opc_oC    (  ),
    .r_id_oA     ( timer_obi_rsp[0].r.rid     ),
    .r_id_oB     ( timer_obi_rsp[1].r.rid     ),
    .r_id_oC     ( timer_obi_rsp[2].r.rid     ),
    .r_rdata_oA  ( timer_obi_rsp[0].r.rdata  ),
    .r_rdata_oB  ( timer_obi_rsp[1].r.rdata  ),
    .r_rdata_oC  ( timer_obi_rsp[2].r.rdata  ),
    .event_lo_iA  ( '0 ),
    .event_lo_iB  ( '0 ),
    .event_lo_iC  ( '0 ),
    .event_hi_iA  ( '0 ),
    .event_hi_iB  ( '0 ),
    .event_hi_iC  ( '0 ),
    .irq_lo_oA   ( timer0_irq0           ),
    .irq_lo_oB   (            ),
    .irq_lo_oC   (                      ),
    .irq_hi_oA   ( timer0_irq1           ),
    .irq_hi_oB   (            ),
    .irq_hi_oC   (                      ),
    .busy_oA     (                       ),
    .busy_oB     (                       ),
    .busy_oC     (                       ),
    .tmrErrorA  ( ),
    .tmrErrorB  ( ),
    .tmrErrorC  ( )
  );
  assign timer_obi_rsp[0].r.err        = 1'b0;
  assign timer_obi_rsp[0].r.r_optional = 1'b0;
  assign timer_obi_rsp[1].r.err        = 1'b0;
  assign timer_obi_rsp[1].r.r_optional = 1'b0;
  assign timer_obi_rsp[2].r.err        = 1'b0;
  assign timer_obi_rsp[2].r.r_optional = 1'b0;
`else
  timer_unit #(
    .ID_WIDTH   ( SbrObiCfg.IdWidth )
  ) i_timer (
    .clk_i,
    .rst_ni,
    .ref_clk_i,
    
    .req_i      ( timer_obi_req.req     ),
    .addr_i     ( timer_obi_req.a.addr  ),
    .wen_i      ( ~timer_obi_req.a.we   ),
    .wdata_i    ( timer_obi_req.a.wdata ),
    .be_i       ( timer_obi_req.a.be    ),
    .id_i       ( timer_obi_req.a.aid   ),
    .gnt_o      ( timer_obi_rsp.gnt     ),
    
    .r_valid_o  ( timer_obi_rsp.rvalid  ),
    .r_opc_o    ( ),
    .r_id_o     ( timer_obi_rsp.r.rid   ),
    .r_rdata_o  ( timer_obi_rsp.r.rdata ),
    .event_lo_i ('0 ),
    .event_hi_i ('0 ),
    .irq_lo_o   ( timer0_irq0           ),
    .irq_hi_o   ( timer0_irq1           ),
    .busy_o     (                       )
  );
  assign timer_obi_rsp.r.err        = 1'b0;
  assign timer_obi_rsp.r.r_optional = 1'b0;
`endif // TARGET_TIMER_UNIT_TMRG

endmodule
