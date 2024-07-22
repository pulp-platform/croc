// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Paul Scheffler <paulsc@iis.ee.ethz.ch>

module ixc013_i16x (
  inout  logic PAD,
  output logic DOUT
);

  buf (strong1, strong0) (DOUT, PAD);

endmodule

module ixc013_b16m (
  inout  logic PAD,
  input  logic DIN,
  output logic DOUT,
  input  logic OEN
);

  buf (strong1, strong0) (DOUT, PAD);
  bufif0 (strong1, strong0) (PAD, DIN, OEN);

endmodule

module ixc013_b16mpup (
  inout  logic PAD,
  input  logic DIN,
  output logic DOUT,
  input  logic OEN
);

  buf (strong1, strong0) (DOUT, PAD);
  bufif0 (strong1, strong0) (PAD, DIN, OEN);
  pullup (PAD);

endmodule

module ixc013_b16mpdn (
  inout  logic PAD,
  input  logic DIN,
  output logic DOUT,
  input  logic OEN
);

  buf (strong1, strong0) (DOUT, PAD);
  bufif0 (strong1, strong0) (PAD, DIN, OEN);
  pulldown (PAD);

endmodule

module vddcore;

endmodule

module gndcore;

endmodule

module vddpad;

endmodule

module gndpad;

endmodule

module filler10u;

endmodule

module filler4u;

endmodule

module filler1u;

endmodule

module corner;

endmodule