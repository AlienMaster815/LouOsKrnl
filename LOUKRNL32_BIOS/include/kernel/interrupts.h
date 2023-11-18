#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

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
    uint64_t base;
}IDTP64;

typedef struct __attribute__((packed)){
    uint16_t limit;
    uint32_t base;
}IDTP32;

LOUSTATUS SetBasicInterrupts(bool init);

LOUSTATUS set_idt_gate(int num, uint64_t base, uint16_t selector, uint8_t ist, uint8_t type_attr);

static bool PageTableDeletion = false;
static bool MemoryProbing = false;
static bool USBKeyboardInterrupt = false;

void PageFault();
void DoubleFault();
void GeneralProtectionFault();


void DivideByZero();
void DebugException();
void NMI();
void BreakPoint();
void OverFlow();
void BoundCheck();
void InvalidOpcode();
void FPUNoDev();
void CLOCK();
void Keyboard();

void SetPicIDTGate(int index, void (*handler)());

LOUSTATUS InitializeMainInterruptHandleing();
LOUSTATUS InitializeStartupInterruptHandleing();

LOUSTATUS UpdateIDT(bool Init);

void SetInterruptFlags();
void UnSetInterruptFlags();


#endif
