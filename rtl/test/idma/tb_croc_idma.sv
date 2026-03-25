// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Author: Daniel Keller <dankeller@iis.ee.ethz.ch>

/// Standalone testbench for croc_idma using DPI-C.
///
/// The actual test logic lives in C (test_idma_dpi.c) and uses
/// the same iDMA HAL API as the software SDK (idma_hal_dpi.c).
/// Register accesses are bridged to OBI transactions via DPI export tasks;
/// memory init/verify uses DPI export functions that access obi_sim_mem directly.
///
/// Build (QuestaSim):
///   cd vsim
///   ./run_vsim.sh --flist --build
///   # Compile DPI shared library:
///   gcc -shared -fPIC -o dpi_idma.so \
///       -I$(QUESTA_HOME)/include \
///       -I../rtl/test/idma/dpi \
///       ../rtl/test/idma/dpi/idma_hal_dpi.c \
///       ../rtl/test/idma/dpi/test_idma_dpi.c
///   # Run:
///   ./run_vsim.sh --top tb_croc_idma --run none
///   # (with DPI lib loaded via +sv_lib or -sv_lib flag)
module tb_croc_idma;
  import croc_pkg::*;
  import tb_croc_idma_pkg::*;

  // ──────────────────────────────────────────
  //  Base harness (clock, reset, DUT, memories, driver)
  // ──────────────────────────────────────────
  croc_idma_base i_base();

  // ──────────────────────────────────────────
  //  DPI Import: C test entry point
  // ──────────────────────────────────────────
  import "DPI-C" context task run_idma_test(output int result);

  // ──────────────────────────────────────────
  //  DPI Exports: register access (time-consuming OBI transactions)
  // ──────────────────────────────────────────
  export "DPI-C" task dpi_reg_write;
  export "DPI-C" task dpi_reg_read;

  /// Write a 32-bit register via OBI config port.
  /// addr is the full address (e.g., 0x0300B0D8 for SRC_ADDR);
  /// the DUT extracts addr[8:0] internally.
  task automatic dpi_reg_write(input int unsigned addr, input int unsigned data);
    logic [31:0] rdata;
    logic err;
    i_base.drv_if.obi_write(addr[31:0], data[31:0], 4'hF, rdata, err);
  endtask

  /// Read a 32-bit register via OBI config port.
  task automatic dpi_reg_read(input int unsigned addr, output int unsigned data);
    logic [31:0] rdata;
    logic err;
    i_base.drv_if.obi_read(addr[31:0], rdata, err);
    data = rdata;
  endtask

  // ──────────────────────────────────────────
  //  DPI Exports: memory access (zero-time, direct sim-mem access)
  // ──────────────────────────────────────────
  export "DPI-C" function dpi_src_mem_write32;
  export "DPI-C" function dpi_dst_mem_read32;

  /// Write a 32-bit word into the source (read-port) sim memory.
  /// Used by C test code to pre-load data before a DMA transfer.
  function void dpi_src_mem_write32(input int unsigned addr, input int unsigned data);
    for (int i = 0; i < 4; i++) begin
      i_base.i_read_mem.mem[addr + i] = data[8*i +: 8];
    end
  endfunction

  /// Read a 32-bit word from the destination (write-port) sim memory.
  /// Used by C test code to verify data after a DMA transfer.
  function int unsigned dpi_dst_mem_read32(input int unsigned addr);
    automatic int unsigned data = 0;
    for (int i = 0; i < 4; i++) begin
      if (i_base.i_write_mem.mem.exists(addr + i))
        data[8*i +: 8] = i_base.i_write_mem.mem[addr + i];
      else
        data[8*i +: 8] = 8'h00;
    end
    return data;
  endfunction

  // ──────────────────────────────────────────
  //  DPI Exports: byte-level memory access
  // ──────────────────────────────────────────
  export "DPI-C" function dpi_src_mem_write8;
  export "DPI-C" function dpi_src_mem_read8;
  export "DPI-C" function dpi_dst_mem_read8;

  function void dpi_src_mem_write8(input int unsigned addr, input byte unsigned data);
    i_base.i_read_mem.mem[addr] = data;
  endfunction

  function byte unsigned dpi_src_mem_read8(input int unsigned addr);
    if (i_base.i_read_mem.mem.exists(addr))
      return i_base.i_read_mem.mem[addr];
    else
      return 8'h00;
  endfunction

  function byte unsigned dpi_dst_mem_read8(input int unsigned addr);
    if (i_base.i_write_mem.mem.exists(addr))
      return i_base.i_write_mem.mem[addr];
    else
      return 8'h00;
  endfunction

  // ──────────────────────────────────────────
  //  DPI Exports: status signals (zero-time)
  // ──────────────────────────────────────────
  export "DPI-C" function dpi_get_busy;
  export "DPI-C" function dpi_get_irq;

  function int unsigned dpi_get_busy();
    return {31'b0, i_base.busy};
  endfunction

  function int unsigned dpi_get_irq();
    return {31'b0, i_base.irq};
  endfunction

  // ──────────────────────────────────────────
  //  DPI Exports: wait N clock cycles (time-consuming)
  // ──────────────────────────────────────────
  export "DPI-C" task dpi_wait_cycles;

  task automatic dpi_wait_cycles(input int unsigned n);
    repeat (n) @(posedge i_base.clk);
  endtask

  // ──────────────────────────────────────────
  //  Main test sequence
  // ──────────────────────────────────────────
  initial begin
    int result;
    $timeformat(-9, 0, "ns", 12);

    // Wait for reset release
    @(posedge i_base.rst_n);
    repeat (5) @(posedge i_base.clk);

    // Call C test via DPI — all test logic runs in C,
    // calling back into SV for OBI transactions and memory access
    run_idma_test(result);

    repeat (50) @(posedge i_base.clk);

    if (result == 0)
      $display("[SV] Simulation finished: SUCCESS");
    else
      $fatal(1, "[SV] Simulation finished: FAIL (return code 0x%0h)", result);

    $finish();
  end

  // Timeout watchdog
  initial begin
    #(100ms);
    $fatal(1, "[TIMEOUT] Simulation exceeded 100ms");
  end

  // Waveform dump
  initial begin
    $dumpfile("tb_croc_idma.fst");
    $dumpvars(0, tb_croc_idma);
  end

endmodule
