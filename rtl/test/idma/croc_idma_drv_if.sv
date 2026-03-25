// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Author: Daniel Keller <dankeller@iis.ee.ethz.ch>

/// OBI configuration port driver interface for croc_idma standalone testing.
/// Provides low-level OBI read/write tasks and high-level DMA API tasks
/// (mirroring the C API in sw/lib/inc/idma.h).
///
/// This is the OBI equivalent of idma_inst64_drv_if.sv from the iDMA project.
interface croc_idma_drv_if (
    input logic clk,
    input logic rst_n
);
  import croc_pkg::*;
  import tb_croc_idma_pkg::*;

  // OBI subordinate signals driven to the DUT config port
  sbr_obi_req_t cfg_req;
  // OBI subordinate response from the DUT (directly connected by base harness)
  sbr_obi_rsp_t cfg_rsp;

  // Performance tracking
  longint unsigned cycle_counter;
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) cycle_counter <= 0;
    else cycle_counter <= cycle_counter + 1;
  end

  // Initialize request to idle
  initial begin
    cfg_req = '0;
  end

  // ──────────────────────────────────────────
  //  Low-level OBI tasks
  // ──────────────────────────────────────────

  /// OBI write transaction: address phase (we=1), wait for grant, then wait for response.
  task automatic obi_write(
      input  logic [31:0] addr,
      input  logic [31:0] wdata,
      input  logic [ 3:0] be,
      output logic [31:0] rdata,
      output logic         err
  );
    // Drive address phase
    @(posedge clk);
    #(ApplDelay);
    cfg_req.a.addr       <= addr;
    cfg_req.a.we         <= 1'b1;
    cfg_req.a.be         <= be;
    cfg_req.a.wdata      <= wdata;
    cfg_req.a.aid        <= '0;
    cfg_req.a.a_optional <= '0;
    cfg_req.req          <= 1'b1;

    // Wait for grant
    forever begin
      #(AcqDelay - ApplDelay);
      if (cfg_rsp.gnt) break;
      @(posedge clk);
      #(ApplDelay);
    end

    // Deassert request on the next cycle
    @(posedge clk);
    #(ApplDelay);
    cfg_req.req <= 1'b0;

    // Wait for response valid
    forever begin
      #(AcqDelay - ApplDelay);
      if (cfg_rsp.rvalid) break;
      @(posedge clk);
      #(ApplDelay);
    end
    rdata = cfg_rsp.r.rdata;
    err   = cfg_rsp.r.err;
  endtask

  /// OBI read transaction: address phase (we=0), wait for grant, then wait for response.
  task automatic obi_read(
      input  logic [31:0] addr,
      output logic [31:0] rdata,
      output logic         err
  );
    @(posedge clk);
    #(ApplDelay);
    cfg_req.a.addr       <= addr;
    cfg_req.a.we         <= 1'b0;
    cfg_req.a.be         <= 4'hF;
    cfg_req.a.wdata      <= '0;
    cfg_req.a.aid        <= '0;
    cfg_req.a.a_optional <= '0;
    cfg_req.req          <= 1'b1;

    // Wait for grant
    forever begin
      #(AcqDelay - ApplDelay);
      if (cfg_rsp.gnt) break;
      @(posedge clk);
      #(ApplDelay);
    end

    // Deassert request on the next cycle
    @(posedge clk);
    #(ApplDelay);
    cfg_req.req <= 1'b0;

    // Wait for response valid
    forever begin
      #(AcqDelay - ApplDelay);
      if (cfg_rsp.rvalid) break;
      @(posedge clk);
      #(ApplDelay);
    end
    rdata = cfg_rsp.r.rdata;
    err   = cfg_rsp.r.err;
  endtask

  // ──────────────────────────────────────────
  //  High-level DMA API tasks
  // ──────────────────────────────────────────

  task automatic dma_set_src_addr(input logic [31:0] addr);
    logic [31:0] rdata;
    logic err;
    obi_write({23'b0, SrcAddrOffset}, addr, 4'hF, rdata, err);
    $display("[%0t] DMA set src_addr = 0x%08h", $time, addr);
  endtask

  task automatic dma_set_dst_addr(input logic [31:0] addr);
    logic [31:0] rdata;
    logic err;
    obi_write({23'b0, DstAddrOffset}, addr, 4'hF, rdata, err);
    $display("[%0t] DMA set dst_addr = 0x%08h", $time, addr);
  endtask

  task automatic dma_set_length(input logic [31:0] length);
    logic [31:0] rdata;
    logic err;
    obi_write({23'b0, LengthOffset}, length, 4'hF, rdata, err);
    $display("[%0t] DMA set length = %0d", $time, length);
  endtask

  task automatic dma_set_conf(input logic [31:0] conf);
    logic [31:0] rdata;
    logic err;
    obi_write({23'b0, ConfOffset}, conf, 4'hF, rdata, err);
  endtask

  task automatic dma_enable_2d();
    dma_set_conf(32'h1 << ConfNdEnaBit);
    $display("[%0t] DMA enabled 2D mode", $time);
  endtask

  task automatic dma_disable_2d();
    dma_set_conf(32'h0);
    $display("[%0t] DMA disabled 2D mode", $time);
  endtask

  task automatic dma_set_src_stride(input logic [31:0] stride);
    logic [31:0] rdata;
    logic err;
    obi_write({23'b0, SrcStride2Offset}, stride, 4'hF, rdata, err);
  endtask

  task automatic dma_set_dst_stride(input logic [31:0] stride);
    logic [31:0] rdata;
    logic err;
    obi_write({23'b0, DstStride2Offset}, stride, 4'hF, rdata, err);
  endtask

  task automatic dma_set_reps(input logic [31:0] reps);
    logic [31:0] rdata;
    logic err;
    obi_write({23'b0, Reps2Offset}, reps, 4'hF, rdata, err);
  endtask

  /// Launch DMA transfer by reading NEXT_ID register.
  /// Note: croc_idma gates gnt for NEXT_ID reads on job_req_ready.
  task automatic dma_launch(output logic [31:0] transfer_id);
    logic err;
    obi_read({23'b0, NextIdOffset}, transfer_id, err);
    $display("[%0t] DMA launched, transfer_id = %0d", $time, transfer_id);
  endtask

  /// Poll DONE_ID until it reaches the given transfer_id.
  task automatic dma_wait(input logic [31:0] transfer_id);
    logic [31:0] done_id;
    logic err;
    $display("[%0t] DMA waiting for transfer %0d...", $time, transfer_id);
    forever begin
      obi_read({23'b0, DoneIdOffset}, done_id, err);
      if (done_id >= transfer_id) break;
      repeat (5) @(posedge clk);
    end
    $display("[%0t] DMA transfer %0d completed (done_id=%0d)", $time, transfer_id, done_id);
  endtask

  // ──────────────────────────────────────────
  //  Convenience compound tasks
  // ──────────────────────────────────────────

  /// 1D memcpy: configure and launch a simple copy.
  task automatic dma_memcpy(
      input  logic [31:0] src,
      input  logic [31:0] dst,
      input  logic [31:0] length,
      output logic [31:0] transfer_id
  );
    dma_disable_2d();
    dma_set_src_addr(src);
    dma_set_dst_addr(dst);
    dma_set_length(length);
    dma_launch(transfer_id);
  endtask

  /// 2D memcpy: configure strides/reps, enable 2D, and launch.
  task automatic dma_memcpy_2d(
      input  logic [31:0] src,
      input  logic [31:0] dst,
      input  logic [31:0] length,
      input  logic [31:0] src_stride,
      input  logic [31:0] dst_stride,
      input  logic [31:0] reps,
      output logic [31:0] transfer_id
  );
    dma_enable_2d();
    dma_set_src_addr(src);
    dma_set_dst_addr(dst);
    dma_set_length(length);
    dma_set_src_stride(src_stride);
    dma_set_dst_stride(dst_stride);
    dma_set_reps(reps);
    dma_launch(transfer_id);
  endtask

endinterface
