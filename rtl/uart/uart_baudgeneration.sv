`include "common_cells/registers.svh"
module uart_baudgeneration #() 
(
  input logic  clk_i,
  input logic  rst_ni,

  output logic oversample_rate_o,
  output logic oversample_rate_edge_o,
  output logic double_baud_rate_o,
  output logic baud_rate_o,

  input uart_pkg::reg_read_t reg_read
);

  // Import the UART package for definitions and parameters
  import uart_pkg::*;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // INSTANTIATIONS //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //--Clock-Division-Signals----------------------------------------------------------------------
  logic [15:0] divisor;

  //--Edge-Detection-Signals----------------------------------------------------------------------
  logic serial_d, serial_q;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Clock Division //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //----------------------------------------------------------------------------------------------
  // Oversample 16x
  //----------------------------------------------------------------------------------------------

  //--Clock---------------------------------------------------------------------------------------

  // Concatenate Most significant Byte and Least Significant Byte of Divisor 
  assign divisor = {reg_read.dlm.arr, reg_read.dll.arr};
  // Set Outptut
  assign oversample_rate_o = oversample_rate;

  clk_int_div #(
    .DIV_VALUE_WIDTH      (16),
    .DEFAULT_DIV_VALUE    (1),
    .ENABLE_CLOCK_IN_RESET(1'b1)
  ) i_div_oversample (
    .clk_i,
    .rst_ni,

    .en_i          (1'b1),
    .test_mode_en_i(1'b0),
    .div_i         (divisor),

    .div_valid_i   (1'b1), 
    .div_ready_o   (), 

    .clk_o         (oversample_rate), // oversample_rate = (clk / divisor) = 16 * Baudrate
    .cycl_count_o  ()
  );

  //--Edge-Detect---------------------------------------------------------------------------------
  assign serial_d = oversample_rate;

  assign oversample_edge_o = (~serial_d) & serial_q;
  
  `FF(serial_q, serial_d, '0, clk_i, rst_ni)

  //----------------------------------------------------------------------------------------------
  // Oversample 2x - Double
  //----------------------------------------------------------------------------------------------

  // Set Outptut
  assign double_rate_o = double_rate;

  clk_int_div #(
    .DIV_VALUE_WIDTH      (16),
    .DEFAULT_DIV_VALUE    (1),
    .ENABLE_CLOCK_IN_RESET(1'b1)
  ) i_div_double (
    .clk_i         (oversample_rate),
    .rst_ni,

    .en_i          (1'b1),
    .test_mode_en_i(1'b0),
    .div_i         (8),

    .div_valid_i   (1'b1), 
    .div_ready_o   (), 

    .clk_o         (double_rate),
    .cycl_count_o  ()
  );

  //----------------------------------------------------------------------------------------------
  // Baudrate
  //----------------------------------------------------------------------------------------------

  // Set Outptut
  assign baud_rate_o = baud_rate;

  clk_int_div #(
    .DIV_VALUE_WIDTH      (16),
    .DEFAULT_DIV_VALUE    (1),
    .ENABLE_CLOCK_IN_RESET(1'b1)
  ) i_div_baud (
    .clk_i         (oversample_rate),
    .rst_ni,

    .en_i          (1'b1),
    .test_mode_en_i(1'b0),
    .div_i         (16),

    .div_valid_i   (1'b1),      
    .div_ready_o   (), 

    .clk_o         (baud_rate),
    .cycl_count_o  ()
  );

endmodule