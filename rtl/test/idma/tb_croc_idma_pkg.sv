// Copyright 2026 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Author: Daniel Keller <dankeller@iis.ee.ethz.ch>

/// Test package for croc_idma standalone testbench
package tb_croc_idma_pkg;

  ////////////////////
  // Timing         //
  ////////////////////
  localparam realtime ClkPeriod  = 50ns;           // 20 MHz (matches croc system clock)
  localparam realtime ApplDelay  = ClkPeriod / 4;  // 12.5ns — drive signals
  localparam realtime AcqDelay   = ClkPeriod * 3 / 4; // 37.5ns — sample signals
  localparam int unsigned RstCycles = 2;

  //////////////////////////////
  // DMA Register Offsets     //
  //////////////////////////////
  // Word addresses matching croc_idma.sv
  localparam logic [8:0] ConfOffset       = 9'h00;
  localparam logic [8:0] NextIdOffset     = 9'h44;
  localparam logic [8:0] DoneIdOffset     = 9'h84;
  localparam logic [8:0] DstAddrOffset    = 9'hD0;
  localparam logic [8:0] SrcAddrOffset    = 9'hD8;
  localparam logic [8:0] LengthOffset     = 9'hE0;
  localparam logic [8:0] DstStride2Offset = 9'hE8;
  localparam logic [8:0] SrcStride2Offset = 9'hF0;
  localparam logic [8:0] Reps2Offset      = 9'hF8;

  // Conf register bit positions
  localparam int unsigned ConfNdEnaBit = 11;

  ////////////////////////////
  // Sim Memory Regions     //
  ////////////////////////////
  localparam logic [31:0] SrcMemBase = 32'h1000_0000;
  localparam logic [31:0] DstMemBase = 32'h2000_0000;

endpackage
