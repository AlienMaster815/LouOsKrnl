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
#include <kernel/memoryprobing.h>

/* Tyler Grenier 9/21/23 9:56 PM
-- Started the file with the main
-- functions to get us going along 
-- with allocation functions
*/


char* KERNEL_VERSION = "0.000000000019-rc2 64-BIT";



KERNEL_ENTRY Lou_kernel_start(multiboot_info_t* multiboot_info){
    STATUS lou_init_stat;
	mbi = multiboot_info;
    
    
    setup_vga_systems();

	//vga set for debug
	
	LouPrint("Lou Version %s \n", KERNEL_VERSION);
    LouPrint("Hello Im Lousine Getting Things Ready\n");
    
	if(!(mbi->flags & MULTIBOOT_INFO_MEM_MAP))LouPanic("No Memory Information",BAD);
	
    
    LouPrint("System Memory Address Limit: %d", ProtectedModeMemoryMapLimit);
    
    if (Initialize_Gdt() != 0) LouPanic("Error Setting Gdt",BAD);
    
    
    HANDLE_ACPI(mbi); //BUGBUG: ACPI CRASHES REAL HARDWARE WE ARE LOOKING INTO IT
    
    // TODO: PARSE MEMORY MAP AND ACPI
    
    
    if(IO_Manager_Init() != 0)LouPanic("IO Manager Failed To Start",BAD);

	pata_device_scanc();

	
    //TODO: Contact APIC and Set up Interrupt Hanldeing Stuff Like IST For Interrupts
    //TODO: Set Up Systems To Register Driver Code With API And Kernel Internals

    
	//TODO: FINISH THE PAGING SYSTEM With USERMODE
 		
	LouPrint("Hello World\n ");
	//switch_to_user_segment();
	while(1);

	LouPanic("error kernel has gone too far terminating system\n",BAD);
	//IF the Kernel returns from this 
	//the whole thing crashes crashes
}

