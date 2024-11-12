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
  localparam int unsigned PulpJtagIdCode = 32'h1_0000_db3;

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

  localparam bit [31:0]   PeriphBaseAddr  = 32'h0000_0000;
  localparam bit [31:0]   PeriphAddrRange = 32'h1000_0000;

  localparam bit [31:0]   MemBaseAddr     = 32'h1000_0000;
  localparam int unsigned BankNumWords    = 512;
  localparam int unsigned NumSramBanks    = 32'd2;
  localparam int unsigned BankAddrRange   = BankNumWords*NumSramBanks*4;

  localparam bit [31:0]   UserBaseAddr    = 32'h2000_0000;
  localparam bit [31:0]   UserAddrRange   = 32'h6000_0000;


  localparam int unsigned XbarNumManagers     = 4; // Debug module, Core Instr, Core Data, User Domain
  localparam int unsigned XbarNumSubordinates = 2 + NumSramBanks; // User + Peripherals + Memory
  
  localparam int unsigned NumXbarSbrRules = XbarNumSubordinates; // number of address rules in the decoder
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
                    start_addr: MemBaseAddr + ( i    * BankNumWords*4),
                    end_addr:   MemBaseAddr + ((i+1) * BankNumWords*4)};

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
    '{ idx: PeriphUart,     start_addr: GpioAddrOffset,     end_addr: GpioAddrOffset    + GpioAddrRange},    // 4: GPIO
    '{ idx: PeriphTimer,    start_addr: TimerAddrOffset,    end_addr: TimerAddrOffset   + TimerAddrRange}    // 5: Timer
  };

  // OBI is configured as 32 bit data, 32 bit address width


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
  localparam obi_pkg::obi_cfg_t SbrObiCfg = obi_pkg::mux_grow_cfg(MgrObiCfg, XbarNumManagers);
  `OBI_TYPEDEF_A_CHAN_T(sbr_obi_a_chan_t, SbrObiCfg.AddrWidth, SbrObiCfg.DataWidth, SbrObiCfg.IdWidth, a_optional_t)
  `OBI_TYPEDEF_DEFAULT_REQ_T(sbr_obi_req_t, sbr_obi_a_chan_t)
  `OBI_TYPEDEF_R_CHAN_T(sbr_obi_r_chan_t, SbrObiCfg.DataWidth, SbrObiCfg.IdWidth, r_optional_t)
  `OBI_TYPEDEF_RSP_T(sbr_obi_rsp_t, sbr_obi_r_chan_t)

  // Register Interface configured as 32 bit data, 32 bit address width (4 byte enable bits)
  `REG_BUS_TYPEDEF_ALL(reg, logic[31:0], logic[31:0], logic[3:0]);


endpackage
