// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

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

  import soc_ctrl_regs_pkg::*;

  // Registers
  logic [31:0]   boot_addr_d,   boot_addr_q;
  logic           fetch_en_d,    fetch_en_q;
  logic [31:0] core_status_d, core_status_q;
  logic          boot_mode_d,   boot_mode_q;
  logic           sram_dly_d,    sram_dly_q;

  // Internal signals
  obi_req_t        obi_req_d, obi_req_q;
  logic     [31:0]   rdata_d,   rdata_q;
  logic                err_d,     err_q;

  // bit enable mask: defines which bits are written to by wdata of the OBI request
  logic [31:0] be_mask;
  for (genvar i = 0; unsigned'(i) < 32/8; ++i ) begin : gen_write_mask
    assign be_mask[8*i +: 8] = {8{obi_req_i.a.be[i]}};
  end

  // Latch OBI request
  assign obi_req_d = obi_req_i;

  // Output assignment
  assign fetch_en_o  = fetch_en_q;
  assign sram_dly_o  = sram_dly_q;

  always_comb begin : obi_response
    obi_rsp_o         = '0;
    obi_rsp_o.gnt     = 1'b1; 
    obi_rsp_o.rvalid  = obi_req_q.req;
    obi_rsp_o.r.err   = err_q;
    obi_rsp_o.r.rid   = obi_req_q.a.aid;
    obi_rsp_o.r.rdata = rdata_q;
  end

  always_comb begin : read_write_fsm
    rdata_d       = '0;
    err_d         = '0;
    boot_addr_d   = boot_addr_q;
    fetch_en_d    = fetch_en_q;
    core_status_d = core_status_q;
    boot_mode_d   = boot_mode_q;
    sram_dly_d    = sram_dly_q;

    if (obi_req_i.req) begin

      if (obi_req_i.a.we) begin : write
        unique case ({obi_req_i.a.addr[IntAddrWidth-1:2], 2'b00})
          SOC_CTRL_BOOTADDR_OFFSET: begin
            boot_addr_d = obi_req_i.a.wdata & be_mask;
          end
          SOC_CTRL_FETCHEN_OFFSET: begin
            fetch_en_d = obi_req_i.a.wdata[0] & be_mask[0];
          end
          SOC_CTRL_CORESTATUS_OFFSET: begin
            core_status_d = obi_req_i.a.wdata & be_mask;
          end
          SOC_CTRL_BOOTMODE_OFFSET: begin
            boot_mode_d = obi_req_i.a.wdata[0] & be_mask[0];
          end
          SOC_CTRL_SRAM_DLY_OFFSET: begin
            sram_dly_d = obi_req_i.a.wdata[0] & be_mask[0];
          end
          default: begin
            err_d = 1'b1;
          end
        endcase

      end else begin : read
        unique case ({obi_req_i.a.addr[IntAddrWidth-1:2], 2'b00})
          SOC_CTRL_BOOTADDR_OFFSET: begin
            rdata_d = boot_addr_q;
          end
          SOC_CTRL_FETCHEN_OFFSET: begin
            rdata_d = {31'h0, fetch_en_q};
          end
          SOC_CTRL_CORESTATUS_OFFSET: begin
            rdata_d = core_status_q;
          end
          SOC_CTRL_BOOTMODE_OFFSET: begin
            rdata_d = {31'h0, boot_mode_q};
          end
          SOC_CTRL_SRAM_DLY_OFFSET: begin
            rdata_d = {31'b0, sram_dly_q};
          end
          default: begin
            rdata_d = 32'hBADCAB1E;
            err_d   = 1'b1;
          end
        endcase
      end

    end
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (~rst_ni) begin
      boot_addr_q   <= BootAddrDefault;
      fetch_en_q    <= '0;
      core_status_q <= '0;
      boot_mode_q   <= '0;
      sram_dly_q    <= '0;
      obi_req_q     <= '0;
      rdata_q       <= '0;
      err_q         <= '0;
    end else begin
      boot_addr_q   <= boot_addr_d;
      fetch_en_q    <= fetch_en_d;
      core_status_q <= core_status_d;
      boot_mode_q   <= boot_mode_d;
      sram_dly_q    <= sram_dly_d;
      obi_req_q     <= obi_req_d;
      rdata_q       <= rdata_d;
      err_q         <= err_d;
    end
  end

endmodule
