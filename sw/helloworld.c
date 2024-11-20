// Copyright (c) 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>
/*
#include "uart.h"
#include "print.h"
#include "gpio.h"
#include "util.h"

#define TB_FREQUENCY 10000000
#define TB_BAUDRATE    115200

int main() {
    uart_init();

    printf("He%xo World!\n", 0x11);
    uart_write_flush();
    *reg8(GPIO_BASE_ADDR, GPIO_DIR_REG_OFFSET) = 0x0F; // lowest four as outputs
    *reg8(GPIO_BASE_ADDR, GPIO_OUT_REG_OFFSET) = 0x0A; // ready output pattern
    *reg8(GPIO_BASE_ADDR, GPIO_EN_REG_OFFSET) = 0xFF;  // enable lowest eight
    printf("GPIO (expect 0xA0): %x\n", *reg8(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET));
    *reg8(GPIO_BASE_ADDR, GPIO_TOGGLE_REG_OFFSET) = 0x0F;
    printf("GPIO (expect 0x50): %x\n", *reg8(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET));
    return 1;
}*/

#include "uart.h"
#include "print.h"


/*
int my_strlen(const char *str) {
    int len = 0;
    while(*str++) len++;
    return len;
}*/

int main() {
  // Initialize the UART
  
  uart_init();

  //-----Send a greeting message---------------------------------------------
  printf("Hello! %x\n", 123);

  //-----Write-UART-Test-----------------------------------------------------
  /*uart_write_flush(); // Ensure all bytes are transmitted

  uart_write(0x41);
  uart_write(0x42);
  uart_write(0x43);
  uart_write(0x44);
  uart_write(10);
  uart_write(13);
*/
  uart_write_flush();
  /*
  char string [] = "TTM\n\r\0";
  // Make an array of 8 arrays
  int str_len = sizeof(string);
  uint8_t message_tx[str_len];
  
  for (int i = 0; i < str_len; i++) { 
    message_tx[i] = (uint8_t)string[i];
  }
  
  uart_write_str(message_tx, str_len);
  
  uart_write_flush(); // Ensure all bytes are transmitted
  */
  // uart_txd_o in testbench should be messagetx and print it out

  //-----Read-UART-Test------------------------------------------------------
  /*
  // Read the message into a buffer
  char buffer[TEST_MESSAGE_LENGTH];
  uart_read_str(buffer, TEST_MESSAGE_LENGTH);

  // Check if received message matches the one set in the testbench
  int test_passed = 1;
  for (int i = 0; i < TEST_MESSAGE_LENGTH; ++i) {
      if (buffer[i] != message[i]) {
          test_passed = 0;
          break;
      }
  }

  uart_write_flush(); // Ensure all bytes are transmitted
  */
  return 1;

}
