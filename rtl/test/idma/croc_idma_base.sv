// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Author: Daniel Keller <dankeller@iis.ee.ethz.ch>

/// Base harness for croc_idma standalone testbench.
/// Instantiates clock/reset, the DUT, two OBI simulation memories
/// (read-port and write-port), and the OBI config driver interface.
///
/// This is the OBI equivalent of idma_inst64_base.sv from the iDMA project.
module croc_idma_base;
  import croc_pkg::*;
  import tb_croc_idma_pkg::*;

  // ──────────────────────────────────────────
  //  Clock and Reset
  // ──────────────────────────────────────────
  logic clk;
  logic rst_n;

  clk_rst_gen #(
    .ClkPeriod   ( ClkPeriod ),
    .RstClkCycles( RstCycles )
  ) i_clk_rst (
    .clk_o ( clk   ),
    .rst_no( rst_n )
  );

  // ──────────────────────────────────────────
  //  Driver Interface
  // ──────────────────────────────────────────
  croc_idma_drv_if drv_if (
    .clk  ( clk   ),
    .rst_n( rst_n )
  );

  // ──────────────────────────────────────────
  //  DUT
  // ──────────────────────────────────────────
  logic busy, irq;
  mgr_obi_req_t obi_read_req;
  mgr_obi_rsp_t obi_read_rsp;
  mgr_obi_req_t obi_write_req;
  mgr_obi_rsp_t obi_write_rsp;

  croc_idma #(
    .ObiMrgCfg        ( MgrObiCfg        ),
    .ObiSbrCfg        ( SbrObiCfg        ),
    .TFLenWidth       ( MgrObiCfg.AddrWidth ),
    .obi_mrg_a_chan_t ( mgr_obi_a_chan_t ),
    .obi_mrg_r_chan_t ( mgr_obi_r_chan_t ),
    .obi_mrg_req_t    ( mgr_obi_req_t    ),
    .obi_mrg_rsp_t    ( mgr_obi_rsp_t    ),
    .obi_sbr_req_t    ( sbr_obi_req_t    ),
    .obi_sbr_rsp_t    ( sbr_obi_rsp_t    )
  ) i_dut (
    .clk_i           ( clk              ),
    .rst_ni          ( rst_n            ),
    .obi_cfg_req_i   ( drv_if.cfg_req   ),
    .obi_cfg_rsp_o   ( drv_if.cfg_rsp   ),
    .obi_read_req_o  ( obi_read_req     ),
    .obi_read_rsp_i  ( obi_read_rsp     ),
    .obi_write_req_o ( obi_write_req    ),
    .obi_write_rsp_i ( obi_write_rsp    ),
    .busy_o          ( busy             ),
    .irq_o           ( irq              )
  );

  // ──────────────────────────────────────────
  //  OBI Simulation Memories
  // ──────────────────────────────────────────
  // Read-port memory: pre-loaded with source data, DMA reads from here.
  obi_sim_mem #(
    .ObiCfg            ( MgrObiCfg       ),
    .obi_req_t         ( mgr_obi_req_t   ),
    .obi_rsp_t         ( mgr_obi_rsp_t   ),
    .obi_r_chan_t      ( mgr_obi_r_chan_t ),
    .WarnUninitialized ( 1'b1            ),
    .ApplDelay         ( ApplDelay       ),
    .AcqDelay          ( AcqDelay        )
  ) i_read_mem (
    .clk_i      ( clk          ),
    .rst_ni     ( rst_n        ),
    .obi_req_i  ( obi_read_req ),
    .obi_rsp_o  ( obi_read_rsp ),
    .mon_valid_o(              ),
    .mon_we_o   (              ),
    .mon_addr_o (              ),
    .mon_wdata_o(              ),
    .mon_be_o   (              ),
    .mon_id_o   (              )
  );

  // Write-port memory: DMA writes destination data here.
  obi_sim_mem #(
    .ObiCfg            ( MgrObiCfg       ),
    .obi_req_t         ( mgr_obi_req_t   ),
    .obi_rsp_t         ( mgr_obi_rsp_t   ),
    .obi_r_chan_t      ( mgr_obi_r_chan_t ),
    .WarnUninitialized ( 1'b0            ),
    .ApplDelay         ( ApplDelay       ),
    .AcqDelay          ( AcqDelay        )
  ) i_write_mem (
    .clk_i      ( clk           ),
    .rst_ni     ( rst_n         ),
    .obi_req_i  ( obi_write_req ),
    .obi_rsp_o  ( obi_write_rsp ),
    .mon_valid_o(               ),
    .mon_we_o   (               ),
    .mon_addr_o (               ),
    .mon_wdata_o(               ),
    .mon_be_o   (               ),
    .mon_id_o   (               )
  );

  // ──────────────────────────────────────────
  //  Memory Helper Tasks / Functions
  // ──────────────────────────────────────────

  /// Initialize source memory with incrementing byte pattern.
  task automatic mem_init_src(
      input logic [31:0] base_addr,
      input int unsigned num_bytes
  );
    for (int unsigned i = 0; i < num_bytes; i++) begin
      i_read_mem.mem[base_addr + i] = i[7:0];
    end
  endtask

  /// Write a single byte into source memory.
  task automatic mem_write_src_byte(input logic [31:0] addr, input logic [7:0] data);
    i_read_mem.mem[addr] = data;
  endtask

  /// Read a byte from source (read-port) memory.
  function automatic logic [7:0] mem_read_src_byte(input logic [31:0] addr);
    if (i_read_mem.mem.exists(addr)) return i_read_mem.mem[addr];
    else return 8'hXX;
  endfunction

  /// Read a byte from destination (write-port) memory.
  function automatic logic [7:0] mem_read_dst_byte(input logic [31:0] addr);
    if (i_write_mem.mem.exists(addr)) return i_write_mem.mem[addr];
    else return 8'hXX;
  endfunction

  /// Verify destination memory against source, return error count.
  function automatic int unsigned mem_verify(
      input logic [31:0] src_addr,
      input logic [31:0] dst_addr,
      input int unsigned num_bytes
  );
    int unsigned errors = 0;
    for (int unsigned i = 0; i < num_bytes; i++) begin
      automatic logic [7:0] expected = mem_read_src_byte(src_addr + i);
      automatic logic [7:0] actual   = mem_read_dst_byte(dst_addr + i);
      if (actual !== expected) begin
        if (errors < 10)
          $error("[VERIFY] Mismatch at offset %0d: expected 0x%02h, got 0x%02h",
                 i, expected, actual);
        errors++;
      end
    end
    return errors;
  endfunction

endmodule
