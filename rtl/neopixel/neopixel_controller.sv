`include "common_cells/registers.svh"

module neopixel_controller import neopixel_pkg::*; #() (
    /// Primary input clock. The control interface is suposed to be synchronous to
    /// this clock.
    input  logic clk_i,
    /// Asynchronous active-low reset
    input  logic rst_ni,

    /// FIFO control signals
    /// FIFO is empty
    input  logic fifo_empty_i,
    /// Data which is read from the FIFO
    input  logic [23:0] fifo_data_i,
    /// Pop head from FIFO so that the next data can be read
    output logic fifo_pop_o,

    /// Timing Constraints
    input neopixel_write_reg_union_t timing_constraints_i,

    /// Output to NeoPixel data line
    output  logic data_o
);

    /////////////////////////////////////////////////////////////
    // Counter and Timing for correct NeoPixel Timing Protocol //
    /////////////////////////////////////////////////////////////

    // Timing constants and number of NeoPixels to control
    logic [CounterWidth - 1:0] t1h, t1l, t0h, t0l, t_latch, sleep;
    logic [RegisterDepth - 1:0] num_neopixel;

    // Extract timing values and number of NeoPixels from input struct
    assign num_neopixel = timing_constraints_i.str.num_neopixel;
    assign t1h          = timing_constraints_i.str.t1h;
    assign t1l          = timing_constraints_i.str.t1l;
    assign t0h          = timing_constraints_i.str.t0h;
    assign t0l          = timing_constraints_i.str.t0l;
    assign t_latch      = timing_constraints_i.str.t_latch;
    assign sleep        = timing_constraints_i.str.sleep;

    // Counter logic for precise timing
    // Counter value
    logic [CounterWidth - 1:0] counter_q;
    // Control signals for the counter
    logic counter_en, counter_clear;

    // Counter instance for implementing timing delays
    delta_counter #(
        .WIDTH              ( CounterWidth  ),
        .STICKY_OVERFLOW    ( 1'b1          )
    ) counter_i (
        .clk_i      ( clk_i             ),
        .rst_ni     ( rst_ni            ),
        .clear_i    ( counter_clear     ), // Resets the counter to 0
        .en_i       ( counter_en        ), // If 1, counter_q is increased
        .load_i     ( 1'b0              ), // No loading new values
        .down_i     ( 1'b0              ), // Count up
        .delta_i    ( 32'd1             ), // Increment by 1 each clock cycle
        .d_i        ( '0                ), // No external load data
        .q_o        ( counter_q         ), // Counter output
        .overflow_o (                   )
    );

    /////////////////////////////////////////
    // FSM for sending Bits to the Neopixel//
    /////////////////////////////////////////

    // State encoding
    typedef enum reg [1:0] {
        // Waiting until the FIFO has data to be sent
        IDLE       = 2'b00,
        // Transmit high phase of a bit
        BIT_HIGH   = 2'b01,
        // Transmit low phase of a bit
        BIT_LOW    = 2'b10,
        // Send RET/Latch period of transmission
        // This happens when all the GRB data for all LEDs has been sent
        LATCH      = 2'b11
    } state_t;

    // FSM state registers
    state_t state_d, state_q;

    // Saves all the data which still has to be sent
    // The data is sent in GRB order
    logic [23:0] active_color_data_q, active_color_data_d;

    logic last_state_latch_d, last_state_latch_q;

    // Indexcounter for the active_color_data array
    logic [$clog2(24) - 1:0] active_color_data_index_q, active_color_data_index_d;

    // Index of current NeoPixel
    logic [$clog2(MaxNumNeoPixel):0] neopixel_index_q, neopixel_index_d;

    // Next state and output logic
    always_comb begin
        state_d = state_q;
        last_state_latch_d = last_state_latch_q;
        data_o = 1'b0;
        counter_clear = 1'b0;
        counter_en = 1'b0;
        active_color_data_d = active_color_data_q;
        neopixel_index_d = neopixel_index_q;
        active_color_data_index_d = active_color_data_index_q;
        fifo_pop_o = 0;

        case (state_q)
            IDLE: begin
                // Initialize state variables
                active_color_data_d = '0;
                neopixel_index_d = 0;
                active_color_data_index_d = 0;

                if (last_state_latch_q & sleep != 0) begin
                    counter_en = 1'b1;
                    last_state_latch_d = (counter_q == sleep)? 1'b0: last_state_latch_q;
                end else begin
                    last_state_latch_d = 1'b0;
                    if (~fifo_empty_i & num_neopixel > 0) begin
                        // Start transmission if FIFO has data and NeoPixels are defined
                        state_d = BIT_HIGH;
                        counter_clear = 1'b1;
                        active_color_data_d = fifo_data_i;
                        fifo_pop_o = 1;
                    end
                end
            end

            BIT_HIGH: begin
                counter_en = 1'b1; // Enable the counter
                data_o = 1;

                // Transition logic based on bit timing
                if (counter_q == (active_color_data_q[23] ? t1h : t0h) - 1) begin
                    state_d = BIT_LOW;
                    counter_clear = 1'b1;
                end
            end

            BIT_LOW: begin
                counter_en = 1'b1; // Enable the counter

                // Transition logic based on bit timing
                if (counter_q == (active_color_data_q[23] ? t1l : t0l) - 1) begin
                    active_color_data_d = {active_color_data_q[22:0], 1'b0}; // Shift GRB data
                    counter_clear = 1'b1; // Reset counter for next state

                    if (active_color_data_index_q < 23) begin
                        // More bits remain, continue with the next bit
                        state_d = BIT_HIGH;
                        active_color_data_index_d = active_color_data_index_q + 1;
                    end else if ((neopixel_index_q < num_neopixel - 1)) begin
                        // We have more NeoPixel left to send data to
                        state_d = BIT_HIGH;
                        active_color_data_index_d = 0;
                        neopixel_index_d = neopixel_index_q + 1;

                        // Load more data if FIFO has data
                        active_color_data_d = (fifo_empty_i ? '0 : fifo_data_i);
                        fifo_pop_o = (fifo_empty_i ? 0 : 1);
                    end else begin
                        // All NeoPixel have data, go to latch state
                        state_d = LATCH;
                    end
                end
            end


            LATCH: begin
                counter_en = 1'b1; // Enable the counter

                if (counter_q == t_latch - 1) begin
                        state_d = IDLE;
                        counter_clear = 1'b1;
                        last_state_latch_d = 1'b1;
                end
            end

            default: begin
                state_d = IDLE;
            end

        endcase
    end

    // Flip-flops for state variables
    `FF(state_q, state_d, IDLE, clk_i, rst_ni)
    `FF(active_color_data_q, active_color_data_d, '0, clk_i, rst_ni)
    `FF(active_color_data_index_q, active_color_data_index_d, '0, clk_i, rst_ni)
    `FF(neopixel_index_q, neopixel_index_d, '0, clk_i, rst_ni)
    `FF(last_state_latch_q, last_state_latch_d, '0, clk_i, rst_ni)

endmodule
