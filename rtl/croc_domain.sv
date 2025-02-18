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
  output sbr_obi_req_t user_sbr_obi_req_o,
  input  sbr_obi_rsp_t user_sbr_obi_rsp_i,

  /// User as manager (from user module to SRAM/peripherals)
  input  mgr_obi_req_t user_mgr_obi_req_i,
  output mgr_obi_rsp_t user_mgr_obi_rsp_o,

  input  logic [NumExternalIrqs-1:0] interrupts_i,
  output logic core_busy_o
);

  // -----------------
  // Control Signals
  // -----------------
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
  mgr_obi_req_t core_instr_obi_req;
  mgr_obi_rsp_t core_instr_obi_rsp;
  assign core_instr_obi_req.a.aid = '0;
  assign core_instr_obi_req.a.we = '0;
  assign core_instr_obi_req.a.be = '1;
  assign core_instr_obi_req.a.wdata = '0;
  assign core_instr_obi_req.a.a_optional = '0;

  // Core data bus
  mgr_obi_req_t core_data_obi_req;
  mgr_obi_rsp_t core_data_obi_rsp;
  assign core_data_obi_req.a.aid = '0;
  assign core_data_obi_req.a.a_optional = '0;

  // dbg req bus
  mgr_obi_req_t dbg_req_obi_req;
  mgr_obi_rsp_t dbg_req_obi_rsp;
  assign dbg_req_obi_req.a.aid = '0;
  assign dbg_req_obi_req.a.a_optional = '0;

  // ----------------------------------
  // Subordinate buses out of crossbar
  // ----------------------------------
  // Main xbar subordinate buses, must align with addr map indices!
  sbr_obi_req_t [NumXbarSbr-1:0] all_sbr_obi_req;
  sbr_obi_rsp_t [NumXbarSbr-1:0] all_sbr_obi_rsp;

  // user bus defined in module port

  // mem bank buses
  sbr_obi_req_t [NumSramBanks-1:0] xbar_mem_bank_obi_req;
  sbr_obi_rsp_t [NumSramBanks-1:0] xbar_mem_bank_obi_rsp;

  // periph bus
  sbr_obi_req_t xbar_periph_obi_req;
  sbr_obi_rsp_t xbar_periph_obi_rsp;

  // error (connected to bus error slave)
  sbr_obi_req_t xbar_error_obi_req;
  sbr_obi_rsp_t xbar_error_obi_rsp;

  assign xbar_error_obi_req          = all_sbr_obi_req[XbarError];
  assign all_sbr_obi_rsp[XbarError]  = xbar_error_obi_rsp;

  assign xbar_periph_obi_req         = all_sbr_obi_req[XbarPeriph];
  assign all_sbr_obi_rsp[XbarPeriph] = xbar_periph_obi_rsp;

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
  sbr_obi_req_t [NumPeriphs-1:0] all_periph_obi_req;
  sbr_obi_rsp_t [NumPeriphs-1:0] all_periph_obi_rsp;

  // Error bus
  sbr_obi_req_t error_obi_req;
  sbr_obi_rsp_t error_obi_rsp;

  // Debug mem bus
  sbr_obi_req_t dbg_mem_obi_req;
  sbr_obi_rsp_t dbg_mem_obi_rsp;

  // SoC control bus
  sbr_obi_req_t soc_ctrl_obi_req;
  sbr_obi_rsp_t soc_ctrl_obi_rsp;

  // UART periph bus
  sbr_obi_req_t uart_obi_req;
  sbr_obi_rsp_t uart_obi_rsp;

  // GPIO periph bus
  sbr_obi_req_t gpio_obi_req;
  sbr_obi_rsp_t gpio_obi_rsp;

  // Timer periph bus
  sbr_obi_req_t timer_obi_req;
  sbr_obi_rsp_t timer_obi_rsp;
  
  // Fanout to individual peripherals
  assign error_obi_req                     = all_periph_obi_req[PeriphError];
  assign all_periph_obi_rsp[PeriphError]   = error_obi_rsp;
  assign dbg_mem_obi_req                   = all_periph_obi_req[PeriphDebug];
  assign all_periph_obi_rsp[PeriphDebug]   = dbg_mem_obi_rsp;
  assign soc_ctrl_obi_req                  = all_periph_obi_req[PeriphSocCtrl];
  assign all_periph_obi_rsp[PeriphSocCtrl] = soc_ctrl_obi_rsp;
  assign uart_obi_req                      = all_periph_obi_req[PeriphUart];
  assign all_periph_obi_rsp[PeriphUart]    = uart_obi_rsp;
  assign gpio_obi_req                      = all_periph_obi_req[PeriphGpio];
  assign all_periph_obi_rsp[PeriphGpio]    = gpio_obi_rsp;
  assign timer_obi_req                     = all_periph_obi_req[PeriphTimer];
  assign all_periph_obi_rsp[PeriphTimer]   = timer_obi_rsp;


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

  // -----------------
  // Memories
  // -----------------

  for (genvar i = 0; i < NumSramBanks; i++) begin : gen_sram_bank
    logic bank_req, bank_we, bank_gnt, bank_single_err;
    logic [SbrObiCfg.AddrWidth-1:0] bank_byte_addr;
    logic [SramBankAddrWidth-1:0] bank_word_addr;
    logic [SbrObiCfg.DataWidth-1:0] bank_wdata, bank_rdata;
    logic [SbrObiCfg.DataWidth/8-1:0] bank_be;

    obi_sram_shim #(
      .ObiCfg    ( SbrObiCfg     ),
      .obi_req_t ( sbr_obi_req_t ),
      .obi_rsp_t ( sbr_obi_rsp_t )
    ) i_sram_shim (
      .clk_i,
      .rst_ni,

      .obi_req_i ( xbar_mem_bank_obi_req[i] ),
      .obi_rsp_o ( xbar_mem_bank_obi_rsp[i] ),

      .req_o   ( bank_req       ),
      .we_o    ( bank_we        ),
      .addr_o  ( bank_byte_addr ),
      .wdata_o ( bank_wdata     ),
      .be_o    ( bank_be        ),

      .gnt_i   ( bank_gnt   ),
      .rdata_i ( bank_rdata )
    );

    assign bank_word_addr = bank_byte_addr[SbrObiCfg.AddrWidth-1:2];

    tc_sram #(
      .NumWords  ( SramBankNumWords ),
      .DataWidth ( 32 ),
      .NumPorts  (  1 ),
      .Latency   (  1 )
    ) i_sram (
      .clk_i,
      .rst_ni,

      .req_i   ( bank_req       ),
      .we_i    ( bank_we        ),
      .addr_i  ( bank_word_addr ),

      .wdata_i ( bank_wdata ),
      .be_i    ( bank_be    ),
      .rdata_o ( bank_rdata )
    );

    assign bank_gnt = 1'b1;
  end


  // Xbar space error subordinate
  obi_err_sbr #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMaxTrans ( 1             ),
    .RspData     ( 32'hBADCAB1E  )
  ) i_xbar_err (
    .clk_i,
    .rst_ni,
    .testmode_i,
    .obi_req_i  ( xbar_error_obi_req ),
    .obi_rsp_o  ( xbar_error_obi_rsp )
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
    .addr_i           ( xbar_periph_obi_req.a.addr  ),
    .addr_map_i       ( periph_addr_map             ),
    .idx_o            ( periph_idx                  ),
    .dec_valid_o      (),
    .dec_error_o      (),
    .en_default_idx_i ( 1'b1 ),
    .default_idx_i    ( '0 )
  );

  obi_demux #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMgrPorts ( NumPeriphs    ),
    .NumMaxTrans ( 2             )
  ) i_obi_demux (
    .clk_i,
    .rst_ni,

    .sbr_port_select_i ( periph_idx           ),
    .sbr_port_req_i    ( xbar_periph_obi_req  ),
    .sbr_port_rsp_o    ( xbar_periph_obi_rsp  ),

    .mgr_ports_req_o   ( all_periph_obi_req ),
    .mgr_ports_rsp_i   ( all_periph_obi_rsp )
  );

  // Peripheral space error subordinate
  obi_err_sbr #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMaxTrans ( 1             ),
    .RspData     ( 32'hBADCAB1E  )
  ) i_periph_err (
    .clk_i,
    .rst_ni,
    .testmode_i,
    .obi_req_i  ( error_obi_req ),
    .obi_rsp_o  ( error_obi_rsp )
  );

  // SoC Control
  reg_req_t soc_ctrl_reg_req;
  reg_rsp_t soc_ctrl_reg_rsp;

  periph_to_reg #(
    .AW    ( SbrObiCfg.AddrWidth  ),
    .DW    ( SbrObiCfg.DataWidth  ),
    .BW    ( 8                    ),
    .IW    ( SbrObiCfg.IdWidth    ),
    .req_t ( reg_req_t            ),
    .rsp_t ( reg_rsp_t            )
  ) i_soc_ctrl_translate (
    .clk_i,
    .rst_ni,

    .req_i     ( soc_ctrl_obi_req.req     ),
    .add_i     ( soc_ctrl_obi_req.a.addr  ),
    .wen_i     ( ~soc_ctrl_obi_req.a.we   ),
    .wdata_i   ( soc_ctrl_obi_req.a.wdata ),
    .be_i      ( soc_ctrl_obi_req.a.be    ),
    .id_i      ( soc_ctrl_obi_req.a.aid   ),

    .gnt_o     ( soc_ctrl_obi_rsp.gnt     ),
    .r_rdata_o ( soc_ctrl_obi_rsp.r.rdata ),
    .r_opc_o   ( soc_ctrl_obi_rsp.r.err   ),
    .r_id_o    ( soc_ctrl_obi_rsp.r.rid   ),
    .r_valid_o ( soc_ctrl_obi_rsp.rvalid  ),

    .reg_req_o ( soc_ctrl_reg_req ),
    .reg_rsp_i ( soc_ctrl_reg_rsp )
  );  
  assign soc_ctrl_obi_rsp.r.r_optional = '0;

  soc_ctrl_reg_pkg::soc_ctrl_reg2hw_t soc_ctrl_reg2hw;
  soc_ctrl_reg_pkg::soc_ctrl_hw2reg_t soc_ctrl_hw2reg;
  assign fetch_enable = soc_ctrl_reg2hw.fetchen.q | fetch_en_i;
  assign boot_addr = soc_ctrl_reg2hw.bootaddr.q;
  assign soc_ctrl_hw2reg = '0;

  soc_ctrl_reg_top #(
    .reg_req_t       ( reg_req_t    ),
    .reg_rsp_t       ( reg_rsp_t    ),
    .BootAddrDefault ( SramBaseAddr )
  ) i_soc_ctrl (
    .clk_i,
    .rst_ni,
    .reg_req_i ( soc_ctrl_reg_req ),
    .reg_rsp_o ( soc_ctrl_reg_rsp ),
    .reg2hw    ( soc_ctrl_reg2hw  ),
    .hw2reg    ( soc_ctrl_hw2reg  ),
    .devmode_i ( 1'b0             )
  );

  // UART
  reg_req_t uart_reg_req;
  reg_rsp_t uart_reg_rsp;

  periph_to_reg #(
    .AW    ( SbrObiCfg.AddrWidth  ),
    .DW    ( SbrObiCfg.DataWidth  ),
    .BW    ( 8                    ),
    .IW    ( SbrObiCfg.IdWidth    ),
    .req_t ( reg_req_t            ),
    .rsp_t ( reg_rsp_t            )
  ) i_uart_translate (
    .clk_i,
    .rst_ni,

    .req_i     ( uart_obi_req.req     ),
    .add_i     ( uart_obi_req.a.addr  ),
    .wen_i     ( ~uart_obi_req.a.we   ),
    .wdata_i   ( uart_obi_req.a.wdata ),
    .be_i      ( uart_obi_req.a.be    ),
    .id_i      ( uart_obi_req.a.aid   ),

    .gnt_o     ( uart_obi_rsp.gnt     ),
    .r_rdata_o ( uart_obi_rsp.r.rdata ),
    .r_opc_o   ( uart_obi_rsp.r.err   ),
    .r_id_o    ( uart_obi_rsp.r.rid   ),
    .r_valid_o ( uart_obi_rsp.rvalid  ),

    .reg_req_o ( uart_reg_req ),
    .reg_rsp_i ( uart_reg_rsp )
  );

  reg_uart_wrap #(
    .AddrWidth  ( 32        ),
    .reg_req_t  ( reg_req_t ),
    .reg_rsp_t  ( reg_rsp_t )
  ) i_uart (
    .clk_i,
    .rst_ni,
    .reg_req_i  ( uart_reg_req  ),
    .reg_rsp_o  ( uart_reg_rsp  ),
    .intr_o     ( uart_irq      ),
    .out2_no    ( ),
    .out1_no    ( ),
    .rts_no     ( ),
    .dtr_no     ( ),
    .cts_ni     ( 1'b0 ),
    .dsr_ni     ( 1'b0 ),
    .dcd_ni     ( 1'b0 ),
    .rin_ni     ( 1'b0 ),
    .sin_i      ( uart_rx_i ),
    .sout_o     ( uart_tx_o )
  );
  assign uart_obi_rsp.r.r_optional = '0;

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

endmodule
