// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

`include "common_cells/registers.svh"

module user_sdhci #(
  parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
  parameter type                         obi_req_t   = logic,
  parameter type                         obi_rsp_t   = logic
) (
  input  logic clk_i,
  input  logic rst_ni,

  input  obi_req_t obi_req_i,
  output obi_rsp_t obi_rsp_o
);

`include "register_interface/typedef.svh"
`include "register_interface/assign.svh"

// Simple translation from OBI to RegBus, only works because we know that sdhci_reg_top always gives an answer in the next clock cycle
// TODO: replace with an implementation in regtool
  localparam int unsigned AW = sdhci_reg_pkg::BlockAw;
  localparam int unsigned DW = 32;
  localparam int unsigned STRB_WIDTH = DW/8;
  
  typedef logic [AW-1:0] addr_t;
  typedef logic [DW-1:0] data_t;
  typedef logic [STRB_WIDTH-1:0] strb_t;
  `REG_BUS_TYPEDEF_ALL(reg_bus, addr_t, data_t, strb_t)

  reg_bus_req_t s_reg_req;
  reg_bus_rsp_t s_reg_rsp;
  
  assign s_reg_req.addr  = obi_req_i.a.addr;
  assign s_reg_req.write = obi_req_i.a.we;
  assign s_reg_req.wdata = obi_req_i.a.wdata;
  assign s_reg_req.wstrb = obi_req_i.a.be;
  assign s_reg_req.valid = obi_req_i.req;

  assign obi_rsp_o.r.rdata      = s_reg_rsp.rdata;
  assign obi_rsp_o.r.err        = s_reg_rsp.error;
  assign obi_rsp_o.r.r_optional = '0;
  assign obi_rsp_o.gnt          = s_reg_rsp.ready;

  logic [ObiCfg.IdWidth : 0] id_q, id_d;
  `FF(id_q, id_d, '0, clk_i, rst_ni);
  assign id_d            = obi_req_i.a.aid;
  assign obi_rsp_o.r.rid = id_q;

  logic valid_q, valid_d;
  `FF(valid_q, valid_d, '0, clk_i, rst_ni);
  assign valid_d           = obi_req_i.req;
  assign obi_rsp_o.rvalid  = valid_q;

  sdhci_reg_pkg::sdhci_reg2hw_t reg2hw; // Write
  sdhci_reg_pkg::sdhci_hw2reg_t hw2reg; // Read

  sdhci_reg_top #(
    .reg_req_t(reg_bus_req_t),
    .reg_rsp_t(reg_bus_rsp_t),
    .AW(AW)
  ) i_regs (
    .clk_i,
    .rst_ni,
    .reg_req_i(s_reg_req),
    .reg_rsp_o(s_reg_rsp),
    .reg2hw,
    .hw2reg,
    .devmode_i ('b1)
  );

endmodule
