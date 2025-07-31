// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

module core_wrap import croc_pkg::*; #() (
  input  logic clk_i,
  input  logic rst_ni,
  input  logic ref_clk_i,
  input  logic test_enable_i,

  input logic [15:0] irqs_i,
  input logic timer0_irq_i,

  input  logic [31:0] boot_addr_i,

  // Instruction memory interface
`ifdef RELOBI
  output mgr_relobi_req_t rel_instr_req_o,
  input  mgr_relobi_rsp_t rel_instr_rsp_i,
`else
  output logic        instr_req_o,
  input  logic        instr_gnt_i,
  input  logic        instr_rvalid_i,
  output logic [31:0] instr_addr_o,
  input  logic [31:0] instr_rdata_i,
  input  logic        instr_err_i,
`endif

  // Data memory interface
`ifdef RELOBI
  output mgr_relobi_req_t rel_data_req_o,
  input  mgr_relobi_rsp_t rel_data_rsp_i,
`else
  output logic        data_req_o,
  input  logic        data_gnt_i,
  input  logic        data_rvalid_i,
  output logic        data_we_o,
  output logic [3:0]  data_be_o,
  output logic [31:0] data_addr_o,
  output logic [31:0] data_wdata_o,
  input  logic [31:0] data_rdata_i,
  input  logic        data_err_i,
`endif

  // Debug Interface
  input  logic        debug_req_i,

  // CPU Control Signals
  input  logic        fetch_enable_i,

  output logic        core_busy_o
);

`ifdef RELOBI
  logic        instr_req_o;
  logic        instr_gnt_i;
  logic        instr_rvalid_i;
  logic [31:0] instr_addr_o;
  logic [31:0] instr_rdata_i;
  logic        instr_err_i;
  logic        data_req_o;
  logic        data_gnt_i;
  logic        data_rvalid_i;
  logic        data_we_o;
  logic [3:0]  data_be_o;
  logic [31:0] data_addr_o;
  logic [31:0] data_wdata_o;
  logic [31:0] data_rdata_i;
  logic        data_err_i;
  mgr_obi_req_t instr_req;
  mgr_obi_rsp_t instr_rsp;
  mgr_obi_req_t data_req;
  mgr_obi_rsp_t data_rsp;

  assign instr_req = '{
    a : '{
      addr : instr_addr_o,
      we   : 1'b0, // always read
      be   : 4'b1111, // always read full word
      wdata : 32'h0, // dummy value
      aid   : '0, // dummy value
      a_optional : '0 // dummy signal
    },
    req : instr_req_o
  };
  assign data_req = '{
    a : '{
      addr : data_addr_o,
      we   : data_we_o,
      be   : data_be_o,
      wdata : data_wdata_o,
      aid   : '0, // dummy value
      a_optional : '0 // dummy signal
    },
    req : data_req_o
  };
  assign instr_gnt_i = instr_rsp.gnt;
  assign instr_rvalid_i = instr_rsp.rvalid;
  assign instr_rdata_i = instr_rsp.r.rdata;
  assign instr_err_i = instr_rsp.r.err;
  assign data_gnt_i = data_rsp.gnt;
  assign data_rvalid_i = data_rsp.rvalid;
  assign data_rdata_i = data_rsp.r.rdata;
  assign data_err_i = data_rsp.r.err;

  relobi_encoder #(
    .Cfg (MgrObiCfg),
    .relobi_req_t (mgr_relobi_req_t),
    .relobi_rsp_t (mgr_relobi_rsp_t),
    .obi_req_t (mgr_obi_req_t),
    .obi_rsp_t (mgr_obi_rsp_t),
    .a_optional_t (logic),
    .r_optional_t (logic)
  ) i_instr_encoder (
    .req_i (instr_req),
    .rsp_o (instr_rsp),
    .rel_req_o (rel_instr_req_o),
    .rel_rsp_i (rel_instr_rsp_i),
    .fault_o ()
  );
  relobi_encoder #(
    .Cfg (MgrObiCfg),
    .relobi_req_t (mgr_relobi_req_t),
    .relobi_rsp_t (mgr_relobi_rsp_t),
    .obi_req_t (mgr_obi_req_t),
    .obi_rsp_t (mgr_obi_rsp_t),
    .a_optional_t (logic),
    .r_optional_t (logic)
  ) i_data_encoder (
    .req_i (data_req),
    .rsp_o (data_rsp),
    .rel_req_o (rel_data_req_o),
    .rel_rsp_i (rel_data_rsp_i),
    .fault_o ()
  );
`endif

  // lowest 8 bits are ignored internally
  logic[31:0] ibex_boot_addr;
  assign ibex_boot_addr = boot_addr_i & 32'hFFFFFF00; 
// ifdef ordered according to priority
`ifdef TRACE_EXECUTION
  cve2_core_tracing #(
`else
  cve2_core #(
`endif
    .PMPEnable          ( 1'b0                ),
    .PMPGranularity     ( 0                   ),
    .PMPNumRegions      ( 4                   ),
    .MHPMCounterNum     ( 0                   ),
    .MHPMCounterWidth   ( 40                  ),
    .RV32E              ( 0                   ),
    .RV32M              ( cve2_pkg::RV32MNone ),
    .RV32B              ( cve2_pkg::RV32BNone ),
    .DbgTriggerEn       ( 1'b1                ),
    .DbgHwBreakNum      ( 1                   ),
    .DmHaltAddr         ( DebugAddrOffset + dm::HaltAddress[31:0]      ),
    .DmExceptionAddr    ( DebugAddrOffset + dm::ExceptionAddress[31:0] )
  ) i_ibex (
    .clk_i,
    .rst_ni,
    .test_en_i          ( test_enable_i  ),
    .hart_id_i          ( HartId ),
    .boot_addr_i        ( ibex_boot_addr ),

    // Instruction Memory Interface:
    .instr_req_o,
    .instr_gnt_i,
    .instr_rdata_i,
    .instr_rvalid_i,
    .instr_addr_o,
    .instr_err_i,

    // Data memory interface:
    .data_req_o, 
    .data_gnt_i,
    .data_rvalid_i,
    .data_we_o,
    .data_be_o,
    .data_addr_o,
    .data_wdata_o,
    .data_rdata_i,
    .data_err_i,

    // Interrupts
    .irq_software_i     ( 1'b0         ),
    .irq_timer_i        ( timer0_irq_i ),
    .irq_external_i     ( 1'b0         ),
    .irq_fast_i         ( irqs_i       ),
    .irq_nm_i           ( 1'b0         ),
    .irq_pending_o      ( ),


    .crash_dump_o       ( ),

    .debug_req_i,
    .fetch_enable_i,
    .core_busy_o
  );

endmodule
