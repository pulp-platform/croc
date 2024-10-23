`include "common_cells/registers.svh"
`include "common_cells/assertions.svh"

module gpio #(
    /// The OBI configuration for all ports.
    parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
    /// OBI request type
    parameter type obi_req_t          = logic,
    /// OBI response type
    parameter type obi_rsp_t          = logic,
    /// The number of GPIOs in this module.
    localparam int unsigned NrGPIOs    = gpio_reg_pkg::GpioCount
) (
    /// Primary input clock. The control interface is suposed to be synchronous
    /// to this clock.
    input logic                clk_i,
    /// Asynchronous active-low reset
    input logic                rst_ni,

    /// GPIO input signals from IO Pads (Pad -> SoC) signal.
    input logic [NrGPIOs-1:0]  gpio_in,
    /// GPIO output signals to IO Pads (SoC -> Pad) signal.
    output logic [NrGPIOs-1:0] gpio_out,
    /// GPIO tx enable signals. This signal is supposed to control the output
    /// buffer enable of the corresponding IO Pad.
    /// 0 -> RX (input), 1 -> TX (output).
    output logic [NrGPIOs-1:0] gpio_tx_en_o, // 0 -> input, 1 -> output
    /// Synchronized GPIO input signals. This port provides the gpio_in signal
    /// synchronized to clk_i.
    output logic [NrGPIOs-1:0] gpio_in_sync_o,
    /// Global interrupt line. The interrupt line is asserted for one clk_i
    /// whenever an unmasked interrupt on one of the GPIOs arrives.
    output logic               global_interrupt_o,

    /// Control interface request side using register_interface protocol.
    input                      obi_req_t obi_req_i,
    /// Control interface request side using register_interface protocol.
    output                     obi_rsp_t obi_rsp_o
);

  import gpio_reg_pkg::*;

  //-----------------------------------------------------------------------------------------------
  // Instantiations
  //-----------------------------------------------------------------------------------------------

  // Internal Signals
  gpio_reg2hw_t reg2hw; //Interface from Register to Internal GPIO Logic(HW)
  gpio_hw2reg_t hw2reg; //Interface from Internal GPIO Logic(HW) to Register

  // Synchronized Inputs
  logic [NrGPIOs-1:0] gpio_in_sync;

  // Individual interrupt signals
  logic [NrGPIOs-1:0] gpio_rise_fall_edge;
  logic [NrGPIOs-1:0] gpio_rise_fall_intrpt;

  // Instantiate register file
  gpio_reg_top #(
    .obi_req_t(obi_req_t),
    .obi_rsp_t(obi_rsp_t)
  ) i_reg_file (
    .clk_i,
    .rst_ni,
    .obi_req_i,
    .obi_rsp_o,
    .reg2hw(reg2hw),
    .hw2reg(hw2reg)
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////////
  // Internal GPIO Logic - HW //
  ////////////////////////////////////////////////////////////////////////////////////////////////////

  // Assign synchronized gpio inputs to external port
  assign gpio_in_sync_o = gpio_in_sync;

  // Instantiate logic for individual gpios in blocks of DATA_WIDTH
  for (genvar gpio_idx = 0; gpio_idx < NrGPIOs; gpio_idx++) begin : gen_gpios
        //-----------------------------------------------------------------------------------------------
        // Instantiate Synchronizer / Sample Input to Clock & Detect Edges
        //-----------------------------------------------------------------------------------------------

        parameter int  NrSyncStages = 2;
        logic          f_edge;
        logic          r_edge;
        logic          serial_d, serial_q;

        assign f_edge = (~serial_d) & serial_q;
        assign r_edge = serial_d & (~serial_q);
        assign gpio_rise_fall_edge[gpio_idx] = f_edge | r_edge;
        assign gpio_in_sync[gpio_idx] =  serial_q;

        sync #(
            .STAGES (NrSyncStages)
        ) i_sync (
            .clk_i,
            .rst_ni,
            .serial_i(gpio_in[gpio_idx]),
            .serial_o (serial_d)
        );

        `FF(serial_q, serial_d, '0, clk_i, rst_ni)

        //-----------------------------------------------------------------------------------------------
        // Interface Internal GPIO Logic & IOCell
        //-----------------------------------------------------------------------------------------------

        // Assign GPIO_IN register
        assign hw2reg.gpio_in_w[gpio_idx] = gpio_in_sync[gpio_idx];

        // Control output with GPIO_OUT register
        assign gpio_out[gpio_idx] = reg2hw.gpio_out_r[gpio_idx];

        // Control gpio_tx_en_o depending on GPIO_DIR register value
        always_comb begin
            gpio_tx_en_o[gpio_idx] = 1'b0; //DEFAULT-INPUT

            if (reg2hw.gpio_dir_r[gpio_idx]) begin //OUTPUT
                gpio_tx_en_o[gpio_idx] = 1'b1;
            end
        end

        //-----------------------------------------------------------------------------------------------
        // Toggle
        //-----------------------------------------------------------------------------------------------

        always_comb begin
            if (reg2hw.gpio_en_r[gpio_idx] & reg2hw.gpio_dir_r[gpio_idx]
                    & reg2hw.gpio_toggle_r[gpio_idx]) begin
                hw2reg.gpio_out_w[gpio_idx]      = ~reg2hw.gpio_out_r[gpio_idx];
                hw2reg.gpio_out_w_allw[gpio_idx] = 1'b1;
            end else begin
                hw2reg.gpio_out_w[gpio_idx]      = reg2hw.gpio_out_r[gpio_idx];
                hw2reg.gpio_out_w_allw[gpio_idx] = 1'b0;
            end
        end

        //-----------------------------------------------------------------------------------------------
        // Interrupt
        //-----------------------------------------------------------------------------------------------

        // Mask Detected Edges with Interrupt Enable and GPIO Enable
        assign gpio_rise_fall_intrpt[gpio_idx] = gpio_rise_fall_edge[gpio_idx] &
            reg2hw.intrpt_rise_fall_en_r[gpio_idx] & reg2hw.gpio_en_r[gpio_idx];

        always_comb begin
            // Set new bits of the the status register when an interrupt arrives.
            hw2reg.intrpt_rise_fall_status_w[gpio_idx] =
                gpio_rise_fall_intrpt[gpio_idx] | reg2hw.intrpt_rise_fall_status_r[gpio_idx];
            // Only update the registers (set de = 1) if there are any new interrupts of the given type.
            hw2reg.intrpt_rise_fall_status_w_allw[gpio_idx] = |gpio_rise_fall_intrpt[gpio_idx];
        end
    end

// Assign interrupt output signal depending on inerrupt mode
assign global_interrupt_o = |gpio_rise_fall_intrpt;

endmodule
