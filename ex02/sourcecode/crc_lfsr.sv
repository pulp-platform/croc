// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

module crc_lfsr (
  input        rst_ni,
  input        clk_i,
  input        en_i,
  input  [7:0] data_i,
  output [7:0] data_o
);

  logic [7:0] data_d, data_q;

  assign data_d      = data_i;
  assign data_o[7:1] = data_q[6:0];
  assign data_o[0]   = data_q[7] ^ (data_q[5] ^ (data_q[4] ^ data_q[3]));

  always_ff @(posedge clk_i, negedge rst_ni) begin
    if (rst_ni == 0) begin
      data_q = 0;
    end else begin
      if(en_i == 1'b1) data_q = data_d;
    end
  end

endmodule
