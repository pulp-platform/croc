// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`define TRACE_WAVE

module tb_croc_soc #(
    parameter time         ClkPeriod     = 100ns,
    parameter time         ClkPeriodJtag = 100ns,
    parameter time         ClkPeriodRef  = 30518ns,
    parameter time         TAppl         = 0.2*ClkPeriod,
    parameter time         TTest         = 0.8*ClkPeriod,
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

    localparam int unsigned GpioCount = 32;

    logic [GpioCount-1:0] gpio_i;             
    logic [GpioCount-1:0] gpio_o;            
    logic [GpioCount-1:0] gpio_out_en_o;

    // Register addresses
    localparam bit [31:0] BootAddrAddr   = croc_pkg::SocCtrlAddrOffset
                                           + soc_ctrl_reg_pkg::SOC_CTRL_BOOTADDR_OFFSET;
    localparam bit [31:0] FetchEnAddr    = croc_pkg::SocCtrlAddrOffset
                                           + soc_ctrl_reg_pkg::SOC_CTRL_FETCHEN_OFFSET;
    localparam bit [31:0] CoreStatusAddr = croc_pkg::SocCtrlAddrOffset
                                           + soc_ctrl_reg_pkg::SOC_CTRL_CORESTATUS_OFFSET;

    /////////////////////////////
    //  Command Line Arguments //
    /////////////////////////////
    string binary_path;
    initial begin
        if ($value$plusargs("binary=%s", binary_path)) begin
            $display("Running program: %s", binary_path);
        end else begin
            $display("No binary path provided. Running helloworld.");
            binary_path = "../sw/bin/helloworld.hex";
        end
    end


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
      #(ClkPeriod/2);
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

    // Halt the core
    task automatic jtag_halt;
      dm::dmstatus_t status;
      // Halt hart 0
      jtag_write(dm::DMControl, dm::dmcontrol_t'{haltreq: 1, dmactive: 1, default: '0});
      $display("@%t | [JTAG] Halting hart 0... ", $time);
      do jtag_dbg.read_dmi_exp_backoff(dm::DMStatus, status);
      while (~status.allhalted);
      $display("@%t | [JTAG] Halted", $time);
    endtask

    task automatic jtag_resume;
      dm::dmstatus_t status;
      // Halt hart 0
      jtag_write(dm::DMControl, dm::dmcontrol_t'{resumereq: 1, dmactive: 1, default: '0});
      $display("@%t | [JTAG] Resumed hart 0 ", $time);
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
            if (rdata !== data) $fatal(1,"@%t | [JTAG] Read back incorrect data 0x%h!", $time, rdata);
            else $display("@%t | [JTAG] Read back correct data", $time);
        end
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
    // TODO: we should be able to support CR properly, but buffers are hard to deal with...
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
                    foreach (uart_read_buf[i]) begin
                        uart_str = {uart_str, uart_read_buf[i]};
                    end
                    
                    $display("@%t | [UART] %s", $time, uart_str);
                    uart_read_buf.push_back(bite);
                    $display("@%t | [UART] raw: %p", $time, uart_read_buf);
  
                end else begin
                    $display("@%t | [UART] ???", $time);
                end

                uart_read_buf.delete();
            end else begin
                uart_read_buf.push_back(bite);
            end
        end
    end



    ////////////
    //  DUT   //
    ////////////
    wire  [GpioCount-1:0] gpio_io_tb;
    logic [GpioCount-1:0] gpio_en_tb;


