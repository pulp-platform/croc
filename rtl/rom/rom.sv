// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

`include "common_cells/registers.svh"

// simple ROM

module rom #(
  /// The OBI configuration for all ports.
  parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
  /// The request struct.
  parameter type                         obi_req_t   = logic,
  /// The response struct.
  parameter type                         obi_rsp_t   = logic
) (
  input  logic clk_i,
  input  logic rst_ni,

  input  obi_req_t obi_req_i,
  output obi_rsp_t obi_rsp_o
);


  logic [ObiCfg.DataWidth-1:0] rsp_data;
  logic valid_d, valid_q;
  logic [2:0] word_addr_d, word_addr_q;
  logic [ObiCfg.IdWidth-1:0] id_d, id_q;
 
  always_comb begin
    obi_rsp_o.r.rdata = rsp_data;
    obi_rsp_o.r.rid   = id_q;
    obi_rsp_o.r.err   = 1'b0;
    obi_rsp_o.r.r_optional = '0;
    obi_rsp_o.gnt = obi_req_i.req;
  end

  assign valid_d = obi_req_i.req;
  assign id_d     = obi_req_i.a.aid;
  assign word_addr_d = obi_req_i.a.addr[4:2];

  `FF(valid_q, valid_d, '0, clk_i, rst_ni)
  `FF(id_q, id_d, '0, clk_i, rst_ni) //aid is sent during request phase. response phase is delayed, so we need to preserve ID
  `FF(word_addr_q, word_addr_d, '0, clk_i, rst_ni)

  assign obi_rsp_o.rvalid = valid_q;

  always_comb begin
    rsp_data= 32'h00000000;
    case(word_addr_q)
      3'b000: rsp_data= 32'h7369754C; //at the moment : "Luisa and Hannah"
      3'b001: rsp_data= 32'h6E612061; //TODO: find a cool yoshi fact instead -> Japanese Yoshi eats Dolphins?
      3'b010: rsp_data= 32'h61482064;
      3'b011: rsp_data= 32'h68616E6E;
      3'b100: rsp_data= 32'h00000000;
      3'b101: rsp_data= 32'h00000000;
      3'b110: rsp_data= 32'h00000000;
      3'b111: rsp_data= 32'h00000000;
    endcase
  end

endmodule