// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

module obi_timer #(
  parameter type obi_req_t = logic,
  parameter type obi_rsp_t = logic
) (
  input  logic     clk_i,
  input  logic     rst_ni,
  input  obi_req_t obi_req_i,
  output obi_rsp_t obi_rsp_o,
  output logic     expired_o,
  output logic     overflow_o
);

  import obi_timer_reg_pkg::*;

  // Registers
  logic [31:0]    count_d,           count_q;
  logic [31:0]  compare_d,         compare_q;
  logic          enable_d,          enable_q;
  logic       autoreset_d,       autoreset_q;
  logic  expired_sticky_d,  expired_sticky_q;
  logic overflow_sticky_d, overflow_sticky_q;

  // Internal signals
  obi_req_t      obi_req_d, obi_req_q;
  logic              err_d,     err_q;
  logic     [31:0] rdata_d,   rdata_q;

  assign obi_req_d = obi_req_i;

  // bit enable mask: defines which bits are written to by wdata of the OBI request
  logic [31:0] be_mask;
  for (genvar i = 0; unsigned'(i) < 32/8; ++i ) begin : gen_write_mask
    assign be_mask[8*i +: 8] = {8{obi_req_i.a.be[i]}};
  end

  // Output assignment
  logic  expired_event;
  logic overflow_event;

  assign expired_event  = enable_q && (compare_q != 32'h0) && (compare_q <= count_q);
  assign overflow_event = enable_q && (count_q == 32'hffff_ffff);
  assign expired_o      = expired_sticky_q;
  assign overflow_o     = overflow_sticky_q;

  always_comb begin : obi_response
    obi_rsp_o         = '0;
    obi_rsp_o.gnt     = 1'b1;
    obi_rsp_o.rvalid  = obi_req_q.req;
    obi_rsp_o.r.err   = err_q;
    obi_rsp_o.r.rid   = obi_req_q.a.aid;
    obi_rsp_o.r.rdata = rdata_q;
  end

  always_comb begin
    err_d              = '0;
    rdata_d            = '0;
    count_d            = count_q;
    compare_d          = compare_q;
    enable_d           = enable_q;
    autoreset_d        = autoreset_q;
    expired_sticky_d   = expired_sticky_q;
    overflow_sticky_d  = overflow_sticky_q;

    // Reset count when timer expires
    if (expired_event && autoreset_q)
      count_d = '0;
    else if (enable_q)
      count_d = count_q + 1;

    // Sticky expired flag
    if (expired_event)
      expired_sticky_d = 1'b1;

    // Sticky overflow flag
    if (overflow_event)
      overflow_sticky_d = 1'b1;

    if (obi_req_i.req) begin

      if (obi_req_i.a.we) begin : write
        automatic logic [31:0] wdata_masked = obi_req_i.a.wdata & be_mask;
        unique case ({obi_req_i.a.addr[IntAddrWidth-1:2], 2'b00})
          OBI_TIMER_COUNT_OFFSET: begin
            count_d = (count_q & ~be_mask) | wdata_masked;
          end
          OBI_TIMER_COMPARE_OFFSET: begin
            compare_d = (compare_q & ~be_mask) | wdata_masked;
            count_d   = '0;
          end
          OBI_TIMER_CTRL_OFFSET: begin
            enable_d    = (enable_q & ~be_mask[0]) | wdata_masked[0];
            autoreset_d = (autoreset_q & ~be_mask[1]) | wdata_masked[1];
          end
          OBI_TIMER_STATUS_OFFSET: begin
            if (wdata_masked[0]) begin
              expired_sticky_d  = 1'b0;
            end
            if (wdata_masked[1]) begin
              overflow_sticky_d = 1'b0;
            end
          end
          default: begin
            err_d = 1'b1;
          end
        endcase

      end else begin : read
        unique case ({obi_req_i.a.addr[IntAddrWidth-1:2], 2'b00})
          OBI_TIMER_COUNT_OFFSET: begin
            rdata_d = count_q;
          end
          OBI_TIMER_COMPARE_OFFSET: begin
            rdata_d = compare_q;
          end
          OBI_TIMER_CTRL_OFFSET: begin
            rdata_d = {30'h0, autoreset_q, enable_q};
          end
          OBI_TIMER_STATUS_OFFSET: begin
            rdata_d = {30'h0, overflow_sticky_q, expired_sticky_q};
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
      count_q           <= '0;
      compare_q         <= '0;
      enable_q          <= '0;
      autoreset_q       <= '0;
      expired_sticky_q  <= '0;
      overflow_sticky_q <= '0;
      obi_req_q         <= '0;
      err_q             <= '0;
      rdata_q           <= '0;
    end else begin
      count_q           <= count_d;
      compare_q         <= compare_d;
      enable_q          <= enable_d;
      autoreset_q       <= autoreset_d;
      expired_sticky_q  <= expired_sticky_d;
      overflow_sticky_q <= overflow_sticky_d;
      obi_req_q         <= obi_req_d;
      err_q             <= err_d;
      rdata_q           <= rdata_d;
    end
  end

endmodule
