#ifndef _GDT_H
#define _GDT_H
#include <stdint.h>

/*
* Tyler Grenier 10/1/23 9:38 PM
* Ok The GDT i fuckin hate This part of
* the x86/64 architecture i am doinmg this
* because in my 32 bit kernel this would
* be my next step on 64 i still need to
* find the chipset id and shit like that
* because the apic system is a pain in
* the ass but oy they time to do my
* nightmare this will be a dual
* architecture for 32 and 64
* bit systems
*/

// Tyler Grenier 10/1/23 10:26
// signing off with the GDT_ENTRY types and
// gdt structures done

// define asystem for selecting gdt segments

#define KERNEL_CODE_SEG_SELECT 1

#define KERNEL_DATA_SEG_SELECT 2

#define USER_CODE_SEG_SELECT 3

#define USER_DATA_SEG_SELECT 4

#define SYSTEM_CODE_SEG_SELECT 5

#define SYSTEM_DATA_SEG_SELECT 6

#define TASK_CODE_SEG_SELECT 7

#define TASK_DATA_SEG_SELECT 8

// define the enries for 32 bit protected mode
typedef struct __attribute__((packed)){
    uint16_t Limit;
    uint16_t Base_Low;
    uint8_t Base_Middle;
    uint8_t Primary_Flags;
    uint8_t Base_High;
    uint8_t Secondary_Flags;
}GDT_ENTRY_32;

typedef struct __attribute__((packed)){
    GDT_ENTRY_32 NULL_SEG;
    GDT_ENTRY_32 KERNEL_CODE;
	GDT_ENTRY_32 KERNEL_DATA;
    GDT_ENTRY_32 USER_CODE;
	GDT_ENTRY_32 USER_DATA;
    GDT_ENTRY_32 SYSTEM_CODE;
	GDT_ENTRY_32 SYSTEM_DATA;
    GDT_ENTRY_32 TASK_CODE;
}GDT32;

// define entries for 64 bit mode
typedef struct __attribute__((packed)){
    uint16_t Limit;
    uint16_t Base_Low;
    uint8_t Base_Middle;
    uint8_t Primary_Flags;
    uint8_t Base_High;
    uint8_t Secondary_Flags;
}GDT_ENTRY_64;

typedef struct __attribute__((packed)){
    GDT_ENTRY_64 NULL_SEG;
    GDT_ENTRY_64 KERNEL_CODE;
	GDT_ENTRY_64 KERNEL_DATA;
    GDT_ENTRY_64 USER_CODE;
	GDT_ENTRY_64 USER_DATA;
    GDT_ENTRY_64 SYSTEM_CODE;
	GDT_ENTRY_64 SYSTEM_DATA;
}GDT64;

typedef struct __attribute__((packed)){
	uint16_t limit;
	uint32_t base;
}gdt32_ptr;

typedef struct __attribute__((packed)){
	uint16_t limit;
	uint64_t base;
}gdt64_ptr;

//make GDT tables


// define the functions needed for
// the gdt 32 bit mode

void init_gdt_32(uintptr_t Kernel_Base,
				 uintptr_t Kernel_Limit,
				 uintptr_t User_Base,
				 uintptr_t User_Limit,
				 uintptr_t System_Base,
				 uintptr_t System_Limit,
				 uintptr_t Task_Base,
				 uintptr_t Task_Limit);

void set_kernel_code_segment_32(uintptr_t base,uintptr_t limit);

void set_kernel_data_segment_32(uintptr_t base,uintptr_t limit);

void set_user_code_segment_32(uintptr_t base,uintptr_t limit);

void set_user_data_segment_32(uintptr_t base,uintptr_t limit);

void set_system_code_segment_32(uintptr_t base,uintptr_t limit);

void set_system_data_segment_32(uintptr_t base,uintptr_t limit);

void set_task_segment_32(uintptr_t base,uintptr_t limit);

// define 64 bit function version

void init_gdt_64(uintptr_t Kernel_Base,
				 uintptr_t Kernel_Limit,
				 uintptr_t User_Base,
				 uintptr_t User_Limit,
				 uintptr_t System_Base,
				 uintptr_t System_Limit);

void set_kernel_code_segment_64(uintptr_t base,uintptr_t limit);

void set_kernel_data_segment_64(uintptr_t base,uintptr_t limit);

void set_user_code_segment_64(uintptr_t base,uintptr_t limit);

void set_user_data_segment_64(uintptr_t base,uintptr_t limit);

void set_system_code_segment_64(uintptr_t base,uintptr_t limit);

void set_system_data_segment_64(uintptr_t base,uintptr_t limit);

#endif
