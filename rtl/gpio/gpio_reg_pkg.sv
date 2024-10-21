package gpio_reg_pkg;

  // Param list
  parameter int GpioCount = 32;

  // Address widths within the block : Defines the max no of Block Addresses (2047)
  parameter int BlockAw = 11; //todo can we use only 10?

  ////////////////////////////
  // Typedefs for registers //
  ////////////////////////////

  //-----------------------------------------------------------------------------------------------
  // REG2HW
  //-----------------------------------------------------------------------------------------------

  typedef struct packed {
    logic        q;
  } gpio_reg2hw_gpio_dir_mreg_t;

  typedef struct packed {
    logic        q;
  } gpio_reg2hw_gpio_en_mreg_t;

  typedef struct packed {
    logic        q;
  } gpio_reg2hw_gpio_out_mreg_t;

  typedef struct packed {
    logic        q;
  } gpio_reg2hw_gpio_toggle_mreg_t;

  typedef struct packed {
    logic        q;
  } gpio_reg2hw_intrpt_rise_fall_en_mreg_t;

  typedef struct packed {
    logic        q;
  } gpio_reg2hw_intrpt_rise_fall_status_mreg_t;

  //-----------------------------------------------------------------------------------------------
  // HW2REG
  //-----------------------------------------------------------------------------------------------

  typedef struct packed {
    logic        d;
  } gpio_hw2reg_gpio_in_mreg_t;

  typedef struct packed {
    logic        d;
    logic        de;
  } gpio_hw2reg_gpio_out_mreg_t;

  typedef struct packed {
    logic        d;
    logic        de;
  } gpio_hw2reg_intrpt_rise_fall_status_mreg_t;

  // Register -> HW type
  typedef struct packed {
    gpio_reg2hw_gpio_dir_mreg_t [GpioCount-1:0] gpio_dir; // [607:576]
    gpio_reg2hw_gpio_en_mreg_t [GpioCount-1:0] gpio_en; // [575:544]
    gpio_reg2hw_gpio_out_mreg_t [GpioCount-1:0] gpio_out; // [543:512]
    gpio_reg2hw_gpio_toggle_mreg_t [GpioCount-1:0] gpio_toggle; // [127:64]
    gpio_reg2hw_intrpt_rise_fall_en_mreg_t [GpioCount-1:0] intrpt_rise_fall_en; // [63:32]
    gpio_reg2hw_intrpt_rise_fall_status_mreg_t [GpioCount-1:0] intrpt_rise_fall_status; // [31:0]
  } gpio_reg2hw_t;

  // HW -> register type
  typedef struct packed {
    gpio_hw2reg_gpio_in_mreg_t [GpioCount-1:0] gpio_in; // [159:128]
    gpio_hw2reg_gpio_out_mreg_t [GpioCount-1:0] gpio_out; // [127:64]
    gpio_hw2reg_intrpt_rise_fall_status_mreg_t [GpioCount-1:0] intrpt_rise_fall_status; // [63:0]
  } gpio_hw2reg_t;

  //TODO wieso jeweils 32 Register platz lassen? das würde ja platz für 32 * 32 GPIOS lassen????
  // Register offsets
  parameter logic [BlockAw-1:0] GPIO_DIR_OFFSET = 11'h 0; //32 Register ->128 Bytes
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

