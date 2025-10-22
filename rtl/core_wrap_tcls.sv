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

`ifdef TMR_IRQ
  input logic [2:0][15:0] irqs_i,
  input logic [2:0]timer0_irq_i,

  input  logic [2:0][31:0] boot_addr_i,
`else // TMR_IRQ
  input logic [15:0] irqs_i,
  input logic timer0_irq_i,

  input  logic [31:0] boot_addr_i,
`endif // TMR_IRQ

  input apb_req_t [2:0] apb_req_i,
  output apb_resp_t [2:0] apb_resp_o,

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
  input  logic        debug_req_i, // TODO triplicate

  // CPU Control Signals
`ifdef TMR_IRQ
  input  logic [2:0]  fetch_enable_i,
`else // TMR_IRQ
  input  logic        fetch_enable_i,
`endif // TMR_IRQ

  output logic        core_busy_o,

  output logic [1:0]  fault_o
);

  typedef struct packed {
    `ifndef TMR_IRQ
    logic [31:0] boot_addr;
    `endif // TMR_IRQ

    // Instruction memory interface
    `ifdef RELOBI
    mgr_relobi_rsp_t instr_rsp;
    `else
    logic        instr_gnt;
    logic        instr_rvalid;
    logic [31:0] instr_rdata;
    logic        instr_err;
    `endif

    // Data memory interface
    `ifdef RELOBI
    mgr_relobi_rsp_t data_rsp;
    `else
    logic        data_gnt;
    logic        data_rvalid;
    logic [31:0] data_rdata;
    logic        data_err;
    `endif

`ifndef TMR_IRQ
    logic        timer_irq;
    logic [15:0] irqs;
    logic        fetch_enable;
`endif // TMR_IRQ
    logic        debug_req;
  } all_inputs_t;

  typedef struct packed {
    // Instruction memory interface
    `ifdef RELOBI
    mgr_relobi_req_t instr_req;
    `else
    logic        instr_req;
    logic [31:0] instr_addr;
    `endif

    // Data memory interface
    `ifdef RELOBI
    logic [2:0] data_req;
    `else
    logic        data_req;
    `endif

    logic core_busy;
  } nominal_outputs_t;

  typedef struct packed {
    logic data_we;
    logic [3:0] data_be;
    logic [31:0] data_addr;
    logic [31:0] data_wdata;
  } bus_outputs_t;

  all_inputs_t [0:0] sys_input_connect;
  all_inputs_t [2:0] core_input_connect;

  nominal_outputs_t [0:0] sys_nominal_outputs;
  nominal_outputs_t [2:0] core_nominal_outputs;

  logic enable_bus_vote;

  logic [6:0][1:0] faults;
  logic [1:0][6:0] faults_transposed;
  for (genvar i = 0; i < 7; i++) begin : gen_faults_transpose
    for (genvar j = 0; j < 2; j++) begin : gen_faults_transpose_inner
      assign faults_transposed[j][i] = faults[i][j];
    end
  end
  assign fault_o[0] = |faults_transposed[0];
  assign fault_o[1] = |faults_transposed[1];

  `ifdef RELOBI
  mgr_relobi_a_chan_t [2:0] core_data_a_chan;
  `else
  bus_outputs_t [0:0] sys_bus_outputs;
  bus_outputs_t [2:0] core_bus_outputs;
  `endif

  assign sys_input_connect[0] = '{
    `ifndef TMR_IRQ
    boot_addr : boot_addr_i,
    `endif // TMR_IRQ
    `ifdef RELOBI
    instr_rsp : rel_instr_rsp_i,
    `else
    instr_gnt : instr_gnt_i,
    instr_rvalid : instr_rvalid_i,
    instr_rdata : instr_rdata_i,
    instr_err : instr_err_i,
    `endif
    `ifdef RELOBI
    data_rsp : rel_data_rsp_i,
    `else
    data_gnt : data_gnt_i,
    data_rvalid : data_rvalid_i,
    data_rdata : data_rdata_i,
    data_err : data_err_i,
    `endif
`ifndef TMR_IRQ
    timer_irq : timer0_irq_i,
    irqs : irqs_i,
    fetch_enable : fetch_enable_i,
`endif // TMR_IRQ
    debug_req : debug_req_i
  };

`ifdef RELOBI
  assign rel_instr_req_o = sys_nominal_outputs[0].instr_req;
  assign rel_data_req_o.req = sys_nominal_outputs[0].data_req;
`else
  assign instr_req_o = sys_nominal_outputs[0].instr_req;
  assign instr_addr_o = sys_nominal_outputs[0].instr_addr;
  assign data_req_o = sys_nominal_outputs[0].data_req;
`endif
  assign core_busy_o = sys_nominal_outputs[0].core_busy;

