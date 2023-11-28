#include <LouAPI.h>

/* Tyler Grenier 9/21/23 9:56 PM
-- Started the file with the main
-- functions to get us going along 
-- with allocation functions
*/

//TODO: FileSystem Suport And Library Loading
//TODO: Libraries and Linker Support
//TODO: ACPI UGH
//TODO: Contact APIC and Set up Interrupt Hanldeing Stuff Like IST For Interrupts
//TODO: Set Up Systems To Register Driver Code With API And Kernel Internals
//TODO: PCI
//TODO: SystemCalls
//TODO: Program Execution
//TODO: UserMode

//TODO: Use Parralelles To Make The User Space Programs

#ifdef __x86_64__
char* KERNEL_VERSION = "0.0.00027 RSC-4 64-BIT";
#endif
#ifdef __i386__
char* KERNEL_VERSION = "0.0.00027 RSC-4 32-BIT";
#endif


LOUSTATUS Lou_kernel_early_initialization(){
    //if (Initialize_Gdt() != LOUSTATUS_GOOD) LouPanic("Error Setting Gdt",BAD);
    
    UnSetInterruptFlags();
    InitializeStartupInterruptHandleing();
    SetInterruptFlags();
    return LOUSTATUS_GOOD;
}

LOUSTATUS Set_Up_Devices(){
    if(IO_Manager_Init() != LOUSTATUS_GOOD)LouPanic("IO Manager Failed To Start",BAD);

    pata_device_scanc();

    FileSystemScan();
    
    return LOUSTATUS_GOOD;
}

LOUSTATUS Advanced_Kernel_Initialization(){
    //if(InitializeMainInterruptHandleing() == LOUSTATUS_GOOD) LouPanic("Unable To Start Interrupts", BAD);

    return LOUSTATUS_GOOD;
}

LOUSTATUS User_Mode_Initialization(){
    //switch_to_user_Mode();
    return LOUSTATUS_GOOD;
}


KERNEL_ENTRY Lou_kernel_start(){
    STATUS lou_init_stat;
	
    
    
    setup_vga_systems();

	//vga set for debug
	
	LouPrint("Lou Version %s \n", KERNEL_VERSION);
    LouPrint("Hello Im Lousine Getting Things Ready\n");
    

	
    //INITIALIZE IMPORTANT THINGS FOR US LATER
    if(Lou_kernel_early_initialization() != LOUSTATUS_GOOD)LouPanic("Early Initialization Failed",BAD);
    LouPrint("FUBAR\n");        
    asm volatile("hlt");   
    //SETUP DEVICES AND DRIVERS
    if(Set_Up_Devices() != LOUSTATUS_GOOD)LouPanic("Device Setup Failed",BAD);

    if(Advanced_Kernel_Initialization() != LOUSTATUS_GOOD)LouPanic("Final Kernel Initialization Failed",BAD);
		
    if(User_Mode_Initialization() != LOUSTATUS_GOOD)LouPanic("User Mode Initialiation Failed",BAD);
    LouPrint("Hello World\n ");
	while(1);

	LouPanic("error kernel has gone too far terminating system\n",BAD);
	// IF the Kernel returns from this
	// the whole thing crashes crashes
}
