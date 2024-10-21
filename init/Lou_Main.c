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

string KERNEL_VERSION = "0.3.01 RSC-1 Multiboot 2 With EFI Support, Moudle Support & User Mode";

#ifdef __x86_64__
string KERNEL_ARCH = "64-BIT";
#endif
#ifdef __i386__
sring KERNEL_ARCH = "32-BIT";
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
void PS2MouseHandler();
void PageFault();
void GPF();
void DoubleFault();
void Clock(uint64_t SavedState);
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

void InitPreLoadedModules();
void ParseMBootTags(struct multiboot_tag* MBOOT);
void CreateNewPageSystem();
uint64_t GetRamSize();
void InitializeSystemCalls();
void SYSCALLS();
void InitializePs2Mouse();
void initialize_ps2_keyboard();

LOUSTATUS InitializeDirecAccess();
LOUSTATUS InitializeDynamicHardwareInterruptHandleing();
void RegisterHardwareInterruptHandler(void(*InterruptHandler)(), uint8_t PIN);
void initializeInterruptRouter();

void HardwareInterruptManager();

void InitializeGenericTables();

void InitializeVesaSystem();

void ListUsedAddresses();

uint64_t getTrampolineAddress();

PWINDHANDLE HWind;

void AdvancedInterruptRouter(uint64_t InterruptNumber);
uint8_t GetTotalHardwareInterrupts();

LOUSTATUS Lou_kernel_early_initialization(){

    //basic kernel initialization for IR Exceptions to keep the guru away
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
    RegisterInterruptHandler((void(*))getTrampolineAddress(), 0x50);

    RegisterInterruptHandler(HardwareInterruptManager, 33);
    RegisterInterruptHandler(HardwareInterruptManager, 44);

    SetUpTimers();
    DeterminCPU();

    return LOUSTATUS_GOOD;
}

void StorPortInitializeAllDevices();

int InitKThread();
int TestLoop2();

LOUSTATUS Set_Up_Devices(){
    //initialize_ps2_keyboard();
    //InitializePs2Mouse();
    //PCI_Setup();
    //FileSystemSetup();

    return LOUSTATUS_GOOD;
}
void InitializeDeviceManager();
LOUSTATUS LouKeMallocAdvancedKernelInterruptHandleing();

void Advanced_Kernel_Initialization(){
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
    RegisterHardwareInterruptHandler(PS2MouseHandler, 12);
    LouKeMallocAdvancedKernelInterruptHandleing();


    for(uint8_t i = GetTotalHardwareInterrupts() + 0x20; i < 0x50; i++){
        RegisterInterruptHandler(AdvancedInterruptRouter,i);
    }

    if (LOUSTATUS_GOOD != InitThreadManager())LouPrint("SHIT!!!:I Hope You Hate Efficency: No Thread Management\n");
    LouKeSetIrql(PASSIVE_LEVEL, 0x00);
    SetInterruptFlags();
}

bool LouMapAddress(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, uint64_t PageSize);

void LouKeDestroyThread();

void TestFontFunction();
extern void MachineCodeDebug(uint64_t FOO);

static PWINDHANDLE TaskBarHandle = 0;

void StartDesktop(){
    WINDOW_CHARECTERISTICS TaskbarCharecteristics;
    TaskbarCharecteristics.Type = CANVAS_WINDOW;
    TaskbarCharecteristics.WindowName = "TaskBar";

    BUTTON_CHARECTERISTICS ButtonCharecteristics;
    ButtonCharecteristics.Type = PUSH_TEXT_BUTTON;
    ButtonCharecteristics.IsButton3D = true;
    ButtonCharecteristics.ButtonName = "StartButton";
    ButtonCharecteristics.ButtonText = "Start";

    TaskBarHandle = LouCreateCanvasBuffer(
        0 , GetScreenBufferHeight() - 30, 
        GetScreenBufferWidth() , 30,
        0x00,
        &TaskbarCharecteristics
    );

    LouChangeCanvasBufferColor(
        TaskBarHandle,
        198,
        198,
        198
    );

    LouCreateButton(
        0 + 2, GetScreenBufferHeight() - 28, 
        50 - 2, 25,
        (uintptr_t)TaskBarHandle,
        &ButtonCharecteristics
    );

}

