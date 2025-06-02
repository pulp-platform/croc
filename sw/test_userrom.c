#include "config.h"
#include "uart.h"
#include "util.h"
#include <string.h>
#include <stdint.h>
#include "print.h"

#define BYTES 32

int main() {
  char buf[BYTES];
  uart_init(); // setup the uart peripheral

  // read bytes from ROM
  for(int i = 0; i < BYTES; ++i) {
    buf[i] = *reg8(USER_ROM_BASE_ADDR, i);
    printf("%c", buf[i]);
  }
  printf("\n");
  uart_write_flush();

  CHECK_ASSERT(-1, strcmp("Muchen and Yannis", buf) == 0);
  return 1;
}
