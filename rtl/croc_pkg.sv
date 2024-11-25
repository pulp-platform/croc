// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "register_interface/typedef.svh"
`include "obi/typedef.svh"

package croc_pkg;

  localparam int unsigned HartId = 32'd0;

    // Default JTAG ID code type
  typedef struct packed {
    bit [ 3:0]  version;
    bit [15:0]  part_num;
    bit [10:0]  manufacturer;
    bit         _one;
  } jtag_idcode_t;

  // PULP Platform manufacturer and default Cheshire part number
  localparam bit [10:0] JtagPulpManufacturer = 11'h6d9;
  localparam bit [15:0] JtagCrocPartNum      = 16'hC0C5;
  localparam bit [ 3:0] JtagCrocVersion      = 4'h0;
  localparam jtag_idcode_t PulpJtagIdCode = '{
    _one          : 1,
    manufacturer  : JtagPulpManufacturer,
    part_num      : JtagCrocPartNum,
    version       : JtagCrocVersion
  };

  typedef enum logic {
    Jtag = 1'b0
  } bootmode_e;

  // Number of additional interrupts coming into croc_domain and going to the core
  localparam int unsigned NumExternalIrqs = 4;


  ///////////////////////
  // Address Maps     ///
  ///////////////////////
  // ideally compatible with: https://pulp-platform.github.io/cheshire/um/arch/#memory-map

  // Address map data type
  typedef struct packed {
      logic [31:0] idx;
      logic [31:0] start_addr;
      logic [31:0] end_addr;
  } addr_map_rule_t;


  ////////////////////////////////////////
  // Croc Main interconnect addressing ///
  ////////////////////////////////////////

  localparam bit [31:0]   PeriphBaseAddr    = 32'h0000_0000;
  localparam bit [31:0]   PeriphAddrRange   = 32'h1000_0000;

  localparam bit [31:0]   SramBaseAddr      = 32'h1000_0000;
  localparam int unsigned NumSramBanks      = 32'd2;
  localparam int unsigned SramBankNumWords  = 512;
  localparam int unsigned SramBankAddrWidth = cf_math_pkg::idx_width(SramBankNumWords);
  localparam int unsigned SramAddrRange     = NumSramBanks*SramBankNumWords*4;

  localparam bit [31:0]   UserBaseAddr      = 32'h2000_0000;
  localparam bit [31:0]   UserAddrRange     = 32'h6000_0000;

  localparam int unsigned NumCrocDomainSubordinates = 2 + NumSramBanks; // Peripherals + Memory + User Domain
  
  localparam int unsigned NumXbarManagers = 4; // Debug module, Core Instr, Core Data, User Domain
  localparam int unsigned NumXbarSbrRules = NumCrocDomainSubordinates; // number of address rules in the decoder
  localparam int unsigned NumXbarSbr      = NumXbarSbrRules + 1; // additional OBI error, used for signal arrays

  // Enum for bus indices
  typedef enum int {
    XbarError  = 0,
    XbarPeriph = 1,
    XbarBank0  = 2,
    XbarUser   = 2 + NumSramBanks
  } croc_xbar_outputs_e;

  // generate the address rules dependent on the number of SRAM banks
  function automatic addr_map_rule_t [NumXbarSbrRules-1:0] gen_xbar_addr_rules();
    addr_map_rule_t [NumXbarSbrRules-1:0] ret;
    ret[0] = '{ idx: XbarPeriph,
                start_addr: PeriphBaseAddr,
                end_addr:   PeriphBaseAddr+PeriphAddrRange};

    for (int i = 0; i < NumSramBanks; i++) begin
      ret[i+1] = '{ idx: XbarBank0+i,
                    start_addr: SramBaseAddr + ( i    * SramBankNumWords*4),
                    end_addr:   SramBaseAddr + ((i+1) * SramBankNumWords*4)};

      ret[NumXbarSbrRules-1] = '{ idx: XbarUser,
                start_addr: UserBaseAddr,
                end_addr:   UserBaseAddr+UserAddrRange};
    end
    return ret;
  endfunction

  localparam addr_map_rule_t [NumXbarSbrRules-1:0] croc_addr_map = gen_xbar_addr_rules();


  /////////////////////////////
  // Peripheral address map ///
  /////////////////////////////

  localparam bit [31:0] DebugAddrOffset   = 32'h0000_0000;
  localparam bit [31:0] DebugAddrRange    = 32'h0004_0000;

  localparam bit [31:0] SocCtrlAddrOffset = 32'h0300_0000;
  localparam bit [31:0] SocCtrlAddrRange  = 32'h0000_1000;

  localparam bit [31:0] UartAddrOffset    = 32'h0300_2000;
  localparam bit [31:0] UartAddrRange     = 32'h0000_1000;

  localparam bit [31:0] GpioAddrOffset    = 32'h0300_5000;
  localparam bit [31:0] GpioAddrRange     = 32'h0000_1000;

  localparam bit [31:0] TimerAddrOffset   = 32'h0300_A000;
  localparam bit [31:0] TimerAddrRange    = 32'h0000_1000;

  localparam int unsigned NumPeriphRules  = 5;
  localparam int unsigned NumPeriphs      = NumPeriphRules + 1; // additional OBI error

  // Enum for bus indices
  typedef enum int {
    PeriphError    = 0,
    PeriphDebug    = 1,
    PeriphSocCtrl  = 2,
    PeriphUart     = 3,
    PeriphGpio     = 4,
    PeriphTimer    = 5
  } periph_outputs_e;

  localparam addr_map_rule_t [NumPeriphRules-1:0] periph_addr_map = '{                                       // 0: OBI Error (default)
    '{ idx: PeriphDebug,    start_addr: DebugAddrOffset,    end_addr: DebugAddrOffset   + DebugAddrRange},   // 1: Debug
    '{ idx: PeriphSocCtrl,  start_addr: SocCtrlAddrOffset,  end_addr: SocCtrlAddrOffset + SocCtrlAddrRange}, // 2: SoC control
    '{ idx: PeriphUart,     start_addr: UartAddrOffset,     end_addr: UartAddrOffset    + UartAddrRange},    // 3: UART
    '{ idx: PeriphGpio,     start_addr: GpioAddrOffset,     end_addr: GpioAddrOffset    + GpioAddrRange},    // 4: GPIO
    '{ idx: PeriphTimer,    start_addr: TimerAddrOffset,    end_addr: TimerAddrOffset   + TimerAddrRange}    // 5: Timer
  };

  // OBI is configured as 32 bit data, 32 bit address width


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
  // Usually we would use the typedef.svh macros to define interconnects from parameters.
  // To make it easier to understand we instead write them out here,
  // at the end of the block in a comment you can find the equivalent using the macros.

  /// OBI managers configuration (from a manager into the interconnect)
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
  /// OBI Manager <-> Xbar address channel
  typedef struct packed {
    logic [  MgrObiCfg.AddrWidth-1:0] addr;
    logic                             we;
    logic [MgrObiCfg.DataWidth/8-1:0] be;
    logic [  MgrObiCfg.DataWidth-1:0] wdata;
    logic [    MgrObiCfg.IdWidth-1:0] aid;
    logic                             a_optional; // dummy signal; not used
  } mgr_obi_a_chan_t;
  /// OBI Manager <-> Xbar request
  typedef struct packed {
    mgr_obi_a_chan_t a;
    logic            req;
  } mgr_obi_req_t;
  /// OBI Manager <-> Xbar response channel
  typedef struct packed {
    logic [MgrObiCfg.DataWidth-1:0] rdata;
    logic [  MgrObiCfg.IdWidth-1:0] rid;
    logic                           err;
    logic                           r_optional; // dummy signal; not used
  } mgr_obi_r_chan_t;
  /// OBI Manager <-> Xbar response
  typedef struct packed {
    mgr_obi_r_chan_t r;
    logic            gnt;
    logic            rvalid;
  } mgr_obi_rsp_t;

  /// OBI subordinate configuration (from the interconnect to a subordinate device)
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
  /// OBI Xbar <-> Subordinate address channel
  typedef struct packed {
    logic [  SbrObiCfg.AddrWidth-1:0] addr;
    logic                             we;
    logic [SbrObiCfg.DataWidth/8-1:0] be;
    logic [  SbrObiCfg.DataWidth-1:0] wdata;
    logic [    SbrObiCfg.IdWidth-1:0] aid;
    logic                             a_optional; // dummy signal; not used
  } sbr_obi_a_chan_t;
  /// OBI Xbar <-> Subordinate request
  typedef struct packed {
    sbr_obi_a_chan_t a;
    logic            req;
  } sbr_obi_req_t;
  /// OBI Xbar <-> Subordinate response channel
  typedef struct packed {
    logic [SbrObiCfg.DataWidth-1:0] rdata;
    logic [  SbrObiCfg.IdWidth-1:0] rid;
    logic                           err;
    logic                           r_optional; // dummy signal; not used
  } sbr_obi_r_chan_t;
  /// OBI Xbar <-> Subordinate response
  typedef struct packed {
    sbr_obi_r_chan_t r;
    logic            gnt;
    logic            rvalid;
  } sbr_obi_rsp_t;

  // Register interface (regbus) request
  typedef struct packed {
      logic [31:0] addr;
      logic        write;
      logic [31:0] wdata;
      logic [ 3:0] wstrb;
      logic        valid;
  } reg_req_t;

  // Register interface (regbus) response
  typedef struct packed {
      logic [31:0] rdata;
      logic        error;
      logic        ready;
  } reg_rsp_t;

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
