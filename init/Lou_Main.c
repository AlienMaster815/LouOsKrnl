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

char* KERNEL_VERSION = "0.0.00037 RSC-1 Multiboot 2";


#ifdef __x86_64__
char* KERNEL_ARCH = "64-BIT";
#endif
#ifdef __i386__
char* KERNEL_ARCH = "32-BIT";
#endif

LOUSTATUS InitFADT();
LOUSTATUS InitDSDT();
LOUSTATUS InitSSDT();
LOUSTATUS InitSBST();
LOUSTATUS InitSRAT();
LOUSTATUS InitBGRT();
LOUSTATUS InitECDT();
LOUSTATUS InitSLIT();
LOUSTATUS InitMCFG();
LOUSTATUS InitThreadManager();
LOUSTATUS SetUpTimers();


void PS2KeyboardHandler();
void PageFault();
void GPF();
void DoubleFault();
void Clock();
void INTERRUPT(uint8_t interrupt_number);
void NMI();
void BreakPoint();
void DivideByZero();
void OverFlow();
void BoundRange();
void Debug();
void InvalidOpcode();
void FloatDeviceNotAvailable();
void TSS();
void CpOverun();
void SegmentNotPresent();
void StackSegmentFault();
void x87FloatPointError();
void AlignmentCheck();
void MachineCheck();
void SIMDFloatPointException();
void VirtualizationException();
void ControlProtectionException();

void ParseMBootTags(struct multiboot_tag* MBOOT);


LOUSTATUS Lou_kernel_early_initialization(){

    
    InitializeStartupInterruptHandleing();

    RegisterInterruptHandler(DivideByZero, INTERRUPT_SERVICE_ROUTINE_0);
    RegisterInterruptHandler(Debug, INTERRUPT_SERVICE_ROUTINE_1);
    RegisterInterruptHandler(NMI, INTERRUPT_SERVICE_ROUTINE_2);
    RegisterInterruptHandler(BreakPoint, INTERRUPT_SERVICE_ROUTINE_3);
    RegisterInterruptHandler(OverFlow, INTERRUPT_SERVICE_ROUTINE_4);
    RegisterInterruptHandler(BoundRange, INTERRUPT_SERVICE_ROUTINE_5);
    RegisterInterruptHandler(InvalidOpcode, INTERRUPT_SERVICE_ROUTINE_6);
    RegisterInterruptHandler(FloatDeviceNotAvailable, INTERRUPT_SERVICE_ROUTINE_7);
    RegisterInterruptHandler(DoubleFault, INTERRUPT_SERVICE_ROUTINE_8);
    RegisterInterruptHandler(CpOverun, INTERRUPT_SERVICE_ROUTINE_9);
    RegisterInterruptHandler(TSS, INTERRUPT_SERVICE_ROUTINE_10);
    RegisterInterruptHandler(SegmentNotPresent, INTERRUPT_SERVICE_ROUTINE_11);
    RegisterInterruptHandler(StackSegmentFault, INTERRUPT_SERVICE_ROUTINE_12);
    RegisterInterruptHandler(GPF, INTERRUPT_SERVICE_ROUTINE_13);
    RegisterInterruptHandler(PageFault, INTERRUPT_SERVICE_ROUTINE_14);
    RegisterInterruptHandler(x87FloatPointError, INTERRUPT_SERVICE_ROUTINE_16);
    RegisterInterruptHandler(AlignmentCheck, INTERRUPT_SERVICE_ROUTINE_17);
    RegisterInterruptHandler(MachineCheck, INTERRUPT_SERVICE_ROUTINE_18);
    RegisterInterruptHandler(SIMDFloatPointException, INTERRUPT_SERVICE_ROUTINE_19);
    RegisterInterruptHandler(VirtualizationException, INTERRUPT_SERVICE_ROUTINE_20);
    RegisterInterruptHandler(ControlProtectionException, INTERRUPT_SERVICE_ROUTINE_21);


    RegisterInterruptHandler(PS2KeyboardHandler, INTERRUPT_SERVICE_ROUTINE_33);
    RegisterInterruptHandler(Clock, INTERRUPT_SERVICE_ROUTINE_32);



    SetInterruptFlags();


    uint8_t* FO = LouMalloc(sizeof(uint8_t));

    SetUpTimers();

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
    LOUSTATUS Status = LOUSTATUS_GOOD;
    //if (InitializeMainInterruptHandleing() != LOUSTATUS_GOOD)LouPrint("Unable To Start APIC System\n");
    //if(LOUSTATUS_GOOD != InitFADT())LouPrint("Unable To Start FADT Handleing\n");
    //if(LOUSTATUS_GOOD != InitDSDT())LouPrint("Unable To Start DSDT Handleing\n");
    //if(LOUSTATUS_GOOD != InitSSDT())LouPrint("Unable To Start SSDT Handleing\n");
    //if(LOUSTATUS_GOOD != InitSBST())LouPrint("Unable To Start SBST Handleing\n");
    //if(LOUSTATUS_GOOD != InitSRAT())LouPrint("Unable To Start SRAT Handleing\n");
    //if(LOUSTATUS_GOOD != InitBGRT())LouPrint("Unable To Start BGRT Handleing\n");
    //if(LOUSTATUS_GOOD != InitECDT())LouPrint("Unable To Start ECDT Handleing\n");
    //if(LOUSTATUS_GOOD != InitSLIT())LouPrint("Unable To Start SLIT Handleing\n");
    //if(LOUSTATUS_GOOD != InitMCFG())LouPrint("Unable To Start MCFG Handleing\n");
    
    //if (LOUSTATUS_GOOD != InitThreadManager())LouPrint("SHIT!!!:I Hope You Hate Efficency: No Thread Management\n");

    return Status;
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

    if (Advanced_Kernel_Initialization() != LOUSTATUS_GOOD)LouPrint("WARNING: CertainFeatures Are Not Available\n");


    //SETUP DEVICES AND DRIVERS
    //if(Set_Up_Devices() != LOUSTATUS_GOOD)LouPanic("Device Setup Failed",BAD);

    //if(Advanced_Kernel_Initialization() != LOUSTATUS_GOOD)LouPanic("Final Kernel Initialization Failed",BAD);
		

   // Initialize User Mode
   // if(User_Mode_Initialization() != LOUSTATUS_GOOD)LouPanic("User Mode Initialiation Failed",BAD);


    LouPrint("Hello World\n");

    while (1) {
        asm("hlt");
    }


	LouPanic("error kernel has gone too far terminating system\n",BAD);
	// IF the Kernel returns from this
	// the whole thing crashes
}