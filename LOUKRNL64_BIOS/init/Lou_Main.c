#include <kernel/kernel.h>
#include <kernel/memmory.h>
#include <stdint.h>
#include <stat.h>
#include <drivers/display/vga.h>
#include <stdio.h>
#include <kernel/errors.h>
#include <kernel/acpi.h>
#include <bootloader/grub/multiboot.h>
#include <drivers/Lou_drivers/hardrivec.h>
#include <KernelAPI/IOManager.h>
#include <kernel/gdt.h>

/* Tyler Grenier 9/21/23 9:56 PM
-- Started the file with the main
-- functions to get us going along 
-- with allocation functions
*/


char* KERNEL_VERSION = "0.000000000018 64-BIT";


multiboot_info_t* mbi;



RSDP* Find_RSDP() {
	RSDP* pointer;
	pointer = PROBE_RSDP(0x00000000, 0x0000E000);
	if (pointer != NULL) return pointer;
	pointer = PROBE_RSDP(0x0000E000, 0x000FFFFF);
	if (pointer != NULL) return pointer;
	pointer = PROBE_RSDP(0x000A0000, 0x000FFFFF);
	if (pointer != NULL) return pointer;
	pointer = PROBE_RSDP(0x000FFFFF, 0xFFFFFFFF);
	if (pointer != NULL) return pointer;
	LouPanic("RSDP NOT FOUND",BAD);
	return 0;
}


//handle our acpi tasks
VOID HANDLE_ACPI() {
	RSDP* rsdp = Find_RSDP();
	STATUS ACPI_VALID = ACPI_PARSE(rsdp);
	if(ACPI_VALID == BAD)LouPanic("No Valid ACPI Found\n",BAD);
	//else return;
}



KERNEL_ENTRY Lou_kernel_start(multiboot_info_t* multiboot_info){
    STATUS lou_init_stat;
	mbi = multiboot_info;
    
    
    setup_vga_systems();

	//vga set for debug
	
	LouPrint("Lou Version %s \n", KERNEL_VERSION);
    LouPrint("Hello Im Lousine Getting Things Ready\n");
    
	if(!(mbi->flags & MULTIBOOT_INFO_MEM_MAP))LouPanic("No Memory Information",BAD);
	
    

    
    if (Initialize_Gdt() != 0) LouPanic("Error Setting Gdt",BAD);
    
    
    HANDLE_ACPI();
    
    // TODO: PARSE MEMORY MAP AND ACPI BY
    
    
    if(IO_Manager_Init() != 0)LouPanic("IO Manager Failed To Start",BAD);

	pata_device_scanc();

	
    //TODO: Contact APIC and Set up Interrupt Hanldeing Stuff Like IST For Interrupts


    
	//TODO: FINISH THE PAGING SYSTEM With USERMODE
 		
	LouPrint("Hello World\n ");
	//switch_to_user_segment();
	while(1);

	LouPanic("error kernel has gone too far terminating system\n",BAD);
	//IF the Kernel returns from this 
	//the whole thing crashes crashes
}

