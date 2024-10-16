// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "register_interface/typedef.svh"
`include "obi/typedef.svh"

package user_pkg;

  import croc_pkg::*;

  localparam int unsigned HartId = 32'd0;
  localparam int unsigned PulpJtagIdCode = 32'h1_0000_db3;

  typedef enum logic {
    Jtag = 1'b0
  } bootmode_e;

  localparam int unsigned NumExternalIrqs = 4;
  
  ////////////////////////////////////
  // Address maps/////
  ////////////////////////////////////

  // ideally compatible with: https://pulp-platform.github.io/cheshire/um/arch/#memory-map

  // Address map data type
  typedef struct packed {
      logic [31:0] idx;
      logic [31:0] start_addr;
      logic [31:0] end_addr;
  } addr_map_rule_t;

  ////////////////////////////////////
  // User Manager Address maps/////
  ////////////////////////////////////
  //Calculate where the address space for croc is which is used for later calculations
  localparam bit [31:0] XbarCrocAddrOffset   = DebugAddrOffset;
  localparam bit [31:0] XbarCrocAddrRange    = MemBaseAddr + BankAddrRange - DebugAddrOffset;

  localparam int unsigned NumUserMgr        = 2;   // place holder


  // Enum for bus indices for mux
  typedef enum int {
    Test0   = 0,
    Test1    = 1
  } user_mux_inputs_e;


  /////////////////////////////////////
  // User Subordinate Address maps ////
  /////////////////////////////////////

  // OBI is configured as 32 bit data, 32 bit address width
  //localparam int unsigned UserNumManagers     = 1; // Crocdomain
  //localparam int unsigned UserNumSubordinates = 2; // ROM + Error

  //address space for ROM
  localparam bit [31:0] XbarRomAddrOffset   = XbarCrocAddrOffset + XbarCrocAddrRange; //32'h1000_1000;
  localparam bit [31:0] XbarRomAddrRange    = 32'h0000_1000; //TODO : wie viel wollen wir ins ROM schreiben

  //localparam bit [31:0] Buffer = 32'h0000_1000; //Do we need this and if yes how big? TODO: find out if OBI Bus has Alignment requirements
  //localparam bit [31:0] XbarGpioAddrOffset   = XbarRomAddrOffset + XbarRomAddrRange + Buffer;
  //localparam bit [31:0] XbarGpioAddrRange    = 32'h0000_1000;

  localparam int unsigned NumUserSbrRules   = 1; //2;   // ROM + (Gpio)
  localparam int unsigned NumUserSbr        = NumUserSbrRules + 1; // additional OBI error

  // Enum for bus indices
  typedef enum int {
    XbarError  = 0,
    XbarRom    = 1//,
    //XbarGpio  = 2
  } user_demux_outputs_e;

  localparam addr_map_rule_t [NumUserSbrRules-1:0] user_addr_map = '{                                           // 0: Error
    '{ idx: XbarRom,  start_addr: XbarRomAddrOffset,  end_addr: XbarRomAddrOffset + XbarRomAddrRange   }   // 1: ROM
    //'{ idx: XbarGpio,  start_addr: XbarGpioAddrOffset,  end_addr: XbarGpioAddrOffset + XbarGpioAddrRange   }  // 2: GPIO
  };

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  // no optional bits in the OBI interconnect
  `OBI_TYPEDEF_MINIMAL_A_OPTIONAL(a_optional_t)
  `OBI_TYPEDEF_MINIMAL_R_OPTIONAL(r_optional_t)
  
  // Create types for OBI managers/masters (from a manager into the interconnect)
  localparam obi_pkg::obi_cfg_t MgrObiCfg = obi_pkg::obi_default_cfg(32, 32, 1, obi_pkg::ObiMinimalOptionalConfig);
  `OBI_TYPEDEF_A_CHAN_T(mgr_obi_a_chan_t, MgrObiCfg.AddrWidth, MgrObiCfg.DataWidth, MgrObiCfg.IdWidth, a_optional_t)
  `OBI_TYPEDEF_DEFAULT_REQ_T(mgr_obi_req_t, mgr_obi_a_chan_t)
  `OBI_TYPEDEF_R_CHAN_T(mgr_obi_r_chan_t, MgrObiCfg.DataWidth, MgrObiCfg.IdWidth, r_optional_t)
  `OBI_TYPEDEF_RSP_T(mgr_obi_rsp_t, mgr_obi_r_chan_t)

  // Create types for OBI subordinates/slaves (out of the interconnect, into the device)
  localparam obi_pkg::obi_cfg_t SbrObiCfg = obi_pkg::mux_grow_cfg(MgrObiCfg, croc_pkg::CrocNumManagers);
  `OBI_TYPEDEF_A_CHAN_T(sbr_obi_a_chan_t, SbrObiCfg.AddrWidth, SbrObiCfg.DataWidth, SbrObiCfg.IdWidth, a_optional_t)
  `OBI_TYPEDEF_DEFAULT_REQ_T(sbr_obi_req_t, sbr_obi_a_chan_t)
  `OBI_TYPEDEF_R_CHAN_T(sbr_obi_r_chan_t, SbrObiCfg.DataWidth, SbrObiCfg.IdWidth, r_optional_t)
  `OBI_TYPEDEF_RSP_T(sbr_obi_rsp_t, sbr_obi_r_chan_t)

  // Register Interface configured as 32 bit data, 32 bit address width (4 byte enable bits)
  `REG_BUS_TYPEDEF_ALL(reg, logic[31:0], logic[31:0], logic[3:0]);


endpackage
