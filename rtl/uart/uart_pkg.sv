package uart_pkg;

  // TODO: kommentieren: erklärung von DLAB und von Operation based Address Decoding

  // Address widths within the block : Defines the max no of Block Addresses (8)
  parameter int AddressBits = 3; 
  parameter int RegWidth     = 8;

  //Input Synchronization Stages
  parameter int NrSyncStages = 2;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // RX and TX Statemachine typedefs //
  ////////////////////////////////////////////////////////////////////////////////////////////////
  
  //RX
  typedef enum logic [2:0] {
    RXIDLE,
    RXSTART,
    RXDATA,
    RXPAR,
    RXSTOP,
    RXRESYNCHRONIZE
  } state_type_rx;

  typedef enum logic [3:0] {
    TXIDLE,
    TXSTART,
    TXDATA,
    TXPAR,
    TXSTOP1,
    TXSTOP2,
    TXWAIT
  } state_type_tx;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Register Union //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  typedef struct packed {
    logic [7:0] RHR;    // Read Hold Register
    logic [7:0] THR;    // Transmit Hold Register
    logic [7:0] IER;    // Interrupt Enable Register
    logic [7:0] ISR;    // Interrupt Status Register
    logic [7:0] FCR;    // Fifo Control Register
    logic [7:0] LCR;    // Line Control Register
    logic [7:0] MCR;    // Modem Control Register
    logic [7:0] LSR;    // Line Status Register
    logic [7:0] MSR;    // Modem Status Register
    logic [7:0] SPR;    // Scratch Pad Register
    logic [7:0] DLL;    // Divisor Latch Least signf. byte
    logic [7:0] DLM;    // Divisor Latch Most sign. byte
    //logic [7:0] PSD;  // Pre Scaler Division, Optional
  } uart_reg_fields_t;

  typedef union packed {
    uart_reg_fields_t strct; // Access as struct
    logic [12*8-1:0]  arr;   // Access as array
  } uart_reg_union_t;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Address Offsets //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  // Register Address Offsets (64 Bit aligned)
  parameter logic [AddressBits-1:0] RHR_OFFSET = 3'b000;
  parameter logic [AddressBits-1:0] THR_OFFSET = 3'b000;
  parameter logic [AddressBits-1:0] IER_OFFSET = 3'b001;
  parameter logic [AddressBits-1:0] ISR_OFFSET = 3'b010;
  parameter logic [AddressBits-1:0] FCR_OFFSET = 3'b010;
  parameter logic [AddressBits-1:0] LCR_OFFSET = 3'b011;
  parameter logic [AddressBits-1:0] MCR_OFFSET = 3'b100;
  parameter logic [AddressBits-1:0] LSR_OFFSET = 3'b101;
  parameter logic [AddressBits-1:0] MSR_OFFSET = 3'b110;
  parameter logic [AddressBits-1:0] SPR_OFFSET = 3'b111;
  parameter logic [AddressBits-1:0] DLL_OFFSET = 3'b000;
  parameter logic [AddressBits-1:0] DLM_OFFSET = 3'b001;
  //parameter logic [AddressBits-1:0] PSD_OFFSET = 3'b101;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Default/Reset Register Values //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  // Default values for the Registers from UART 16550A Standard
  parameter logic [7:0] RHR_DEFAULT = 8'h00;
  parameter logic [7:0] THR_DEFAULT = 8'h00;
  parameter logic [7:0] IER_DEFAULT = 8'h00;
  parameter logic [7:0] ISR_DEFAULT = 8'hC1; // -> 11000001, which sets bit 6 and 7 high -> 16550A
  parameter logic [7:0] FCR_DEFAULT = 8'h00;
  parameter logic [7:0] LCR_DEFAULT = 8'h00;
  parameter logic [7:0] MCR_DEFAULT = 8'h00;
  parameter logic [7:0] LSR_DEFAULT = 8'h60;
  parameter logic [7:0] MSR_DEFAULT = 8'h00;
  parameter logic [7:0] SPR_DEFAULT = 8'h00;
  parameter logic [7:0] DLL_DEFAULT = 8'h01;
  parameter logic [7:0] DLM_DEFAULT = 8'h01;
  //parameter logic [31:0] PSD_DEFAULT = 8'h00;

  // corresponds to 96'h
  parameter logic [12*8-1:0] register_default = {
    RHR_DEFAULT, THR_DEFAULT, IER_DEFAULT, ISR_DEFAULT,
    FCR_DEFAULT, LCR_DEFAULT, MCR_DEFAULT, LSR_DEFAULT,
    MSR_DEFAULT, SPR_DEFAULT, DLL_DEFAULT, DLM_DEFAULT
  };

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Single Register Unions for Register Interface//
  ////////////////////////////////////////////////////////////////////////////////////////////////

  //----------------------------------------------------------------------------------------------
  // Single Register Structs with Bit Definitions
  //----------------------------------------------------------------------------------------------

  typedef struct packed {
    logic [7:0] char_rx;     // Character received
  } RHR_bits_t;

  typedef struct packed {
    logic [7:0] char_tx;     // Character transmitted
  } THR_bits_t;

  typedef struct packed {
    logic unused7;           // Optional: DMA
    logic unused;            // Optional: DMA
    logic unused5;           // 0
    logic unused4;           // 0
    logic mstat;             // Modem Status
    logic rlstat;            // Receive Line Status 
    logic thr_empty;         // THR Empty
    logic dtr;               // Data Ready or Reception Timeout
  } IER_bits_t;

  typedef struct packed {
    logic [1:0] fifos_en;    // UART Standard: 2'b00: 8250 | 2'b01: 16550 | 2'b10: 16750 | 2'b11: 16550A 
    logic unused5;           // Optional: DMA
    logic unused4;           // Optional: DMA
    logic [2:0] id;          // Intrpt Code ID
    logic       status;      // Intrpt Status
  } ISR_bits_t;

  typedef struct packed {
    logic [1:0] rx_fifo_tl;  // Rx FIFO Trigger Level
    logic       unused5;     // 0
    logic       unused4;     // Optional: DMA
    logic       unused3;     // Optional: DMA
    logic       tx_fifo_rst; // Tx FIFO reset
    logic       rx_fifo_rst; // Rx FIFO reset
    logic       fifo_en;     // FIFO Enable
  } FCR_bits_t;

  typedef struct packed {
    logic       dlab;        // DLAB Address multiplexing 
    logic       set_break;   // Set Break
    logic       force_par;   // Force Parity
    logic       even_par;    // Even Parity 
    logic       par_en;      // Parity Enable
    logic       stop_bits;   // Stop Bits 
    logic [1:0] word_len;    // Word Length 2'b00: 5 | 2'b01: 6 | 2'b10: 7 | 2'b11: 8
  } LCR_bits_t;

  typedef struct packed {
    logic       unused7;     // 0
    logic       unused6;     // 0
    logic       unused5;     // 0
    logic       loopback;    // Loop Back
    logic       out2;        // Optional: Gpio Output
    logic       out1;        // Optional: Gpio Output
    logic       rts;         // Request to Send
    logic       dtr;         // DaTa Ready
  } MCR_bits_t;

  typedef struct packed {
    logic fifo_err;          // FIFO Data Error
    logic tx_empty;          // Transmitter Empty
    logic thr_empty;         // THR Empty
    logic break_intrpt;      // Break Interrupt
    logic frame_err;         // Framing Error
    logic par_err;           // Parity Error
    logic overrun_err;       // Overrun Error
    logic data_ready;        // Data Ready
  } LSR_bits_t;

  typedef struct packed {
    logic cd;                // Carrier Detect
    logic ri;                // Ring Indicator
    logic dsr;               // Data Set Ready 
    logic cts;               // Clear to Send
    logic d_cd;              // Delta CD: Indicates change 
    logic te_ri;             // Trailing Edge RI: Detects trailing Edge (Transition high to low)
    logic d_dsr;             // Delta 
    logic d_cts;             // Delta Clear to Send
  } MSR_bits_t;

  typedef struct packed {
    logic [7:0] unused;      // Unused Space Register
  } SPR_bits_t;

  typedef struct packed {
    logic [7:0] lsb;         // Baudrate's Divisor Constant LSByte
  } DLL_bits_t;

  typedef struct packed {
    logic [7:0] msb;         // Baudrate's Divisor Constant MSByte
  } DLM_bits_t;

  //----------------------------------------------------------------------------------------------
  // Single Register Unions 
  //----------------------------------------------------------------------------------------------

  typedef union packed {
    RHR_bits_t  strct; 
    logic [7:0] arr;   
  } RHR_union_t;

  typedef union packed {
    THR_bits_t  strct; 
    logic [7:0] arr;   
  } THR_union_t;

  typedef union packed {
    IER_bits_t  strct; 
    logic [7:0] arr;   
  } IER_union_t;

  typedef union packed {
    ISR_bits_t  strct; 
    logic [7:0] arr;   
  } ISR_union_t;

  typedef union packed {
    FCR_bits_t  strct; 
    logic [7:0] arr;   
  } FCR_union_t;

  typedef union packed {
    LCR_bits_t  strct; 
    logic [7:0] arr;   
  } LCR_union_t;

  typedef union packed {
    MCR_bits_t  strct; 
    logic [7:0] arr;   
  } MCR_union_t;

  typedef union packed {
    LSR_bits_t  strct; 
    logic [7:0] arr;   
  } LSR_union_t;

  typedef union packed {
    MSR_bits_t  strct; 
    logic [7:0] arr;   
  } MSR_union_t;

  typedef union packed {
    SPR_bits_t  strct; 
    logic [7:0] arr;   
  } SPR_union_t;

  typedef union packed {
    DLL_bits_t  strct; 
    logic [7:0] arr;  
  } DLL_union_t;

  typedef union packed {
    DLM_bits_t  strct; 
    logic [7:0] arr;  
  } DLM_union_t;

  ////////////////////////////////////////////////////////////////////////////////////////////////
  // Interface between UART INTERNAL LOGIC and Register //
  ////////////////////////////////////////////////////////////////////////////////////////////////

  typedef struct packed {
    THR_union_t thr;
    IER_union_t ier; 
    ISR_union_t isr; 
    FCR_union_t fcr;
    LCR_union_t lcr;
    MCR_union_t mcr; 
    DLL_union_t dll;
    DLM_union_t dlm;
    logic       obi_read_rhr;
    logic       obi_read_isr;
    logic       obi_read_lsr;
    logic       obi_read_msr;
    logic       obi_write_thr;
    logic       obi_write_dllm;
  } reg_read_t;

  typedef struct packed {
    RHR_union_t rhr;
    ISR_union_t isr;
    logic       fcr_rx_fifo_rst;
    logic       fcr_tx_fifo_rst;
    LSR_union_t lsr;
    MSR_union_t msr;
    logic       fcr_rx_valid;
    logic       fcr_tx_valid;
    logic       rhr_valid;
    logic       isr_valid;
    logic [7:0] lsr_valid;
    logic [3:0] msr_valid;
  } reg_write_t;

  typedef struct packed {
    RHR_union_t rhr; 
    logic       fcr_rx_fifo_rst; 
    logic       lsr_data_ready; 
    logic       lsr_overrun_err; 
    logic       lsr_par_err; 
    logic       lsr_frame_err; 
    logic       lsr_break_intrpt; 
    logic       lsr_fifo_err; 
    logic       fcr_rx_valid;
    logic       rhr_valid;
    logic [5:0] lsr_valid;
  } rx_reg_write_t;

  typedef struct packed {
    logic       fcr_tx_fifo_rst;
    logic       lsr_tx_empty; 
    logic       lsr_thr_empty;
    logic       fcr_tx_valid;
    logic [1:0] lsr_valid;
  } tx_reg_write_t;

  typedef struct packed {
    ISR_union_t isr;
    logic       isr_valid;
  } intrpt_reg_write_t;

  typedef struct packed {
    MSR_union_t msr; 
    logic [3:0] msr_valid;
  } modem_reg_write_t;

endpackage