module gpio #(
    parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
   
    parameter type obi_req_t          = logic,

    parameter type obi_rsp_t          = logic,
    /// The number of GPIOs in this module. 
    localparam int unsigned NrGPIOs    = gpio_reg_pkg::GpioCount
) (
    /// Primary input clock. The control interface is suposed to be synchronous to
    /// this clock.
    input logic                clk_i,
    /// Asynchronous active-low reset
    input logic                rst_ni,
    /// GPIO input signals from IO Pads (Pad -> SoC) signal.
    input logic [NrGPIOs-1:0]  gpio_in,
    /// GPIO output signals to IO Pads (SoC -> Pad) signal.
    output logic [NrGPIOs-1:0] gpio_out,
    /// GPIO tx enable signals. This signal is supposed to control the output
    /// buffer enable of the corresponding IO Pad. 0 -> RX (input), 1 -> TX (output).
    output logic [NrGPIOs-1:0] gpio_tx_en_o, // 0 -> input, 1 -> output
    /// Synchronized GPIO input signals. This port provides the gpio_in signal
    /// synchronized to clk_i.
    output logic [NrGPIOs-1:0] gpio_in_sync_o,
    /// Global interrupt line. The interrupt line is asserted for one clk_i
    /// whenever an unmasked interrupt on one of the GPIOs arrives.
    output logic               global_interrupt_o,
    /// Control interface request side using register_interface protocol.
    input                      obi_req_t obi_reg_req_i,
    /// Control interface request side using register_interface protocol.
    output                     obi_rsp_t obi_reg_rsp_o
    );

  import gpio_reg_pkg::*;

  //-----------------------------------------------------------------------------------------------
  //Instantiations
  //-----------------------------------------------------------------------------------------------

  // Internal Signals
  gpio_reg2hw_t s_reg2hw; //Interface from Register to Internal GPIO Logic(HW)
  gpio_hw2reg_t s_hw2reg; //Interface from Internal GPIO Logic(HW) to Register

  // Synchronized inputs
  logic [NrGPIOs-1:0] s_gpio_in_sync;

  // Individual interrupt signals
  logic [NrGPIOs-1:0] s_gpio_rise_fall_edge;
  logic [NrGPIOs-1:0] s_gpio_rise_fall_intrpt;

  // Aggregated interrupts per GPIO
  logic [NrGPIOs-1:0] interrupts_edges; // Aggregates new interrupts
  logic [NrGPIOs-1:0] interrupts_pending; // Aggregates pending interrupts

  // Instantiate register file
  gpio_reg_top #(
    .obi_req_t(obi_req_t),
    .obi_rsp_t(obi_rsp_t)
  ) i_reg_file (
    .clk_i,
    .rst_ni,
    .obi_reg_req_i,
    .obi_reg_rsp_o,
    .reg2hw(s_reg2hw),
    .hw2reg(s_hw2reg),
  );

  ////////////////////////////////////////////////////////////////////////////////////////////////////
  //Internal GPIO Logic - HW//
  ////////////////////////////////////////////////////////////////////////////////////////////////////

  // Assign synchronized gpio inputs to external port
  assign gpio_in_sync_o = s_gpio_in_sync;

  // Instantiate logic for individual gpios in blocks of DATA_WIDTH
  for (genvar gpio_idx = 0; gpio_idx < NrGPIOs; gpio_idx++) begin : gen_gpios
        
        //-----------------------------------------------------------------------------------------------
        //Instantiate Synchronizer / Sample Input to Clock & Detect Edges
        //-----------------------------------------------------------------------------------------------

        gpio_input_stage #(
        .NrSyncStages(2)
        ) i_sync_gpio_input(
        .clk_i,
        .rst_ni,
        .en_i(s_reg2hw.gpio_en[gpio_idx].q && s_reg2hw.gpio_dir[gpio_idx].q == 0),
        .serial_i(gpio_in[gpio_idx]),
        .r_f_edge_o(s_gpio_rise_fall_edge[gpio_idx]), 
        .serial_o(s_gpio_in_sync[gpio_idx])
        );

        //-----------------------------------------------------------------------------------------------
        //Interface Internal GPIO Logic & IOCell
        //-----------------------------------------------------------------------------------------------
        
        // Assign GPIO_IN register
        assign s_hw2reg.gpio_in[gpio_idx].d = s_gpio_in_sync[gpio_idx];

        // Control output with GPIO_OUT register
        assign gpio_out[gpio_idx] = s_reg2hw.gpio_out[gpio_idx].q;

        // Control gpio_tx_en_o depending on GPIO_DIR register value
        always_comb begin

            `assert_condition(s_reg2hw.gpio_dir[gpio_idx], rst_ni);

            gpio_tx_en_o[gpio_idx] = 1'b0; //DEFAULT-INPUT

            if (s_reg2hw.gpio_dir[gpio_idx]) begin //OUTPUT
                gpio_tx_en_o[gpio_idx] = 1'b1;
            end

        end

        //-----------------------------------------------------------------------------------------------
        //Toggle 
        //-----------------------------------------------------------------------------------------------

        always_comb begin

            if (s_reg2hw.gpio_en[gpio_idx].q && s_reg2hw.gpio_dir[gpio_idx].q && s_reg2hw.gpio_toggle[gpio_idx].q) begin
            `assert_condition (s_reg2hw.gpio_en[gpio_idx].q && s_reg2hw.gpio_toggle[gpio_idx].q, rst_ni);
            s_hw2reg.gpio_out[gpio_idx].d  = ~s_reg2hw.gpio_out[gpio_idx].q;
            s_hw2reg.gpio_out[gpio_idx].de = 1'b1;
            end else begin
            s_hw2reg.gpio_out[gpio_idx].d  = s_reg2hw.gpio_out[gpio_idx].q;
            s_hw2reg.gpio_out[gpio_idx].de = 1'b0;
            end

        end

        //-----------------------------------------------------------------------------------------------
        //Interrupt 
        //-----------------------------------------------------------------------------------------------

        //TODO
        // Mask Detected Edges with Interrupt Enable and GPIO Enable
        assign s_gpio_rise_fall_intrpt = s_gpio_rise_fall_edge & s_reg2hw.intrpt_rise_fall_en[gpio_idx].q & s_reg2hw.gpio_en[gpio_idx].q;

        // Aggregate all pending interrupts. Aggregation of all sticky interrupts.
        assign interrupts_pending = s_reg2hw.intrpt_rise_fall_status;

        // Assign interrupt output signal depending on inerrupt mode
        assign global_interrupt_o = |s_gpio_rise_fall_intrpt;

        always_comb begin
            `assert_condition ({s_reg2hw.gpio_en[gpio_idx].q && s_reg2hw.intrpt_rise_fall_status[gpio_idx].q}, rst_ni);
        
            if (s_reg2hw.gpio_en[gpio_idx].q && s_reg2hw.intrpt_rise_fall_status[gpio_idx].q) begin 
            s_hw2reg.intrpt_rise_fall_status[gpio_idx].d   = '0;
            s_hw2reg.intrpt_rise_fall_status[gpio_idx].de  = 1'b1;
            end else begin
            // Set new bits of the the status register when an interrupt arrives.
            s_hw2reg.intrpt_rise_fall_status[gpio_idx].d   = s_gpio_rise_fall_intrpt[gpio_idx] | s_reg2hw.intrpt_rise_fall_status[gpio_idx].q;
            // Only update the registers (set de = 1) if there are any new interrupts of the given type.
            s_hw2reg.intrpt_rise_fall_status[gpio_idx].de  = |s_gpio_rise_fall_intrpt[gpio_idx];
            end

        end 
        assign s_hw2reg.intrpt_status[gpio_idx].d = interrupts_pending[gpio_idx];
    end
endmodule