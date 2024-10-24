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
//void TSS();
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
uint64_t GetGdtBase();
void FlushTss();


/*

typedef struct {
    uint16_t limit_low;      // The lower 16 bits of the limit
    uint16_t base_low;       // The lower 16 bits of the base address
    uint8_t base_middle;     // The next 8 bits of the base address
    uint8_t access;          // Access flags and type
    uint8_t granularity;     // Granularity flags and the upper 4 bits of the limit
    uint8_t base_high;       // The upper 8 bits of the base address
}GDT_ENTRY;

typedef struct {
    GDT_ENTRY NULL_DATA;
    GDT_ENTRY KERNEL_CODE;
    GDT_ENTRY KERNEL_DATA;
    GDT_ENTRY USER_CODE;
    GDT_ENTRY USER_DATA;
    GDT_ENTRY TSS;
}GDT;
*/

typedef struct __attribute__((packed)) _TSS{
    uint32_t RESVD;
    uint32_t RSP0L;
    uint32_t RSP0H;
    uint32_t RSP1L;
    uint32_t RSP1H;
    uint32_t RSP2L;
    uint32_t RSP2H;
    uint32_t RSV2;
    uint32_t RSV3;
    uint32_t IST1L;
    uint32_t IST1H;
    uint32_t IST2L;
    uint32_t IST2H;
    uint32_t IST3L;
    uint32_t IST3H;
    uint32_t IST4L;
    uint32_t IST4H;
    uint32_t IST5L;
    uint32_t IST5H;
    uint32_t IST6L;
    uint32_t IST6H;
    uint32_t IST7L;
    uint32_t IST7H;
    uint32_t RSV4;
    uint32_t RSV5;
    uint16_t RSV6;
    uint16_t IOPB;
}TSS, * PTSS;

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
    //RegisterInterruptHandler(TSS, INTERRUPT_SERVICE_ROUTINE_10);
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
    if(LOUSTATUS_GOOD != InitFADT())LouPrint("Unable To Start FADT Handleing\n");
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
    //LouKeSetIrql(HIGH_LEVEL, 0x00);
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
        0, 0,
        GetScreenBufferWidth() ,GetScreenBufferHeight() ,
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

    //LouKeLoadUserModule("C:/ANNYA/SYSTEM64/LOUDLL.DLL");
    //LouKeLoadUserModule("C:/ANNYA/USER32.DLL");

    return STATUS_SUCCESS;
}

void UsrJmp(uint64_t Stack, uint64_t Entry);

bool LouMapAddressEx(uint64_t PAddress, uint64_t VAddress, uint64_t FLAGS, bool LargePage);

void SYSCALLS(uint64_t Call, uint64_t Data, uint64_t SystemEmulation);

void PrintTest(){
    while(1){
        LouPrint("FOO ");
    }
}

void SetContext(uint64_t Context, uint64_t Function);


typedef struct  __attribute__((packed)) _CPUContext{

    uint64_t rip;       // Instruction Pointer (user-mode entry point)
    uint64_t cs;        // Code Segment (should be set to user mode, typically 0x1B for x86_64)
    uint64_t rflags;    // Flags Register (set the interrupt flag, clear privileged bits)
    
    uint64_t rsp;       // Stack Pointer (points to user-mode stack)
    uint64_t ss;        // Stack Segment (should be user mode, typically 0x23 for x86_64)

} CPUContext;

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

    //FlushTss();

    //SETUP DEVICES AND DRIVERS
    LookForStorageDevices();
    FileSystemSetup();
    ScanTheRestOfHarware();

    InitilaizeUserMode();
    //uint64_t InitEntry = (uint64_t)LouKeLoadPeExecutable("C:/ANNYA/ANNYAEXP.EXE");

    LouPrint("Lousine Kernel Video Mode:%dx%d\n", GetScreenBufferWidth(), GetScreenBufferHeight());
    LouPrint("Hello World\n");

    //string Wallpaper = "C:/ANNYA/PROFILES/DEFAULT/BG/ANNYA.BMP";

    //uint64_t Data = (uint64_t)Wallpaper;

    //LouCALL(LOULOADFILE, (uint64_t)&Data, 0);

    //LouPrint("Data Is:%h\n", Data);
    //while(1);

    //uint64_t UserStackP = (uint64_t)LouMalloc(MEGABYTE_PAGE);
    //uint64_t UserStackV = (uint64_t)LouVMalloc(MEGABYTE_PAGE);
        
    //LouKeMapContinuousMemmoryBlock(UserStackP, UserStackV, MEGABYTE_PAGE, PAGE_USER | PAGE_PRESENT | WRITEABLE_PAGE);


    while(1){
        asm("hlt"); //spin the cpus until we set up user mode
    }

	LouPanic("error kernel has gone too far terminating system\n",BAD);
	// IF the Kernel returns from this
	// the whole thing crashes
}
