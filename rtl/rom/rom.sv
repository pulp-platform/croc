// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

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


  logic [ObiCfg.DataWidth-1:0] RspData;
  logic valid_d, valid_q;
  logic [2:0] word_addr_d, word_addr_q;
  logic [ObiCfg.IdWidth-1:0] id_d, id_q;
 
  always_comb begin
    obi_rsp_o.r.rdata = RspData;
    obi_rsp_o.r.rid   = id_q;
    obi_rsp_o.r.err   = 1'b0;
    obi_rsp_o.r.r_optional = '0;
    obi_rsp_o.gnt = obi_req_i.req;
  end

  assign valid_d = obi_req_i.req;
  assign id_d     = obi_req_i.a.aid;
  assign word_addr_d = obi_req_i.a.addr[4:2];

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if(!rst_ni) begin
      valid_q <= '0;
      id_q     <= '0;
      word_addr_q <= '0;
    end else begin
      valid_q <= valid_d;
      //aid is sent during request phase. response phase is delayed, so we need to preserve ID
      id_q   <= id_d; 
      word_addr_q <= word_addr_d;
    end
  end

  assign obi_rsp_o.rvalid = valid_q;

  always_comb begin
    RspData= 32'h00000000;
    case(word_addr_q)
      3'b000: RspData= 32'h486e6148; //this should be "Hann", check for Endianness tho
      3'b001: RspData= 32'h48616E61;
      3'b010: RspData= 32'h48616E62;
      3'b011: RspData= 32'h48616E63;
      3'b100: RspData= 32'h48616E64;
      3'b101: RspData= 32'h48616E65;
      3'b110: RspData= 32'h48616E66;
      3'b111: RspData= 32'h00616E67;
    endcase
  end

endmodule