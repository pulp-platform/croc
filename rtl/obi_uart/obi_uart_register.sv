// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Hannah Pochert  <hpochert@ethz.ch>
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "common_cells/registers.svh"

module obi_uart_register import obi_uart_pkg::*; #(
  /// The OBI configuration connected to this peripheral.
  parameter obi_pkg::obi_cfg_t ObiCfg = obi_pkg::ObiDefaultConfig, // SbrObiCfg
  /// OBI request type
  parameter type obi_req_t = logic,
  /// OBI response type
  parameter type obi_rsp_t = logic
) (
  input logic clk_i,
  input logic rst_ni,

  // OBI request interface
  input obi_req_t  obi_req_i, // a.addr, a.we, a.be, a.wdata, a.aid, a.a_optional | rready, req
  // OBI response interface
  output obi_rsp_t obi_rsp_o, // r.rdata, r.rid, r.err, r.r_optional | gnt, rvalid

  output reg_read_t reg_read_o,   // Current register values
  input  reg_write_t reg_write_i  // Internal updates to register values
);

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Obi Preparations //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  // Signals for the OBI response
  logic [ObiCfg.DataWidth-1:0] rsp_data;
  logic                        valid_d, valid_q;         // delayed for the response phase
  logic                        err;
  logic                        w_err_d, w_err_q;
  logic [AddressBits-1:0]      word_addr_d, word_addr_q; // delayed for the response phase
  logic [ObiCfg.IdWidth-1:0]   id_d, id_q;               // delayed for the response phase
  logic                        we_d, we_q;
  logic                        req_d, req_q;

  // OBI rsp Assignment
  always_comb begin
    obi_rsp_o         = '0;
    obi_rsp_o.r.rdata = rsp_data;
    obi_rsp_o.r.rid   = id_q;
    obi_rsp_o.r.err   = err;
    obi_rsp_o.gnt     = obi_req_i.req;
    obi_rsp_o.rvalid  = valid_q;
  end

  // id, valid and address handling
  assign id_d         = obi_req_i.a.aid;
  assign valid_d      = obi_req_i.req;
  assign word_addr_d  = obi_req_i.a.addr[AddressOffset+:AddressBits];
  assign we_d         = obi_req_i.a.we;
  assign req_d        = obi_req_i.req;

  // FF for the obi rsp signals (id and valid)
  `FF(id_q, id_d, '0, clk_i, rst_ni)               // 5 Bits
  `FF(valid_q, valid_d, '0, clk_i, rst_ni)         // 1 Bit
  `FF(word_addr_q, word_addr_d, '0, clk_i, rst_ni) // #AddressBits Bits
  `FF(we_q, we_d, '0, clk_i, rst_ni)               // 1 Bit
  `FF(w_err_q, w_err_d, '0, clk_i, rst_ni)         // 1 Bit
  `FF(req_q, req_d, '0, clk_i, rst_ni)             // 1 Bit


  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Registers //
  ////////////////////////////////////////////////////////////////////////////////////////////////
  uart_reg_fields_t reg_d, reg_q;
  uart_reg_fields_t new_reg; // next value of the registers if no read/write occurs (hw update)


  ////////////////////////////////////////////////////////////////////////////////////////////////
  // COMB LOGIC //
  ////////////////////////////////////////////////////////////////////////////////////////////////
  rx_reg_write_t write_rx;
  tx_reg_write_t write_tx;

  assign write_tx = reg_write_i.tx;
  assign write_rx = reg_write_i.rx;

  // output current register values
  assign reg_read_o.thr = reg_q.THR;
  assign reg_read_o.ier = reg_q.IER;
  assign reg_read_o.isr = reg_write_i.isr;
  assign reg_read_o.fcr = reg_q.FCR;
  assign reg_read_o.lcr = reg_q.LCR;
  assign reg_read_o.mcr = reg_q.MCR;
  assign reg_read_o.dll = reg_q.DLL;
  assign reg_read_o.dlm = reg_q.DLM;

  //-- Internal updates to registers -------------------------------------------------------------
  always_comb begin : hw_update
    // default
    new_reg = reg_q;

    // Flow Control Register
    new_reg.FCR.rx_fifo_rst = write_rx.fifo_rst_valid ? write_rx.fifo_rst : reg_q.FCR.rx_fifo_rst;
    new_reg.FCR.tx_fifo_rst = write_tx.fifo_rst_valid ? write_tx.fifo_rst : reg_q.FCR.tx_fifo_rst;

    new_reg.RHR = write_rx.rhr_valid ? write_rx.rhr : reg_q.RHR;

    // Line Status Register
    new_reg.LSR.fifo_err   = write_rx.fifo_err_valid ? write_rx.fifo_err   : reg_q.LSR.fifo_err;
    new_reg.LSR.tx_empty   = write_tx.empty_valid    ? write_tx.tx_empty   : reg_q.LSR.tx_empty;
    new_reg.LSR.thr_empty  = write_tx.thr_valid      ? write_tx.thr_empty  : reg_q.LSR.thr_empty;
    new_reg.LSR.break_ind  = write_rx.break_valid    ? write_rx.break_ind  : reg_q.LSR.break_ind;
    new_reg.LSR.frame_err  = write_rx.frame_valid    ? write_rx.frame_err  : reg_q.LSR.frame_err;
    new_reg.LSR.par_err    = write_rx.par_valid      ? write_rx.par_err    : reg_q.LSR.par_err;
    new_reg.LSR.data_ready = write_rx.dr_valid       ? write_rx.data_ready : reg_q.LSR.data_ready;
    new_reg.LSR.overrun    = write_rx.overrun_valid  ? write_rx.overrun    : reg_q.LSR.overrun;

    // Modem Status Register
    new_reg.MSR.cd    = reg_write_i.modem.cd;
    new_reg.MSR.ri    = reg_write_i.modem.ri;
    new_reg.MSR.dsr   = reg_write_i.modem.dsr;
    new_reg.MSR.cts   = reg_write_i.modem.cts;
    // remains high once set until cleared by read
    new_reg.MSR.d_cd  = reg_q.MSR.d_cd  | reg_write_i.modem.d_cd;
    new_reg.MSR.te_ri = reg_q.MSR.te_ri | reg_write_i.modem.te_ri;
    new_reg.MSR.d_dsr = reg_q.MSR.d_dsr | reg_write_i.modem.d_dsr;
    new_reg.MSR.d_cts = reg_q.MSR.d_cts | reg_write_i.modem.d_cts;
  end

  //-- Software updates to registers -------------------------------------------------------------
  always_comb begin
    // default
    err     = w_err_q;
    w_err_d = 1'b0;

    // read/write indicators
    reg_read_o.obi_read_rhr  = 1'b0;
    reg_read_o.obi_read_isr  = 1'b0;
    reg_read_o.obi_read_lsr  = 1'b0;
    reg_read_o.obi_read_msr  = 1'b0;
    reg_read_o.obi_write_thr = 1'b0;
    reg_read_o.obi_write_dllm = 1'b0;

    rsp_data = 32'h0;

    reg_d = new_reg;

    //-- OBI-Writes ------------------------------------------------------------------------------
    if (obi_req_i.req & obi_req_i.a.we & obi_req_i.a.be[0]) begin

      w_err_d = 1'b0;

      if (~reg_q.LCR[7]) begin // DLAB = 0 Address Decode

        case (word_addr_d)
          RegAddrTHR: begin
            reg_d.THR = obi_req_i.a.wdata[RegWidth-1:0];
            reg_read_o.obi_write_thr = 1'b1;
          end

          RegAddrIER: begin
            reg_d.IER = obi_req_i.a.wdata[RegWidth-1:0];
          end

          RegAddrFCR: begin
            reg_d.FCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          RegAddrLCR: begin
            reg_d.LCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          RegAddrMCR: begin
            reg_d.MCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          RegAddrSPR: begin
            // no error but ignored (SPR always returns 0)
          end

          default: begin
            w_err_d = 1'b1; // unmapped register access
          end
        endcase

      end else begin // DLAB = 1 Address Decode

        case (word_addr_d)
          RegAddrDLL: begin
            reg_d.DLL = obi_req_i.a.wdata[RegWidth-1:0];
            reg_read_o.obi_write_dllm = 1'b1;
          end

          RegAddrDLM: begin
            reg_d.DLM = obi_req_i.a.wdata[RegWidth-1:0];
            reg_read_o.obi_write_dllm = 1'b1;
          end

          RegAddrFCR: begin
            reg_d.FCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          RegAddrLCR: begin
            reg_d.LCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          RegAddrMCR: begin
            reg_d.MCR = obi_req_i.a.wdata[RegWidth-1:0];
          end

          RegAddrSPR: begin
            // no error but ignored (SPR always returns 0)
          end

          default: begin
            w_err_d = 1'b1; // unmapped register access
          end
        endcase

      end

    end

    //-- OBI-Read --------------------------------------------------------------------------------
    if (req_q & ~we_q) begin

      err = 1'b0;

      if (~reg_q.LCR[7]) begin // DLAB = 0 Address Decode

        case (word_addr_q)
          RegAddrRHR: begin
            rsp_data[RegWidth-1:0] = reg_q.RHR;
            reg_read_o.obi_read_rhr  = 1'b1;
          end

          RegAddrIER: begin
            rsp_data[RegWidth-1:0] = reg_q.IER;
          end

          RegAddrISR: begin
            rsp_data[RegWidth-1:0] = reg_write_i.isr;
            reg_read_o.obi_read_isr  = 1'b1;
          end

          RegAddrLCR: begin
            rsp_data[RegWidth-1:0] = reg_q.LCR;
          end

          RegAddrMCR: begin
            rsp_data[RegWidth-1:0] = reg_q.MCR;
          end

          RegAddrLSR: begin
            rsp_data[RegWidth-1:0] = reg_q.LSR;
            reg_read_o.obi_read_lsr  = 1'b1;
          end

          RegAddrMSR: begin
            rsp_data[RegWidth-1:0] = reg_q.MSR;
            reg_d.MSR = reg_write_i.modem; // sticky bits cleared
          end

          RegAddrSPR: begin
            rsp_data[RegWidth-1:0] = '0; // not implemented
          end

          default: begin
            err = 1'b1;
          end
        endcase

      end else begin // DLAB = 1 Address Decode

        case (word_addr_q)
          RegAddrDLL: begin
            rsp_data[RegWidth-1:0] = reg_q.DLL;
          end

          RegAddrDLM: begin
            rsp_data[RegWidth-1:0] = reg_q.DLM;
          end

          default: begin
            err = 1'b1;
          end
        endcase

      end

    end

  end

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // SEQUENTIAL LOGIC //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  `FF(reg_q, reg_d, obi_uart_pkg::RegResetVal, clk_i, rst_ni)

endmodule
