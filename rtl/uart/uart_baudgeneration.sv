`include "common_cells/registers.svh"
module uart_baudgeneration #() 
(
  input logic  clk_i,
  input logic  rst_ni,

  output logic oversample_rate_edge_o,
  output logic double_rate_edge_o,
  output logic baud_rate_edge_o,

  input uart_pkg::reg_read_t reg_read
);

  // Import the UART package for definitions and parameters
  import uart_pkg::*;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // INSTANTIATIONS //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //--Clock-Division-Signals----------------------------------------------------------------------
  logic [15:0] divisor;

  //--Oversample-Signals--------------------------------------------------------------------------
  logic        oversample_clear;
  logic [15:0] oversample_count;

  //--Double-Signals------------------------------------------------------------------------------
  logic       serial_double_q, serial_double_d;

  //--Baud-Signals--------------------------------------------------------------------------------
  logic       baud_clear;
  logic [3:0] baud_count;
  logic       serial_baud_q, serial_baud_d;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Clock Division //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //----------------------------------------------------------------------------------------------
  // Oversample 16x
  //----------------------------------------------------------------------------------------------

  // Concatenate Most significant Byte and Least Significant Byte of Divisor 
  assign divisor = {reg_read.dlm.arr, reg_read.dll.arr} - 16'd1; //TODO Divisor - 1?

  assign oversample_clear = (oversample_count == divisor) | (reg_read.obi_write_dllm) ? 1'b1 : 1'b0; 

  counter #(
    .WIDTH          (16), 
    .STICKY_OVERFLOW(0)
  ) i_counter_1 (
    .clk_i, 
    .rst_ni,
    .clear_i   ( oversample_clear ), // Synchronous clear: Sets Counter 0 in the next cycle
    .en_i      ( 1'b1             ),        
    .load_i    ( 1'b0             ),  
    .down_i    ( 1'b0             ), // Always count upwards
    .d_i       ( '0               ),
    .q_o       ( oversample_count ),
    .overflow_o(                  )
  );

  //--Oversample-Edge-----------------------------------------------------------------------------
  assign oversample_rate_edge_o = (oversample_count == '0) ? 1'b1 : 1'b0; // Is only high one clock cycle

  //----------------------------------------------------------------------------------------------
  // Baudrate
  //----------------------------------------------------------------------------------------------

  assign baud_clear = (baud_count == 4'b1111) ? 1'b1 : 1'b0; 

  counter #(
    .WIDTH          (4), 
    .STICKY_OVERFLOW(0)
  ) i_counter_3 (
    .clk_i, 
    .rst_ni,
    .clear_i   ( baud_clear       ), // Synchronous clear: Sets Counter 0 in the next cycle
    .en_i      ( oversample_clear ),        
    .load_i    ( 1'b0             ),  
    .down_i    ( 1'b0             ), // Always count upwards
    .d_i       ( '0               ),
    .q_o       ( baud_count       ),
    .overflow_o(                  )
  );

  //--Baud-Edge-----------------------------------------------------------------------------------
  assign serial_baud_d = (baud_count == '0) ? 1'b1 : 1'b0; 

  assign baud_rate_edge_o = (~serial_baud_d) & serial_baud_q;
  
  `FF(serial_baud_q, serial_baud_d, '0, clk_i, rst_ni)

  //--Double-Edge---------------------------------------------------------------------------------
  assign serial_double_d = (baud_count == '0) | (baud_count == 4'b1000) ? 1'b1 : 1'b0; 

  assign double_rate_edge_o = (~serial_double_d) & serial_double_q;
  
  `FF(serial_double_q, serial_double_d, '0, clk_i, rst_ni)

endmodule