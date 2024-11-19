// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Hannah Pochert <hpochert@student.ethz.ch>
// - Luisa Wüthrich <lwuethri@student.ethz.ch>
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "register_interface/typedef.svh"
`include "obi/typedef.svh"

package user_pkg;

  ////////////////////////////////
  // User Manager Address maps //
  ///////////////////////////////
  
  localparam int unsigned NumUserMgr        = 2;   // Neopixel (DMA) + Placeholder

  // Enum for bus indices for mux
  typedef enum int {
    Dma      = 0,
    Test1    = 1
  } user_mux_inputs_e;


  /////////////////////////////////////
  // User Subordinate Address maps ////
  /////////////////////////////////////

  localparam int unsigned NumUserDomainSubordinates = 3; // ROM + Neopixel + UART

  localparam bit [31:0] UserRomAddrOffset   = croc_pkg::UserBaseAddr; // 32'h2000_0000;
  localparam bit [31:0] UserRomAddrRange    = 32'h0000_1000;          // every subordinate has at least 4KB

  localparam bit [31:0] UserNeoPixelAddrOffset   = UserRomAddrOffset + UserRomAddrRange; // 32'h2000_1000;
  localparam bit [31:0] UserNeoPixelAddrRange    = 32'h0000_1000;

  localparam bit [31:0] UserUartAddrOffset   = 32'h2000_4000;
  localparam bit [31:0] UserUartAddrRange    = 32'h0000_1000;

  localparam int unsigned NumDemuxSbrRules  = NumUserDomainSubordinates;  // ROM + Neopixel + UART
  localparam int unsigned NumDemuxSbr       = NumDemuxSbrRules + 1; // additional OBI error


  // Enum for bus indices
  typedef enum int {
    UserError    = 0,
    UserRom      = 1,
    UserNeoPixel = 2,
    UserUart     = 3
  } user_demux_outputs_e;

  // Address rules given to address decoder
  localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = '{                          // 0: OBI Error (default)
    '{ idx: UserRom,       start_addr: UserRomAddrOffset,       end_addr: UserRomAddrOffset  + UserRomAddrRange  }, // 1: ROM
    '{ idx: UserNeoPixel,  start_addr: UserNeoPixelAddrOffset,  end_addr: UserNeoPixelAddrOffset + UserNeoPixelAddrRange   },  // 2: NeoPixel
    '{ idx: UserUart,      start_addr: UserUartAddrOffset,      end_addr: UserUartAddrOffset + UserUartAddrRange } // 3: UART
  };

endpackage
