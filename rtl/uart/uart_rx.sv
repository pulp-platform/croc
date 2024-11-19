`include "common_cells/registers.svh"

module uart_rx #() 
(
  input logic  clk_i,
  input logic  rst_ni,

  input logic  oversample_rate,
  input logic  oversample_rate_edge,
  input logic  baud_rate,

  input logic  rxd,

  output logic trigger,
  output logic timeout,

  input uart_pkg::reg_read_t      reg_read,
  output uart_pkg::rx_reg_write_t reg_write
);

  // Import the UART package for definitions and parameters
  import uart_pkg::*;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Instantiations //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //--Timing--------------------------------------------------------------------------------------
  logic timing_bit_center_q, timing_bit_center_d;
  logic timing_bit_center_edge;
  logic timing_clear;
  logic timing_init_clear;
  logic timing_load, timing_offset;
  logic [4:0] timing_count;

  //--Synchronization-Signals---------------------------------------------------------------------
  logic sync_rxd;

  //--Majority-Filter-Signals---------------------------------------------------------------------
  logic [1:0] high_count_q, high_count_d;
  logic filtered_rxd;

  //--FIFO-signals--------------------------------------------------------------------------------
  logic fifo_clear;
  logic fifo_full;
  logic fifo_empty;
  logic [3:0] fifo_usage;
  logic [10:0] fifo_data_i;
  logic [10:0] fifo_data_o;
  logic fifo_push;
  logic fifo_pop;
  // FIFO Write
  logic break_interrupt; 
  logic [3:0] fifo_error_index_q, fifo_error_index_d; 
  // FIFO Trigger
  logic [3:0] tl_characters; 
  // FIFO Timeout
  logic [5:0] timeout_trigger; 
  logic timeout_count_q, timeout_count_d;

  //--Write-Read-FIFO-or-Write-RHR----------------------------------------------------------------
  logic rhr_full_q, rhr_full_d;

  //--Statemachine-Transition-Signals-------------------------------------------------------------
  state_type_rx state_q, state_d;
  logic rsr_finish;
  logic par_finish;
  logic stop_finish;
  logic write_init;

  //--Statemachine-RSR-Signals--------------------------------------------------------------------
  logic [7:0] rsr_q, rsr_d;
  logic [2:0] bitcount_q, bitcount_d; // Count up to character_len
  logic [2:0] word_len_bits;          // 5-8 Bits

  //--Statemachine-Error-Signals------------------------------------------------------------------
  // Parity Check
  logic parity_err_q, parity_err_d;
  logic data_parity;
  // Stop Bit Check
  logic framing_err_q, framing_err_d;
  logic break_q, break_d;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Timing //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //----------------------------------------------------------------------------------------------
  // Counter Instantiation
  //----------------------------------------------------------------------------------------------

  //--Clear-Counter-------------------------------------------------------------------------------
  assign timing_clear = (timing_count == 5'b01111) | (timing_init_clear) ? 1'b1 : 1'b0;

  counter #(
    .WIDTH          (5), 
    .STICKY_OVERFLOW(0)
  ) i_counter (
    .clk_i, 
    .rst_ni,
    .clear_i   (timing_clear),         // Synchronous clear: Sets Counter 0 in the next cycle
    .en_i      (oversample_rate_edge),        
    .load_i    (timing_load),  
    .down_i    (1'b0),                 // Always count upwards
    .d_i       (timing_offset),
    .q_o       (timing_count),
    .overflow_o()
  );

  //----------------------------------------------------------------------------------------------
  // Timing Bit Center
  //----------------------------------------------------------------------------------------------
  // Is high for one oversample_rate cycle
  assign timing_bit_center_d    = (timing_count == 5'b01000) ? 1'b1 : 1'b0;
  // Edge is high for one clk_i cycle
  assign timing_bit_center_edge = (timing_bit_center_d & ~timing_bit_center_q) ? 1'b1 : 1'b0;

  `FF(timing_bit_center_q, timing_bit_center_d, '0, clk_i, rst_ni)

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Input Stages //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //----------------------------------------------------------------------------------------------
  // 2-Stage Input Synchronization
  //----------------------------------------------------------------------------------------------
  sync #( 
    .STAGES (NrSyncStages) 
  ) i_sync (
    .clk_i, 
    .rst_ni, 
    .serial_i(rxd), 
    .serial_o(sync_rxd)
  );

  //----------------------------------------------------------------------------------------------
  // 3-Sample Majority Filter
  //----------------------------------------------------------------------------------------------
  // The Majority Filter takes 3 samples and sets filtered_rxd high if at least 2 of them are high
  
  always_comb begin

    high_count_d = high_count_q;
    filtered_rxd = 1'b0;
    if (timing_count == 5'b00101) begin // Start reset in cycle 5: "Majority Init"
      high_count_d = 2'b00;
    end else begin
      if (sync_rxd & (timing_count <= 5'b01000)) begin // Take samples in Cycle 6, 7, 8
        high_count_d = high_count_q + 1;
      end
      if (timing_count == 5'b01000) begin // filtered_rxd is set for Oversample Cycle 8
        if ((high_count_d == 2'b10) | (high_count_d == 2'b11) ) begin
          filtered_rxd = 1'b1;
        end
      end
    end

  end

  `FF(high_count_q, high_count_d, '0, oversample_rate, rst_ni)

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // FIFO Instantiation//
  ////////////////////////////////////////////////////////////////////////////////////////////////

  fifo_v3 # (
    .FALL_THROUGH(),   
    .DATA_WIDTH  (11), 
    .DEPTH       (16), 
    .dtype       (),
    .ADDR_DEPTH  ()  // DO NOT OVERWRITE THIS PARAMETER
  ) i_fifo_v3 (
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

  
  always_comb begin

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // FIFO Combinational //
  ////////////////////////////////////////////////////////////////////////////////////////////////

    //--------------------------------------------------------------------------------------------
    // Defaults
    //--------------------------------------------------------------------------------------------
    // Reset
    fifo_clear    = 1'b1;
    // Trigger
    trigger       = 1'b0;
    tl_characters = 4'b0001;
    // Write
    fifo_push     = 1'b0;
    fifo_data_i   = '0;
    // Timeout
    timeout       = 1'b0;
    // FIFO Error
    fifo_error_index_d = fifo_error_index_q;

    // Register Interface Writes
    reg_write.fcr_rx_valid      = 1'b0;
    reg_write.fcr_rx_fifo_rst   = 1'b0;

    reg_write.rhr_valid         = 1'b0;
    reg_write.rhr.strct.char_rx = '0;

    reg_write.lsr_valid         = 6'b000001;
    reg_write.lsr_data_ready    = 1'b0;
    reg_write.lsr_overrun_err   = 1'b0;
    reg_write.lsr_fifo_err      = 1'b0;
    reg_write.lsr_frame_err     = 1'b0;
    reg_write.lsr_par_err       = 1'b0;
    reg_write.lsr_break_intrpt  = 1'b0;

    if (reg_read.fcr.strct.fifo_en) begin
    //--------------------------------------------------------------------------------------------
    // FIFO Reset
    //--------------------------------------------------------------------------------------------
      fifo_clear = 1'b0;
      
      if (reg_read.fcr.strct.rx_fifo_rst) begin
        fifo_clear                = 1'b1;
        reg_write.fcr_rx_fifo_rst = 1'b0; 
        reg_write.fcr_rx_valid    = 1'b1;
      end 
    //--------------------------------------------------------------------------------------------
    // FIFO Trigger Output
    //--------------------------------------------------------------------------------------------
      case (reg_read.fcr.strct.rx_fifo_tl)
        2'b00: tl_characters = 4'b0001; // 1 Character
        2'b01: tl_characters = 4'b0100; // 4 Characters
        2'b10: tl_characters = 4'b1000; // 8 Characters
        2'b11: tl_characters = 4'b1110; // 14 Characters
        default: tl_characters = 4'b0001; 
      endcase
      
      if (tl_characters <= fifo_usage) begin
        trigger = 1'b1;
      end

    //--------------------------------------------------------------------------------------------
    // FIFO Write from RSR
    //--------------------------------------------------------------------------------------------
      if (write_init) begin
        if (fifo_full) begin
          reg_write.lsr_overrun_err = 1'b1;
          reg_write.lsr_valid[1]    = 1'b1;
        end else begin
          fifo_push       = 1'b1;
          break_interrupt = & (~{break_q, rsr_q}); // Interrupt if all character bits are 0s
          fifo_data_i     = {parity_err_q, framing_err_q, break_interrupt, rsr_q}; // 11 Bits 

          if (parity_err_q | framing_err_q | break_interrupt) begin
            fifo_error_index_d     = fifo_usage;   
            reg_write.lsr_fifo_err = 1'b1;
            reg_write.lsr_valid[5] = 1'b1;
          end
        end
      end

    //--------------------------------------------------------------------------------------------
    // FIFO Timeout
    //--------------------------------------------------------------------------------------------
      // timeout_trigger = (1 Startbit + 8 Databits + 1 Paritybit + 2 Stopbits) * 4
      timeout_trigger = 6'b000001 + 6'b001000 + 6'b000001 + 6'b000010; // Timeout Trigger Level
      timeout_trigger = timeout_trigger << 2; // Multiply by 4

      timeout_count_d = timeout_count_q;

      if (reg_read.fcr.strct.fifo_en & (~fifo_empty)) begin
        if (write_init | reg_read.obi_read_rhr) begin
          timeout_count_d = '0;
        end else begin
          timeout_count_d = timeout_count_q + 1;
          if (timeout_trigger == timeout_count_q) begin
            timeout = 1'b1;
            timeout_count_d = '0;
          end
        end
      end else begin
        timeout_count_d = 1'b0; 
      end

    end
  
  ////////////////////////////////////////////////////////////////////////////////////////////////
  // WRITE RHR Combinational //
  ////////////////////////////////////////////////////////////////////////////////////////////////

    //--Defaults----------------------------------------------------------------------------------
    fifo_clear = 1'b1;
    fifo_pop   = 1'b0;
    rhr_full_d = rhr_full_q;

    //--------------------------------------------------------------------------------------------
    // Clear RHR after OBI read
    //--------------------------------------------------------------------------------------------
    if (reg_read.obi_read_rhr) begin
      reg_write.rhr.strct.char_rx = '0;
      reg_write.rhr_valid         = 1'b1;
      rhr_full_d                  = 1'b0;
    end

    //--------------------------------------------------------------------------------------------
    // Write RHR
    //--------------------------------------------------------------------------------------------
    if (reg_read.fcr.strct.fifo_en) begin // FIFO enabled

      //--Write-FIFO-to-RHR-----------------------------------------------------------------------
      if ((~rhr_full_q) & (~fifo_empty)) begin
        reg_write.rhr.strct.char_rx      = fifo_data_o[7:0];
        reg_write.rhr_valid              = 1'b1;
        rhr_full_d                       = 1'b1;
        // If Fifo Enabled, always set LSR bits with the Data on top of the FIFO
        reg_write.lsr_break_intrpt = fifo_data_o[8];
        reg_write.lsr_frame_err    = fifo_data_o[9];
        reg_write.lsr_par_err      = fifo_data_o[10];
        reg_write.lsr_valid[4:2]   = 1'b1;
        fifo_pop                   = 1'b1;

        if (4'b0000 != fifo_error_index_q) begin
          fifo_error_index_d = fifo_error_index_q - 'b0001; 
        end
      end
      reg_write.lsr_data_ready = ~fifo_empty; // Set Data Ready Bit

    end else begin // FIFO disabled : RHR acts as 1-Byte Holding Register
    
      //--Write-RSR-to-RHR------------------------------------------------------------------------
      if (write_init) begin
        if (rhr_full_q) begin
          reg_write.lsr_data_ready  = 1'b1; // Set Data Ready Bit
          reg_write.lsr_overrun_err = 1'b1;
          reg_write.lsr_valid[1]    = 1'b1;
        end 
        reg_write.rhr.strct.char_rx      = rsr_q; // If full, RHR just gets overwritten
        reg_write.rhr_valid              = 1'b1;
        rhr_full_d                       = 1'b1;

        break_interrupt                  = & (~{break_q, rsr_q}); // All character bits 0 ?
        reg_write.lsr_par_err            = parity_err_q;
        reg_write.lsr_frame_err          = framing_err_q;
        reg_write.lsr_break_intrpt       = break_interrupt;
        reg_write.lsr_valid[4:2]         = 1'b1;
      end 

    end

    //--------------------------------------------------------------------------------------------
    // Clear LSR after OBI read
    //--------------------------------------------------------------------------------------------
    if (reg_read.obi_read_lsr) begin
      reg_write.lsr_overrun_err  = 1'b0;
      reg_write.lsr_par_err      = 1'b0;
      reg_write.lsr_frame_err    = 1'b0;
      reg_write.lsr_break_intrpt = 1'b0;
      reg_write.lsr_valid[4:1]   = 1'b1;
      if (fifo_error_index_q == 4'b0000) begin
        reg_write.lsr_fifo_err  = 1'b0;
        reg_write.lsr_valid[5]  = 1'b1;
      end
    end

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Statemachine Combinational//
  ////////////////////////////////////////////////////////////////////////////////////////////////

    //--------------------------------------------------------------------------------------------
    // Defaults
    //--------------------------------------------------------------------------------------------
    state_d     = state_q;
    break_d     = break_q; // Break Interrupt information for Parity and Stop Bits  

    rsr_finish  = 1'b0;
    par_finish  = 1'b0;
    stop_finish = 1'b0;   
    write_init  = 1'b0;

    timing_init_clear = 1'b0;
    timing_load       = 1'b0;
    timing_offset     = 5'b00000;

    //--------------------------------------------------------------------------------------------
    // State Transformation
    //--------------------------------------------------------------------------------------------
    case(state_q)
      RXIDLE: begin
        if (~sync_rxd) begin
          state_d = RXSTART;
          timing_init_clear = 1'b0; 
          if (oversample_rate_edge) begin 
            timing_load   = 1'b1;     
            timing_offset = 5'b00010; // If first cycle not detected: Set Timing Counter to 2
          end
        end
        timing_init_clear = 1'b1;
      end

      RXSTART: begin
        if (timing_bit_center_edge) begin 
          if (~filtered_rxd) begin
            bitcount_d = 3'b000;
            rsr_d      = '0;
            state_d = RXDATA;
          end else begin
            state_d = RXIDLE;
          end
        end 
      end

      RXDATA: begin // Stays in this state for "word_len_bits" baud_cycles
        if (rsr_finish) begin
          if (reg_read.lcr.strct.par_en) begin
            state_d = RXPAR;
          end else begin
            state_d = RXSTOP;
          end
        end
      end

      RXPAR: begin
        if (par_finish) begin
          state_d = RXSTOP;
        end
      end

      RXSTOP: begin
        if (stop_finish) begin
          if (framing_err_d) begin
            state_d = RXRESYNCHRONIZE;
          end else begin
            state_d = RXIDLE;
          end
        end
      end

      RXRESYNCHRONIZE: begin
        if (~sync_rxd) begin 
          state_d = RXSTART;
        end else begin
          state_d = RXIDLE; 
        end
      end

      default: state_d = RXIDLE;
    endcase

    //--------------------------------------------------------------------------------------------
    // RSR - Receiver Shift Register (serial to parallel)
    //--------------------------------------------------------------------------------------------
    // After rsr_finish, rsr_q is stored until the next time we are in START state
    rsr_d      = rsr_q;
    bitcount_d = bitcount_q;

    case (reg_read.lcr.strct.word_len)
      2'b00: word_len_bits = 3'b100; // 5 Bits (4th index in rsr)
      2'b01: word_len_bits = 3'b101; // 6 Bits (5th index in rsr)
      2'b10: word_len_bits = 3'b110; // 7 Bits (6th index in rsr)
      2'b11: word_len_bits = 3'b111; // 8 Bits (7th index in rsr)
      default: word_len_bits = 3'b111; 
    endcase

    if (state_q == RXDATA) begin
      if (timing_bit_center_edge & (bitcount_q <= word_len_bits)) begin 
        rsr_d[bitcount_q] = filtered_rxd; 
        bitcount_d        = bitcount_q + 1;
        if (bitcount_q == word_len_bits) begin 
          rsr_finish = 1'b1;
        end
      end
    end

    //--------------------------------------------------------------------------------------------
    // Parity Check
    //--------------------------------------------------------------------------------------------
    parity_err_d = parity_err_q;
    
    if (state_q == RXPAR) begin
      parity_err_d = 1'b0;
      data_parity  = ^rsr_q; // XOR to compute parity of data bits

      if (timing_bit_center_edge) begin
        case (reg_read.lcr.arr[5:4]) // Read Parity Configuration 
          3'b00: parity_err_d = (data_parity == filtered_rxd); // Odd Parity
          3'b01: parity_err_d = (data_parity != filtered_rxd); // Even Parity
          3'b10: parity_err_d = (~filtered_rxd);               // Forced 1
          3'b11: parity_err_d = filtered_rxd;                  // Forced 0
          default: parity_err_d = 1'b0;
        endcase
        break_d    = break_q | filtered_rxd;
        par_finish = 1'b1;
      end
    end

    //--------------------------------------------------------------------------------------------
    // Stop Bit Check 
    //--------------------------------------------------------------------------------------------
    framing_err_d = framing_err_q;
    
    if (state_q == RXSTOP) begin
      framing_err_d = 1'b0;
      if (timing_bit_center_edge) begin
        break_d     = break_q | filtered_rxd;
        write_init  = 1'b1;
        stop_finish = 1'b1;
        if (!filtered_rxd) begin
          framing_err_d = 1'b1;
        end else begin
          framing_err_d = 1'b0;
        end
      end
    end

  end

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // FIFO & WRITE RHR Sequential //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //--FIFO----------------------------------------------------------------------------------------
  `FF(fifo_error_index_q, fifo_error_index_d, '0, clk_i, rst_ni)
  `FF(timeout_count_q, timeout_count_d, '0, baud_rate, rst_ni)

  //--Write-RHR-----------------------------------------------------------------------------------
  `FF(rhr_full_q, rhr_full_d, '0, clk_i, rst_ni)

  //--Break-Interrupt-----------------------------------------------------------------------------
  `FF(break_q, break_d, '0, clk_i, rst_ni)

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Statemachine Sequential//
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //--Statelogic----------------------------------------------------------------------------------
  `FF(state_q, state_d, RXIDLE, clk_i, rst_ni)

  //--RSR-----------------------------------------------------------------------------------------
  `FF(rsr_q, rsr_d, '0, clk_i, rst_ni) 
  `FF(bitcount_q, bitcount_d, '0, clk_i, rst_ni)

  //--Parity--------------------------------------------------------------------------------------
  `FF(parity_err_q, parity_err_d, '0, clk_i, rst_ni) 

  //--Stop----------------------------------------------------------------------------------------
  `FF(framing_err_q, framing_err_d, '0, clk_i, rst_ni) 


endmodule
