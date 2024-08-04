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



char* KERNEL_VERSION = "0.0.438 RSC-1 Multiboot 2";


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

void LastSataRun();

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
void CookieCheckFail();

void ParseMBootTags(struct multiboot_tag* MBOOT);
void CreateNewPageSystem();
uint64_t GetRamSize();
void InitializeSystemCalls();
void SYSCALLS();

LOUSTATUS InitializeDirecAccess();
LOUSTATUS InitializeDynamicHardwareInterruptHandleing();
void RegisterHardwareInterruptHandler(void(*InterruptHandler)(), uint8_t PIN);
void initializeInterruptRouter();

void HardwareInterruptManager();

void InitializeGenericTables();

void InitializeVesaSystem();

LOUSTATUS Lou_kernel_early_initialization(){

    //basic kernel initialization for IR Exseptions
    InitializeStartupInterruptHandleing();
    initializeInterruptRouter();
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
    RegisterInterruptHandler(SYSCALLS, 0x80);
    RegisterInterruptHandler(Clock, INTERRUPT_SERVICE_ROUTINE_32);
    RegisterInterruptHandler(CookieCheckFail, 0x29);
    //for(uint8_t i = 33; i < 48; i++){
        RegisterInterruptHandler(HardwareInterruptManager, 33);
    //}



    SetUpTimers();
    DeterminCPU();

    return LOUSTATUS_GOOD;
}

void UpdateDeviceInformationTable();

LOUSTATUS Set_Up_Devices(){

    PCI_Setup();
    //LastSataRun();
    UpdateDeviceInformationTable();
    //FileSystemSetup();

    return LOUSTATUS_GOOD;
}

LOUSTATUS Advanced_Kernel_Initialization(){
    LOUSTATUS Status = LOUSTATUS_GOOD;
    //if(LOUSTATUS_GOOD != InitFADT())LouPrint("Unable To Start FADT Handleing\n");
    //if(LOUSTATUS_GOOD != InitDSDT())LouPrint("Unable To Start DSDT Handleing\n");
    //if(LOUSTATUS_GOOD != InitSSDT())LouPrint("Unable To Start SSDT Handleing\n");
    //if(LOUSTATUS_GOOD != InitSBST())LouPrint("Unable To Start SBST Handleing\n");
    //if(LOUSTATUS_GOOD != InitSRAT())LouPrint("Unable To Start SRAT Handleing\n");
    //if(LOUSTATUS_GOOD != InitBGRT())LouPrint("Unable To Start BGRT Handleing\n");
    //if(LOUSTATUS_GOOD != InitECDT())LouPrint("Unable To Start ECDT Handleing\n");
    //if(LOUSTATUS_GOOD != InitSLIT())LouPrint("Unable To Start SLIT Handleing\n");
    //if(LOUSTATUS_GOOD != InitMCFG())LouPrint("Unable To Start MCFG Handleing\n");
    if (InitializeMainInterruptHandleing() != LOUSTATUS_GOOD)LouPrint("Unable To Start APIC System\n");
    InitializeDynamicHardwareInterruptHandleing();
    RegisterHardwareInterruptHandler(PS2KeyboardHandler, 1);

    if (LOUSTATUS_GOOD != InitThreadManager())LouPrint("SHIT!!!:I Hope You Hate Efficency: No Thread Management\n");

    SetInterruptFlags();

    return Status;
}

LOUSTATUS User_Mode_Initialization(){
    //switch_to_user_Mode();
    return LOUSTATUS_GOOD;
}

 bool LouMapAddress(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize);

LOUSTATUS LouKeCreateThread(void* Function,void* FunctionParameters, uint32_t StackSize);
void TestLoop1();

bool LouCreateWindow(uint16_t x, uint16_t y,
                     uint16_t width, uint16_t height){


    return true;
}

KERNEL_ENTRY Lou_kernel_start(uint32_t foo, uint32_t Apic){
    
	//vga set for debug
	struct multiboot_tag* mboot = (struct multiboot_tag*)(uintptr_t)(foo + 8);
    ParseMBootTags(mboot);

    setup_vga_systems();
    /*
	LouPrint("Lou Version %s %s\n", KERNEL_VERSION ,KERNEL_ARCH);
    LouPrint("Hello Im Lousine Getting Things Ready\n");
    



    //INITIALIZE IMPORTANT THINGS FOR US LATER
    if(Lou_kernel_early_initialization() != LOUSTATUS_GOOD)LouPanic("Early Initialization Failed",BAD);
    InitializeGenericTables();
    if (Advanced_Kernel_Initialization() != LOUSTATUS_GOOD)LouPrint("WARNING: CertainFeatures Are Not Available\n");

    //SETUP DEVICES AND DRIVERS
    if(Set_Up_Devices() != LOUSTATUS_GOOD)LouPanic("Device Setup Failed",BAD);		
    
    // Initialize User Mode
    // if(User_Mode_Initialization() != LOUSTATUS_GOOD)LouPanic("User Mode Initialiation Failed",BAD);

    LouPrint("Hello World\n");
    
    //TODO:Creaate A trim function that takes origninal size and size after trim and trim the end off

    //uint16_t* FOOBAR = LouMalloc(2*KILOBYTE);

    //ReadDrive(1,0,0,1,FOOBAR);
    */
    while (1) {
        asm("hlt");
    }

	LouPanic("error kernel has gone too far terminating system\n",BAD);
	// IF the Kernel returns from this
	// the whole thing crashes
}
/*
void TestLoop1() {
	while (1) {
		LouPrint("Thread 1 Execution\n");
	}
}

void TestLoop2() {
	while (1) {
		LouPrint("Thread 2 Execution\n");
	}
}
*/