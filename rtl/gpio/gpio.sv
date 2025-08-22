// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Hannah Pochert <hpochert@student.ethz.ch>
// - Luisa Wüthrich <lwuethri@student.ethz.ch>
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

module gpio #(
    /// The OBI configuration for all ports.
    parameter obi_pkg::obi_cfg_t ObiCfg = obi_pkg::ObiDefaultConfig,
    /// OBI request type
    parameter type obi_req_t         = logic,
    /// OBI response type
    parameter type obi_rsp_t         = logic,
    /// Number of synchronization stages for GPIO inputs.
    parameter int  NrSyncStages      = 2,
    /// The number of GPIOs
    parameter int unsigned GpioCount = 16
) (
    /// Primary input clock
    input  logic                 clk_i,
    /// Asynchronous active-low reset
    input  logic                 rst_ni,

    /// GPIO input signals from IO Pads (Pad -> SoC) signal.
    input  logic [GpioCount-1:0] gpio_i,
    /// GPIO output signals to IO Pads (SoC -> Pad) signal.
    output logic [GpioCount-1:0] gpio_o,
    /// GPIO tx enable signals. This signal controls
    /// the output enable of the corresponding IO Pad.
    /// 0 -> input, 1 -> output.
    output logic [GpioCount-1:0] gpio_out_en_o,
    /// Synchronized GPIO input signals. 
    // Provides the gpio_i signal synchronized to clk_i to other modules.
    output logic [GpioCount-1:0] gpio_in_sync_o,
    /// GPIO interrupt line. The interrupt line is asserted for one clk_i
    /// whenever an unmasked interrupt on one of the GPIOs arrives.
    output logic                 interrupt_o,

    /// Control interface from interconnect (request).
    input  obi_req_t             obi_req_i,
    /// Control interface back into interconnect (response).
    output obi_rsp_t             obi_rsp_o
);
// tmrg default triplicate
// tmrg do_not_triplicate clk_i
// tmrg do_not_triplicate rst_ni
// tmrg do_not_triplicate gpio_i
// tmrg do_not_triplicate gpio_o
// tmrg do_not_triplicate gpio_out_en_o
// tmrg tmr_error true

  import gpio_reg_pkg::*;

  //-----------------------------------------------------------------------------------------------
  // Instantiations
  //-----------------------------------------------------------------------------------------------

  // Internal Signals
  gpio_reg2hw_t [GpioCount-1:0] reg2hw; // Interface from Register to Internal GPIO Logic(HW)
  gpio_hw2reg_t [GpioCount-1:0] hw2reg; // Interface from Internal GPIO Logic(HW) to Register

  // Synchronized Inputs
  logic [GpioCount-1:0] gpio_in_sync;

  // Individual interrupt signals
  logic [GpioCount-1:0] gpio_edge;
  logic [GpioCount-1:0] gpio_intrpt;

  logic gpio_intrpt_pending;

  // Instantiate register file
  gpio_reg_top #(
    .obi_req_t(obi_req_t),
    .obi_rsp_t(obi_rsp_t),
    .GpioCount(GpioCount)
  ) i_reg_file (
    .clk_i (clk_i),
    .rst_ni (rst_ni),
    .obi_req_i (obi_req_i),
    .obi_rsp_o (obi_rsp_o),
    .reg2hw (reg2hw),
    .hw2reg (hw2reg)
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////////
  // Internal GPIO Logic - HW //
  ////////////////////////////////////////////////////////////////////////////////////////////////////

  // Assign synchronized gpio inputs to external port
  assign gpio_in_sync_o = gpio_in_sync;


  logic [GpioCount-1:0]         serial_d, serial_q, serial_qVoted;
  logic [GpioCount-1:0] is_input;
  logic [GpioCount-1:0] is_output;
  assign serial_qVoted = serial_q;
  // Instantiate logic for individual gpios in blocks of DATA_WIDTH
  for (genvar idx = 0; idx < GpioCount; idx++) begin : gen_gpios
        //-----------------------------------------------------------------------------------------------
        // Instantiate Synchronizer / Sample Input to Clock & Detect Edges
        //-----------------------------------------------------------------------------------------------
        logic          f_edge;
        logic          r_edge;


        sync #(
            .STAGES (NrSyncStages)
        ) i_sync (
            .clk_i (clk_i),
            .rst_ni (rst_ni),
            .serial_i (gpio_i[idx]),
            .serial_o (serial_d[idx])
        );

        always_ff @(posedge clk_i or negedge rst_ni) begin
            if (!rst_ni) begin
                serial_q[idx] <= '0;
            end else begin
                serial_q[idx] <= serial_d[idx];
            end
        end

        assign f_edge = (~serial_d[idx]) & serial_qVoted[idx];
        assign r_edge = serial_d[idx] & (~serial_qVoted[idx]);
        assign gpio_edge[idx] = reg2hw[idx].intrpt_edge ? r_edge : f_edge;
        assign gpio_in_sync[idx] =  serial_qVoted[idx];


        //-----------------------------------------------------------------------------------------------
        // Interface Internal GPIO Logic & IOCell
        //-----------------------------------------------------------------------------------------------

        assign is_input[idx] = reg2hw[idx].en & ~reg2hw[idx].dir;
        assign is_output[idx] = reg2hw[idx].en & reg2hw[idx].dir;

        // Assign GPIO_IN register
        assign hw2reg[idx].sync_in = gpio_in_sync[idx] & is_input[idx];

        // Control output with GPIO_OUT register
        assign gpio_o[idx] = reg2hw[idx].out & is_output[idx];

        // Control gpio_out_en_o depending on GPIO_DIR register value
        assign gpio_out_en_o[idx] = is_output[idx];


        //-----------------------------------------------------------------------------------------------
        // Toggle
        //-----------------------------------------------------------------------------------------------

        always_comb begin
            hw2reg[idx].out       = '0;
            hw2reg[idx].out_valid = '0;

            if (is_output[idx] & reg2hw[idx].toggle) begin
                hw2reg[idx].out       = ~reg2hw[idx].out;
                hw2reg[idx].out_valid = 1'b1;
            end
        end


        //-----------------------------------------------------------------------------------------------
        // Interrupt
        //-----------------------------------------------------------------------------------------------

        // Mask Detected Edges with Interrupt Enable and GPIO Enable
        assign gpio_intrpt[idx] = gpio_edge[idx] & reg2hw[idx].intrpt_en & is_input[idx];

        assign hw2reg[idx].intrpt       = gpio_intrpt[idx];
        assign hw2reg[idx].intrpt_valid = gpio_intrpt[idx];
    end


  // Assign interrupt output signal
  always_comb begin : proc_assign_gpio
    gpio_intrpt_pending = 1'b0;
    for (int idx = 0; idx < GpioCount; idx++) begin
        gpio_intrpt_pending = gpio_intrpt_pending | reg2hw[idx].intrpt;
    end
  end
  assign interrupt_o = gpio_intrpt_pending;

endmodule
