package gpio_reg_pkg;

  // Param list
  parameter int GpioCount = 16;

  // Address widths within the block : Defines the max no of Block Addresses (2047)
  parameter int BlockAw = 11; 

  ////////////////////////////
  // Typedefs for registers //
  ////////////////////////////

  //-----------------------------------------------------------------------------------------------
  // Register Union 
  //-----------------------------------------------------------------------------------------------

  typedef struct packed {
    logic [GpioCount-1:0] dir;    // Direction register
    logic [GpioCount-1:0] en;     // Enable register
    logic [GpioCount-1:0] in;     // Input register
    logic [GpioCount-1:0] out;    // Output register
    logic [GpioCount-1:0] toggle; // Toggle register
    logic [GpioCount-1:0] irpt_en;// Interrupt enable register
    logic [GpioCount-1:0] irpt_st;// Interrupt status register
  } gpio_reg_fields_t;

  typedef union packed {
    gpio_reg_fields_t str;        // Access as structured fields
    logic [7*GpioCount-1:0] arr;   // Access as a flat array
  } gpio_reg_union_t;

  //-----------------------------------------------------------------------------------------------
  // REG2HW register type -> HW / Internal GPIOlogic
  //-----------------------------------------------------------------------------------------------

  // r for read | allw for allow
  typedef struct packed {
    logic [GpioCount-1:0] gpio_dir_r;
    logic [GpioCount-1:0] gpio_en_r;
    logic [GpioCount-1:0] gpio_out_r; 
    logic [GpioCount-1:0] gpio_toggle_r; 
    //is set 1 whenever OBI writes to Toggle Register, acts as enable for read
    logic [GpioCount-1:0] gpio_toggle_r_allw; 
    logic [GpioCount-1:0] intrpt_rise_fall_en_r; 
    logic [GpioCount-1:0] intrpt_rise_fall_status_r;
    //is set 1 whenever OBI writes to Intrpt Rise Fall Status Register, acts as enable for read
    logic [GpioCount-1:0] intrpt_rise_fall_status_r_allw;
  } gpio_reg2hw_t;

  //-----------------------------------------------------------------------------------------------
  // HW2REG HW / Internal GPIOlogic -> register type
  //-----------------------------------------------------------------------------------------------

  typedef struct packed {
    logic [GpioCount-1:0] gpio_in_w; 
    logic [GpioCount-1:0] gpio_out_w; 
    // is set 1 whenever there is a reason to write from internal GPIO logic to Out Register
    logic [GpioCount-1:0] gpio_out_w_allw; 
    logic [GpioCount-1:0] intrpt_rise_fall_status_w; 
    // is set 1 whenever there is a reason to write from internal GPIO logic to Intrpt Rise Fall Status Register
    logic [GpioCount-1:0] intrpt_rise_fall_status_w_allw; 
  } gpio_hw2reg_t;

  //-----------------------------------------------------------------------------------------------
  // Offsets
  //-----------------------------------------------------------------------------------------------

  // Register Address Fffsets
  parameter logic [BlockAw-1:0] GPIO_DIR_OFFSET = 11'h 0; //32 Register ->128 Bytes dazwischen (mehr als genug PLatz)
  parameter logic [BlockAw-1:0] GPIO_EN_OFFSET = 11'h 80; 
  parameter logic [BlockAw-1:0] GPIO_IN_OFFSET = 11'h 100; 
  parameter logic [BlockAw-1:0] GPIO_OUT_OFFSET = 11'h 180; 
  parameter logic [BlockAw-1:0] GPIO_TOGGLE_OFFSET = 11'h 200; 
  parameter logic [BlockAw-1:0] GPIO_INTRPT_RISE_FALL_EN_OFFSET = 11'h 280; 
  parameter logic [BlockAw-1:0] GPIO_INTRPT_RISE_FALL_STATUS_OFFSET = 11'h 300; //next useable address is h 380

  // Reset values for hwext registers and their fields
  parameter logic [31:0] GPIO_IN_RESVAL = 32'h 0;
  parameter logic [31:0] GPIO_TOGGLE_RESVAL = 32'h 0;
  parameter logic [31:0] GPIO_INTRPT_RISE_FALL_STATUS_RESVAL = 32'h 0;

  // Register index
  typedef enum int {
    GPIO_DIR,
    GPIO_EN,
    GPIO_IN,
    GPIO_OUT,
    GPIO_TOGGLE,
    GPIO_INTRPT_RISE_FALL_EN,
    GPIO_INTRPT_RISE_FALL_STATUS
  } gpio_id_e;

endpackage

