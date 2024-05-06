#ifdef __x86_64__
#include <LouAPI.h>
#include <bootloader/grub/multiboot2.h>
#endif
#ifdef __i386__
#include <kernel/errors.h>
#include <kernel/kernel.h>
#include <KernelAPI/IOManager.h>
#include <kernel/interrupts.h>
#include <drivers/Lou_drivers/FileSystem.h>
#include <stdio.h>
#include <drivers/display/vga.h>

extern LOUSTATUS InitializeStartupInterruptHandleing();

extern void SetInterruptFlags();
extern void UnSetInterruptFlags();

#endif

uintptr_t RSP_Current;
uintptr_t RBP_Current;

/* Tyler Grenier 9/21/23 9:56 PM
-- Started the file with the main
-- functions to get us going along 
-- with allocation functions
*/

//NOTE: There is a bug int the code for getting the gen type
//      integer for processors with string literals later change
//      the code to add a 0 place where the char is to make it
//      the right 10 place value

char* KERNEL_VERSION = "0.0.00036 RSC-1 Multiboot 2";


#ifdef __x86_64__
char* KERNEL_ARCH = "64-BIT";
#endif
#ifdef __i386__
char* KERNEL_ARCH = "32-BIT";
#endif

void PS2KeyboardHandler();
void PageFault();
void GPF();
void DoubleFault();
void OpCode();
void Clock();
void INTERRUPT(uint8_t interrupt_number);

void ParseMBootTags(struct multiboot_tag* MBOOT);



LOUSTATUS Lou_kernel_early_initialization(){

    InitializeStartupInterruptHandleing();

    RegisterInterruptHandler(DoubleFault, INTERRUPT_SERVICE_ROUTINE_8);
    RegisterInterruptHandler(GPF, INTERRUPT_SERVICE_ROUTINE_13);
    RegisterInterruptHandler(OpCode, INTERRUPT_SERVICE_ROUTINE_6);
    RegisterInterruptHandler(PageFault, INTERRUPT_SERVICE_ROUTINE_14);
    RegisterInterruptHandler(PS2KeyboardHandler, INTERRUPT_SERVICE_ROUTINE_33);
    RegisterInterruptHandler(Clock, INTERRUPT_SERVICE_ROUTINE_32);

    SetInterruptFlags();
 
    uint8_t* FO = LouMalloc(sizeof(uint8_t));


    DeterminCPU();
    return LOUSTATUS_GOOD;
}

LOUSTATUS Set_Up_Devices(){

    //pata_device_scanc();

    //FileSystemSetup();
    
    PCI_Setup();

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


void* LouMalloc(size_t BytesToAllocate);

KERNEL_ENTRY Lou_kernel_start(uint32_t foo){
    
    struct multiboot_tag* mboot = (struct multiboot_tag*)(uintptr_t)(foo + 8);
    ParseMBootTags(mboot);
    setup_vga_systems();

	//vga set for debug
	

	LouPrint("Lou Version %s %s\n", KERNEL_VERSION ,KERNEL_ARCH);
    LouPrint("Hello Im Lousine Getting Things Ready\n");
    

    //INITIALIZE IMPORTANT THINGS FOR US LATER
    if(Lou_kernel_early_initialization() != LOUSTATUS_GOOD)LouPanic("Early Initialization Failed",BAD);

    //SETUP DEVICES AND DRIVERS
    if(Set_Up_Devices() != LOUSTATUS_GOOD)LouPanic("Device Setup Failed",BAD);

    //if(Advanced_Kernel_Initialization() != LOUSTATUS_GOOD)LouPanic("Final Kernel Initialization Failed",BAD);
		

   // Initialize User Mode
   // if(User_Mode_Initialization() != LOUSTATUS_GOOD)LouPanic("User Mode Initialiation Failed",BAD);

    uint8_t* fucky = (uint8_t*)LouMalloc(sizeof(uint8_t));

    LouFree(fucky, sizeof(uint8_t));

    LouPrint("Hello World\n");

    while (1) {
        asm("hlt");
    }


	LouPanic("error kernel has gone too far terminating system\n",BAD);
	// IF the Kernel returns from this
	// the whole thing crashes
}