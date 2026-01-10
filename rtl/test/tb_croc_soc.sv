// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>
// - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

`define TRACE_WAVE
// `define CSPECT

module tb_croc_soc #(
  parameter int unsigned GpioCount = 32
);

  import tb_croc_pkg::*;

  // Signals fully controlled by the VIP
  // use VIP functions/tasks to manipulate these signals
  logic rst_n;
  logic sys_clk;
  logic ref_clk;

  logic jtag_tck;
  logic jtag_trst_n;
  logic jtag_tms;
  logic jtag_tdi;
  logic jtag_tdo;

  logic uart_rx;
  logic uart_tx;

  // Signals partially controlled by the VIP
  logic [GpioCount-1:0] gpio_in;
  logic [GpioCount-1:0] gpio_out;
  logic [GpioCount-1:0] gpio_out_en;

  // Signals controlled by the testbench
  logic fetch_en;

  /////////////////////////////
  //  Command Line Arguments //
  /////////////////////////////

  string binary_path;

  initial begin
    // $value$plusargs defines what to look for (here +binary=...)
    if ($value$plusargs("binary=%s", binary_path)) begin
      $display("Running program: %s", binary_path);
    end else begin
      $display("No binary path provided. Running helloworld.");
      binary_path = "../sw/bin/helloworld.hex";
    end
  end

  ////////////
  //  VIP   //
  ////////////
  // Verification IP 
  // - drives clocks and resets
  // - provides helper tasks and functions for JTAG, namely:
  //   - jtag_load_hex: loads a hex file into the DUT's memory
  //   - jtag_write_reg32: write 32-bit value to DUT
  //   - jtag_read_reg32: read 32-bit value from DUT
  //   - jtag_halt / jtag_resume: control core execution
  //   - jtag_wait_for_eoc: wait for end of code execution (core writes non-zero to status register)
  // - prints UART output to console (you can also write via uart_write_byte)
  // - internal GPIO loopback for helloworld test

  croc_vip #(
    .GpioCount ( GpioCount )
  ) i_vip (
    .rst_no        ( rst_n       ),
    .sys_clk_o     ( sys_clk     ),
    .ref_clk_o     ( ref_clk     ),
    .fetch_en_i    ( fetch_en    ),
    .jtag_tck_o    ( jtag_tck    ),
    .jtag_trst_no  ( jtag_trst_n ),
    .jtag_tms_o    ( jtag_tms    ),
    .jtag_tdi_o    ( jtag_tdi    ),
    .jtag_tdo_i    ( jtag_tdo    ),
    .uart_rx_o     ( uart_rx     ),
    .uart_tx_i     ( uart_tx     ),
    .gpio_out_en_i ( gpio_out_en ),
    .gpio_out_i    ( gpio_out    ),
    .gpio_in_o     ( gpio_in     )
  );

  ////////////
  //  DUT   //
  ////////////

  `ifdef TARGET_NETLIST_YOSYS
  \croc_soc$croc_chip.i_croc_soc i_croc_soc (
  `else
  croc_soc #(
    .GpioCount ( GpioCount )
  ) i_croc_soc (
  `endif
    .clk_i         ( sys_clk     ),
    .rst_ni        ( rst_n       ),
    .ref_clk_i     ( ref_clk     ),
    .testmode_i    ( 1'b0        ),
    .fetch_en_i    ( fetch_en    ),
    .status_o      (             ),
    .jtag_tck_i    ( jtag_tck    ),
    .jtag_tdi_i    ( jtag_tdi    ),
    .jtag_tdo_o    ( jtag_tdo    ),
    .jtag_tms_i    ( jtag_tms    ),
    .jtag_trst_ni  ( jtag_trst_n ),
    .uart_rx_i     ( uart_rx     ),
    .uart_tx_o     ( uart_tx     ),
    .gpio_i        ( gpio_in     ),
    .gpio_o        ( gpio_out    ),
    .gpio_out_en_o ( gpio_out_en )
  );

  `ifdef CSPECT

  croc_cspect_if croc_cspect_if();

  `ifdef TRACE_EXECUTION
  `define I_CVE2 i_croc_soc.i_croc.i_core_wrap.i_ibex.u_cve2_core
  `else
  `define I_CVE2 i_croc_soc.i_croc.i_core_wrap.i_ibex
  `endif

  assign croc_cspect_if.fetch_en          = fetch_en;
  assign croc_cspect_if.cve2_dbg_mode     = `I_CVE2.debug_mode;
  assign croc_cspect_if.cve2_priv_mode    = `I_CVE2.priv_mode_id;
  assign croc_cspect_if.cve2_dbg_req      = `I_CVE2.id_stage_i.controller_i.enter_debug_mode;
  assign croc_cspect_if.cve2_exc_req      = `I_CVE2.id_stage_i.controller_i.exc_req_q;
  assign croc_cspect_if.cve2_ctrl_state   = croc_cspect_pkg::cve2_ctrl_fsm_e'(`I_CVE2.id_stage_i.controller_i.ctrl_fsm_cs);
  assign croc_cspect_if.cve2_exc_cause    = `I_CVE2.exc_cause;
  assign croc_cspect_if.cve2_exc_instr    = `I_CVE2.instr_rdata_id;
  assign croc_cspect_if.cve2_pc           = `I_CVE2.pc_id;
  assign croc_cspect_if.cve2_inst_req     = `I_CVE2.instr_req_o;
  assign croc_cspect_if.cve2_inst_gnt     = `I_CVE2.instr_gnt_i;
  assign croc_cspect_if.cve2_inst_valid   = `I_CVE2.instr_rvalid_i;
  assign croc_cspect_if.cve2_inst_addr    = `I_CVE2.instr_addr_o;
  assign croc_cspect_if.cve2_inst_data    = `I_CVE2.instr_rdata_i;
  assign croc_cspect_if.cve2_data_req     = `I_CVE2.data_req_o;
  assign croc_cspect_if.cve2_data_gnt     = `I_CVE2.data_gnt_i;
  assign croc_cspect_if.cve2_data_valid   = `I_CVE2.data_rvalid_i;
  assign croc_cspect_if.cve2_data_we      = `I_CVE2.data_we_o;
  assign croc_cspect_if.cve2_data_addr    = `I_CVE2.data_addr_o;
  assign croc_cspect_if.cve2_data_rdata   = `I_CVE2.data_rdata_i;
  assign croc_cspect_if.cve2_data_wdata   = `I_CVE2.data_wdata_o;
  assign croc_cspect_if.cve2_irq_software = `I_CVE2.irq_software_i;
  assign croc_cspect_if.cve2_irq_timer    = `I_CVE2.irq_timer_i;
  assign croc_cspect_if.cve2_irq_external = `I_CVE2.irq_external_i;
  assign croc_cspect_if.cve2_irq_fast     = `I_CVE2.irq_fast_i;
  assign croc_cspect_if.cve2_irq_nm       = `I_CVE2.irq_nm_i;
  assign croc_cspect_if.cve2_regs         = `I_CVE2.register_file_i.rf_reg;

  croc_cspect_logger i_croc_cspect_logger (
    .clk_i   ( sys_clk        ),
    .rst_ni  ( rst_n          ),
    .croc_if ( croc_cspect_if )
  );

  `endif // CSPECT

  /////////////////
  //  Testbench  //
  /////////////////

  logic [31:0] tb_data;

  initial begin
    $timeformat(-9, 0, "ns", 12); // 1: scale (ns=-9), 2: decimals, 3: suffix, 4: print-field width

    // Start CircumSpect logging
    `ifdef CSPECT
    ->croc_cspect_if.start_log;
    `endif

    fetch_en = 1'b0;

    // wait for reset
    #ClkPeriodSys;

    // init jtag
    i_vip.jtag_init();

    // write test value to sram
    i_vip.jtag_write_reg32(SramBaseAddr, 32'h1234_5678, 1'b1);
    // load binary to sram
    i_vip.jtag_load_hex(binary_path);

    $display("@%t | [CORE] Start fetching instructions", $time);
    fetch_en = 1'b1;

    // halt core
    i_vip.jtag_halt();

    // resume core
    i_vip.jtag_resume();

    // wait for non-zero return value (written into core status register)
    $display("@%t | [CORE] Wait for end of code...", $time);
    i_vip.jtag_wait_for_eoc(tb_data);

    // finish simulation
    repeat(50) @(posedge sys_clk);
    $finish();
  end

  ////////////////
  //  Waveform  //
  ////////////////
  // start waveform dump at time 0, independent of stimuli
  initial begin
    `ifdef TRACE_WAVE
      `ifdef VERILATOR
        $dumpfile("croc.fst");
        $dumpvars(1, i_croc_soc);
      `else
        $dumpfile("croc.vcd");
        $dumpvars(1, i_croc_soc);
      `endif
    `endif
  end

  // flush waveform dump when simulation ends
  final begin
    `ifdef TRACE_WAVE
      $dumpflush;
    `endif
  end

endmodule
