`include "common_cells/registers.svh"

// TODO: FIFO RESET
// : if read_fcr.strct.fifo_en changes, flush the fifo
// : if read_fcr.strct.rx_fifo_rst , flush the fifo but dont clear TSR, then set the  bit 0

module uart_tx #() 
(
  input logic             clk_i,
  input logic             rst_ni,

  input logic             double_baud_rate,
  input logic             baud_rate,

  output logic            txd,

  input uart_reg_read_t   reg_read,
  output uart_reg_write_t reg_write
);

  // Import the UART package for definitions and parameters
  import uart_pkg::*;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Instantiations //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //--Timing--------------------------------------------------------------------------------------
  logic baud_rate_edge;
  logic baud_q, baud_d;

  //--FIFO----------------------------------------------------------------------------------------
  logic fifo_clear;
  logic fifo_full;
  logic fifo_empty;
  logic [7:0] fifo_usage;
  logic [7:0] fifo_data_i;
  logic [3:0] fifo_data_o;
  logic fifo_push;
  logic fifo_pop;

  //--THR-Full------------------------------------------------------------------------------------
  logic thr_full_q, thr_full_d;

  //--Statemachine-Transition-Signals-------------------------------------------------------------
  state_type_tx state_q, state_d;

  //--Statemachine-RSR-Signals--------------------------------------------------------------------
  logic tsr_finish;
  logic [7:0] tsr_q, tsr_d;

  logic txd_q, txd_d;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Timing - Baud Rate Edge Detect //
  ////////////////////////////////////////////////////////////////////////////////////////////////
  
  assign baud_d         = baud_rate;
  
  assign baud_rate_edge = (baud_d & ~baud_q) ? 1'b1 : 1'b0; // Edge is high for one clk_i cycle

  `FF(baud_q, baud_d, '0, clk_i, rst_ni)

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // FIFO Instantiation //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  fifo_v3 # (
    .FALL_THROUGH(),   
    .DATA_WIDTH  (8), 
    .DEPTH       (16), 
    .dtype       (),
    .ADDR_DEPTH  ()  // DO NOT OVERWRITE THIS PARAMETER
  )i_fifo_v3 (
    .clk_i,                   // Clock
    .rst_ni,                  // Asynchronous reset active low
    .flush_i   (fifo_clear),  // flush the queue
    .testmode_i(1'b0),       
    // status flags
    .full_o    (fifo_full),   // queue is full
    .empty_o   (fifo_empty),  // queue is empty
    .usage_o   (fifo_usage),  // fill pointer
    // as long as the queue is not full we can push new data
    .data_i    (fifo_data_i), // data to push into the queue
    .push_i    (fifo_push),   // data is valid and can be pushed to the queue
    // as long as the queue is not empty we can pop new elements
    .data_o    (fifo_data_o), // output data
    .pop_i     (fifo_pop)     // pop head from queue
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // THR & FIFO Combinational //
  ////////////////////////////////////////////////////////////////////////////////////////////////
  always_comb begin
    //--Defaults----------------------------------------------------------------------------------
    fifo_clear  = 1'b0;
    fifo_push   = 1'b0;
    fifo_data_i = '0;

    thr_full_d = thr_full_q;

    //--Reset-LSR---------------------------------------------------------------------------------
    if (read_reg.obi_read_lsr) begin
      write_reg.lsr.strct.thr_empty = 1'b0;
      write_reg.lsr.strct.tx_empty  = 1'b0;
    end

    //--THR-Full-Flag-----------------------------------------------------------------------------
    if (read_reg.obi_write_thr) begin
      thr_full_d = 1'b1;
    end

    //--------------------------------------------------------------------------------------------
    // FIFO Combinational
    //--------------------------------------------------------------------------------------------
    if (read_reg.fcr.strct.fifo_en) begin

      //--Reset-FIFO------------------------------------------------------------------------------
      if (reg_read.fcr.strct.tx_fifo_rst) begin
        fifo_clear = 1'b1;
        reg_write.fcr.strct.tx_fifo_rst = 1'b0; 
      end else if (fifo_en_change) begin        // TODO : FIFO enable change?
        fifo_clear     = 1'b1;
        fifo_en_change = 1'b0;
      end

      //--Set-LSR---------------------------------------------------------------------------------
      write_reg.lsr.strct.thr_empty = fifo_empty;
      write_reg.lsr.strct.tx_empty  = fifo_empty & tsr_empty;

      //--Write-FIFO-from-THR---------------------------------------------------------------------
      if (thr_full_q & (~fifo_full)) begin
        fifo_push = 1'b1;
        fifo_data_i[word_len_bits:0] = reg_read.thr.strct.char_tx[word_len_bits:0];
        thr_full_d = 1'b0;
      end
   
    //--------------------------------------------------------------------------------------------
    // THR Combinational
    //--------------------------------------------------------------------------------------------
    end else begin
      //--Set-LSR---------------------------------------------------------------------------------
      write_reg.lsr.strct.thr_empty = ~thr_full_q;
      write_reg.lsr.strct.tx_empty  = ~thr_full_q & tsr_empty;
    end

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Statemachine Combinational //
  ////////////////////////////////////////////////////////////////////////////////////////////////

    //--Defaults------------------------------------------------------------------------------------
    txd         = txd_q & reg_read.lcr.strct.set_break; // Assign UART Output
    txd_d       = txd_q;

    state_d     = state_q;

    fifo_pop    = 1'b0;
    tsr_d       = tsr_q;
    tsr_count_d = tsr_count_q;
    tsr_finish  = 1'b0;
    tsr_empty   = 1'b0;

    //--------------------------------------------------------------------------------------------
    // State Transition
    //--------------------------------------------------------------------------------------------
    case(state_q)
      TXIDLE: begin
        txd_d       = 1'b1; // Inactive High
        tsr_d       = '0;
        tsr_count_d = 1'b0;
        tsr_empty   = 1'b1;
        
        if (read_reg.fcr.strct.fifo_en) begin
          if (~fifo_empty) begin
            tsr_d    = fifo_data_o;
            fifo_pop = 1'b1;
            state_d  = START;
          end
        end else begin
          if (thr_full_q) begin
            tsr_d[word_len_bits:0] = reg_read.thr.strct.char_tx[word_len_bits:0];
            thr_full_d = 1'b0;
            state_d    = START;
          end
        end
      end

      TXSTART: begin
        if (baud_rate_edge) begin
          txd_d   = 1'b0;
          state_d = DATA;
        end
      end

      TXDATA: begin
        if (tsr_finish) begin
          if (reg_read.lcr.strc.par_en) begin
            state_d = PAR;
          end else begin
            state_d = STOP1;
          end
        end
      end

      TXPAR: begin
        if (baud_rate_edge) begin
          case (reg_read.lcr.arr[5:4])  // Read Parity Configuration 
            3'b00: txd_d = ~(^trs_q[word_len_bits:0]); // Odd Parity
            3'b01: txd_d = ^tsr_q[word_len_bits:0];    // Even Parity
            3'b10: txd_d = 1'b1;     // Forced 1
            3'b11: txd_d = 1'b0;     // Forced 0
            default: txd_d = 1'b0;
          endcase
          state_d = STOP1;
        end
      end

      TXSTOP1: begin
        if (baud_rate_ege) begin
          txd_d = 1'b1;
          if (reg_read.lcr.strc.stop_bits) begin
            state_d = STOP2;
          end else begin
            state_d = IDLE;
          end
        end
      end

      TXSTOP2: begin
        if (baudrate_edge) begin
          state_d = FINISH;
        end
      end

      TXFINISH: begin
        if (word_len_bits == 3'b100) begin
          if(double_baudrate) begin
            state_d = IDLE;
          end
        end else begin
          if(baud_rate_edge) begin
            state_d = IDLE;
          end
        end
      end

      default: state_d = IDLE;
    endcase

    //----------------------------------------------------------------------------------------------
    // TSR - Transmitter Shift Register (parallel to serial)
    //----------------------------------------------------------------------------------------------
    case (read_lcr.strct.word_len)
      2'b00: word_len_bits = 3'b100; // 5 Bits (4th index in rsr)
      2'b01: word_len_bits = 3'b101; // 6 Bits (5th index in rsr)
      2'b10: word_len_bits = 3'b110; // 7 Bits (6th index in rsr)
      2'b11: word_len_bits = 3'b111; // 8 Bits (7th index in rsr)
      default: word_len_bits = 3'b111; 
    endcase

    if (state_q == TXDATA & (tsr_count_q <= word_len_bits)) begin
      if (baud_rate_edge) begin
        txd_d       = tsr_q[tsr_count_q];
        tsr_count_d = tsr_count_q + 1;
        tsr_finish = (tsr_count_q = word_len_bits)? 1'b1 : 1'b0;
      end
    end

  end

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Statemachine Sequential //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  `FF(thr_full_q, thr_full_d, '0, clk_i, rst_ni)

  `FF(tsr_q, tsr_d, '0, clk_i, rst_ni)
  `FF(tsr_count_q, tsr_count_d, '0, clk_i, rst_ni)

  `FF(txd_q, txd_d, '0, clk_i, rst_ni)

  `FF(state_q, state_d, IDLE, clk_i, rst_ni)

endmodule
