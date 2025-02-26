// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Diyou Shen <dishen@iis.ee.ethz.ch>

module adder8 (
  // input clock
  input  logic       clk_i,
  // negative reset
  input  logic       rst_ni,

  // input data
  input  logic [7:0] a_i,
  input  logic [7:0] b_i,
  // output data
  output logic [7:0] sum_o,
  output logic       carry_o
);
  // output register signals
  logic [7:0] sum_d,   sum_q;
  logic       carry_d, carry_q;

  // temporary calculation results
  logic [7:0] temp_result;

  assign temp_result = a_i + b_i;
  assign {carry_d, sum_d} = temp_result;

  // register the outputs
  always_ff @(posedge clk_i or negedge rst_ni) begin : output_reg
    if(~rst_ni) begin
      // reset the register
      carry_q <= 0;
      sum_q   <= 0;
    end else begin
      carry_q <= carry_d;
      sum_q   <= sum_d;
    end
  end

  // Assign register to output
  assign sum_o   = sum_q;
  assign carry_o = carry_q;

endmodule
