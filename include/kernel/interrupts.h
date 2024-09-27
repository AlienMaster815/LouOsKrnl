#pragma pack(push, 1)
#include <SharedTypes.h>

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

#define INTERRUPT_SERVICE_ROUTINE_0 0
#define INTERRUPT_SERVICE_ROUTINE_1 1
#define INTERRUPT_SERVICE_ROUTINE_2 2
#define INTERRUPT_SERVICE_ROUTINE_3 3
#define INTERRUPT_SERVICE_ROUTINE_4 4
#define INTERRUPT_SERVICE_ROUTINE_5 5
#define INTERRUPT_SERVICE_ROUTINE_6 6
#define INTERRUPT_SERVICE_ROUTINE_7 7
#define INTERRUPT_SERVICE_ROUTINE_8 8
#define INTERRUPT_SERVICE_ROUTINE_9 9
#define INTERRUPT_SERVICE_ROUTINE_10 10
#define INTERRUPT_SERVICE_ROUTINE_11 11
#define INTERRUPT_SERVICE_ROUTINE_12 12
#define INTERRUPT_SERVICE_ROUTINE_13 13
#define INTERRUPT_SERVICE_ROUTINE_14 14
#define INTERRUPT_SERVICE_ROUTINE_15 15
#define INTERRUPT_SERVICE_ROUTINE_16 16

#define INTERRUPT_SERVICE_ROUTINE_17 17
#define INTERRUPT_SERVICE_ROUTINE_18 18
#define INTERRUPT_SERVICE_ROUTINE_19 19
#define INTERRUPT_SERVICE_ROUTINE_20 20
#define INTERRUPT_SERVICE_ROUTINE_21 21
#define INTERRUPT_SERVICE_ROUTINE_22 22
#define INTERRUPT_SERVICE_ROUTINE_23 23
#define INTERRUPT_SERVICE_ROUTINE_24 24
#define INTERRUPT_SERVICE_ROUTINE_25 25
#define INTERRUPT_SERVICE_ROUTINE_26 26
#define INTERRUPT_SERVICE_ROUTINE_27 27
#define INTERRUPT_SERVICE_ROUTINE_28 28
#define INTERRUPT_SERVICE_ROUTINE_29 29
#define INTERRUPT_SERVICE_ROUTINE_30 30
#define INTERRUPT_SERVICE_ROUTINE_31 31

#define INTERRUPT_SERVICE_ROUTINE_32 32
#define INTERRUPT_SERVICE_ROUTINE_33 33
#define INTERRUPT_SERVICE_ROUTINE_34 34
#define INTERRUPT_SERVICE_ROUTINE_35 35
#define INTERRUPT_SERVICE_ROUTINE_36 36
#define INTERRUPT_SERVICE_ROUTINE_37 37
#define INTERRUPT_SERVICE_ROUTINE_38 38
#define INTERRUPT_SERVICE_ROUTINE_39 39
#define INTERRUPT_SERVICE_ROUTINE_40 40
#define INTERRUPT_SERVICE_ROUTINE_41 41
#define INTERRUPT_SERVICE_ROUTINE_42 42
#define INTERRUPT_SERVICE_ROUTINE_43 43
#define INTERRUPT_SERVICE_ROUTINE_44 44
#define INTERRUPT_SERVICE_ROUTINE_45 45
#define INTERRUPT_SERVICE_ROUTINE_46 46
#define INTERRUPT_SERVICE_ROUTINE_47 47



#define PASSIVE_LEVEL 0
#define APC_LEVEL 1
#define DISPATCH_LEVEL 2
#define DIRQL 3
#define CLOCK_LEVEL 13
#define HIGH_LEVEL 15


#ifndef __cplusplus
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <LouAPI.h>

void LouKeSetIrql(
    LouKIRQL  NewIrql,
    LouKIRQL* OldIrql
);

#ifdef __x86_64__


typedef struct {
    uint16_t base_low;      // Lower 16 bits of the handler function's address
    uint16_t selector;      // Code segment selector
    uint8_t ist;            // Interrupt Stack Table offset
    uint8_t type_attr;      // Type and attributes of the interrupt gate
    uint16_t base_mid;      // Middle 16 bits of the handler function's address
    uint32_t base_high;     // Higher 32 bits of the handler function's address
    uint32_t reserved;      // Reserved for future use
} Interrupt_Descriptor_Table;

static Interrupt_Descriptor_Table IDT[256];

typedef struct {
    uint16_t limit;
    uint64_t base;
} IDTP;

// Rest of the code...
#ifndef _KERNEL_MODULE_
static uint8_t PicMaster = 0x20, PicSlave = 0x28;

void PS2KeyboardHandler();
LOUSTATUS SetBasicInterrupts(bool init);

LOUSTATUS set_idt_gate(int num,void (*handler)(), uint16_t selector, uint8_t ist, uint8_t type_attr);

static bool USBKeyboardInterrupt;

void RegisterInterruptHandler(void(*Handler), uint8_t InterruptNumber);
void UnRegisterInterruptHandler(uint8_t InterruptNumber);

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
#endif

#ifdef __i386__

// Same content as for x86_64...


typedef struct {
    uint16_t base_low;
    uint16_t selector;
    uint8_t always0;
    uint8_t flags;
    uint16_t base_high;
} Interrupt_Descriptor_Table;

static Interrupt_Descriptor_Table idt[256]; // 256 entries for the IDT

typedef struct {
    uint16_t limit;
    uint32_t base;
}IDTP32;

LOUSTATUS SetBasicInterrupts(bool init);


#ifndef _KERNEL_MODULE_
static bool PageTableDeletion = false;
static bool MemoryProbing = false;
static bool USBKeyboardInterrupt = false;

void RegisterInterruptHandler(void(*Handler), uint8_t InterruptNumber);
void UnRegisterInterruptHandler(uint8_t InterruptNumber);

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

void LouKeSetIrql(
    LouKIRQL  NewIrql,
    LouKIRQL* OldIrql
);
#endif

#endif //i386
#endif // c

#ifdef __cplusplus
#ifndef _KERNEL_MODULE_
KERNEL_IMPORT void LouKeSetIrql(
    LouKIRQL  NewIrql,
    LouKIRQL* OldIrql
);
#endif
#endif

#pragma pack(pop)
#endif
