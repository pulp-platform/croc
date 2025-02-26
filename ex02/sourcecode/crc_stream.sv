// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

module crc_stream (
  input        rst_ni,
  input        clk_i,

  input  [7:0] data_i,
  input        last_i,
  input        valid_i,
  output       ready_o,

  output [7:0] data_o,
  output       last_o,
  output       valid_o,
  input        ready_i
);

  typedef enum {init, data, append} state_t;
  state_t state_d, state_q;
  logic lfsr_valid, lfsr_ready, lfsr_clear, out_sel;
  logic [7:0] hash_data;

  logic last_out, valid_out, ready_out;

  assign last_o  = last_out;
  assign valid_o = valid_out;
  assign ready_o = ready_out;

  crc_hasher i_hasher (
    .rst_ni  ( rst_ni     ),
    .clk_i   ( clk_i      ),
    .data_i  ( data_i     ),
    .valid_i ( lfsr_valid ),
    .ready_o ( lfsr_ready ),
    .clear_i ( lfsr_clear ),
    .hash_o  ( hash_data  )
  );

  assign data_o = ~out_sel ? data_i : hash_data;

  always_ff @(posedge clk_i, negedge rst_ni) begin
    if (rst_ni == 0) begin
      state_q = init;
    end else begin
      state_q = state_d;
    end
  end

  always_comb begin
    state_d = state_q;

    lfsr_valid = 0;
    lfsr_clear = 0;
    out_sel = 0;

    last_out = 0;
    valid_out = 0;
    ready_out = 0;

    case(state_q)
      init: begin
        lfsr_clear = 1'b1;
        state_d = data;
      end

      data: begin
        valid_out = valid_i & ready_i & lfsr_ready;
        lfsr_valid = valid_i & ready_i;
        ready_out = ready_i & lfsr_ready;
        if((valid_i & ready_i & lfsr_ready & last_i) == 1'b1) begin
          state_d = append;
        end
      end
      append: begin
        out_sel = 1;
        last_out = 1;
        valid_out = 1;
        if(ready_i == 1) begin
          state_d = init;
        end
      end
      default: begin end
    endcase
  end

endmodule
