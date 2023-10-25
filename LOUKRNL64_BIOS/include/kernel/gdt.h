#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

//User Data Segment Types
#define ReadWrite 1
#define ReadOnly 2
#define ExpandDown 3
#define ExpandUp 4

//User Code Segment Types
#define ExecuteRead 5
#define ExecuteOnly 6
#define Conforming 7
#define NonConforming 8

typedef struct __attribute__((packed)){
    uint16_t limit_low;      // The lower 16 bits of the limit
    uint16_t base_low;       // The lower 16 bits of the base address
    uint8_t base_middle;     // The next 8 bits of the base address
    uint8_t access;          // Access flags and type
    uint8_t granularity;     // Granularity flags and the upper 4 bits of the limit
    uint8_t base_high;       // The upper 8 bits of the base address
}GDT_NORMAL_ENTRY;

typedef struct __attribute__((packed)){
    GDT_NORMAL_ENTRY KERNEL_CODE;
    GDT_NORMAL_ENTRY KERNEL_DATA;
}GDT;

typedef struct __attribute__((packed)){
    uint16_t limit;        // 16-bit limit
    uint64_t base;         // 48-bit base address
}GDTP;


LOUSTATUS Initialize_Gdt();
LOUSTATUS Set_Kernel_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit);
LOUSTATUS Set_User_Segment(bool Code_Seg,uint8_t type, uint64_t Base,uint64_t Limit);
LOUSTATUS Set_TSS_Segment(bool Code_seg,uint64_t Base, uint64_t Limit);
LOUSTATUS Set_System_Security_Segment(bool Code_Seg, uint64_t Base, uint64_t Limit);
LOUSTATUS Set_User_Securtity_Segment(bool Code_Seg, uint64_t Base,uint64_t Limit);
LOUSTATUS Set_Interrurpt_Descriptor_Table_Seg(bool Code_Seg, uint64_t Base, uint64_t Limit);
LOUSTATUS Set_Local_Descriptor_Table_Segment(bool Code_Seg, uint64_t Base,uint64_t Limit);
LOUSTATUS Set_Global_Descriptor_Table_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit);

LOUSTATUS Set_Null_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit);
LOUSTATUS Set_Call_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit);
LOUSTATUS Set_Task_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit);
LOUSTATUS Set_Interrupt_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit);
LOUSTATUS Set_Trap_Gate_Segment(bool Code_Seg,uint64_t Base,uint64_t Limit);
LOUSTATUS Set_Stack_Segment(bool Code_Seg,uint64_t Base, uint64_t Limit);


LOUSTATUS Load_Gdt(GDTP gdtp);
