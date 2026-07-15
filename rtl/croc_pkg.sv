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
  typedef struct packed {
    bit [ 3:0]  version;
    bit [15:0]  part_num;
    bit [10:0]  manufacturer;
    bit         _one;
  } pulp_jtag_idcode_t;
  localparam pulp_jtag_idcode_t PulpJtagIdCode = '{
    _one:          1'b1,    /* must be 1 */
    manufacturer: 11'h6d9,  /* identify as PULP Platform chip */
    part_num:     16'hC0C5, /* default Croc part number */
    version:       4'h1     /* 2nd version (2026) */
  };

  ///////////////////////
  // SoC Configuration //
  ///////////////////////
  // Cheshire-style configuration struct: croc_domain takes a croc_cfg_t
  // parameter (defaulting to CrocDefaultCfg below), so an integrating top
  // level can reshape the SoC by overriding individual fields instead of
  // editing this package.
  //
  // NOTE: fields marked [static] size the package-level interconnect types
  // and must match CrocDefaultCfg on every instance (checked in croc_domain).

  typedef struct packed {
    /// JTAG IDCODE reported by the debug TAP
    pulp_jtag_idcode_t JtagIdCode;
    /// [static] Instantiate the iDMA (adds two crossbar manager ports)
    bit          iDMAEnable;
    /// Core Physical Memory Protection enable
    bit          CorePMPEnable;
    /// Core type identifier reported in the SoC info register:
    /// 3'b000=CVE2, 3'b001=Ibex, 3'b111=custom, others are reserved
    int unsigned CoreId;
    /// Number of SRAM banks, each bank has its own OBI port
    /// (accessible in parallel). Check in your target technology which SRAMs
    /// are available and make sure they are implemented in tc_sram_impl.sv.
    int unsigned NumSramBanks;
    /// Number of 32-bit words per SRAM bank (depth of each bank)
    int unsigned SramBankNumWords;
    /// Start address of the SRAM banks (mapped back-to-back); also the boot
    /// address programmed into the SoC control registers
    bit [31:0]   SramStartAddr;
    /// User region [UserStartAddr, UserEndAddr); everything the crossbar
    /// decodes here leaves croc through the user OBI subordinate port.
    /// An end address of '0 extends the region to the end of the 32-bit
    /// address space.
    bit [31:0]   UserStartAddr;
    bit [31:0]   UserEndAddr;
  } croc_cfg_t;

  localparam croc_cfg_t CrocDefaultCfg = '{
    JtagIdCode:       PulpJtagIdCode,
    iDMAEnable:       1'b0,
    CorePMPEnable:    1'b0,
    CoreId:           0,
    NumSramBanks:     32'd2,
    SramBankNumWords: 512,
    SramStartAddr:    32'h1000_0000,
    UserStartAddr:    32'h2000_0000,
    UserEndAddr:      32'h8000_0000
  };


  //////////////////////
  // Address Map Type //
  //////////////////////
  // ideally compatible with:
  // https://pulp-platform.github.io/cheshire/um/arch/#memory-map

  /// Address map data type
  typedef struct packed {
      logic [ 3:0] idx;
      logic [31:0] start_addr;
      logic [31:0] end_addr;
  } addr_map_rule_t;


  ////////////////////////////////
  // Main Crossbar Address Map ///
  ////////////////////////////////
  /// Enum with crossbar subordinate idxs
  typedef enum bit [3:0] {
    XbarError  = 0,
    XbarPeriph = 1,
    XbarUser   = 2,
    XbarBank0  = 3
  } croc_xbar_outputs_e;

  /// The peripheral region of the main crossbar is fixed: PeriphAddrMap below
  /// holds absolute addresses that software and the boot ROM rely on.
  localparam bit [31:0] PeriphBaseAddr = 32'h0000_0000;
  localparam bit [31:0] PeriphEndAddr  = 32'h1000_0000;

  // For convenience get most used base addresses (of the default config)
  localparam bit [31:0] UserBaseAddr = CrocDefaultCfg.UserStartAddr; // use as base for your IPs
  localparam bit [31:0] BootAddr     = CrocDefaultCfg.SramStartAddr; // start of SRAM banks


  ////////////////////////////////
  // Peripheral Mux Address Map //
  ////////////////////////////////
  /// Enum with peripheral mux subordinate idxs
  typedef enum bit [3:0] {
    PeriphError    = 0,
    PeriphDebug    = 1,
    PeriphBootrom  = 2,
    PeriphClint    = 3,
    PeriphSocCtrl  = 4,
    PeriphUart     = 5,
    PeriphGpio     = 6,
    PeriphTimer    = 7,
    PeriphiDMA     = 8
  } periph_outputs_e;

  /// Address map given to the peripheral mux
  localparam addr_map_rule_t [7:0] PeriphAddrMap = '{
    '{ idx: PeriphDebug,   start_addr: 32'h0000_0000, end_addr: 32'h0004_0000 },
    '{ idx: PeriphBootrom, start_addr: 32'h0200_0000, end_addr: 32'h0200_4000 },
    '{ idx: PeriphClint,   start_addr: 32'h0204_0000, end_addr: 32'h0208_0000 },
    '{ idx: PeriphSocCtrl, start_addr: 32'h0300_0000, end_addr: 32'h0300_1000 },
    '{ idx: PeriphUart,    start_addr: 32'h0300_2000, end_addr: 32'h0300_3000 },
    '{ idx: PeriphGpio,    start_addr: 32'h0300_5000, end_addr: 32'h0300_6000 },
    '{ idx: PeriphTimer,   start_addr: 32'h0300_A000, end_addr: 32'h0300_B000 },
    '{ idx: PeriphiDMA,    start_addr: 32'h0300_B000, end_addr: 32'h0300_C000 }
  };

  // +1 for additional OBI error
  localparam int unsigned NumPeriphs = $size(PeriphAddrMap) + 1;

  /// Converts the bus indices enum for the peripheral mux to start address of a peripheral
  /// Eg : get_periph_start_addr(PeriphGpio) returns the start address of the GPIO peripheral
  /// This is necesary because the idx do not directly correspond to the indices of the array
  function automatic bit [31:0] get_periph_start_addr(periph_outputs_e port);
    bit [31:0] addr = '0;
    for (int unsigned i = 0; i < $size(PeriphAddrMap); i++) begin
      if (periph_outputs_e'(PeriphAddrMap[i].idx) == port) begin
        return PeriphAddrMap[i].start_addr;
      end
    end
    return addr;
  endfunction

  localparam bit [31:0] BootromAddr  = get_periph_start_addr(PeriphBootrom);


  ///////////////////////////////////////////
  // Interconnect Types and Configurations //
  ///////////////////////////////////////////
  // OBI is configured as 32 bit data, 32 bit address width.
  //
  // The concrete request/response struct types are NOT defined here: the
  // subordinate-side ID width depends on the number of crossbar managers and
  // therefore on the croc_cfg_t of the instance. Each module builds its own
  // types with the obi/typedef.svh macros:
  //
  //   localparam obi_pkg::obi_cfg_t SbrObiCfg = croc_sbr_obi_cfg(Cfg);
  //   `OBI_TYPEDEF_DEFAULT_ALL(mgr_obi, MgrObiCfg)
  //   `OBI_TYPEDEF_DEFAULT_ALL(sbr_obi, SbrObiCfg)
  //
  // yielding mgr_obi_req_t/mgr_obi_rsp_t and sbr_obi_req_t/sbr_obi_rsp_t
  // (plus the *_a_chan_t/*_r_chan_t channel types).

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

  /// Number of manager ports into the crossbar for a given configuration:
  /// User Domain, Debug module, Core Data, Core Instr; optionally iDMA Write and iDMA Read
  function automatic int unsigned croc_num_xbar_managers(croc_cfg_t cfg);
    return 4 + (cfg.iDMAEnable ? 2 : 0);
  endfunction

  /// OBI subordinate configuration (from the crossbar to a subordinate device):
  /// the crossbar mux prepends the manager port index to the transaction ID
  function automatic obi_pkg::obi_cfg_t croc_sbr_obi_cfg(croc_cfg_t cfg);
    return obi_pkg::mux_grow_cfg(MgrObiCfg, croc_num_xbar_managers(cfg));
  endfunction

endpackage
