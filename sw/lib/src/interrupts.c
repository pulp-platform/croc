#include "config.h"
#include "util.h"
#include "print.h"

void generic_interrupt_handler() {
    // Read mcause CSR
    uint32_t cause = get_mcause();
    // Mask interrupt bit
    cause = cause & 0xEFFFFFFFU;
    printf("Received interrupt %d", cause);
    // Disable incoming interrupt enable
    set_interrupt_enable(0, cause);
}
