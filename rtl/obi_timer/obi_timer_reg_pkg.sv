// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

package obi_timer_reg_pkg;

  // Internal address width. We only need 5 bits to
  // store the offsets of the registers implemented.
  localparam int unsigned IntAddrWidth = 5;

  // Register offsets
  parameter logic [IntAddrWidth-1:0] OBI_TIMER_COUNT_OFFSET    = 5'h00;
  parameter logic [IntAddrWidth-1:0] OBI_TIMER_COMPARE_OFFSET  = 5'h04;
  parameter logic [IntAddrWidth-1:0] OBI_TIMER_CTRL_OFFSET     = 5'h08;
  parameter logic [IntAddrWidth-1:0] OBI_TIMER_STATUS_OFFSET   = 5'h0C;

endpackage
