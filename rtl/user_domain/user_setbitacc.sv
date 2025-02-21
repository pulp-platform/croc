// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// gives us the `FF(...) macro making it easy to have properly defined flip-flops
`include "common_cells/registers.svh"

// simple ROM
module user_setbitacc #(
  /// The OBI configuration for all ports.
  parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
  /// The request struct.
  parameter type                         obi_req_t   = logic,
  /// The response struct.
  parameter type                         obi_rsp_t   = logic
) (
  /// Clock
  input  logic clk_i,
  /// Active-low reset
  input  logic rst_ni,

  /// OBI request interface
  input  obi_req_t obi_req_i,
  /// OBI response interface
  output obi_rsp_t obi_rsp_o
);


  // Define some registers to hold the requests fields
  logic req_d, req_q;
  logic we_d, we_q;
  logic [ObiCfg.AddrWidth-1:0] addr_d, addr_q;
  logic [ObiCfg.IdWidth-1:0] id_d, id_q;
  logic [ObiCfg.DataWidth-1:0] wdata_d, wdata_q;

  // Signals used to create the response
  logic [ObiCfg.DataWidth-1:0] rsp_data; // Data field of the obi response
  logic rsp_err; // Error field of the obi response

  // Internal signals/registers
  logic [15:0] set_bits_accumulator_d, set_bits_accumulator_q; // Holding the accumulated bitcount
  logic [15:0] wdata_cnt; // Olding the bitcount of the request wdata
  
  // Note to avoid writing trivial always_ff statements we can use this macro defined in registers.svh 
  `FF(req_q, req_d, '0);
  `FF(id_q , id_d , '0);
  `FF(we_q , we_d , '0);
  `FF(wdata_q , wdata_d , '0);
  `FF(addr_q , addr_d , '0);
  `FF(set_bits_accumulator_q, set_bits_accumulator_d, '0);

  assign req_d = obi_req_i.req;
  assign id_d = obi_req_i.a.aid;
  assign we_d = obi_req_i.a.we;
  assign addr_d = obi_req_i.a.addr;
  assign wdata_d = obi_req_i.a.wdata;


  // TODO 2: Build wdata_cnt, which counts the number of bits set in the previous request's data.
  always_comb
  begin
      wdata_cnt = 1;
  end

  // Assign the response data
  logic [1:0] word_addr;
  always_comb begin
    rsp_data = '0;
    rsp_err  = '0;
    word_addr = addr_q[3:2];
    set_bits_accumulator_d = set_bits_accumulator_q;

    // TODO 1: A write request at address 0x0 will set the accumulator to zero

    if(req_q) begin
      case(word_addr)
        3'h1: begin
          if(we_q) begin
            set_bits_accumulator_d = set_bits_accumulator_q + wdata_cnt;
          end else begin
            rsp_err = '1;
          end
        end
        3'h2: begin
          if(we_q) begin
            rsp_err = '1;
          end else begin
            rsp_data = set_bits_accumulator_q;
          end
        end
        default: rsp_data = 32'hffffffff;
      endcase
    end
  end

  // Wire the response
  // A channel
  assign obi_rsp_o.gnt = obi_req_i.req;
  // R channel:
  assign obi_rsp_o.rvalid = req_q;
  assign obi_rsp_o.r.rdata = rsp_data;
  assign obi_rsp_o.r.rid = id_q;
  assign obi_rsp_o.r.err = rsp_err;
  assign obi_rsp_o.r.r_optional = '0;

endmodule
