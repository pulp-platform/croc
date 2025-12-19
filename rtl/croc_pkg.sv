// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

// header files for the two interconnect types used in Croc
`include "obi/typedef.svh"

/// Package for croc configuration, address map and interconnect types
package croc_pkg;
  //////////////////////
  // JTAG Info        //
  //////////////////////
  /// JTAG IDCODE for the Croc JTAG tap, used to identify the device
  localparam struct packed {
    bit [ 3:0]  version;
    bit [15:0]  part_num;
    bit [10:0]  manufacturer;
    bit         _one;
  } PulpJtagIdCode = '{
    _one:         1'b1,     /* must be 1 */
    manufacturer: 11'h6d9,  /* identify as PULP Platform chip */
    part_num:     16'hC0C5, /* default Croc part number */
    version:      4'h0      /* version 0 */
  };


  ////////////////////////
  // SRAM Configuration //
  ////////////////////////
  // Check your target technology which SRAMs are available
  // and then make sure it is implemented as an option in tc_sram_impl.sv
  
  /// Number of SRAM banks, each bank has its own OBI port (accessible in parallel)
  localparam int unsigned NumSramBanks      = 32'd2;
  /// Number of 32-bit words per SRAM bank, determines the depth of each SRAM bank
  localparam int unsigned SramBankNumWords  = 512;


  //////////////////////
  // Address Map Type //
  //////////////////////
  // ideally compatible with:
  // https://pulp-platform.github.io/cheshire/um/arch/#memory-map

  /// Address map data type
  typedef struct packed {
      logic [31:0] idx;
      logic [31:0] start_addr;
      logic [31:0] end_addr;
  } addr_map_rule_t;


  ////////////////////////////////
  // Main Crossbar Address Map ///
  ////////////////////////////////
  /// Number of manager ports into crossbar
  /// Debug module, Core Instr, Core Data, User Domain
  localparam int unsigned NumXbarManagers = 4;

  /// Enum with crossbar subordinate idxs
  typedef enum int {
    XbarError  = 0,
    XbarPeriph = 1,
    XbarUser   = 2,
    XbarBank0  = 3
  } croc_xbar_outputs_e;

  /// Address map given to the main crossbar
  localparam addr_map_rule_t [3:0] croc_addr_map = '{
    '{ idx: XbarPeriph,  start_addr: 32'h0000_0000, end_addr: 32'h1000_0000 },
    '{ idx: XbarUser,    start_addr: 32'h2000_0000, end_addr: 32'h8000_0000 },
    '{ idx: XbarBank0,   start_addr: 32'h1000_0000, end_addr: 32'h1000_0800 },
    '{ idx: XbarBank0+1, start_addr: 32'h1000_0800, end_addr: 32'h1000_1000 }
  };

  // +1 for additional OBI error
  localparam int unsigned NumXbarSubordinates = $size(croc_addr_map) + 1;

  /// Converts the bus idx enum for the main crossbar to start address of a subordinate
  /// Eg : get_croc_start_addr(XbarUser) returns the start address of the User region
  /// This is necesary because the idx do not directly correspond to the indices of the array
  function automatic bit [31:0] get_croc_start_addr(croc_xbar_outputs_e port);
    bit [31:0] addr = '0;
    for (int unsigned i = 0; i < $size(croc_addr_map); i++) begin
      if (croc_xbar_outputs_e'(croc_addr_map[i].idx) == port) begin
        return croc_addr_map[i].start_addr;
      end
    end
    return addr;
  endfunction

  // For convenience get most used base addresses
  localparam bit [31:0] UserBaseAddr = get_croc_start_addr(XbarUser); // use as base for your IPs
  localparam bit [31:0] BootAddr     = get_croc_start_addr(XbarBank0); // start of SRAM banks


  ////////////////////////////////
  // Peripheral Mux Address Map //
  ////////////////////////////////
  /// Enum with peripheral mux subordinate idxs
  typedef enum int {
    PeriphError    = 0,
    PeriphDebug    = 1,
    PeriphSocCtrl  = 2,
    PeriphUart     = 3,
    PeriphGpio     = 4,
    PeriphTimer    = 5,
    PeriphClint    = 6
  } periph_outputs_e;

  /// Address map given to the peripheral mux
  localparam addr_map_rule_t [5:0] periph_addr_map = '{
    '{ idx: PeriphDebug,   start_addr: 32'h0000_0000, end_addr: 32'h0004_0000 },
    '{ idx: PeriphSocCtrl, start_addr: 32'h0300_0000, end_addr: 32'h0300_1000 },
    '{ idx: PeriphUart,    start_addr: 32'h0300_2000, end_addr: 32'h0300_3000 },
    '{ idx: PeriphGpio,    start_addr: 32'h0300_5000, end_addr: 32'h0300_6000 },
    '{ idx: PeriphTimer,   start_addr: 32'h0300_A000, end_addr: 32'h0300_B000 },
    '{ idx: PeriphClint,   start_addr: 32'h0204_0000, end_addr: 32'h0208_0000 }
  };

  // +1 for additional OBI error
  localparam int unsigned NumPeriphs = $size(periph_addr_map) + 1;

  /// Converts the bus indices enum for the peripheral mux to start address of a peripheral
  /// Eg : get_periph_start_addr(PeriphGpio) returns the start address of the GPIO peripheral
  /// This is necesary because the idx do not directly correspond to the indices of the array
  function automatic bit [31:0] get_periph_start_addr(periph_outputs_e port);
    bit [31:0] addr = '0;
    for (int unsigned i = 0; i < $size(periph_addr_map); i++) begin
      if (periph_outputs_e'(periph_addr_map[i].idx) == port) begin
        return periph_addr_map[i].start_addr;
      end
    end
    return addr;
  endfunction


  ///////////////////////////////////////////
  // Interconnect Types and Configurations //
  ///////////////////////////////////////////
  // OBI is configured as 32 bit data, 32 bit address width

  // Usually we would use the typedef.svh macros to define interconnects from parameters.
  // To make it easier to understand we instead write them out here,
  // in a comment at the end you can find the equivalent using the macros.

  /// OBI manager configuration (from a manager into the crossbar)
  localparam obi_pkg::obi_cfg_t MgrObiCfg = '{
    UseRReady:   1'b0,
    CombGnt:     1'b0,
    AddrWidth:     32,
    DataWidth:     32,
    IdWidth:        1,
    Integrity:   1'b0,
    BeFull:      1'b1,
    OptionalCfg:  '0
  };

  /// OBI Manager -> Xbar address channel
  typedef struct packed {
    logic [  MgrObiCfg.AddrWidth-1:0] addr;
    logic                             we;
    logic [MgrObiCfg.DataWidth/8-1:0] be;
    logic [  MgrObiCfg.DataWidth-1:0] wdata;
    logic [    MgrObiCfg.IdWidth-1:0] aid;
    logic                             a_optional; // dummy signal; not used
  } mgr_obi_a_chan_t;
  /// OBI Manager -> Xbar request
  typedef struct packed {
    mgr_obi_a_chan_t a;
    logic            req;
  } mgr_obi_req_t;

  /// OBI Manager <- Xbar response channel
  typedef struct packed {
    logic [MgrObiCfg.DataWidth-1:0] rdata;
    logic [  MgrObiCfg.IdWidth-1:0] rid;
    logic                           err;
    logic                           r_optional; // dummy signal; not used
  } mgr_obi_r_chan_t;
  /// OBI Manager <- Xbar response
  typedef struct packed {
    mgr_obi_r_chan_t r;
    logic            gnt;
    logic            rvalid;
  } mgr_obi_rsp_t;

  /// OBI subordinate configuration (from the crossbar to a subordinate device)
  localparam obi_pkg::obi_cfg_t SbrObiCfg = '{
    UseRReady:   1'b0,
    CombGnt:     1'b0,
    AddrWidth:     32,
    DataWidth:     32,
    IdWidth:        1 + cf_math_pkg::idx_width(NumXbarManagers),
    Integrity:   1'b0,
    BeFull:      1'b1,
    OptionalCfg:  '0
  };
  /// OBI Xbar -> Subordinate address channel
  typedef struct packed {
    logic [  SbrObiCfg.AddrWidth-1:0] addr;
    logic                             we;
    logic [SbrObiCfg.DataWidth/8-1:0] be;
    logic [  SbrObiCfg.DataWidth-1:0] wdata;
    logic [    SbrObiCfg.IdWidth-1:0] aid;
    logic                             a_optional; // dummy signal; not used
  } sbr_obi_a_chan_t;
  /// OBI Xbar -> Subordinate request
  typedef struct packed {
    sbr_obi_a_chan_t a;
    logic            req;
  } sbr_obi_req_t;

  /// OBI Xbar <- Subordinate response channel
  typedef struct packed {
    logic [SbrObiCfg.DataWidth-1:0] rdata;
    logic [  SbrObiCfg.IdWidth-1:0] rid;
    logic                           err;
    logic                           r_optional; // dummy signal; not used
  } sbr_obi_r_chan_t;
  /// OBI Xbar <- Subordinate response
  typedef struct packed {
    sbr_obi_r_chan_t r;
    logic            gnt;
    logic            rvalid;
  } sbr_obi_rsp_t;

  /* This is how we would usually define interconnects using the typedef.svh macros
   *
   * `OBI_TYPEDEF_A_CHAN_T(mgr_obi_a_chan_t, MgrObiCfg.AddrWidth, MgrObiCfg.DataWidth, MgrObiCfg.IdWidth, logic [0:0])
   * `OBI_TYPEDEF_DEFAULT_REQ_T(mgr_obi_req_t, mgr_obi_a_chan_t)
   * `OBI_TYPEDEF_R_CHAN_T(mgr_obi_r_chan_t, MgrObiCfg.DataWidth, MgrObiCfg.IdWidth, logic [0:0])
   * `OBI_TYPEDEF_RSP_T(mgr_obi_rsp_t, mgr_obi_r_chan_t)
   * 
   * // Create types for OBI subordinates/slaves (out of the interconnect, into the device)
   * localparam obi_pkg::obi_cfg_t SbrObiCfg = obi_pkg::mux_grow_cfg(MgrObiCfg, NumManagers);
   * `OBI_TYPEDEF_A_CHAN_T(sbr_obi_a_chan_t, SbrObiCfg.AddrWidth, SbrObiCfg.DataWidth, SbrObiCfg.IdWidth, logic [0:0])
   * `OBI_TYPEDEF_DEFAULT_REQ_T(sbr_obi_req_t, sbr_obi_a_chan_t)
   * `OBI_TYPEDEF_R_CHAN_T(sbr_obi_r_chan_t, SbrObiCfg.DataWidth, SbrObiCfg.IdWidth, logic [0:0])
   * `OBI_TYPEDEF_RSP_T(sbr_obi_rsp_t, sbr_obi_r_chan_t)
   * 
   * // Register Interface configured as 32 bit data, 32 bit address width (4 byte enable bits)
   * `REG_BUS_TYPEDEF_ALL(reg, logic[31:0], logic[31:0], logic[3:0]); 
   */

endpackage
