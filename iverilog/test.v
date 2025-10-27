// Copyright 2025 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>

`timescale 1ns/1ns
module fbtb_croc_soc();

    localparam time Period     = 100ns;
    localparam time PeriodHalf = Period / 2;
    localparam time TAppl      = 20ns;
    localparam time TTest      = 80ns;

    int    fd         = 0;
    int    sim_time   = 0;
    int    ret        = 0;
    logic  clk_sample = 0;
    logic  clk;
    logic  jtag_tck;

    // chip signals from file
    logic        clk_i;
    logic        rst_ni;
    logic        ref_clk_i;
    logic        testmode_i;
    logic        fetch_en_i;
    logic        status_o, status_to, status_to_q;
    logic        jtag_tck_i;
    logic        jtag_tdi_i;
    logic        jtag_tdo_o, jtag_tdo_to, jtag_tdo_to_q;
    logic        jtag_tms_i;
    logic        jtag_trst_ni;
    logic        uart_rx_i;
    logic        uart_tx_o, uart_tx_to, uart_tx_to_q;
    logic [15:0] gpio_i;
    logic [15:0] gpio_o, gpio_to, gpio_to_q;
    logic [15:0] gpio_out_en_o, gpio_out_en_to, gpio_out_en_to_q;

    initial begin
        forever begin
            clk_sample = !clk_sample;
            #PeriodHalf;
        end
    end

    initial begin
        fd = $fopen("../vsim/stimuli.txt", "r");
        // defaults
        status_to_q = '0;
        jtag_tdo_to_q = '0;
        uart_tx_to_q = '0;
        gpio_to_q = '0;
        gpio_out_en_to_q = '0;
        while (!$feof(fd)) begin
            // parse line, apply data to chip
            #TAppl;
            ret = $fscanf(fd, "%010d.%01b%01b%01b%01b%01b%01b%01b%01b%01b%01b%16b.%01b%01b%01b%16b%16b",
                sim_time,
                clk_i,
                rst_ni,
                ref_clk_i,
                testmode_i,
                fetch_en_i,
                jtag_tck_i,
                jtag_tdi_i,
                jtag_tms_i,
                jtag_trst_ni,
                uart_rx_i,
                gpio_i,
                status_to,
                jtag_tdo_to,
                uart_tx_to,
                gpio_to,
                gpio_out_en_to
            );
            // test outputs
            #(TTest - TAppl);
            if (status_o      !== status_to_q     )$warning("Output mismatch status_o      (%01b instead of %01b) at: %010d", status_o,      status_to_q,      sim_time);
            if (jtag_tdo_o    !== jtag_tdo_to_q   )$warning("Output mismatch jtag_tdo_o    (%01b instead of %01b) at: %010d", jtag_tdo_o,    jtag_tdo_to_q,    sim_time);
            if (uart_tx_o     !== uart_tx_to_q    )$warning("Output mismatch uart_tx_o     (%01b instead of %01b) at: %010d", uart_tx_o,     uart_tx_to_q,     sim_time);
            if (gpio_o        !== gpio_to_q       )$warning("Output mismatch gpio_o        (%01b instead of %01b) at: %010d", gpio_o,        gpio_to_q,        sim_time);
            if (gpio_out_en_o !== gpio_out_en_to_q)$warning("Output mismatch gpio_out_en_o (%01b instead of %01b) at: %010d", gpio_out_en_o, gpio_out_en_to_q, sim_time);
            // next sample
            status_to_q = status_to;
            jtag_tdo_to_q = jtag_tdo_to;
            uart_tx_to_q = uart_tx_to;
            gpio_to_q = gpio_to;
            gpio_out_en_to_q = gpio_out_en_to;
            @(posedge clk_sample);
        end
        $finish;
        $fclose(fd);
    end

    // dut clocks
    assign clk = clk_i & clk_sample;
    assign jtag_tck = jtag_tck_i & clk_sample;

    \croc_soc$croc_chip.i_croc_soc i_croc_soc (
        .clk_i         ( clk        ),
        .rst_ni        ( rst_ni     ),
        .ref_clk_i     ( ref_clk_i  ),
        .testmode_i    ( testmode_i ),
        .fetch_en_i    ( fetch_en_i ),
        .status_o      ( status_o   ),

        .jtag_tck_i    ( jtag_tck     ),
        .jtag_tdi_i    ( jtag_tdi_i   ),
        .jtag_tdo_o    ( jtag_tdo_o   ),
        .jtag_tms_i    ( jtag_tms_i   ),
        .jtag_trst_ni  ( jtag_trst_ni ),

        .uart_rx_i     ( uart_rx_i ),
        .uart_tx_o     ( uart_tx_o ),

        .gpio_i        ( gpio_i        ),
        .gpio_o        ( gpio_o        ),
        .gpio_out_en_o ( gpio_out_en_o )
    );

endmodule
