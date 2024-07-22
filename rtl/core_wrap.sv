// Copyright 2024 ETH Zurich and University of Bologna.
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the "License"); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

module core_wrap import croc_pkg::*; #() (
  input  logic clk_i,
  input  logic rst_ni,
  input  logic ref_clk_i,
  input  logic test_enable_i,

  input logic [31:0] irqs_i,
  input logic timer0_irq_i,

  input  logic [31:0] boot_addr_i,

  // Instruction memory interface
  output logic        instr_req_o,
  input  logic        instr_gnt_i,
  input  logic        instr_rvalid_i,
  output logic [31:0] instr_addr_o,
  input  logic [31:0] instr_rdata_i,
  input  logic        instr_err_i,

  // Data memory interface
  output logic        data_req_o,
  input  logic        data_gnt_i,
  input  logic        data_rvalid_i,
  output logic        data_we_o,
  output logic [3:0]  data_be_o,
  output logic [31:0] data_addr_o,
  output logic [31:0] data_wdata_o,
  input  logic [31:0] data_rdata_i,
  input  logic        data_err_i,

  // Debug Interface
  input  logic        debug_req_i,

  // CPU Control Signals
  input  logic        fetch_enable_i,

  output logic        core_sleep_o
);
  // Interrupt signals
  logic [31:0] core_irqs;

  // Ibex expects 0x00 offset (adds reset offset 0x80 internally)
  logic[31:0] ibex_boot_addr;
  assign ibex_boot_addr = boot_addr_i & 32'hFFFFFF00; 
// ifdef ordered according to priority
`ifdef VERILATOR
  ibex_core #(
`elsif SYNTHESIS
  ibex_core #(
`elsif TRACE_EXECUTION
  ibex_core_tracing #(
`else
  ibex_core #(
`endif
    .PMPEnable          ( 1'b0                ),
    .PMPGranularity     ( 0                   ),
    .PMPNumRegions      ( 4                   ),
    .MHPMCounterNum     ( 0                   ),
    .MHPMCounterWidth   ( 40                  ),
    .RV32E              ( 0                   ),
    .RV32M              ( ibex_pkg::RV32MNone ),
    .RV32B              ( ibex_pkg::RV32BNone ),
    .RegFile            ( ibex_pkg::RegFileFF ),
    .BranchTargetALU    ( 1'b0                ),
    .WritebackStage     ( 1'b0                ),
    .ICache             ( 1'b0                ),
    .ICacheECC          ( 1'b0                ),
    .BranchPredictor    ( 1'b0                ),
    .DbgTriggerEn       ( 1'b1                ),
    .DbgHwBreakNum      ( 1                   ),
    .SecureIbex         ( 1'b0                ),
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
    .irq_x_i            ( '0 ),
    .irq_x_ack_o        ( ),
    .irq_x_ack_id_o     ( ),

    .external_perf_i    ( '0 ),

    .debug_req_i,
    .fetch_enable_i,
    .alert_minor_o      ( ),
    .alert_major_o      ( ),
    .core_sleep_o
  );

endmodule
