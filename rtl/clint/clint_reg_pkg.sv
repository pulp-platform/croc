// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

package clint_reg_pkg;

  // Internal address width. We need 16 bits to
  // store the offsets of the registers implemented.
  localparam int unsigned IntAddrWidth = 16;

  // Register offsets
  parameter logic [IntAddrWidth-1:0] CLINT_MSIP_OFFSET           = 16'h0000;
  parameter logic [IntAddrWidth-1:0] CLINT_MTIMECMP_LOW0_OFFSET  = 16'h4000;
  parameter logic [IntAddrWidth-1:0] CLINT_MTIMECMP_HIGH0_OFFSET = 16'h4004;
  parameter logic [IntAddrWidth-1:0] CLINT_MTIME_LOW_OFFSET      = 16'hbff8;
  parameter logic [IntAddrWidth-1:0] CLINT_MTIME_HIGH_OFFSET     = 16'hbffc;

endpackage
