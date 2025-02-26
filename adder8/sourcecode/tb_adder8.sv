// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Diyou Shen <dishen@iis.ee.ethz.ch>

`timescale 1ns / 1ps
module tb_adder8;

  //------------------ Structs and Parameters ------------------//
  parameter  T_CLK_HI       = 5ns;                 // set clock high time
  parameter  T_CLK_LO       = 5ns;                 // set clock low time
  localparam T_CLK          = T_CLK_HI + T_CLK_LO; // calculate clock period
  parameter  T_APPL_DEL     = 1ns;                 // set stimuli application delay
  parameter  T_ACQ_DEL      = 5ns;                 // set response aquisition delay

  parameter int NUM_VECTOR  = 32;                   // number of vectors in stimuli

  parameter STIMULI_FILE    = "./stimuli/stimuli.txt";
  parameter RESPONSE_FILE   = "./stimuli/expected_response.txt";


  typedef struct packed {
    logic [7:0]  a;
    logic [7:0]  b;
  } stimuli_t;

  typedef struct packed {
    logic        carry_out;
    logic [7:0]  sum;
  } exp_rsp_t;

  //------------------ Logic Wires ------------------//

  logic       eoc;            // End of computation
  stimuli_t   stimuli[];      // Input stimuli array
  exp_rsp_t   exp_response[]; // Expected responses

  logic       clk;
  logic       rst_n;

  logic [7:0] a, b, sum;
  logic       carry_out;

  exp_rsp_t actual_response;

  //------------------ Generate Clock and Reset Signals ------------------//
  initial begin
    // Generating the clock
    do begin
      clk = 1'b1; #T_CLK_HI;
      clk = 1'b0; #T_CLK_LO;
    end while (eoc == 1'b0);
  end

  initial begin
    // Resetting the design for 1 cycle
    rst_n     = 1'b0;
    #(T_CLK);
    // Release the reset
    rst_n     = 1'b1;
    #(T_CLK);
  end

  //------------------ Design Under Test ------------------//
  adder8 i_dut (
    .clk_i     (clk       ),
    .rst_ni    (rst_n     ),
    .a_i       (a         ),
    .b_i       (b         ),
    .sum_o     (sum       ),
    .carry_o   (carry_out)
  );

  //------------------ Stimuli Apply ------------------//
  initial begin : stim_apply
    // Set all inputs to 0 by default
    a         = '0;
    b         = '0;
    eoc       = 0;

    // Dump the VCD waveform file
    $dumpfile("adder8.vcd");
    // Record all singals of i_dut
    // You can also specify the signals of interest, or record
    // everything in the testbench using $dumpvars(0,tb_crc)
    $dumpvars(1,i_dut);

    // Read the stimuli from the file
    $display("Loading Stimuli from %s", STIMULI_FILE);
    load_stimuli(STIMULI_FILE);

    for (int i = 0; i < NUM_VECTOR; i++) begin
      // Wait for one clock cycle
      @(posedge clk);
      // Delay application by the stimuli application delay
      #T_APPL_DEL;
      // Apply the stimuli to the dut inputs
      a = stimuli[i][15:8];
      b = stimuli[i][7:0];
    end

    // Give additinal five cycles to make sure we have checked all responses
    #(5*T_ACQ_DEL);

    // End of the simulation
    eoc = 1;

    // Finish recording the waveform
    $dumpflush;
  end

  //------------------ Response Check ------------------//
  initial begin : resp_check
    // Load expected responses
    load_exp_response(RESPONSE_FILE);
    
    // The adder8 design has a register at the output
    // We need to record the response one cycle later
    // Here we delay one cycle for this reason
    #(T_CLK);

    foreach (stimuli[j]) begin
      // Wait for the positive clock edge
      @(posedge clk);
      // Delay application by the stimuli application delay
      #T_ACQ_DEL;

      actual_response.sum       = sum;
      actual_response.carry_out = carry_out;

      if (actual_response != exp_response[j]) begin
        $display("Incorrect at %d check! %d + %d = %d, Actual %d \n", j,
                 stimuli[j].a, stimuli[j].b,
                 exp_response[j], actual_response);
      end else begin
        $display("Correct for check %d!", j);
      end
    end
  end

  //------------------ Load Stimuli ------------------//
  task load_stimuli(input string filename);
    int           file;
    automatic int i = 0;
    string        line;
    automatic int line_count = 0;
    logic [31:0]  temp;

    // Open the file
    file = $fopen(filename, "r");
    if (file == 0) begin
      $fatal(1, "Error: Failed to open file '%s'", filename);
    end
    $display("File '%s' opened successfully.", filename);

    // Calculate the number of lines the file contains
    while (!$feof(file)) begin
      if ($fgets(line, file) != 0) begin
        line_count++;
      end
    end
    $fclose(file);

    // Give the correct array size to stimuli
    stimuli = new[line_count];
    
    file = $fopen(filename, "r");

    // Read and parse stimuli
    while (!$feof(file)) begin
      if ($fgets(line, file) != 0) begin
        temp = line.atobin();
        // record the stumili in the array
        stimuli[i] = temp[$bits(stimuli_t)-1:0];
        i++;
      end
    end

    $fclose(file);
  endtask

  //------------------ Load Expected Response ------------------//
  task load_exp_response(input string filename);
    int           file;
    automatic int i = 0;
    string        line;
    automatic int line_count = 0;
    logic [31:0]  temp;

    // Open the file
    file = $fopen(filename, "r");
    if (file == 0) begin
      $fatal(1, "Error: Failed to open file '%s'", filename);
    end
    $display("File '%s' opened successfully.", filename);

    // Calculate the number of lines the file contains
    while (!$feof(file)) begin
      if ($fgets(line, file) != 0) begin
        line_count++;
      end
    end
    $fclose(file);

    // Give the correct array size to stimuli
    exp_response = new[line_count];
    
    file = $fopen(filename, "r");

    // Read and parse expected response
    while (!$feof(file)) begin
      if ($fgets(line, file) != 0) begin
        temp = line.atobin();
        // record the expected response in the array
        exp_response[i].carry_out = temp[0];
        exp_response[i].sum       = temp[$bits(exp_rsp_t)-1:1];
        i++;
      end
    end

    $fclose(file);
  endtask
endmodule