void StartDebugger(){
    
    WINDOW_CHARECTERISTICS Charecteristics;

    Charecteristics.Type = TEXT_WINDOW;
    Charecteristics.WindowName = "louoskrnl.exe";

    HWind = LouCreateWindow(
        10, 10,
        640, 480,
        //GetScreenBufferWidth(),GetScreenBufferHeight(),
        0x00, 
        &Charecteristics
    );
    AttatchWindowToKrnlDebug(HWind);
}

void LouKeRunOnNewStack(void (*func)(void), void* FunctionParameters, size_t stack_size);

void LouKeSwitchContext(void (*Function)(), uint64_t StackSize);

void LookForStorageDevices();

void LouKeRunThreadContext(
    uint64_t Ctex,
    uint64_t CCTex
);

uint64_t GetThreadContext(
    int Thread
);



void read_rtc();
void ManualContextSwitch(uint64_t Context1, uint64_t Context_2);
void LouKeMapPciMemory();
bool LouKeMapEfiMemory();
void ListAllocatedPorts();
void ScanTheRestOfHarware();
void LouKeHandleSystemIsBios();

static mutex_t SmpStartupMutex;

KERNEL_ENTRY LouKernelSmpStart(){
    LouPrint("Processor Succesfully Idleing\n");
    while(1){
        asm ("hlt"); //spin the cpus untill context assignement
    }
}

LOUSTATUS InitilaizeUserMode(){


    return STATUS_SUCCESS;
}

void UsrJmp(uint64_t Stack, uint64_t Entry);

bool LouMapAddressEx(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, bool LargePage);

static bool SystemIsEfi = false;
KERNEL_ENTRY Lou_kernel_start(
    uint32_t MBOOT
){

    struct multiboot_tag* mboot = (struct multiboot_tag*)(uintptr_t)(MBOOT + 8);
    ParseMBootTags(mboot);
    //vga set for debug
    if(!LouKeMapEfiMemory()){
        LouKeHandleSystemIsBios();
    }
    LouKeMapPciMemory();
    setup_vga_systems();

	LouPrint("Lou Version %s %s\n", KERNEL_VERSION ,KERNEL_ARCH);
    LouPrint("Hello Im Lousine Getting Things Ready\n");

    //INITIALIZE IMPORTANT THINGS FOR US LATER
    Lou_kernel_early_initialization();
    
    InitializeGenericTables();

    Advanced_Kernel_Initialization();

    //SETUP DEVICES AND DRIVERS
    LookForStorageDevices();
    FileSystemSetup();
    //ScanTheRestOfHarware();
    uint64_t InitEntry = (uint64_t)LouKeLoadPeExecutable("C:/ANNYA/ANNYAEXP.EXE");

    LouPrint("Lousine Kernel Video Mode:%dx%d\n", GetScreenBufferWidth(), GetScreenBufferHeight());
    LouPrint("Hello World\n");
    
    uint64_t UserStackP = (uint64_t)LouMalloc(MEGABYTE_PAGE);
    LouKeMapContinuousMemmoryBlock(UserStackP, UserStackP, MEGABYTE_PAGE, PAGE_USER | PAGE_PRESENT | WRITEABLE_PAGE);

    UsrJmp(UserStackP + MEGABYTE_PAGE, InitEntry);

    while(1){
        asm("hlt"); //spin the cpus until we set up user mode
    }

	LouPanic("error kernel has gone too far terminating system\n",BAD);
	// IF the Kernel returns from this
	// the whole thing crashes
}
