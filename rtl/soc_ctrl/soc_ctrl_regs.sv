// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

`include "common_cells/registers.svh"

module soc_ctrl_regs #(
  parameter type               obi_req_t = logic,
  parameter type               obi_rsp_t = logic,
  parameter int unsigned BootAddrDefault = 32'h0
) (
  input  logic             clk_i,
  input  logic             rst_ni,
  input  obi_req_t         obi_req_i,
  output obi_rsp_t         obi_rsp_o,
  // To hardware
  output logic             fetch_en_o,
  output logic             sram_dly_o
);
  import croc_pkg::*;
  import soc_ctrl_regs_pkg::*;

  // Read-only hardware info assembled from compile-time configuration.
  // Ordered by what integrators are most likely to change: SoC-level first, then
  // core-level, then memory. Reserved bits leave room for future fields in each group.
  //
  // Field layout (MSB first):
  //   --- SoC ---
  //   [31:28] version         Croc SoC major version (croc_pkg::PulpJtagIdCode.version + 1)
  //   [27]    idma_present    iDMA enabled (croc_pkg::iDMAEnable)
  //   [26:24] reserved        0  (reserved for future SoC-level features)
  //   --- Core ---
  //   [23:22] core_id         Core type: 00=CVE2, 01/10=reserved, 11=custom (croc_pkg::CoreId)
  //   [21]    pmp_enable      Core specifics, for CVE2: PMP enabled (croc_pkg::CorePMPEnable)
  //   [20:16] reserved        0  (reserved for future core-level features)
  //   --- Memory ---
  //   [15:13] sram_banks      Number of SRAM banks (croc_pkg::NumSramBanks)
  //   [12:5]  sram_bank_words Words per SRAM bank / 64 (croc_pkg::SramBankNumWords)
  //   [4:0]   reserved        0 (reserved for future memory config details)

  localparam logic [31:0] HwInfoWord = {
    4'(PulpJtagIdCode.version),        // [31:28] version
    1'(iDMAEnable),                    // [27]    idma_present
    3'b0,                              // [26:24] reserved (SoC features)
    2'(CoreId),                        // [23:22] core_id
    1'(CorePMPEnable),                 // [21]    pmp_enable
    5'b0,                              // [20:16] reserved (core features)
    3'(NumSramBanks),                  // [15:12] sram_banks
    8'(SramBankNumWords / 64),         // [11:5]  sram_bank_words (in units of 64 words)
    5'b0                               // [4:0]   reserved
  };

  // read-write registers
  logic [31:0]   boot_addr_d,   boot_addr_q;
  logic           fetch_en_d,    fetch_en_q;
  logic [31:0] core_status_d, core_status_q;
  logic          boot_mode_d,   boot_mode_q;
  logic           sram_dly_d,    sram_dly_q;

  `FF(boot_addr_q, boot_addr_d, BootAddrDefault, clk_i, rst_ni)
  `FF(fetch_en_q, fetch_en_d,              1'b1, clk_i, rst_ni)
  `FF(core_status_q, core_status_d,          '0, clk_i, rst_ni)
  `FF(boot_mode_q, boot_mode_d,              '0, clk_i, rst_ni)
  `FF(sram_dly_q, sram_dly_d,                '0, clk_i, rst_ni)
  
  // OBI handling, A-phase fields needed in the R-phase
  logic                               req_q;
  logic                               we_q;
  logic [$bits(obi_req_i.a.aid)-1:0]  id_q;
  logic [IntAddrWidth-1:2]            addr_q;  // word-aligned address bits only

  `FF(req_q,  obi_req_i.req,                      '0, clk_i, rst_ni)
  `FF(we_q,   obi_req_i.a.we,                     '0, clk_i, rst_ni)
  `FF(id_q,   obi_req_i.a.aid,                    '0, clk_i, rst_ni)
  `FF(addr_q, obi_req_i.a.addr[IntAddrWidth-1:2], '0, clk_i, rst_ni)

  // byte-enable mask: expands each BE bit to a full byte for masked writes
  logic [31:0] be_mask;
  for (genvar i = 0; unsigned'(i) < 32/8; ++i ) begin : gen_write_mask
    assign be_mask[8*i +: 8] = {8{obi_req_i.a.be[i]}};
  end

  assign fetch_en_o = fetch_en_q;
  assign sram_dly_o = sram_dly_q;

  // Address phase: update writable registers
  always_comb begin : write_fsm
    boot_addr_d   = boot_addr_q;
    fetch_en_d    = fetch_en_q;
    core_status_d = core_status_q;
    boot_mode_d   = boot_mode_q;
    sram_dly_d    = sram_dly_q;

    if (obi_req_i.req && obi_req_i.a.we) begin
      unique case ({obi_req_i.a.addr[IntAddrWidth-1:2], 2'b00})
        SOC_CTRL_BOOTADDR_OFFSET:   boot_addr_d   = obi_req_i.a.wdata & be_mask;
        SOC_CTRL_FETCHEN_OFFSET:    fetch_en_d    = obi_req_i.a.wdata[0] & be_mask[0];
        SOC_CTRL_CORESTATUS_OFFSET: core_status_d = obi_req_i.a.wdata & be_mask;
        SOC_CTRL_BOOTMODE_OFFSET:   boot_mode_d   = obi_req_i.a.wdata[0] & be_mask[0];
        SOC_CTRL_SRAM_DLY_OFFSET:   sram_dly_d    = obi_req_i.a.wdata[0] & be_mask[0];
        default: ;  // invalid address: no write, error signalled in R phase
      endcase
    end
  end

  // Response phase: send back read data or acknowledge write
  always_comb begin : obi_response
    obi_rsp_o        = '0;
    obi_rsp_o.gnt    = 1'b1;
    obi_rsp_o.rvalid = req_q;
    obi_rsp_o.r.rid  = id_q;

    if (req_q) begin
      if (!we_q) begin
        unique case ({addr_q, 2'b00})
          SOC_CTRL_BOOTADDR_OFFSET:   obi_rsp_o.r.rdata = boot_addr_q;
          SOC_CTRL_FETCHEN_OFFSET:    obi_rsp_o.r.rdata = {31'h0, fetch_en_q};
          SOC_CTRL_CORESTATUS_OFFSET: obi_rsp_o.r.rdata = core_status_q;
          SOC_CTRL_BOOTMODE_OFFSET:   obi_rsp_o.r.rdata = {31'h0, boot_mode_q};
          SOC_CTRL_SRAM_DLY_OFFSET:   obi_rsp_o.r.rdata = {31'b0, sram_dly_q};
          SOC_CTRL_INFO_OFFSET:       obi_rsp_o.r.rdata = HwInfoWord;
          default: begin
            obi_rsp_o.r.rdata = 32'hBADCAB1E;
            obi_rsp_o.r.err   = 1'b1;
          end
        endcase
      end else begin
        unique case ({addr_q, 2'b00})
          SOC_CTRL_BOOTADDR_OFFSET,
          SOC_CTRL_FETCHEN_OFFSET,
          SOC_CTRL_CORESTATUS_OFFSET,
          SOC_CTRL_BOOTMODE_OFFSET,
          SOC_CTRL_SRAM_DLY_OFFSET:  ;  // valid write, no error
          default: obi_rsp_o.r.err = 1'b1;
        endcase
      end
    end
  end

endmodule
