// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

package soc_ctrl_regs_pkg;

  // Internal address width. We only need 5 bits to
  // store the offsets of the five registers implemented.
  localparam int unsigned IntAddrWidth = 5;

  // Register offsets
  parameter logic [IntAddrWidth-1:0] SOC_CTRL_BOOTADDR_OFFSET   = 5'h00;
  parameter logic [IntAddrWidth-1:0] SOC_CTRL_FETCHEN_OFFSET    = 5'h04;
  parameter logic [IntAddrWidth-1:0] SOC_CTRL_CORESTATUS_OFFSET = 5'h08;
  parameter logic [IntAddrWidth-1:0] SOC_CTRL_BOOTMODE_OFFSET   = 5'h0c;
  parameter logic [IntAddrWidth-1:0] SOC_CTRL_SRAM_DLY_OFFSET   = 5'h10;

endpackage
