/*
*- Tyler Grenier 10/1/23 9:38 PM
*- Ok The GDT i fuckin hate This part of
*- the x86/64 architecture i am doinmg this
*- because in my 32 bit kernel this would
*- be my next step on 64 i still need to
*- find the chipset id and shit like that
*- because the apic system is a pain in
*- the ass but oy they time to do my
*- nightmare this will be a dual architecture for 32 and 64
*- bit systems
*/

#include <kernel/gdt.h>


GDT64 gdt64;
GDT32 gdt32;

gdt64_ptr ptr64;
gdt32_ptr ptr32;


void init_gdt_32(uintptr_t Kernel_Base,
uintptr_t Kernel_Limit,
uintptr_t User_Base,
uintptr_t User_Limit,
uintptr_t System_Base,
uintptr_t System_Limit,
uintptr_t Task_Base,
uintptr_t Task_Limit){
	
	gdt32.NULL_SEG.Limit = 0;
    gdt32.NULL_SEG.Base_Low = 0;
    gdt32.NULL_SEG.Base_Middle = 0;
    gdt32.NULL_SEG.Primary_Flags = 0;
    gdt32.NULL_SEG.Base_High = 0;
    gdt32.NULL_SEG.Secondary_Flags = 0;
	
	set_kernel_code_segment_32(Kernel_Base, Kernel_Limit);
	set_kernel_data_segment_32(Kernel_Base, Kernel_Limit);
	set_user_code_segment_32(User_Base, User_Limit);
	set_user_data_segment_32(User_Base, User_Limit);
	set_system_code_segment_32(System_Base, System_Limit);
	set_system_data_segment_32(System_Base, System_Limit);
	set_task_segment_32(Task_Base, Task_Limit);

	ptr32.limit = (sizeof(gdt32) - 1);
	ptr32.base = (uint32_t)(uintptr_t)&gdt32;

	asm volatile("lgdt (%0)" :: "r"(&ptr32));
}

void set_kernel_code_segment_32(uintptr_t base,uintptr_t limit){
	gdt32.KERNEL_CODE.Limit = limit;
    gdt32.KERNEL_CODE.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt32.KERNEL_CODE.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt32.KERNEL_CODE.Primary_Flags = 0x9A;
    gdt32.KERNEL_CODE.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt32.KERNEL_CODE.Secondary_Flags = 0xC;
}

void set_kernel_data_segment_32(uintptr_t base,uintptr_t limit){
	gdt32.KERNEL_DATA.Limit = limit;
    gdt32.KERNEL_DATA.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt32.KERNEL_DATA.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt32.KERNEL_DATA.Primary_Flags = 0x92;
    gdt32.KERNEL_DATA.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt32.KERNEL_DATA.Secondary_Flags = 0xC;
}

void set_user_code_segment_32(uintptr_t base,uintptr_t limit){
	gdt32.USER_CODE.Limit = limit;
    gdt32.USER_CODE.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt32.USER_CODE.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt32.USER_CODE.Primary_Flags = 0xFA;
    gdt32.USER_CODE.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt32.USER_CODE.Secondary_Flags = 0xC;
}

void set_user_data_segment_32(uintptr_t base,uintptr_t limit){
	gdt32.USER_DATA.Limit = limit;
    gdt32.USER_DATA.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt32.USER_DATA.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt32.USER_DATA.Primary_Flags = 0xF2;
    gdt32.USER_DATA.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt32.USER_DATA.Secondary_Flags = 0xC;
}

void set_system_code_segment_32(uintptr_t base,uintptr_t limit){
	gdt32.SYSTEM_CODE.Limit = limit;
    gdt32.SYSTEM_CODE.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt32.SYSTEM_CODE.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt32.SYSTEM_CODE.Primary_Flags = 0x9A;
    gdt32.SYSTEM_CODE.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt32.SYSTEM_CODE.Secondary_Flags = 0xC;
}

void set_system_data_segment_32(uintptr_t base,uintptr_t limit){
	gdt32.SYSTEM_DATA.Limit = limit;
    gdt32.SYSTEM_DATA.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt32.SYSTEM_DATA.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt32.SYSTEM_DATA.Primary_Flags = 0x92;
    gdt32.SYSTEM_DATA.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt32.SYSTEM_DATA.Secondary_Flags = 0xC;
}

