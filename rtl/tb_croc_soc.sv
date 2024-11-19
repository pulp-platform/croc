// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

//`define TRACE_WAVE

module tb_croc_soc #(
    parameter time         ClkPeriod     = 100ns,
    parameter time         ClkPeriodJtag = 100ns,
    parameter time         ClkPeriodRef  = 30518ns,
    parameter time         TAppl         = 20ns,
    parameter time         TTest         = 80ns,
    parameter int unsigned RstCycles     = 1,
    // UART
    parameter int unsigned  UartBaudRate      = 115200,
    parameter int unsigned  UartParityEna     = 0,

    localparam int unsigned ClkFrequency = 1s / ClkPeriod
)();
    logic clk;
    logic rst_n;
    logic ref_clk;

    logic jtag_tck_i;
    logic jtag_trst_ni;
    logic jtag_tms_i;
    logic jtag_tdi_i;
    logic jtag_tdo_o;

    logic uart_rx_i;
    logic uart_tx_o;

    logic fetch_en_i;
    logic status_o;

    localparam int unsigned GpioCount = 16;

    logic [GpioCount-1:0] gpio_i;             
    logic [GpioCount-1:0] gpio_o;            
    logic [GpioCount-1:0] gpio_out_en_o;

    logic neopixel_data_o;

    // Register addresses
    localparam bit [31:0] BootAddrAddr   = croc_pkg::SocCtrlAddrOffset
                                           + soc_ctrl_reg_pkg::SOC_CTRL_BOOTADDR_OFFSET;
    localparam bit [31:0] FetchEnAddr    = croc_pkg::SocCtrlAddrOffset
                                           + soc_ctrl_reg_pkg::SOC_CTRL_FETCHEN_OFFSET;
    localparam bit [31:0] CoreStatusAddr = croc_pkg::SocCtrlAddrOffset
                                           + soc_ctrl_reg_pkg::SOC_CTRL_CORESTATUS_OFFSET;


    //////////////
    //  Clocks  //
    //////////////

    clk_rst_gen #(
        .ClkPeriod    ( ClkPeriod ),
        .RstClkCycles ( RstCycles )
    ) i_clk_rst_sys (
        .clk_o  ( clk   ),
        .rst_no ( rst_n )
    );

    clk_rst_gen #(
        .ClkPeriod    ( ClkPeriodRef ),
        .RstClkCycles ( RstCycles )
    ) i_clk_rst_rtc (
        .clk_o  ( ref_clk ),
        .rst_no ( )
    );

    clk_rst_gen #(
        .ClkPeriod    ( ClkPeriodJtag ),
        .RstClkCycles ( RstCycles )
    ) i_clk_jtag (
        .clk_o  ( jtag_tck_i ),
        .rst_no ( )
    );


    ////////////
    //  JTAG  //
    ////////////
    localparam dm::sbcs_t JtagInitSbcs = dm::sbcs_t'{
        sbautoincrement: 1'b1, sbreadondata: 1'b1, sbaccess: 3, default: '0};

    riscv_dbg_simple #(
        .IrLength ( 5 ),
        .TA       ( TAppl ),
        .TT       ( TTest )
    ) jtag_dbg (
        .jtag_tck_i   ( jtag_tck_i   ),
        .jtag_trst_no ( jtag_trst_ni ),
        .jtag_tms_o   ( jtag_tms_i ),
        .jtag_tdi_o   ( jtag_tdi_i ),
        .jtag_tdo_i   ( jtag_tdo_o   )
    );

    initial begin
      jtag_dbg.reset_master();
    end


    /////////////////
    //  JTAG Tasks //
    /////////////////

    task automatic jtag_write(
        input dm::dm_csr_e addr,
        input logic [31:0] data,
        input bit wait_cmd = 0,
        input bit wait_sba = 0
    );
        jtag_dbg.write_dmi(addr, data);
        if (wait_cmd) begin
            dm::abstractcs_t acs;
            do begin
                jtag_dbg.read_dmi_exp_backoff(dm::AbstractCS, acs);
                if (acs.cmderr) $fatal(1, "[JTAG] Abstract command error!");
            end while (acs.busy);
        end
        if (wait_sba) begin
            dm::sbcs_t sbcs;
            do begin
                jtag_dbg.read_dmi_exp_backoff(dm::SBCS, sbcs);
                if (sbcs.sberror | sbcs.sbbusyerror) $fatal(1, "[JTAG] System bus error!");
            end while (sbcs.sbbusy);
        end
    endtask

    // Initialize the debug module
    task automatic jtag_init;
        logic [31:0] idcode;
        dm::dmcontrol_t dmcontrol = '{dmactive: 1, default: '0};
        // Check ID code
        repeat(100) @(posedge jtag_tck_i);
        jtag_dbg.get_idcode(idcode);
        if (idcode != croc_pkg::PulpJtagIdCode)
            $fatal(1, "@%t | [JTAG] Unexpected ID code: expected 0x%h, got 0x%h!",
                $time, croc_pkg::PulpJtagIdCode, idcode);
        // Activate, wait for debug module
        jtag_write(dm::DMControl, dmcontrol);
        do jtag_dbg.read_dmi_exp_backoff(dm::DMControl, dmcontrol);
        while (~dmcontrol.dmactive);
        // Activate, wait for system bus
        jtag_write(dm::SBCS, JtagInitSbcs, 0, 1);
        jtag_write(dm::SBAddress1, '0); // 32-bit addressing only
        $display("@%t | [JTAG] Initialization success", $time);
    endtask

    task automatic jtag_read_reg32(
        input logic [31:0] addr,
        output logic [31:0] data,
        input int unsigned idle_cycles = 10
    );
        automatic dm::sbcs_t sbcs = dm::sbcs_t'{sbreadonaddr: 1'b1, sbaccess: 2, default: '0};
        jtag_write(dm::SBCS, sbcs, 0, 1);
        jtag_write(dm::SBAddress0, addr[31:0]);
        jtag_dbg.wait_idle(idle_cycles);
        jtag_dbg.read_dmi_exp_backoff(dm::SBData0, data);
        $display("@%t | [JTAG] Read 0x%h from 0x%h", $time, data, addr);
    endtask

    task automatic jtag_read_string(
        input logic [31:0] addr,
        input int unsigned idle_cycles = 10
    );
        logic done = 1'b0;
        logic [31:0] data;
        const dm::sbcs_t sbcs = dm::sbcs_t'{sbreadonaddr: 1'b1, sbaccess: 2, default: '0};
        jtag_write(dm::SBCS, sbcs, 0, 1);
        while(!done) begin
            jtag_write(dm::SBAddress0, addr[31:0]);
            jtag_dbg.wait_idle(idle_cycles);
            jtag_dbg.read_dmi_exp_backoff(dm::SBData0, data);
            for (int i=0; i<4; i++) begin
                $display("@%t | [JTAG] Read ROM %s from 0x%h", $time, data[8*i +: 8], addr);
                done = done | data[8*i +: 8] == 8'h0;
            end
            addr = addr + 'h4;
        end
    endtask


    task automatic jtag_just_writing(
        input logic [31:0] addr,
        input logic [31:0] data
    );
        //automatic dm::sbcs_t sbcs = dm::sbcs_t'{sbaccess: 2, default: '0};
        $display("@%t | [JTAG] Writing data: 0x%h to address: 0x%h", $time, data, addr);
        //jtag_write(dm::SBCS, sbcs, 0, 1);
        jtag_write(dm::SBAddress0, addr);
        jtag_write(dm::SBData0, data);
    endtask 


    //writes data to the fifo
    task automatic jtag_neopixel(
        input logic [31:0] addr,
        input logic [31:0] data,
        input int unsigned idle_cycles = 10
    );
        automatic dm::sbcs_t sbcs = dm::sbcs_t'{sbaccess: 2, default: '0};
        $display("@%t | [JTAG] Writing data: 0x%h to fifo address: 0x%h", $time, data, addr);
        jtag_write(dm::SBCS, sbcs, 0, 1);
        jtag_write(dm::SBAddress0, addr);
        jtag_write(dm::SBData0, data);
        jtag_dbg.wait_idle(idle_cycles);
    endtask 

    task automatic jtag_write_reg32(
        input logic [31:0] addr,
        input logic [31:0] data,
        input bit check_write = 1'b0,
        input int unsigned idle_cycles = 10
    );
        automatic dm::sbcs_t sbcs = dm::sbcs_t'{sbaccess: 2, default: '0};
        $display("@%t | [JTAG] Writing 0x%h to 0x%h", $time, data, addr);
        jtag_write(dm::SBCS, sbcs, 0, 1);
        jtag_write(dm::SBAddress0, addr);
        jtag_write(dm::SBData0, data);
        jtag_dbg.wait_idle(idle_cycles);
        if (check_write) begin
            logic [31:0] rdata;
            jtag_read_reg32(addr, rdata);
            if (rdata != data) $fatal(1,"@%t | [JTAG] Read back incorrect data 0x%h!", $time, rdata);
            else $display("@%t | [JTAG] Read back correct data", $time);
        end
    endtask

    //adds timing constraints to the register
    task automatic jtag_fill_timingregister(
        input logic [31:0] start_addr,
        input logic [31:0] num_neopixel,
        input logic [31:0] t1h,
        input logic [31:0] t1l,
        input logic [31:0] t0h,
        input logic [31:0] t0l,
        input logic [31:0] t_latch,
        input logic [31:0] sleep,
        input int unsigned idle_cycles = 10
    );

        $display("@%t | [JTAG] START: Writing to timing register for neopixel", $time);
        jtag_write_reg32(start_addr, num_neopixel);
        jtag_write_reg32(start_addr + 32'h 20, t1h);
        jtag_write_reg32(start_addr + 32'h 40, t1l);
        jtag_write_reg32(start_addr + 32'h 60, t0h);
        jtag_write_reg32(start_addr + 32'h 80, t0l);
        jtag_write_reg32(start_addr + 32'h A0, t_latch);
        jtag_write_reg32(start_addr + 32'h C0, sleep);
        $display("@%t | [JTAG] FINISHED: Writing to timing register for neopixel", $time);
    endtask 


    // Load the binary formated as 32bit hex file
    task jtag_load_hex(input string filename);
        int file;
        int status;
        string line;
        bit [31:0] addr;
        bit [31:0] data;
        bit [7:0] byte_data;
        int byte_count;
        static dm::sbcs_t sbcs = dm::sbcs_t'{sbautoincrement: 1'b1, sbaccess: 2, default: '0};

        file = $fopen(filename, "r");
        if (file == 0) begin
            if (file == 0) begin
                $fatal(1, "Error: Failed to open file %s", filename);
        end
        end

        $display("@%t | [JTAG] Loading binary from %s", $time, filename);
        jtag_dbg.write_dmi(dm::SBCS, sbcs);

        // line by line
        while (!$feof(file)) begin
            if ($fgets(line, file) == 0) begin
                break; // End of file
            end
            
            // '@' indicates address
            if (line[0] == "@") begin
                status = $sscanf(line, "@%h", addr);
                if (status != 1) begin
                    $fatal(1, "Error: Incorrect address line format in file %s", filename);
                end
                $display("@%t | [JTAG] Writing to memory @%08x ", $time, addr);
                jtag_dbg.write_dmi(dm::SBAddress0, addr);
                continue;
            end

            byte_count = 0;
            data = 32'h0;

            // Loop through the line to read bytes
            while (line.len() > 0) begin
                status = $sscanf(line, "%h", byte_data); // Extract one byte
                if (status != 1) begin
                    break; // No more data to read on this line
                end

                // Shift in the byte to the correct position in the data word
                data = {byte_data, data[31:8]}; // Combine bytes into a 32-bit word
                byte_count++;

                // remove the byte from the line (2 numbers + 1 space)
                line = line.substr(3, line.len()-1);

                // write a complete word via jtag
                if (byte_count == 4) begin
                    jtag_write(dm::SBData0, data);
                    addr += 4;
                    data = 32'h0;
                    byte_count = 0;
                end
            end
        end
        jtag_dbg.write_dmi(dm::SBCS, JtagInitSbcs);
        $fclose(file);
    endtask

    // Wait for termination signal and get return code
    task automatic jtag_wait_for_eoc(output bit [31:0] exit_code);
        automatic dm::sbcs_t sbcs = dm::sbcs_t'{sbreadonaddr: 1'b1, sbaccess: 2, default: '0};
        jtag_write(dm::SBCS, sbcs, 0, 1);
        jtag_write(dm::SBAddress1, '0);
        do begin
            jtag_write(dm::SBAddress0, CoreStatusAddr);
            jtag_dbg.wait_idle(20);
            jtag_dbg.read_dmi_exp_backoff(dm::SBData0, exit_code);
        end while (exit_code == 0);
        $display("@%t | [JTAG] Simulation finished: return code 0x%0h", $time, exit_code);
        $finish();
    endtask


    ////////////
    //  UART  //
    ////////////
    /*
    typedef bit [ 7:0] byte_bt;
    localparam int unsigned UartDivisior = ClkFrequency / (UartBaudRate*16);
    localparam UartRealBaudRate = ClkFrequency / (UartDivisior*16);
    localparam time UartBaudPeriod = 1s/UartRealBaudRate;

    initial begin
        $display("ClkFrequency: %dMHz", ClkFrequency/1000_000);
        $display("UartRealBaudRate: %d", UartRealBaudRate);
    end

    localparam byte_bt UartDebugCmdRead  = 'h11;
    localparam byte_bt UartDebugCmdWrite = 'h12;
    localparam byte_bt UartDebugCmdExec  = 'h13;
    localparam byte_bt UartDebugAck      = 'h06;
    localparam byte_bt UartDebugEot      = 'h04;
    localparam byte_bt UartDebugEoc      = 'h14;

    logic   uart_reading_byte;

    initial begin
        uart_rx_i         = 1;
        uart_reading_byte = 0;
    end

    task automatic uart_read_byte(output byte_bt bite);
        // Start bit
        @(negedge uart_tx_o);
        uart_reading_byte = 1;
        #(UartBaudPeriod/2);
        // 8-bit byte
        for (int i = 0; i < 8; i++) begin
        #UartBaudPeriod bite[i] = uart_tx_o;
        end
        // Parity bit
        if(UartParityEna) begin
        bit parity;
        #UartBaudPeriod parity = uart_tx_o;
        if(parity ^ (^bite))
            $error("[UART] - Parity error detected!");
        end
        // Stop bit
        #UartBaudPeriod;
        uart_reading_byte=0;
    endtask

    task automatic uart_write_byte(input byte_bt bite);
        // Start bit
        uart_rx_i = 1'b0;
        // 8-bit byte
        for (int i = 0; i < 8; i++)
        #UartBaudPeriod uart_rx_i = bite[i];
        // Parity bit
        if (UartParityEna)
        #UartBaudPeriod uart_rx_i = (^bite);
        // Stop bit
        #UartBaudPeriod uart_rx_i = 1'b1;
        #UartBaudPeriod;
    endtask

    // Continually read characters and print lines
    initial begin
        static byte_bt uart_read_buf[$];
        byte_bt bite;
        
        @(posedge fetch_en_i);
        uart_read_buf.delete();
        forever begin
            uart_read_byte(bite);
            
            if (bite == "\n" || uart_read_buf.size() > 80) begin
                 if (uart_read_buf.size() > 0) begin
                    automatic string uart_str = "";
                    $write("@%t | [UART] as hex: ( ", $time);
                    foreach (uart_read_buf[i]) begin
                        $write("%02x ", uart_read_buf[i]);
                        uart_str = {uart_str, $sformatf("%c", uart_read_buf[i])};
                        //uart_str = {uart_str, uart_read_buf[i]};
                    end
                    
                    $display(")\n@%t | [UART] %s", $time, uart_str);
  
                end else begin
                    $display("@%t | [UART] ???", $time);
                end

                uart_read_buf.delete();
            end else begin
                uart_read_buf.push_back(bite);
            end
        end
    end

    */

    ////////////
    //  DUT   //
    ////////////
    `ifdef TARGET_NETLIST_YOSYS
        \croc_soc$croc_chip.i_croc_soc i_croc_soc (
    `else
        croc_soc #(
            .GpioCount ( GpioCount  )
        ) i_croc_soc  (
    `endif
        .clk_i         ( clk        ),
        .rst_ni        ( rst_n      ),
        .ref_clk_i     ( ref_clk    ),
        .testmode_i    ( 1'b0       ),
        .fetch_en_i    ( fetch_en_i ),
        .status_o      ( status_o   ),
        .modulated_o   (            ),

        .jtag_tck_i    ( jtag_tck_i   ),
        .jtag_tdi_i    ( jtag_tdi_i   ),
        .jtag_tdo_o    ( jtag_tdo_o   ),
        .jtag_tms_i    ( jtag_tms_i   ),
        .jtag_trst_ni  ( jtag_trst_ni ),

        .uart_rx_i     ( uart_rx_i ),
        .uart_tx_o     ( uart_tx_o ),

        .gpio_i        ( gpio_i        ),             
        .gpio_o        ( gpio_o        ),            
        .gpio_out_en_o ( gpio_out_en_o ),

        .neopixel_data_o ( neopixel_data_o )
    );

    assign gpio_i = '0;


    /////////////////
    //  Testbench  //
    /////////////////

    logic [31:0] tb_data;
    logic [31:0] rom_data;
    //logic [31:0] neopixel_data;
    //array for neopixel testbench
    logic [31:0] neopixel_obi_data[] = '{32'hDEAD_BEEF, 32'hCAFE_BABE, 32'hFEED_FACE, 32'hFEED_BABE, 32'h1111_1111};
    logic [31:0] neopixel_dma_data[] = '{32'h0DAD_1234, 32'hCAFE_FADE, 32'h5555_ACED, 32'hFFFF_7871, 32'h8888_1111, 32'h8888_EDEF};
    logic [31:0] neopixel_dma_data2[] = '{32'h0AAA_1234, 32'hDDDD_FADE, 32'hEDED_ACED, 32'hFAFA_DADA, 32'hDEAD_1111, 32'h8888_DEDE};

    initial begin
        $timeformat(-9, 0, "ns", 12); // 1: scale (ns=-9), 2: decimals, 3: suffix, 4: print-field width
        // configure VCD dump
        `ifdef TRACE_WAVE
        $dumpfile("croc.vcd");
        $dumpvars(1,i_croc_soc);
        `endif

        uart_rx_i  = 1'b0;
        fetch_en_i = 1'b0;
        
        // wait for reset
        #ClkPeriod;

        //  init jtag
        jtag_init();

        // write test value to sram
        jtag_write_reg32(croc_pkg::SramBaseAddr, 32'h1234_5678, 1'b1);

        // read value from rom
        jtag_read_string(user_pkg::UserRomAddrOffset);

        // read value from rom
        jtag_read_string(user_pkg::UserRomAddrOffset);

        // write to timing register for the neopixel controller
        jtag_fill_timingregister(neopixel_pkg::NeoPixelRegisterAddrOffset + 11'h 40, 32'd2, 32'd8, 32'd4, 32'd4, 32'd8, 32'd500, 32'd1000);

        // write to fifo in neopixel using OBI
        $display("@%t | [JTAG] START: Writing to fifo for neopixel", $time);
        jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::FIFO_ACCESS_OFFSET, 1'b1);
        foreach (neopixel_obi_data[i]) begin
            jtag_write_reg32(neopixel_pkg::NeoPixelFifoAddrOffset + i * 32, neopixel_obi_data[i], 0, 0);
        end
        foreach (neopixel_obi_data[i]) begin
            jtag_write_reg32(neopixel_pkg::NeoPixelFifoAddrOffset + i * 32, neopixel_obi_data[i], 0, 5);
        end
        $display("@%t | [JTAG] FINISHED: Writing to fifo for neopixel", $time);
        //jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + 11'h 40, 32'd2);
        //testing if the dma works
        $display("@%t | [JTAG] START: Writing data1 to SRAM for neopixel_dma", $time);
        foreach (neopixel_dma_data[i])begin
            jtag_write_reg32(croc_pkg::SramBaseAddr + (i) * 4 + 884, neopixel_dma_data[i], 1, 5);
        end
        $display("@%t | [JTAG] FINISHED: Writing data1 to SRAM for neopixel_dma", $time);
        $display("@%t | [JTAG] START: Writing to Register for neopixel_dma", $time);
        jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::FIFO_ACCESS_OFFSET, 2'b10);
        jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_SRC_ADDR_OFFSET, croc_pkg::SramBaseAddr + 884);
        jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_NUM_BYTES_OFFSET, 4*4);
        jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_VALID_OFFSET, 1'b1, 0, 0);
        $display("@%t | [JTAG] START: Writing data2 to SRAM for neopixel_dma", $time);
        foreach (neopixel_dma_data2[i])begin
            jtag_write_reg32(croc_pkg::SramBaseAddr + (i+6) * 4 + 884 , neopixel_dma_data[i], 1, 5);
        end
        jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_VALID_OFFSET, 1'b0, 0, 0);
        $display("@%t | [JTAG] FINISHED: Writing data2 to SRAM for neopixel_dma", $time);
        jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_SRC_ADDR_OFFSET, croc_pkg::SramBaseAddr + 884 + 16);
        jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_NUM_BYTES_OFFSET, 4*8);
        jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_VALID_OFFSET, 1'b1, 0, 0);
        $display("@%t | [JTAG] FINISHED: Writing to Register for neopixel_dma", $time);
        //jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::FIFO_ACCESS_OFFSET, 2'b00);
        jtag_dbg.wait_idle(30);
        

        // load binary to sram
        jtag_load_hex("../sw/bin/helloworld.hex");

        $display("@%t | [CORE] Start fetching instructions", $time);
        fetch_en_i = 1'b1;
        jtag_write_reg32(FetchEnAddr, 32'h01);

        // wait for non-zero return value (written into core status register)
        jtag_wait_for_eoc(tb_data);

        // finish simulation
        repeat(50) @(posedge clk);
        `ifdef TRACE
        $dumpflush;
        `endif
        $finish();
    end

endmodule
