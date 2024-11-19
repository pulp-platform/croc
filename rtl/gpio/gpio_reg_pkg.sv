// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Hannah Pochert <hpochert@student.ethz.ch>
// - Luisa Wüthrich <lwuethri@student.ethz.ch>
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

package gpio_reg_pkg;

  // Address width within this peripheral used for address decoding (peripheral occupies 4KB)
  parameter int AddressWidth = 12;

  //-----------------------------------------------------------------------------------------------
  // Signals from registers to logic
  //-----------------------------------------------------------------------------------------------

  typedef struct packed {
    logic dir;
    logic en;
    logic out;
    logic toggle; // passthrough from OBI write, indicates bit toggle in this cycle
    logic intrpt_en;
    logic intrpt;
    logic intrpt_edge; // 0: falling, 1: rising edge sensitive
  } gpio_reg2hw_t;


  //-----------------------------------------------------------------------------------------------
  // Signals from logic to registers
  //-----------------------------------------------------------------------------------------------

  typedef struct packed {
    logic sync_in;
    logic out;
    // is set 1 whenever there is a reason to write from internal GPIO logic to Out Register
    logic out_valid;
    logic intrpt;
    // is set 1 whenever there is a reason to write from internal GPIO logic to Intrpt Status Register
    logic intrpt_valid;
  } gpio_hw2reg_t;


  //-----------------------------------------------------------------------------------------------
  // Offsets
  //-----------------------------------------------------------------------------------------------
  // Register address offsets from GPIO base address
  // Spacing between registers left to allow for future implementation
  // of multiple GPIO banks (enabling more than 32 GPIOs)
  parameter logic [AddressWidth-1:0] GPIO_DIR_OFFSET           = 11'h0;
  parameter logic [AddressWidth-1:0] GPIO_EN_OFFSET            = 11'h80;
  parameter logic [AddressWidth-1:0] GPIO_IN_OFFSET            = 11'h100;
  parameter logic [AddressWidth-1:0] GPIO_OUT_OFFSET           = 11'h180;
  parameter logic [AddressWidth-1:0] GPIO_TOGGLE_OFFSET        = 11'h200;
  parameter logic [AddressWidth-1:0] GPIO_INTRPT_EN_OFFSET     = 11'h280;
  parameter logic [AddressWidth-1:0] GPIO_INTRPT_STATUS_OFFSET = 11'h300;
  parameter logic [AddressWidth-1:0] GPIO_INTRPT_EDGE_OFFSET   = 11'h380;
  // Next feature uses address h380

endpackage
