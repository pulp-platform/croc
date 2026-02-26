// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>
// - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

package tb_croc_pkg;

  // Clocks
  localparam realtime ClkPeriodSys  = 50ns;    // 20 MHz
  localparam realtime ClkPeriodJtag = 50ns;    // 20 MHz
  localparam realtime ClkPeriodRef  = 30518ns; // 32 KiHz

  // Number of clock cycles the reset is applied
  // for at the beginnig of the simulation
  localparam int unsigned RstCycles = 1;

  // UART
  localparam int unsigned UartBaudRate  = 115200;
  localparam int unsigned UartParityEna = 0;

  // Base address of the SRAM banks
  localparam bit [31:0] SramBaseAddr = croc_pkg::get_croc_start_addr(croc_pkg::XbarBank0);

  // Soc control registers addresses
  localparam bit [31:0] SocCtrlBaseAddr = croc_pkg::get_periph_start_addr(croc_pkg::PeriphSocCtrl);
  localparam bit [31:0] BootAddrAddr    = SocCtrlBaseAddr + soc_ctrl_regs_pkg::SOC_CTRL_BOOTADDR_OFFSET;
  localparam bit [31:0] FetchEnAddr     = SocCtrlBaseAddr + soc_ctrl_regs_pkg::SOC_CTRL_FETCHEN_OFFSET;
  localparam bit [31:0] CoreStatusAddr  = SocCtrlBaseAddr + soc_ctrl_regs_pkg::SOC_CTRL_CORESTATUS_OFFSET;

  // CLINT base address (msip register is at offset 0)
  localparam bit [31:0] ClintBaseAddr   = croc_pkg::get_periph_start_addr(croc_pkg::PeriphClint);

endpackage
