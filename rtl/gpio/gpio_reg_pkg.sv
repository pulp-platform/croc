package gpio_reg_pkg;

  // Param list
  parameter int GpioCount = 32;

  // Address widths within the block : Defines the max no of Block Addresses (2047)
  parameter int BlockAw = 11;

  ////////////////////////////
  // Typedefs for registers //
  ////////////////////////////

  typedef struct packed {
    struct packed {
      logic        q;
    } glbl_intrpt_mode;
    struct packed {
      logic        q;
    } pin_lvl_intrpt_mode;
  } gpio_reg2hw_cfg_reg_t;

  typedef struct packed {
    logic        q;
  } gpio_reg2hw_gpio_en_mreg_t;

  typedef struct packed {
    logic        q;
  } gpio_reg2hw_gpio_out_mreg_t;

  typedef struct packed {
    logic        q;
    logic        qe;
  } gpio_reg2hw_gpio_toggle_mreg_t;

  typedef struct packed {
    logic        q;
  } gpio_reg2hw_intrpt_rise_fall_en_mreg_t;

  typedef struct packed {
    logic        q;
  } gpio_reg2hw_intrpt_rise_fall_status_mreg_t;

  typedef struct packed {
    struct packed {
      logic [9:0] d;
    } gpio_cnt;
    struct packed {
      logic [9:0] d;
    } version;
  } gpio_hw2reg_info_reg_t;

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

  //TODO: Set the right addresses and offsets
  // Register -> HW type
  typedef struct packed {
    gpio_reg2hw_gpio_mode_mreg_t [31:0] gpio_mode; // [639:576]
    gpio_reg2hw_gpio_en_mreg_t [31:0] gpio_en; // [575:544]
    gpio_reg2hw_gpio_out_mreg_t [31:0] gpio_out; // [543:512]
    gpio_reg2hw_gpio_toggle_mreg_t [31:0] gpio_toggle; 
    gpio_reg2hw_intrpt_rise_fall_en_mreg_t [31:0] intrpt_rise_fall_en;
    gpio_reg2hw_intrpt_rise_fall_status_mreg_t [31:0] intrpt_rise_fall_status; 
  } gpio_reg2hw_t;

  // HW -> register type
  typedef struct packed {
    gpio_hw2reg_info_reg_t info; // [403:384]
    gpio_hw2reg_gpio_in_mreg_t [31:0] gpio_in; // [383:352]
    gpio_hw2reg_gpio_out_mreg_t [31:0] gpio_out; // [351:288]
    gpio_hw2reg_intrpt_rise_fall_status_mreg_t [31:0] intrpt_rise_fall_status; 
  } gpio_hw2reg_t;

  // Register offsets
  parameter logic [BlockAw-1:0] GPIO_INFO_OFFSET = 11'h 0;
  parameter logic [BlockAw-1:0] GPIO_GPIO_EN_OFFSET = 11'h 80;
  parameter logic [BlockAw-1:0] GPIO_GPIO_IN_OFFSET = 11'h 100;
  parameter logic [BlockAw-1:0] GPIO_GPIO_OUT_OFFSET = 11'h 180;
  parameter logic [BlockAw-1:0] GPIO_GPIO_TOGGLE_OFFSET = 11'h 300;
  parameter logic [BlockAw-1:0] GPIO_INTRPT_RISE_FALL_EN = 11'h 300;
  parameter logic [BlockAw-1:0] GPIO_INTRPT_RISE_FALL_STATUS = 11'h 300;

  // Reset values for hwext registers and their fields
  parameter logic [19:0] GPIO_INFO_RESVAL = 20'h 800;
  parameter logic [9:0 ] GPIO_INFO_VERSION_RESVAL = 10'h 2;
  parameter logic [31:0] GPIO_GPIO_IN_RESVAL = 32'h 0;
  parameter logic [31:0] GPIO_GPIO_TOGGLE_RESVAL = 32'h 0;
  parameter logic [31:0] GPIO_INTRPT_RISE_FALL_STATUS_RESVAL = 32'h 0;

  // Register index
  typedef enum int {
    GPIO_INFO,
    GPIO_GPIO_EN,
    GPIO_GPIO_IN,
    GPIO_GPIO_OUT,
    GPIO_GPIO_TOGGLE,
    GPIO_INTRPT_RISE_FALL_EN,
    GPIO_INTRPT_RISE_FALL_STATUS
  } gpio_id_e;

  // Register width information to check illegal writes
  // These are permissions for OBI AND(!) GPIO HW
  //TODO: wouldnt it make sense if separated permissions? OBI should not write in GPIO_IN
  parameter logic [3:0] GPIO_PERMIT [7] = '{
    4'b 0111, // index[ 0] GPIO_INFO
    4'b 1111, // index[ 1] GPIO_GPIO_EN
    4'b 1111, // index[ 2] GPIO_GPIO_IN 
    4'b 1111, // index[ 3] GPIO_GPIO_OUT
    4'b 1111, // index[ 4] GPIO_GPIO_TOGGLE
    4'b 1111, // index[ 5] GPIO_INTRPT_RISE_FALL_EN
    4'b 1111, // index[ 6] GPIO_INTRPT_RISE_FALL_STATUS
  };

endpackage

