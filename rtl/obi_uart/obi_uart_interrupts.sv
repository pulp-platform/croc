// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Hannah Pochert  <hpochert@ethz.ch>
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "common_cells/registers.svh"

/// Calculated interrupts and stores them until reset by hardware or by reading the ISR register
module obi_uart_interrupts import obi_uart_pkg::*; #()
(
  input logic  clk_i,
  input logic  rst_ni,

  input  logic rx_fifo_trigger,
  input  logic rx_timeout,

  output logic irq_o,
  output logic irq_no,

  input  reg_read_t   reg_read_i,
  input  reg_write_t  reg_write_i,
  output isr_bits_t   reg_isr_o
);


  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Instantiations //
  ////////////////////////////////////////////////////////////////////////////////////////////////
  //--Interrupt-Control-Signals-------------------------------------------------------------------
  typedef struct packed {
    logic       rls;       // Receive Line Status Interrupt - Error notification
    logic       rxdr;      // Receiver Data Ready
    logic       timeout;   // Reception Timeout
    logic       thr_empty; // THR Empty Interrupt - Data can't be written
    logic       mstat;     // Modem Status Interrupt - Changes in Modem Line
  } reg_intrpt_t;

  reg_intrpt_t intrpt_reg_d, intrpt_reg_q;


  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Generare Interrupt Signals //
  ////////////////////////////////////////////////////////////////////////////////////////////////
  always_comb begin
    //--Receive-Line-Status-Interrupt-------------------------------------------------------------
    intrpt_reg_d.rls = reg_read_i.ier.rlstat & (reg_write_i.rx.overrun | reg_write_i.rx.par_err |
                        reg_write_i.rx.frame_err | reg_write_i.rx.break_ind);

    //--Receive-Data-Ready-Interrupt--------------------------------------------------------------
    if (reg_read_i.fcr.fifo_en) begin
      intrpt_reg_d.rxdr = reg_read_i.ier.dtr & rx_fifo_trigger; // data ready in FIFO mode
    end else begin
      intrpt_reg_d.rxdr = reg_read_i.ier.dtr & reg_write_i.rx.data_ready; // in THR mode
    end

    //--Character-Timeout-Interrupt---------------------------------------------------------------
    intrpt_reg_d.timeout = reg_read_i.fcr.fifo_en & reg_read_i.ier.dtr & rx_timeout;

    //--THR-Empty-Interrupt-----------------------------------------------------------------------
    intrpt_reg_d.thr_empty = reg_read_i.ier.thr_empty & reg_write_i.tx.thr_empty;

    //--Modem-Status-Interrupt--------------------------------------------------------------------
    intrpt_reg_d.mstat = reg_read_i.ier.mstat & (reg_write_i.modem.d_cts |
      reg_write_i.modem.d_dsr | reg_write_i.modem.te_ri | reg_write_i.modem.d_cd);

    //////////////////////////////////////////////////////////////////////////////////////////////
    // Interrupt Reset Condition //
    //////////////////////////////////////////////////////////////////////////////////////////////
    if(reg_read_i.obi_read_lsr) begin
      intrpt_reg_d.rls = 1'b0;
    end

    if(reg_read_i.obi_read_rhr) begin
      intrpt_reg_d.timeout = 1'b0;
      if(~reg_read_i.fcr.fifo_en) begin
        intrpt_reg_d.rxdr = 1'b0;
      end
    end

    if(reg_read_i.obi_write_thr) begin
      intrpt_reg_d.thr_empty = 1'b0;
    end

    if (reg_read_i.obi_read_msr) begin
      intrpt_reg_d.mstat = 1'b0;
    end
  end


  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Setting ID & Status Bits //
  ////////////////////////////////////////////////////////////////////////////////////////////////
  always_comb begin
    //--Defaults----------------------------------------------------------------------------------
    reg_isr_o.id       = 3'b000;
    reg_isr_o.fifos_en = 2'b11; // Indicate 16550A FIFO support
    reg_isr_o.unused4  = 1'b0;
    reg_isr_o.unused5  = 1'b0;

    reg_isr_o.status   = ~( |intrpt_reg_q );  // 0: interrupt present; 1: no interrupt

    //--Priority-Encoder--------------------------------------------------------------------------
    // 1. Priority Level
    if (intrpt_reg_q.rls) begin
      reg_isr_o.id     = 3'b011;
    // 2. Priority Level
    end else if (intrpt_reg_q.rxdr) begin
      reg_isr_o.id     = 3'b010;
    // 2. Priority Level
    end else if (intrpt_reg_q.timeout) begin
      reg_isr_o.id     = 3'b110;
    // 3. Priority Level
    end else if (intrpt_reg_q.thr_empty) begin
      reg_isr_o.id     = 3'b001;
    // 4. Priority Level
    end else if (intrpt_reg_q.mstat) begin
      reg_isr_o.id     = 3'b000;
    end

  end

    //////////////////////////////////////////////////////////////////////////////////////////////
    // Direct Output Interrupt - Alert the CPU //
    //////////////////////////////////////////////////////////////////////////////////////////////

    // Once high stays high until interrupt condition is removed
    assign irq_o  = ~reg_isr_o.status;
    assign irq_no = reg_isr_o.status;

    `FF(intrpt_reg_q, intrpt_reg_d, '0, clk_i, rst_ni)

endmodule
