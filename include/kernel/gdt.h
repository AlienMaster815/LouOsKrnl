#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifndef _GDT_H
#define _GDT_H

//User Data Segment Types
#define ReadWrite 0x92
#define ReadOnly 0x82
#define ReadExpandDown 0xA2
#define ReadWriteExpandDown 0xB2
#define ReadConforming 0x8A
#define ReadWriteConforming 0x9A

//User Code Segment Types
#define ExecuteRead 0x8E
#define ExecuteOnly 0x8F
#define ExecuteReadConforming 0x9E
#define ExecuteOnlyConforming 0x9F
#define ExecuteReadNonConforming 0xAE
#define ExecuteOnlyNonConforming 0xAF

#define NonConforming 8

#define CODE true
#define DATA false

#if __x86_64__

#pragma pack(push, 1)

typedef struct {
    unsigned int limit_low              : 16;
    unsigned int base_low               : 24;
    unsigned int accessed               :  1;
    unsigned int read_write             :  1; // Readable for code, writable for data
    unsigned int conforming_expand_down :  1; // Conforming for code, expand down for data
    unsigned int code                   :  1; // 1 for code, 0 for data
    unsigned int code_data_segment      :  1; // Should be 1 for everything but TSS and LDT
    unsigned int DPL                    :  2; // Privilege level
    unsigned int present                :  1;
    unsigned int limit_high             :  4;
    unsigned int available              :  1; // Only used in software; has no effect on hardware
    unsigned int long_mode              :  1;
    unsigned int big                    :  1; // 32-bit opcodes for code, uint32_t stack for data
    unsigned int gran                   :  1; // 1 to use 4k page addressing, 0 for byte addressing
    unsigned int base_high              :  8;
} GDT_ENTRY;

// Additional high 32 bits for TSS
typedef struct {
    uint32_t base_upper;
    uint32_t reserved;
} TSS_EXTRA_ENTRY;

typedef struct {
    GDT_ENTRY NULL_DATA;
    GDT_ENTRY KERNEL_CODE;
    GDT_ENTRY KERNEL_DATA;
    GDT_ENTRY USER_CODE;
    GDT_ENTRY USER_DATA;
    GDT_ENTRY TSS;              // First part of TSS descriptor
    TSS_EXTRA_ENTRY TSS_EXTRA;   // Second part (upper 32 bits of the TSS base)
} GDT;

typedef struct {
    uint16_t limit;        // 16-bit limit
    uint64_t base;         // 48-bit base address
}GDTP;

#ifndef _KERNEL_MODULE_
LOUSTATUS Initialize_Gdt();

LOUSTATUS Set_Kernel_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt);
LOUSTATUS Set_User_Segment(bool Code_Seg,uint8_t type, uint64_t Base,uint64_t Limit, GDT* gdt);
LOUSTATUS Set_TSS_Segment(bool Code_seg,uint64_t Base, uint64_t Limit, GDT* gdt);
LOUSTATUS Set_System_Security_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt);
LOUSTATUS Set_User_Security_Segment(bool Code_Seg, uint64_t Base,uint64_t Limit, GDT* gdt);
LOUSTATUS Set_Interrurpt_Descriptor_Table_Seg(bool Code_Seg, uint64_t Base, uint64_t Limit, GDT* gdt);
LOUSTATUS Set_Local_Descriptor_Table_Segment(bool Code_Seg, uint64_t Base,uint64_t Limit, GDT* gdt);
LOUSTATUS Set_Global_Descriptor_Table_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt);

LOUSTATUS Set_Null_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt);
LOUSTATUS Set_Call_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt);
LOUSTATUS Set_Task_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt);
LOUSTATUS Set_Interrupt_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt);
LOUSTATUS Set_Trap_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit, GDT* gdt);
LOUSTATUS Set_Stack_Segment(bool Code_Seg,uint64_t Base, uint64_t Limit, GDT* gdt);


LOUSTATUS Modify_Gdt_Registers();
LOUSTATUS Uninitialize_Gdt();

LOUSTATUS Load_Gdt(GDT* gdt);
#endif

#endif

#ifdef __i386__
#define ReadWrite 0x92
#define ReadOnly 0x82
#define ReadExpandDown 0xA2
#define ReadWriteExpandDown 0xB2
#define ReadConforming 0x8A
#define ReadWriteConforming 0x9A

//User Code Segment Types
#define ExecuteRead 0x8E
#define ExecuteOnly 0x8F
#define ExecuteReadConforming 0x9E
#define ExecuteOnlyConforming 0x9F
#define ExecuteReadNonConforming 0xAE
#define ExecuteOnlyNonConforming 0xAF

