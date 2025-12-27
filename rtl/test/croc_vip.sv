// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>
// - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

module croc_vip #(
  parameter int unsigned GpioCount = 32
) (
  output logic                 rst_no,
  output logic                 sys_clk_o,
  output logic                 ref_clk_o,
  input  logic                 fetch_en_i,
  output logic                 jtag_tck_o,
  output logic                 jtag_trst_no,
  output logic                 jtag_tms_o,
  output logic                 jtag_tdi_o,
  input  logic                 jtag_tdo_i,
  output logic                 uart_rx_o,
  input  logic                 uart_tx_i,
  input  logic [GpioCount-1:0] gpio_out_en_i,
  input  logic [GpioCount-1:0] gpio_out_i,
  output logic [GpioCount-1:0] gpio_in_o
);

  import tb_croc_pkg::*;

  //////////////
  //  Clocks  //
  //////////////

  clk_rst_gen #(
    .ClkPeriod    ( ClkPeriodSys ),
    .RstClkCycles ( RstCycles    )
  ) i_clk_rst_sys (
    .clk_o  ( sys_clk_o ),
    .rst_no ( rst_no    )
  );

  clk_rst_gen #(
    .ClkPeriod    ( ClkPeriodRef ),
    .RstClkCycles ( RstCycles    )
  ) i_clk_rst_ref (
    .clk_o  ( ref_clk_o ),
    .rst_no ( )
  );

  clk_rst_gen #(
    .ClkPeriod    ( ClkPeriodJtag ),
    .RstClkCycles ( RstCycles     )
  ) i_clk_jtag (
    .clk_o  ( jtag_tck_o ),
    .rst_no ( )
  );

  ////////////
  //  JTAG  //
  ////////////

  localparam realtime TApplJtag = 0.2*ClkPeriodJtag;
  localparam realtime TTestJtag = 0.8*ClkPeriodJtag;
  localparam dm::sbcs_t JtagInitSbcs = dm::sbcs_t'{
    sbautoincrement: 1'b1, sbreadondata: 1'b1, sbaccess: 3, default: '0};

  riscv_dbg_simple #(
    .IrLength ( 5         ),
    .TA       ( TApplJtag ),
    .TT       ( TTestJtag )
  ) jtag_dbg (
    .jtag_tck_i   ( jtag_tck_o   ),
    .jtag_trst_no ( jtag_trst_no ),
    .jtag_tms_o   ( jtag_tms_o   ),
    .jtag_tdi_o   ( jtag_tdi_o   ),
    .jtag_tdo_i   ( jtag_tdo_i   )
  );

  initial begin
    #(ClkPeriodJtag/2);
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
    repeat(100) @(posedge jtag_tck_o);
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

  // Resume the core
  task automatic jtag_resume;
    dm::dmstatus_t status;
    // Halt hart 0
    jtag_write(dm::DMControl, dm::dmcontrol_t'{resumereq: 1, dmactive: 1, default: '0});
    $display("@%t | [JTAG] Resumed hart 0 ", $time);
  endtask

  // Read a 32 bit register
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

  // Write a 32 bit register
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

  // Load the binary formatted as 32 bit hex file
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
  // Poll bit zero of core status register which signals end of computation
  // Bits 1 to 31 contain the application's return value
  task automatic jtag_wait_for_eoc(output bit [31:0] exit_code);
    automatic dm::sbcs_t sbcs = dm::sbcs_t'{sbreadonaddr: 1'b1, sbaccess: 2, default: '0};
    jtag_write(dm::SBCS, sbcs, 0, 1);
    jtag_write(dm::SBAddress1, '0);
    do begin
      jtag_write(dm::SBAddress0, CoreStatusAddr);
      jtag_dbg.wait_idle(20);
      jtag_dbg.read_dmi_exp_backoff(dm::SBData0, exit_code);
    end while (exit_code == 0);
    exit_code >>= 1;
    if (exit_code)
      $display("@%t | [JTAG] Simulation finished: FAIL (return code 0x%0h)", $time, exit_code);
    else
      $display("@%t | [JTAG] Simulation finished: SUCCESS", $time);
    $finish();
  endtask

  ////////////
  //  UART  //
  ////////////

  typedef bit [7:0] byte_bt;
  localparam int unsigned ClkFrequency     = 1s / ClkPeriodSys;
  localparam int unsigned UartDivisior     = ClkFrequency / (UartBaudRate*16);
  localparam int unsigned UartRealBaudRate = ClkFrequency / (UartDivisior*16);
  localparam realtime     UartBaudPeriod   = 1s / UartRealBaudRate;

  initial begin
    $display("ClkFrequency: %dMHz", ClkFrequency / 1_000_000);
    $display("UartRealBaudRate: %d", UartRealBaudRate);
  end

  logic uart_reading_byte;

  initial begin
    uart_rx_o         = 1'b1;
    uart_reading_byte = 1'b0;
  end

  // Read byte from UART
  task automatic uart_read_byte(output byte_bt bite);
    // Start bit
    @(negedge uart_tx_i);
    uart_reading_byte = 1;
    #(UartBaudPeriod/2);
    // 8-bit byte
    for (int i = 0; i < 8; i++) begin
      #UartBaudPeriod bite[i] = uart_tx_i;
    end
    // Parity bit
    if(UartParityEna) begin
      bit parity;
      #UartBaudPeriod parity = uart_tx_i;
      if(parity ^ (^bite))
        $error("[UART] - Parity error detected!");
    end
    // Stop bit
    #UartBaudPeriod;
    uart_reading_byte = 0;
  endtask

  // Write byte to UART
  task automatic uart_write_byte(input byte_bt bite);
    // Start bit
    uart_rx_o = 1'b0;
    // 8-bit byte
    for (int i = 0; i < 8; i++)
      #UartBaudPeriod uart_rx_o = bite[i];
    // Parity bit
    if (UartParityEna)
      #UartBaudPeriod uart_rx_o = (^bite);
    // Stop bit
    #UartBaudPeriod uart_rx_o = 1'b1;
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
  //  GPIO  //
  ////////////

  assign gpio_in_o[3:0]           = '0;
  assign gpio_in_o[7:4]           = gpio_out_en_i[3:0] & gpio_out_i[3:0]; // loop back
  assign gpio_in_o[GpioCount-1:8] = '0;

endmodule
