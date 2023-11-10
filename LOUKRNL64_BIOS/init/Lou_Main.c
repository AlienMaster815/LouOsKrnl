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
#include <kernel/interrupts.h>

/* Tyler Grenier 9/21/23 9:56 PM
-- Started the file with the main
-- functions to get us going along 
-- with allocation functions
*/

//TODO: Contact APIC and Set up Interrupt Hanldeing Stuff Like IST For Interrupts
//TODO: Set Up Systems To Register Driver Code With API And Kernel Internals
//TODO: PCI

char* KERNEL_VERSION = "0.000000000020 RSC-4 Night 1 64-BIT";



KERNEL_ENTRY Lou_kernel_start(multiboot_info_t* multiboot_info){
    STATUS lou_init_stat;
	mbi = multiboot_info;
    
    
    setup_vga_systems();

	//vga set for debug
	
	LouPrint("Lou Version %s \n", KERNEL_VERSION);
    LouPrint("Hello Im Lousine Getting Things Ready\n");
    
	if(!(mbi->flags & MULTIBOOT_INFO_MEM_MAP))LouPanic("No Memory Information",BAD);
	



    if (Initialize_Gdt() != LOUSTATUS_GOOD) LouPanic("Error Setting Gdt",BAD);
    
    

    
    if(IO_Manager_Init() != LOUSTATUS_GOOD)LouPanic("IO Manager Failed To Start",BAD);

	pata_device_scanc();

    if(InitializeInterruptHandleing() == LOUSTATUS_GOOD) LouPanic("Unable To Start Interrupts", BAD);

     		
	LouPrint("Hello World\n ");
	//switch_to_user_segment();
	while(1);

	//LouPanic("error kernel has gone too far terminating system\n",BAD);
	//IF the Kernel returns from this 
	//the whole thing crashes crashes
}