void set_task_segment_32(uintptr_t base,uintptr_t limit){
	gdt32.TASK_CODE.Limit = limit;
    gdt32.TASK_CODE.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt32.TASK_CODE.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt32.TASK_CODE.Primary_Flags = 0x89;
    gdt32.TASK_CODE.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt32.TASK_CODE.Secondary_Flags = 0x00;
}


void init_gdt_64(uintptr_t Kernel_Base,
uintptr_t Kernel_Limit,
uintptr_t User_Base,
uintptr_t User_Limit,
uintptr_t System_Base,
uintptr_t System_Limit){

	gdt64.NULL_SEG.Limit = 0;
    gdt64.NULL_SEG.Base_Low = 0;
    gdt64.NULL_SEG.Base_Middle = 0;
    gdt64.NULL_SEG.Primary_Flags = 0;
    gdt64.NULL_SEG.Base_High = 0;
    gdt64.NULL_SEG.Secondary_Flags = 0;

	set_kernel_code_segment_64(Kernel_Base, Kernel_Limit);
	set_kernel_data_segment_64(Kernel_Base, Kernel_Limit);
	set_user_code_segment_64(User_Base, User_Limit);
	set_user_data_segment_64(User_Base, User_Limit);
	set_system_code_segment_64(System_Base, System_Limit);
	set_system_data_segment_64(System_Base, System_Limit);

	ptr64.limit = (sizeof(gdt64) - 1);
	ptr64.base = (uint64_t)(uintptr_t)&gdt64;

	asm volatile("lgdt (%0)" :: "r"(&ptr64));
	asm volatile("mov $0x10, %ax\n mov %ax , %es\n mov %ax , %fs\n mov %ax , %gs\n");
	
}

void set_kernel_code_segment_64(uintptr_t base,uintptr_t limit){
	gdt64.KERNEL_CODE.Limit = limit;
    gdt64.KERNEL_CODE.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt64.KERNEL_CODE.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt64.KERNEL_CODE.Primary_Flags = 0x9A;
    gdt64.KERNEL_CODE.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt64.KERNEL_CODE.Secondary_Flags = 0xCF;
}

void set_kernel_data_segment_64(uintptr_t base,uintptr_t limit){
	gdt64.KERNEL_DATA.Limit = limit;
    gdt64.KERNEL_DATA.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt64.KERNEL_DATA.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt64.KERNEL_DATA.Primary_Flags = 0x92;
    gdt64.KERNEL_DATA.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt64.KERNEL_DATA.Secondary_Flags = 0xCF;
}

void set_user_code_segment_64(uintptr_t base,uintptr_t limit){
	gdt64.USER_CODE.Limit = limit;
    gdt64.USER_CODE.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt64.USER_CODE.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt64.USER_CODE.Primary_Flags = 0xFA;
    gdt64.USER_CODE.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt64.USER_CODE.Secondary_Flags = 0xCF;
}

void set_user_data_segment_64(uintptr_t base,uintptr_t limit){
	gdt64.USER_DATA.Limit = limit;
    gdt64.USER_DATA.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt64.USER_DATA.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt64.USER_DATA.Primary_Flags = 0xF2;
    gdt64.USER_DATA.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt64.USER_DATA.Secondary_Flags = 0xCF;
}

void set_system_code_segment_64(uintptr_t base,uintptr_t limit){
	gdt64.SYSTEM_CODE.Limit = limit;
    gdt64.SYSTEM_CODE.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt64.SYSTEM_CODE.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt64.SYSTEM_CODE.Primary_Flags = 0x9A;
    gdt64.SYSTEM_CODE.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt64.SYSTEM_CODE.Secondary_Flags = 0xCF;
}

void set_system_data_segment_64(uintptr_t base,uintptr_t limit){
	gdt64.SYSTEM_DATA.Limit = limit;
    gdt64.SYSTEM_DATA.Base_Low = (uint16_t)(base & 0xFFFF);
    gdt64.SYSTEM_DATA.Base_Middle = (uint8_t)((base >> 16) & 0xFF);
    gdt64.SYSTEM_DATA.Primary_Flags = 0x92;
    gdt64.SYSTEM_DATA.Base_High = (uint8_t)((base >> 24) & 0xFF);
    gdt64.SYSTEM_DATA.Secondary_Flags = 0xCF;
}

