// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

module cdc_2phase (
  input  logic scr_clk_i,
  input  logic scr_valid_i,
  output logic scr_ready_o,

  input  logic dst_clk_i,
  output logic dst_valid_o,
  input  logic dst_ready_i
);

  logic async_req;
  logic async_ack;

  logic src_req_q, src_ack_q;
  logic dst_req_q, dst_ack_q;

  always_ff @(posedge scr_clk_i) begin
    src_ack_q <= async_ack;
  end

  always_ff @(posedge dst_clk_i) begin
    dst_req_q <= async_req;
  end

  always_ff @(posedge scr_clk_i) begin
    if (scr_valid_i && scr_ready_o) begin
      src_req_q  <= ~src_req_q;
    end
  end

  always_ff @(posedge dst_clk_i) begin
    if (dst_valid_o && dst_ready_i) begin
      dst_ack_q  <= ~dst_ack_q;
    end
  end

  assign scr_ready_o = (src_req_q == src_ack_q);
  assign dst_valid_o = (dst_ack_q != dst_req_q);
  assign async_req = src_req_q;
  assign async_ack = dst_ack_q;

endmodule
