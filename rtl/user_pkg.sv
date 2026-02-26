// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "obi/typedef.svh"

package user_pkg;

  //////////////////
  // User Manager //
  //////////////////

  // None


  ///////////////////////
  // User Subordinates //
  ///////////////////////

  // The base address of the user domain can be retrived from `croc_pkg::UserBaseAddr`
  // Recommended: place subordinates at 4KB boundaries (32'hXXXX_X000)

  /// Enum with user domain demultiplexer subordinate idxs
  typedef enum int {
    UserError  = 0,
    UserDesign = 1
  } user_demux_outputs_e;

  /// Address rules given to user domain demultiplexer (see croc_pkg.sv for examples)
  localparam croc_pkg::addr_map_rule_t [0:0] user_addr_map = '{
    '{ idx: UserDesign,  start_addr: croc_pkg::UserBaseAddr, end_addr: (croc_pkg::UserBaseAddr + 32'h1000_0000) }
  };
  // All addresses outside the defined address rules go to the error subordinate

  // +1 for additional OBI error
  localparam int unsigned NumDemuxSbr = $size(user_addr_map) + 1;

endpackage
