// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

module tb_croc_soc #(
    parameter time         ClkPeriod     = 100ns,
    parameter time         ClkPeriodJtag = 100ns,
    parameter time         ClkPeriodRef  = 30518ns,
    parameter time         TAppl         = 20ns,
    parameter time         TTest         = 80ns,
    parameter int unsigned RstCycles     = 1
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


    // Load the binary formated as 32bit hex file
    task jtag_load_hex(input string filename);
        int file;
        int status;
        string line;
        bit [31:0] addr;
        bit [31:0] data;

        file = $fopen(filename, "r");
        if (file == 0) begin
            if (file == 0) begin
                $fatal(1, "Error: Failed to open file %s", filename);
        end
        end

        // line by line
        while (!$feof(file)) begin
            if ($fgets(line, file) == 0) begin
                break;
            end
            // lines starting with @ are addresses
            if (line[0] == "@") begin
                status = $sscanf(line, "@%h", addr);
                if (status != 1) begin
                    $fatal(1, "Error: Incorrect address line format in file %s", filename);
                end
            end else begin
                // otherwise it contains space separated 32bit data blocks
                while (line.len() > 0) begin
                    status = $sscanf(line, "%h", data); // extract one 32bit block
                    if (status != 1) begin
                        break; // No more data to read on this line
                    end

                    jtag_write_reg32(addr, data, 1'b0);
                    addr += 4;

                    // remove the processed 32-bit value from the line
                    line = line.substr(8 + 1, line.len()-1);
                end
            end
        end
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
    //  DUT   //
    ////////////
    croc_soc i_croc_soc (
        .clk_i         ( clk     ),
        .rst_ni        ( rst_n   ),
        .ref_clk_i     ( ref_clk ),
        .test_enable_i ( 1'b0    ),

        .jtag_tck_i    ( jtag_tck_i   ),
        .jtag_tdi_i    ( jtag_tdi_i   ),
        .jtag_tdo_o    ( jtag_tdo_o   ),
        .jtag_tms_i    ( jtag_tms_i   ),
        .jtag_trst_ni  ( jtag_trst_ni ),

        .uart_rx_i     ( uart_rx_i ),
        .uart_tx_o     ( uart_tx_o )
    );


    /////////////////
    //  Testbench  //
    /////////////////

    logic [31:0] tb_data;

    initial begin
        $timeformat(-9, 0, "ns", 12); // 1: scale (ns=-9), 2: decimals, 3: suffix, 4: print-field width
        // configure VCD dump
        // $dumpfile("croc.vcd");
        // $dumpvars(1,i_croc_soc);

        // wait for reset
        #ClkPeriod;

        //  init jtag
        jtag_init();

        // write test value to sram
        jtag_write_reg32(croc_pkg::MemBaseAddr, 32'h1234_5678, 1'b1);

        // load binary to sram
        jtag_load_hex("../sw/bin/helloworld.hex");

        $display("@%t | [CORE] Start fetching instructions", $time);
        jtag_write_reg32(FetchEnAddr, 32'h01);

        // wait for non-zero return value (written into core status register)
        jtag_wait_for_eoc(tb_data);

        // finish simulation
        repeat(50) @(posedge clk);
        // $dumpflush;
        $finish();
    end

endmodule