`ifdef TARGET_POSTLAYOUT

    // Set port 0-3 to output mode
    // You may need to adjust it for your own tests
    assign gpio_en_tb = 32'h0000_000F;

    for (genvar i = 0; i < GpioCount; i++) begin
        // drive the io pad based on the gpio mode
        assign gpio_io_tb[i] = gpio_en_tb[i] ? 1'bz : gpio_i[i];
    end

    assign gpio_o = gpio_io_tb;

    croc_chip i_croc_soc (
        .clk_i      (clk),
        .fetch_en_i (fetch_en_i),
        .gpio0_io(gpio_io_tb[0]),
        .gpio1_io(gpio_io_tb[1]),
        .gpio2_io(gpio_io_tb[2]),
        .gpio3_io(gpio_io_tb[3]),
        .gpio4_io(gpio_io_tb[4]),
        .gpio5_io(gpio_io_tb[5]),
        .gpio6_io(gpio_io_tb[6]),
        .gpio7_io(gpio_io_tb[7]),
        .gpio8_io(gpio_io_tb[8]),
        .gpio9_io(gpio_io_tb[9]),
        .gpio10_io(gpio_io_tb[10]),
        .gpio11_io(gpio_io_tb[11]),
        .gpio12_io(gpio_io_tb[12]),
        .gpio13_io(gpio_io_tb[13]),
        .gpio14_io(gpio_io_tb[14]),
        .gpio15_io(gpio_io_tb[15]),
        .gpio16_io(gpio_io_tb[16]),
        .gpio17_io(gpio_io_tb[17]),
        .gpio18_io(gpio_io_tb[18]),
        .gpio19_io(gpio_io_tb[19]),
        .gpio20_io(gpio_io_tb[20]),
        .gpio21_io(gpio_io_tb[21]),
        .gpio22_io(gpio_io_tb[22]),
        .gpio23_io(gpio_io_tb[23]),
        .gpio24_io(gpio_io_tb[24]),
        .gpio25_io(gpio_io_tb[25]),
        .gpio26_io(gpio_io_tb[26]),
        .gpio27_io(gpio_io_tb[27]),
        .gpio28_io(gpio_io_tb[28]),
        .gpio29_io(gpio_io_tb[29]),
        .gpio30_io(gpio_io_tb[30]),
        .gpio31_io(gpio_io_tb[31]),
        .jtag_tck_i (jtag_tck_i),
        .jtag_tdi_i (jtag_tdi_i),
        .jtag_tdo_o (jtag_tdo_o),
        .jtag_tms_i (jtag_tms_i),
        .jtag_trst_ni (jtag_trst_ni),
        .ref_clk_i (ref_clk),
        .rst_ni (rst_n),
        .status_o (status_o),
        .uart_rx_i (uart_rx_i),
        .uart_tx_o (uart_tx_o)
    );
`else
    `ifdef TARGET_NETLIST_YOSYS
        \croc_soc$croc_chip.i_croc_soc i_croc_soc (
    `else
        croc_soc #(
            .GpioCount ( GpioCount  )
        ) i_croc_soc (
    `endif
        .clk_i         ( clk        ),
        .rst_ni        ( rst_n      ),
        .ref_clk_i     ( ref_clk    ),
        .testmode_i    ( 1'b0       ),
        .fetch_en_i    ( fetch_en_i ),
        .status_o      ( status_o   ),

        .jtag_tck_i    ( jtag_tck_i   ),
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
`endif

    assign gpio_i[ 3:0]          = '0;
    assign gpio_i[ 7:4]          = gpio_o[3:0]; // loop back
    assign gpio_i[GpioCount-1:8] = '0;

    /////////////////
    //  Testbench  //
    /////////////////

    logic [31:0] tb_data;

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

        // init jtag
        jtag_init();

        // write test value to sram
        jtag_write_reg32(croc_pkg::SramBaseAddr, 32'h1234_5678, 1'b1);
        // load binary to sram
        jtag_load_hex(binary_path);

        $display("@%t | [CORE] Start fetching instructions", $time);
        fetch_en_i = 1'b1;

        // halt core
        jtag_halt();

        // resume core
        jtag_resume();

        // wait for non-zero return value (written into core status register)
        $display("@%t | [CORE] Wait for end of code...", $time);
        jtag_wait_for_eoc(tb_data);

        // finish simulation
        repeat(50) @(posedge clk);
        `ifdef TRACE_WAVE
        $dumpflush;
        `endif
        $finish();
    end

endmodule
