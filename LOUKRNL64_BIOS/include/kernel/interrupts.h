#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

#ifndef _INTERRUPTS_H
#define _INTERRUPTS_H


typedef struct __attribute__((packed)){
    uint16_t base_low;      // Lower 16 bits of the handler function's address
    uint16_t selector;      // Code segment selector
    uint8_t ist;            // Interrupt Stack Table offset
    uint8_t type_attr;      // Type and attributes of the interrupt gate
    uint16_t base_mid;      // Middle 16 bits of the handler function's address
    uint32_t base_high;     // Higher 32 bits of the handler function's address
    uint32_t reserved;      // Reserved for future use
}Interrupt_Descriptor_Table;

typedef struct __attribute__((packed)){
    uint16_t limit;
    uint64_t base;
}IDTP;


LOUSTATUS EditInterruptDescriptorTable(void* InterruptHandler, uint16_t CodeSegment, uint8_t Attributes);

static bool PageTableDeletion;

void PageFault();
void DoubleFault();

#endif
