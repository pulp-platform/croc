// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

module clint #(
  parameter type         obi_req_t = logic,
  parameter type         obi_rsp_t = logic,
  parameter int unsigned RtcSyncStages = 2
) (
  input  logic     clk_i,
  input  logic     rst_ni,
  input  logic     rtc_i,
  output logic     software_irq_o,
  output logic     timer_irq_o,
  input  obi_req_t obi_req_i,
  output obi_rsp_t obi_rsp_o
);

  import clint_reg_pkg::*;

  // CLINT registers
  logic [63:0]    mtime_d,    mtime_q;
  logic [63:0] mtimecmp_d, mtimecmp_q;
  logic            msip_d,     msip_q;

  // Internal registers
  logic            rtc_sync_d, rtc_sync_q;
  obi_req_t         obi_req_d,  obi_req_q;
  logic     [31:0]    rdata_d,    rdata_q;
  logic                 err_d,      err_q;

  // Internal signals
  logic increase_mtime;

  // bit enable mask: defines which bits are written to by wdata of the OBI request
  logic [31:0] be_mask;
  for (genvar i = 0; unsigned'(i) < 32/8; ++i ) begin : gen_write_mask
    assign be_mask[8*i +: 8] = {8{obi_req_i.a.be[i]}};
  end

  // Interrupt generation
  assign software_irq_o = msip_q;
  assign timer_irq_o    = (mtime_q >= mtimecmp_q) ? 1'b1 : 1'b0;

  // Rising edge detection
  assign increase_mtime = rtc_sync_d & ~rtc_sync_q;

  assign obi_req_d = obi_req_i;

  // Sync the RTC signal through a classic multi-stage edge-triggered synchronizer
  sync #(
    .STAGES ( RtcSyncStages )
  ) i_sync (
    .clk_i,
    .rst_ni,
    .serial_i ( rtc_i      ),
    .serial_o ( rtc_sync_d )
  );

  always_comb begin : obi_response
    obi_rsp_o         = '0;
    obi_rsp_o.gnt     = 1'b1;
    obi_rsp_o.rvalid  = obi_req_q.req;
    obi_rsp_o.r.err   = err_q;
    obi_rsp_o.r.rid   = obi_req_q.a.aid;
    obi_rsp_o.r.rdata = rdata_q;
  end

  always_comb begin : count_time
    mtime_d = mtime_q;
    if (increase_mtime)
      mtime_d = mtime_q + 1;
  end

  always_comb begin : read_write_fsm
    rdata_d    = '0;
    err_d      = '0;
    mtimecmp_d = mtimecmp_q;
    msip_d     = msip_q;

    if (obi_req_i.req) begin

      if (obi_req_i.a.we) begin : write
        automatic logic [31:0] wdata_masked = obi_req_i.a.wdata & be_mask;
        unique case ({obi_req_i.a.addr[IntAddrWidth-1:2], 2'b00})
          CLINT_MSIP_OFFSET: begin
            msip_d = (msip_q & ~be_mask[0]) | wdata_masked[0];
          end
          CLINT_MTIMECMP_LOW0_OFFSET: begin
            mtimecmp_d[31:0] = (mtimecmp_q[31:0] & ~be_mask) | wdata_masked;
          end
          CLINT_MTIMECMP_HIGH0_OFFSET: begin
            mtimecmp_d[63:32] = (mtimecmp_q[63:32] & ~be_mask) | wdata_masked;
          end
          default: begin
            err_d = 1'b1;
          end
        endcase

      end else begin : read
        unique case ({obi_req_i.a.addr[IntAddrWidth-1:2], 2'b00})
          CLINT_MSIP_OFFSET: begin
            rdata_d = {31'h0, msip_q};
          end
          CLINT_MTIMECMP_LOW0_OFFSET: begin
            rdata_d = mtimecmp_q[31:0];
          end
          CLINT_MTIMECMP_HIGH0_OFFSET: begin
            rdata_d = mtimecmp_q[63:32];
          end
          CLINT_MTIME_LOW_OFFSET: begin
            rdata_d = mtime_q[31:0];
          end
          CLINT_MTIME_HIGH_OFFSET: begin
            rdata_d = mtime_q[63:32];
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
      mtime_q    <= '0;
      mtimecmp_q <= '0;
      msip_q     <= '0;
      obi_req_q  <= '0;
      rdata_q    <= '0;
      err_q      <= '0;
      rtc_sync_q <= '0;
    end else begin
      mtime_q    <= mtime_d;
      mtimecmp_q <= mtimecmp_d;
      msip_q     <= msip_d;
      obi_req_q  <= obi_req_d;
      rdata_q    <= rdata_d;
      err_q      <= err_d;
      rtc_sync_q <= rtc_sync_d;
    end
  end

endmodule