`ifndef RELOBI
  assign data_req_o = sys_bus_outputs[0].data_req;
  assign data_we_o = sys_bus_outputs[0].data_we;
  assign data_be_o = sys_bus_outputs[0].data_be;
  assign data_addr_o = sys_bus_outputs[0].data_addr;
  assign data_wdata_o = sys_bus_outputs[0].data_wdata;
`endif

`ifdef RELOBI
  assign enable_bus_vote = |(rel_data_req_o.req & rel_data_rsp_i.gnt);
`else
  assign enable_bus_vote = data_req_o & data_gnt_i;
`endif

  hmr_unit #(
    .NumCores (3),
    .DMRSupported (1'b0),
    .DMRFixed     (1'b0),
    .TMRSupported (1'b1),
    .TMRFixed     (1'b1),
    .InterleaveGrps (1'b1),
    .RapidRecovery (1'b0),
    .SeparateData (1'b1),
    .NumBusVoters (1),
    .RfAddrWidth (6),
    .SysDataWidth (32),
    .all_inputs_t (all_inputs_t),
    .nominal_outputs_t (nominal_outputs_t),
    .core_backup_t (logic),
    `ifdef RELOBI
    .bus_outputs_t (mgr_relobi_a_chan_t),
    `else
    .bus_outputs_t (bus_outputs_t),
    `endif
    .apb_req_t (apb_req_t),
    .apb_resp_t (apb_resp_t),
    .rapid_recovery_t (logic),
    .TmrInternals (1'b1)
  ) i_hmr_unit (
    .clk_i (clk_i),
    .rst_ni (rst_ni),

    .apb_req_i (apb_req_i),
    .apb_resp_o (apb_resp_o),

    .tmr_failure_o (),
    .tmr_error_o (),
    .tmr_resynch_req_o (),
    .tmr_sw_synch_req_o (),
    .tmr_cores_synch_i ('0),

    .dmr_failure_o (),
    .dmr_resynch_req_o (),
    .dmr_sw_synch_req_o (),
    .dmr_cores_synch_i ('0),
    .redundancy_enable_o (),

    .ctrl_fault_o (faults[0][0]),

    .rapid_recovery_o (),
    .core_backup_i ('0),

    .sys_bootaddress_i ('0),
    .sys_inputs_i (sys_input_connect),
    .sys_nominal_outputs_o (sys_nominal_outputs),
    `ifdef RELOBI
    .sys_bus_outputs_o (rel_data_req_o.a),
    `else
    .sys_bus_outputs_o (sys_bus_outputs),
    `endif
    `ifdef TMR_IRQ
    .sys_fetch_en_i (fetch_enable_i[0]),
    `else // TMR_IRQ
    .sys_fetch_en_i (fetch_enable_i),
    `endif // TMR_IRQ
    .enable_bus_vote_i (enable_bus_vote),

    .core_bootaddress_o (),
    .core_setback_o (),
    .core_inputs_o (core_input_connect),
    .core_nominal_outputs_i (core_nominal_outputs),
    `ifdef RELOBI
    .core_bus_outputs_i (core_data_a_chan)
    `else
    .core_bus_outputs_i (core_bus_outputs)
    `endif
  );
  assign faults[0][1] = 1'b0;

  for (genvar i = 0; i < 3; i++) begin : gen_cores
    logic        instr_req;
    logic        instr_gnt;
    logic        instr_rvalid;
    logic [31:0] instr_addr;
    logic [31:0] instr_rdata;
    logic        instr_err;
    logic        data_req;
    logic        data_gnt;
    logic        data_rvalid;
    logic        data_we;
    logic [3:0]  data_be;
    logic [31:0] data_addr;
    logic [31:0] data_wdata;
    logic [31:0] data_rdata;
    logic        data_err;

  `ifdef RELOBI
    mgr_obi_req_t obi_instr_req;
    mgr_obi_rsp_t obi_instr_rsp;
    mgr_obi_req_t obi_data_req;
    mgr_obi_rsp_t obi_data_rsp;
    mgr_relobi_req_t rel_data_req;

    assign obi_instr_req = '{
      a : '{
        addr : instr_addr,
        we   : 1'b0, // always read
        be   : 4'b1111, // always read full word
        wdata : 32'h0, // dummy value
        aid   : '0, // dummy value
        a_optional : '0 // dummy signal
      },
      req : instr_req
    };
    assign obi_data_req = '{
      a : '{
        addr : data_addr,
        we   : data_we,
        be   : data_be,
        wdata : data_wdata,
        aid   : '0, // dummy value
        a_optional : '0 // dummy signal
      },
      req : data_req
    };
    assign instr_gnt = obi_instr_rsp.gnt;
    assign instr_rvalid = obi_instr_rsp.rvalid;
    assign instr_rdata = obi_instr_rsp.r.rdata;
    assign instr_err = obi_instr_rsp.r.err;
    assign data_gnt = obi_data_rsp.gnt;
    assign data_rvalid = obi_data_rsp.rvalid;
    assign data_rdata = obi_data_rsp.r.rdata;
    assign data_err = obi_data_rsp.r.err;

    relobi_encoder #(
      .Cfg (MgrObiCfg),
      .relobi_req_t (mgr_relobi_req_t),
      .relobi_rsp_t (mgr_relobi_rsp_t),
      .obi_req_t (mgr_obi_req_t),
      .obi_rsp_t (mgr_obi_rsp_t),
      .a_optional_t (logic),
      .r_optional_t (logic)
    ) i_instr_encoder_tmr_part (
      .req_i (obi_instr_req),
      .rsp_o (obi_instr_rsp),
      .rel_req_o (core_nominal_outputs[i].instr_req),
      .rel_rsp_i (core_input_connect[i].instr_rsp),
      .fault_o (faults[2*i+1])
    );
    relobi_encoder #(
      .Cfg (MgrObiCfg),
      .relobi_req_t (mgr_relobi_req_t),
      .relobi_rsp_t (mgr_relobi_rsp_t),
      .obi_req_t (mgr_obi_req_t),
      .obi_rsp_t (mgr_obi_rsp_t),
      .a_optional_t (logic),
      .r_optional_t (logic)
    ) i_data_encoder_tmr_part (
      .req_i (obi_data_req),
      .rsp_o (obi_data_rsp),
      .rel_req_o (rel_data_req),
      .rel_rsp_i (core_input_connect[i].data_rsp),
      .fault_o (faults[2*i+2])
    );

    assign core_data_a_chan[i] = rel_data_req.a;
    assign core_nominal_outputs[i].data_req = rel_data_req.req;
  `else
    assign core_nominal_outputs[i].instr_req = instr_req;
    assign core_nominal_outputs[i].instr_addr = instr_addr;
    assign core_nominal_outputs[i].data_req = data_req;
    assign core_bus_outputs[i].data_we = data_we;
    assign core_bus_outputs[i].data_be = data_be;
    assign core_bus_outputs[i].data_addr = data_addr;
    assign core_bus_outputs[i].data_wdata = data_wdata;
  `endif

    // lowest 8 bits are ignored internally
    logic [31:0] ibex_boot_addr;
    `ifdef TMR_IRQ
    assign ibex_boot_addr = boot_addr_i[i] & 32'hFFFFFF00;
    `else // TMR_IRQ
    assign ibex_boot_addr = core_input_connect[i].boot_addr & 32'hFFFFFF00;
    `endif // TMR_IRQ
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
    ) i_ibex_tmr_part (
      .clk_i,
      .rst_ni,
      .test_en_i          ( test_enable_i  ),
      .hart_id_i          ( HartId ),
      .boot_addr_i        ( ibex_boot_addr ),

      // Instruction Memory Interface:
      .instr_req_o        ( instr_req ),
      .instr_gnt_i        ( instr_gnt ),
      .instr_rdata_i      ( instr_rdata ),
      .instr_rvalid_i     ( instr_rvalid ),
      .instr_addr_o       ( instr_addr ),
      .instr_err_i        ( instr_err ),

      // Data memory interface:
      .data_req_o         ( data_req ),
      .data_gnt_i         ( data_gnt ),
      .data_rvalid_i      ( data_rvalid ),
      .data_we_o          ( data_we ),
      .data_be_o          ( data_be ),
      .data_addr_o        ( data_addr ),
      .data_wdata_o       ( data_wdata ),
      .data_rdata_i       ( data_rdata ),
      .data_err_i         ( data_err ),

      // Interrupts
      .irq_software_i     ( 1'b0         ),
      .irq_external_i     ( 1'b0         ),
`ifdef TMR_IRQ
      .irq_timer_i        ( timer0_irq_i[i] ),
      .irq_fast_i         ( irqs_i[i]       ),
`else // TMR_IRQ
      .irq_timer_i        ( core_input_connect[i].timer_irq ),
      .irq_fast_i         ( core_input_connect[i].irqs       ),
`endif // TMR_IRQ
      .irq_nm_i           ( 1'b0         ),
      .irq_pending_o      ( ),


      .crash_dump_o       ( ),

      .debug_req_i        ( core_input_connect[i].debug_req ),
      `ifdef TMR_IRQ
      .fetch_enable_i     ( fetch_enable_i[i] ),
      `else // TMR_IRQ
      .fetch_enable_i     ( core_input_connect[i].fetch_enable ),
      `endif // TMR_IRQ
      .core_busy_o        ( core_nominal_outputs[i].core_busy )
    );
  end

endmodule
