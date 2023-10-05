#include <kernel/kernel.h>
#include <kernel/memmory.h>
#include <stdint.h>
#include <stat.h>
#include <drivers/display/vga.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <kernel/acpi.h>
#include <bootloader/grub/multiboot.h>
#include <kernel/gdt.h>


/* Tyler Grenier 9/21/23 9:56 PM
-- Started the file with the main 
-- functions to get us going along 
-- with allocation functions
*/

char* KERNEL_VERSION = "0.000000000004 32BIT";


multiboot_info_t* mbi;


STATUS set_initial_gdt(){
    
    init_gdt_32(0x00000000,0xFFFFFFFF,
                0x00000000,0xFFFFFFFF,
                0x00000000,0xFFFFFFFF,
                0x00000000,0xFFFFFFFF);    
    LouPrint("gdt is set\n");
    return GOOD;    
}


RSDP* Find_RSDP(uint32_t RAMSIZE) {
	RSDP* pointer;
	pointer = PROBE_RSDP(0, RAMSIZE);
	if (pointer != NULL) return pointer;
	LouPanic("RSDP NOT FOUND",BAD);
	return 0;
}


//handle our acpi tasks
VOID HANDLE_ACPI(uint32_t RAMSIZE) {
	RSDP* rsdp = Find_RSDP(RAMSIZE);
	STATUS ACPI_VALID = ACPI_PARSE(rsdp);
	if(ACPI_VALID == BAD)LouPanic("No Valid ACPI Found\n",BAD);
	//else return;
}

//this is the 32 bit kernel version

KERNEL_ENTRY Lou_kernel_start(multiboot_info_t* multiboot_info){
	STATUS lou_init_stat;
	mbi = multiboot_info;

	// get vga set for debug
	Set_Color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
	init_terminal();
	LouPrint("Lou Version %s \n", KERNEL_VERSION);
	LouPrint("Hello Im Lousine Getting Things Ready\n");
	uint32_t TotalRAM;
	if (mbi->flags & MULTIBOOT_INFO_MEM_MAP) TotalRAM = Parse_Mem_Map(mbi);
	else LouPanic("No Memory Information",BAD);
	


	HANDLE_ACPI(TotalRAM);
	
	//TODO LIST
    

	//PARSE MEMORY MAP AND ACPI BY
    lou_init_stat = set_initial_gdt();
    if(!lou_init_stat)LouPanic("Error setting GDT",BAD);

	//TODO FINISH THE PAGING SYSTEM With USERMODE
 		
	LouPrint("Hello World\n ");
	while(1);

	LouPanic("error kernel has gone too far terminating system\n",BAD);
	//IF the Kernel returns from this 
	//the whole thing crashes crashes
}

