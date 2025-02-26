// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

module crc_hasher (
  input        clk_i,
  input        rst_ni,
  input  [7:0] data_i,
  input        valid_i,
  output       ready_o,
  input        clear_i,
  output [7:0] hash_o
);

  logic enable, sel, ready;
  logic [7:0] data_in, data_out;

  crc_lfsr i_lfsr (
    .rst_ni ( rst_ni   ),
    .clk_i  ( clk_i    ),
    .en_i   ( enable   ),
    .data_i ( data_in  ),
    .data_o ( data_out )
  );

  assign data_in = sel ? (data_i ^ data_out) : 8'b00000001;
  assign hash_o  = data_out;
  assign ready_o = ready;

  always_comb begin
    ready = 1'b1;
    enable = valid_i;
    sel = 1'b1;
    if(clear_i==1'b1) begin
      ready = 1'b0;
      enable = 1'b1;
      sel = 1'b0;
    end
  end

endmodule