#define NonConforming 8

#define CODE true
#define DATA false



typedef struct {
    uint16_t limit_low;      // The lower 16 bits of the limit
    uint16_t base_low;       // The lower 16 bits of the base address
    uint8_t base_middle;     // The next 8 bits of the base address
    uint8_t access;          // Access flags and type
    uint8_t granularity;     // Granularity flags and the upper 4 bits of the limit
    uint8_t base_high;       // The upper 8 bits of the base address
}GDT_ENTRY;

typedef struct {
    GDT_ENTRY NULL_DATA;
    GDT_ENTRY KERNEL_CODE;
    GDT_ENTRY KERNEL_DATA;
    GDT_ENTRY USER_CODE;
    GDT_ENTRY USER_DATA;
    GDT_ENTRY SYSTEM_SECURITY_CODE;
    GDT_ENTRY SYSTEM_SECURITY_DATA;
    GDT_ENTRY USER_SECURITY_CODE;
    GDT_ENTRY USER_SECURITY_DATA;
    GDT_ENTRY IDT_CODE;
    GDT_ENTRY IDT_DATA;
    GDT_ENTRY LDT_CODE;
    GDT_ENTRY LDT_DATA;
    GDT_ENTRY GDT_CODE;
    GDT_ENTRY GDT_DATA;
    GDT_ENTRY CALL_GATE_CODE;
    GDT_ENTRY CALL_GATE_DATA;
    GDT_ENTRY TASK_GATE_CODE;
    GDT_ENTRY TASK_GATE_DATA;
    GDT_ENTRY INTERRUPT_GATE_CODE;
    GDT_ENTRY INTERRUPT_GATE_DATA;
    GDT_ENTRY TRAP_GATE_CODE;
    GDT_ENTRY TRAP_GATE_DATA;
    GDT_ENTRY STACK_CODE;
    GDT_ENTRY STACK_DATA;
}GDT;

typedef struct {
    uint16_t limit;        // 16-bit limit
    uint32_t base;         // 48-bit base address
}GDTP;

#pragma pack(pop)
#ifndef _KERNEL_MODULE_
LOUSTATUS Initialize_Gdt();

LOUSTATUS Set_Kernel_Segment(bool Code_Seg, uint32_t Base, uint32_t Limit, GDT* gdt);
LOUSTATUS Set_User_Segment(bool Code_Seg,uint8_t type, uint32_t Base,uint32_t Limit, GDT* gdt);
LOUSTATUS Set_TSS_Segment(bool Code_seg,uint32_t Base, uint32_t Limit, GDT* gdt);
LOUSTATUS Set_System_Security_Segment(bool Code_Seg, uint32_t Base, uint32_t Limit, GDT* gdt);
LOUSTATUS Set_User_Security_Segment(bool Code_Seg, uint32_t Base,uint32_t Limit, GDT* gdt);
LOUSTATUS Set_Interrurpt_Descriptor_Table_Seg(bool Code_Seg, uint32_t Base, uint32_t Limit, GDT* gdt);
LOUSTATUS Set_Local_Descriptor_Table_Segment(bool Code_Seg, uint32_t Base,uint32_t Limit, GDT* gdt);
LOUSTATUS Set_Global_Descriptor_Table_Segment(bool Code_Seg,uint32_t Base,uint32_t Limit, GDT* gdt);

LOUSTATUS Set_Null_Segment(bool Code_Seg,uint32_t Base,uint32_t Limit, GDT* gdt);
LOUSTATUS Set_Call_Gate_Segment(bool Code_Seg,uint32_t Base,uint32_t Limit, GDT* gdt);
LOUSTATUS Set_Task_Gate_Segment(bool Code_Seg,uint32_t Base,uint32_t Limit, GDT* gdt);
LOUSTATUS Set_Interrupt_Gate_Segment(bool Code_Seg,uint32_t Base,uint32_t Limit, GDT* gdt);
LOUSTATUS Set_Trap_Gate_Segment(bool Code_Seg,uint32_t Base,uint32_t Limit, GDT* gdt);
LOUSTATUS Set_Stack_Segment(bool Code_Seg,uint32_t Base, uint32_t Limit, GDT* gdt);


LOUSTATUS Modify_Gdt_Registers();
LOUSTATUS Uninitialize_Gdt();

LOUSTATUS Load_Gdt(GDT* gdt);
#endif

#endif


#endif
