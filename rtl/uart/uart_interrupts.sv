module uart_interrupts #() 
(
  input logic  clk_i,
  input logic  rst_ni,

  input  logic rx_fifo_trigger,
  input  logic rx_timeout,

  output logic irq,
  output logic irq_n,

  input  uart_pkg::reg_read_t         reg_read,
  input  uart_pkg::reg_write_t        reg_x,
  output uart_pkg::intrpt_reg_write_t reg_write
);

  // Import the UART package for definitions and parameters
  import uart_pkg::*;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Instantiations //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //--Interrupt-Control-Signals-------------------------------------------------------------------
  logic rls_intrpt;       // Receive Line Status Interrupt - Error notification
  logic rxdr_intrpt;      // Receiver Data Ready 
  logic timeout_intrpt;   // Reception Timeout 
  logic thr_empty_intrpt; // THR Empty Interrupt - Data can't be written
  logic mstat_intrpt;     // Modem Status Interrupt - Changes in Modem Line

  always_comb begin

    ////////////////////////////////////////////////////////////////////////////////////////////
    // Interrupt Calculation //
    ////////////////////////////////////////////////////////////////////////////////////////////

    //--Defaults--------------------------------------------------------------------------------
    rls_intrpt          = 1'b0;
    rxdr_intrpt         = 1'b0;
    timeout_intrpt      = 1'b0;
    thr_empty_intrpt    = 1'b0;
    mstat_intrpt        = 1'b0;
    reg_write.isr_valid = 1'b0;

    reg_write.isr.strct.status   = 1'b1;
    reg_write.isr.strct.id       = 3'b000;
    reg_write.isr.strct.fifos_en = 2'b11;
    reg_write.isr.strct.unused4  = 1'b0;
    reg_write.isr.strct.unused5  = 1'b0;

    //--Receive-Line-Status-Interrupt-----------------------------------------------------------
    if (reg_read.ier.strct.rlstat & (reg_x.lsr.strct.overrun_err | reg_x.lsr.strct.par_err | 
        reg_x.lsr.strct.frame_err | reg_x.lsr.strct.break_intrpt)) begin
      rls_intrpt = 1'b1;
    end

    //--Receive-Data-Ready-and-Timeout-Interrupt------------------------------------------------
    if (reg_read.fcr.strct.fifo_en) begin
      if (reg_read.ier.strct.dtr & rx_fifo_trigger) begin // Data Ready : FIFO Triggered
        rxdr_intrpt    = 1'b1;
      end
      if(reg_read.ier.strct.dtr & rx_timeout)begin        // Reception Timeout
        timeout_intrpt = 1'b1;
      end
    end else begin  
      if (reg_read.ier.strct.dtr & reg_x.lsr.strct.data_ready) begin // Data Ready                         
        rxdr_intrpt    = 1'b1;  // Is it actually correct to read lsr.data_ready? I do think it is correct !!!!
      end                       // Interrupt describer in standard : In non-FIFO mode, there is received data available in the RHR register.
    end

    //--THR-Empty-Interrupt---------------------------------------------------------------------
    // In Fifo Mode, the FIFO acts as THR
    if (reg_read.ier.strct.thr_empty & reg_x.lsr.strct.thr_empty) begin
      thr_empty_intrpt = 1'b1;
    end

    //--Modem-Status-Interrupt------------------------------------------------------------------
    if (reg_read.ier.strct.mstat & (reg_x.msr.strct.d_cts | reg_x.msr.strct.d_dsr | 
        reg_x.msr.strct.te_ri | reg_x.msr.strct.d_cd)) begin
      mstat_intrpt = 1'b1;
    end

    ////////////////////////////////////////////////////////////////////////////////////////////
    // Setting ID & Status Bits & Reset Condition //
    ////////////////////////////////////////////////////////////////////////////////////////////

    // 1. Priority Level
    if (rls_intrpt) begin 
      reg_write.isr.strct.id     = 3'b011;
      reg_write.isr.strct.status = 1'b0;
      reg_write.isr_valid        = 1'b1;

      if (reg_read.obi_read_lsr) begin // Reset Interrupt
        rls_intrpt                 = 1'b0;
        reg_write.isr.strct.id     = 3'b000;
        reg_write.isr.strct.status = 1'b1;
        reg_write.isr_valid        = 1'b1;
      end
    // 2. Priority Level
    end else if (rxdr_intrpt & (~rls_intrpt)) begin 
      reg_write.isr.strct.id     = 3'b010;
      reg_write.isr.strct.status = 1'b0;
      reg_write.isr_valid        = 1'b1;

      if (reg_read.obi_read_rhr & (~reg_read.fcr.strct.fifo_en)) begin // Reset Interrupt
        rxdr_intrpt                = 1'b0;
        reg_write.isr.strct.id     = 3'b000;
        reg_write.isr.strct.status = 1'b1;
        reg_write.isr_valid        = 1'b1;
      end
    // 2. Priority Level
    end else if (timeout_intrpt & (~rls_intrpt)) begin 
      reg_write.isr.strct.id     = 3'b110;
      reg_write.isr.strct.status = 1'b0;
      reg_write.isr_valid        = 1'b1;

      if (reg_read.obi_read_rhr) begin // Reset Interrupt
        timeout_intrpt             = 1'b0;
        reg_write.isr.strct.id     = 3'b000;
        reg_write.isr.strct.status = 1'b1;
        reg_write.isr_valid        = 1'b1;
      end
    // 3. Priority Level
    end else if (thr_empty_intrpt & 
      (~(rls_intrpt | rxdr_intrpt | timeout_intrpt))) begin 
      reg_write.isr.strct.id     = 3'b001;
      reg_write.isr.strct.status = 1'b0;
      reg_write.isr_valid        = 1'b1;

      if (reg_read.obi_write_thr | 
         (reg_read.obi_read_isr & (reg_write.isr.strct.id == 3'b001))) begin // Reset Interrupt //TODO reg_write or read?
        timeout_intrpt             = 1'b0;
        reg_write.isr.strct.id     = 3'b000;
        reg_write.isr.strct.status = 1'b1;
        reg_write.isr_valid        = 1'b1;
      end
    // 4. Priority Level
    end else if (mstat_intrpt & 
      (~(rls_intrpt | rxdr_intrpt | timeout_intrpt | thr_empty_intrpt))) begin 
      reg_write.isr.strct.id     = 3'b000;
      reg_write.isr.strct.status = 1'b0;
      reg_write.isr_valid        = 1'b1;

      if (reg_read.obi_read_msr) begin // Reset Interrupt
        mstat_intrpt               = 1'b0;
        reg_write.isr.strct.id     = 3'b000;
        reg_write.isr.strct.status = 1'b1;
        reg_write.isr_valid        = 1'b1;
      end
    end

    ////////////////////////////////////////////////////////////////////////////////////////////
    // Direct Output Interrupt - Alert the CPU //
    ////////////////////////////////////////////////////////////////////////////////////////////

    // Once high stays high until interrupt condition is removed
    irq   = rls_intrpt | rxdr_intrpt | timeout_intrpt | thr_empty_intrpt | mstat_intrpt;
    irq_n = ~irq;

  end

endmodule