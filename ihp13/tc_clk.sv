// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
// Authors:
//
// -Thomas Benz <tbenz@iis.ee.ethz.ch>
// -Tobias Senti <tsenti@student.ethz.ch>

module tc_clk_inverter (
    input  logic clk_i,
    output logic clk_o
  );
  (* keep *)(* dont_touch = "true" *)
  INVX2 i_inv (
    .A ( clk_i ),
    .Y ( clk_o )
  );

endmodule

module tc_clk_buffer (
  input  logic clk_i,
  output logic clk_o
);
  (* keep *)(* dont_touch = "true" *)
  BUFX2 i_buf (
    .A ( clk_i ),
    .Y ( clk_o )
  );

endmodule

module tc_clk_mux2 (
    input  logic clk0_i,
    input  logic clk1_i,
    input  logic clk_sel_i,
    output logic clk_o
  );
  (* keep *)(* dont_touch = "true" *)
  MUX2X2 i_mux (
    .A0 ( clk0_i    ),
    .A1 ( clk1_i    ),
    .S0 ( clk_sel_i ),
    .Y  ( clk_o     )
  );
endmodule

module tc_clk_xor2 (
  input  logic clk0_i,
  input  logic clk1_i,
  output logic clk_o
);

  (* keep *)(* dont_touch = "true" *)
  XOR2X2 i_mux (
    .A ( clk0_i ),
    .B ( clk1_i ),
    .Y ( clk_o  )
  );
endmodule

module tc_clk_gating #(
    parameter bit IS_FUNCTIONAL = 1'b1
  )(
    input  logic clk_i,
    input  logic en_i,
    input  logic test_en_i,
    output logic clk_o
  );

  if (IS_FUNCTIONAL || `ifdef USE_CLKGATE 1 `else 0 `endif) begin : gen_clkgate
    (* keep *)(* dont_touch = "true" *)
    CGTSX2 i_clkgate (
      .E   ( en_i  ),
      .SE  ( test_en_i ),
      .CK  ( clk_i ),
      .ECK ( clk_o )
    );
  end else begin : gen_no_clkgate
    assign clk_o = clk_i;
  end

endmodule
