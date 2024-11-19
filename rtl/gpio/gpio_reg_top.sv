// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Hannah Pochert <hpochert@student.ethz.ch>
// - Luisa Wüthrich <lwuethri@student.ethz.ch>
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "common_cells/registers.svh"

module gpio_reg_top import gpio_reg_pkg::*; #(
    /// The OBI configuration for all ports.
    parameter obi_pkg::obi_cfg_t ObiCfg = obi_pkg::ObiDefaultConfig,
    /// OBI request type
    parameter type obi_req_t = logic,
    /// OBI response type
    parameter type obi_rsp_t = logic,

    parameter int unsigned GpioCount = 16
) (
    /// Clock
    input  logic clk_i,
    /// Active-low reset
    input  logic rst_ni,

    /// Connection to Obi
    /// OBI request interface : a.addr, a.we, a.be, a.wdata, a.aid | rready, req
    input  obi_req_t  obi_req_i,
    /// OBI response interface : r.rdata, r.rid, r.obi_err | gnt, rvalid
    output obi_rsp_t obi_rsp_o,

    /// Communication with control logic
    /// Signals from registers to logic; one per GPIO
    output gpio_reg2hw_t [GpioCount-1:0] reg2hw,
    /// Signals from logic to registers; one per GPIO
    input  gpio_hw2reg_t [GpioCount-1:0]  hw2reg
);

  ////////////////////////////////////////////////////////////////////////////////////////////////////
  // Obi Preparations //
  ////////////////////////////////////////////////////////////////////////////////////////////////////

  // Signals for the OBI response
  logic                           valid_d, valid_q;         // delayed to the response phase
  logic                           we_d, we_q;               // delayed to the response phase
  logic                           req_d, req_q;             // delayed to the response phase
  logic [AddressWidth-1:0]        write_addr;               // in request phase (word addr)
  logic [AddressWidth-1:0]        read_addr_d, read_addr_q; // delayed to the response phase (word addr)
  logic [ObiCfg.IdWidth-1:0]      id_d, id_q;               // delayed to the response phase
  logic                           obi_err;
  logic                           w_err_d, w_err_q;         // delay write error to response phase
  // signals used in read/write for register
  logic [ObiCfg.DataWidth-1:0]    obi_rdata, obi_wdata;
  logic                           obi_read_request, obi_write_request;

  // OBI rsp Assignment
  always_comb begin
    obi_rsp_o              = '0;
    obi_rsp_o.r.rdata      = obi_rdata;
    obi_rsp_o.r.rid        = id_q;
    obi_rsp_o.r.err        = obi_err;
    obi_rsp_o.gnt          = obi_req_i.req;
    obi_rsp_o.rvalid       = valid_q;
  end

  // internally used signals
  assign obi_wdata         = obi_req_i.a.wdata;
  assign obi_read_request  = req_q & ~we_q;                  // in response phase (one cycle later)
  assign obi_write_request = obi_req_i.req & obi_req_i.a.we; // in request phase (same cycle)

  // id, valid and address handling
  assign id_d          = obi_req_i.a.aid;
  assign valid_d       = obi_req_i.req;
  assign write_addr    = obi_req_i.a.addr[AddressWidth-1:2]; // write in same cycle
  assign read_addr_d   = obi_req_i.a.addr[AddressWidth-1:2]; // delay read to response phase
  assign we_d          = obi_req_i.a.we;
  assign req_d         = obi_req_i.req;

    // FF for the obi rsp signals (id, valid, address, we and req)
    `FF(id_q, id_d, '0, clk_i, rst_ni)
    `FF(valid_q, valid_d, '0, clk_i, rst_ni)
    `FF(read_addr_q, read_addr_d, '0, clk_i, rst_ni)
    `FF(req_q, req_d, '0, clk_i, rst_ni)
    `FF(we_q, we_d, '0, clk_i, rst_ni)
    `FF(w_err_q, w_err_d, '0, clk_i, rst_ni)

  ////////////////////////////////////////////////////////////////////////////////////////////////////
  // Registers //
  ////////////////////////////////////////////////////////////////////////////////////////////////////

  // bits in register organized together to ease read/write
  typedef struct packed {
    logic [GpioCount-1:0] dir;         // Direction register
    logic [GpioCount-1:0] en;          // Enable register
    logic [GpioCount-1:0] in;          // Input register
    logic [GpioCount-1:0] out;         // Output register
    logic [GpioCount-1:0] toggle;      // Toggle register
    logic [GpioCount-1:0] intrpt_en;   // Interrupt enable register
    logic [GpioCount-1:0] intrpt;      // Interrupt status register
    logic [GpioCount-1:0] intrpt_edge; // Interrupt edge sensitivity register
  } gpio_reg_fields_t;

  // register signals
  gpio_reg_fields_t reg_d, reg_q;
  `FF(reg_q, reg_d, '0, clk_i, rst_ni)
  
  gpio_reg_fields_t new_reg; // new value of regs if there is no OBI transaction

  ////////////////////////////////////////////////////////////////////////////////////////////////////
  // COMB LOGIC //
  ////////////////////////////////////////////////////////////////////////////////////////////////////
  logic [GpioCount-1:0] new_intrpt;
  logic [GpioCount-1:0] toggle_out;

  // bit enable/strobe; defines which bits are written to by wdata of the OBI request
  logic [ObiCfg.DataWidth-1:0] bit_mask;
  for (genvar i = 0; unsigned'(i) < ObiCfg.DataWidth/8; ++i ) begin : gen_write_mask
    assign bit_mask[8*i +: 8] = {8{obi_req_i.a.be[i]}};
  end

  // output data from internal register
  always_comb begin
    for(int unsigned idx=0; idx < GpioCount; idx++) begin
      reg2hw[idx].dir         = reg_q.dir[idx];
      reg2hw[idx].en          = reg_q.en[idx];
      reg2hw[idx].out         = reg_q.out[idx];
      reg2hw[idx].toggle      = toggle_out[idx];
      reg2hw[idx].intrpt_en   = reg_q.intrpt_en[idx];
      reg2hw[idx].intrpt      = reg_q.intrpt[idx];
      reg2hw[idx].intrpt_edge = reg_q.intrpt_edge[idx];
    end
  end

  // update registers
  always_comb begin
    // defaults
    obi_rdata  = 32'h0;   // default value for read
    obi_err    = w_err_q;
    w_err_d    = 1'b0;
    new_reg    = reg_q;   // registers stay the same
    new_intrpt = '0;
    toggle_out = '0;

    // control logic interaction for each GPIO
    for(int unsigned idx=0; idx < GpioCount; idx++) begin
      new_reg.in[idx]     = hw2reg[idx].sync_in; // input is updated
      new_reg.toggle[idx] = '0;                  // toggle clears itself 

      // update OUT from hw2reg if set to valid
      new_reg.out[idx]    = hw2reg[idx].out_valid ? hw2reg[idx].out : reg_q.out[idx];
      // update interrupt status if it is valid
      new_reg.intrpt[idx] = hw2reg[idx].intrpt_valid ? hw2reg[idx].intrpt
                                                     : reg_q.intrpt[idx];
      // keep track of new interrupts for clear-on-read
      new_intrpt[idx]     = hw2reg[idx].intrpt_valid & hw2reg[idx].intrpt;
    end

    // commit changes
    reg_d      = new_reg; // update regs without OBI transaction

    //---------------------------------------------------------------------------------
    // WRITE
    //---------------------------------------------------------------------------------
    if (obi_write_request) begin
      obi_err = 1'b0;
      case ({write_addr, 2'b00})
        GPIO_DIR_OFFSET: begin
          reg_d.dir = (~bit_mask & new_reg.dir) | (bit_mask & obi_wdata[GpioCount-1:0]);
        end

        GPIO_EN_OFFSET: begin
          reg_d.en = (~bit_mask & new_reg.en) | (bit_mask & obi_wdata[GpioCount-1:0]);
        end

        GPIO_OUT_OFFSET: begin
          reg_d.out =
          (~bit_mask & new_reg.out) | (bit_mask & obi_wdata[GpioCount-1:0]);
        end

        GPIO_TOGGLE_OFFSET: begin
          toggle_out = bit_mask & obi_wdata[GpioCount-1:0];
        end

        GPIO_INTRPT_EN_OFFSET: begin
          reg_d.intrpt_en =
            (~bit_mask & new_reg.intrpt_en) | (bit_mask & obi_wdata[GpioCount-1:0]);
        end

        GPIO_INTRPT_EDGE_OFFSET: begin
          reg_d.intrpt_edge =
            (~bit_mask & new_reg.intrpt_edge) | (bit_mask & obi_wdata[GpioCount-1:0]);
        end

        default: begin
          w_err_d = 1'b1; // unmapped register access
        end
      endcase
    end
    //---------------------------------------------------------------------------------
    // READ
    //---------------------------------------------------------------------------------
    if (obi_read_request) begin
      obi_err = 1'b0;
      case ({read_addr_q, 2'b00})
        GPIO_DIR_OFFSET: begin
          obi_rdata = reg_q.dir;
        end

        GPIO_EN_OFFSET: begin
          obi_rdata = reg_q.en;
        end

        GPIO_IN_OFFSET: begin
          obi_rdata = reg_q.in;
        end

        GPIO_OUT_OFFSET: begin
          obi_rdata = reg_q.out;
        end

        GPIO_TOGGLE_OFFSET: begin
          obi_rdata = '0;
        end

        GPIO_INTRPT_EN_OFFSET: begin
          obi_rdata = reg_q.intrpt_en;
        end

        GPIO_INTRPT_STATUS_OFFSET: begin
          obi_rdata = reg_q.intrpt;
          // clear read interrupts, immediately set new interrupts
          reg_d.intrpt = new_intrpt;
        end

        GPIO_INTRPT_EDGE_OFFSET: begin
          obi_rdata = reg_q.intrpt_edge;
        end

        default: begin
          obi_rdata = 32'hBADCAB1E;  // Return error value in devmode for unmapped reads
          obi_err   = 1'b1;
        end
      endcase
    end

  end

endmodule
