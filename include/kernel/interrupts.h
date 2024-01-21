

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <LouAPI.h>

#ifndef _INTERRUPTS_H
#define _INTERRUPTS_H

#define INTERRUPT_GATE 0x5
#define TRAP_GATE 0x7
#define TASK_GATE 0x9

#define HighestPrivledge 0x0
#define HighPrivledge 0x1
#define MediumPrivledge 0x2
#define LowestPrivledge 0x3

#define Present 0x1
#define NotPresent 0x0

#ifdef __x86_64__

typedef struct __attribute__((packed)){
    uint16_t base_low;      // Lower 16 bits of the handler function's address
    uint16_t selector;      // Code segment selector
    uint8_t ist;            // Interrupt Stack Table offset
    uint8_t type_attr;      // Type and attributes of the interrupt gate
    uint16_t base_mid;      // Middle 16 bits of the handler function's address
    uint32_t base_high;     // Higher 32 bits of the handler function's address
    uint32_t reserved;      // Reserved for future use
} Interrupt_Descriptor_Table;

static Interrupt_Descriptor_Table IDT[256];

typedef struct __attribute__((packed)){
    uint16_t limit;
    uint64_t base;
} IDTP;

// Rest of the code...

static uint8_t PicMaster = 0x20, PicSlave = 0x28;

void PS2KeyboardHandler();
LOUSTATUS SetBasicInterrupts(bool init);

LOUSTATUS set_idt_gate(int num,void (*handler)(), uint16_t selector, uint8_t ist, uint8_t type_attr);

static bool USBKeyboardInterrupt;

LOUSTATUS Register_Device_To_Interrupt(uint8_t Interrupt_Number, void (*Interrupt_Handler)());


LOUSTATUS InitializeMainInterruptHandleing();
LOUSTATUS InitializeStartupInterruptHandleing();

LOUSTATUS UpdateIDT(bool Init);

void SetInterruptFlags();
void UnSetInterruptFlags();
void WaitForInterrupt();

struct interrupt_frame {
    uint64_t rip;
    uint64_t cs;
    uint64_t rflags;
    uint64_t rsp;
    uint64_t ss;
};

#endif

#ifdef __i386__

// Same content as for x86_64...


typedef struct __attribute__((packed)){
    uint16_t base_low;
    uint16_t selector;
    uint8_t always0;
    uint8_t flags;
    uint16_t base_high;
} Interrupt_Descriptor_Table;

static Interrupt_Descriptor_Table idt[256]; // 256 entries for the IDT

typedef struct __attribute__((packed)){
    uint16_t limit;
    uint32_t base;
}IDTP32;

LOUSTATUS SetBasicInterrupts(bool init);



static bool PageTableDeletion = false;
static bool MemoryProbing = false;
static bool USBKeyboardInterrupt = false;



void SetPicIDTGate(int index, void (*handler)());

LOUSTATUS InitializeMainInterruptHandleing();
LOUSTATUS InitializeStartupInterruptHandleing();

LOUSTATUS UpdateIDT(bool Init);

void SetInterruptFlags();
void UnSetInterruptFlags();

struct interrupt_frame
{
    uint32_t ip;
    uint32_t cs;
    uint32_t flags;
    uint32_t sp;
    uint32_t ss;
};

#endif

#endif
