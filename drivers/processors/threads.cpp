#include <LouDDK.h>
#include <NtAPI.h>
#include "Processors.h"

#define MAX_THREADS 6550
#define MAX_CORES 256

typedef enum {
    THREAD_READY = 1,
    THREAD_RUNNING = 2,
    THREAD_TERMINATED = 0,
} thread_state_t;

typedef struct  __attribute__((packed)) _CPUContext{
    // General-Purpose Registers    
    uint64_t rax;
    uint64_t rbx;
    uint64_t rcx;
    uint64_t rdx;
    
    uint64_t rbp;
    uint64_t rsi;
    uint64_t rdi;

    uint64_t r8;
    uint64_t r9;
    uint64_t r10;
    uint64_t r11;
    uint64_t r12;
    uint64_t r13;
    uint64_t r14;
    uint64_t r15;



    uint64_t rip;       // Instruction Pointer
    uint64_t cs;        // Code Segment
    uint64_t rflags;    // Flags Register
    uint64_t rsp;
    uint64_t ss;
} CPUContext;


typedef struct {
    uint64_t KERNEL_STACK;
    bool NewTask;
    CPUContext* cpu_state;
    thread_state_t state;
    int thread_id;
    int core_id; // Core assigned to the thread
} thread_t;


UNUSED static thread_t threads[MAX_THREADS];
UNUSED static int current_thread[MAX_CORES]; // Track current thread per core
UNUSED static int thread_count = 1;

UNUSED static uint16_t core_count = 1;

KERNEL_IMPORT void SetInterruptFlags();
KERNEL_IMPORT void UnSetInterruptFlags();


static inline uint32_t get_processor_id() {
    uint32_t eax, ebx, ecx, edx;
    eax = 1; // Processor info and feature bits
    __asm__ volatile(
        "cpuid"
        : "=b" (ebx), "=d" (edx), "=c" (ecx)
        : "a" (eax)
    );
    uint32_t processor_id = ebx >> 24;
    return processor_id;
}

KERNEL_IMPORT void local_apic_send_eoi();


UNUSED static uint32_t timeQuantum[MAX_CORES] = {0}; // Array to track the load on each core

// Placeholder function for finding the next thread to run across all cores
static inline int find_next_thread(int CurrentThread) {

    return 0;
}

LOUDDK_API_ENTRY void local_apic_send_eoi();

LOUDDK_API_ENTRY uint64_t UpdateThreadManager(uint64_t CpuCurrentState) {
    local_apic_send_eoi();
    return CpuCurrentState;
}

LOUDDK_API_ENTRY void RegisterLastKnownStackLocation(CPUContext* State){
    threads[current_thread[get_processor_id()]].cpu_state = State;
}



LOUDDK_API_ENTRY LOUSTATUS InitThreadManager() {
    
    LOUSTATUS Status = LOUSTATUS_GOOD;

    if (!GetNPROC()) return STATUS_UNSUCCESSFUL;

    core_count = 1;
    LouPrint("Thread Manager Starting\nNumber Of Processors: %d\n", GetNPROC());



    LouPrint("Initialized Processor:%d as Thread 0\n", get_processor_id());

    LouPrint("Thread Manager Successfully Started\n");

    return Status;
}


LOUDDK_API_ENTRY VOID LouKeDestroyThread() {
	UnSetInterruptFlags();

    while(1);

    SetInterruptFlags();
}

LOUDDK_API_ENTRY LOUSTATUS LouKeCreateThread(void (*Function)(), PVOID FunctionParameters, uint32_t StackSize) {

    //UnSetInterruptFlags();
    //LouPrint("Switching Context\n");
    void* NewStack = LouMallocEx(StackSize + sizeof(CPUContext), 16);

    UNUSED uint64_t StackTop = (uint64_t)NewStack + StackSize;
    StackTop &= ~(15);

    memset((void*)StackTop, 0, StackSize + sizeof(CPUContext));

    CPUContext* NewContext = (CPUContext*)StackTop;

    NewContext->rax = 0x00;
    NewContext->rbx = 0x00;
    NewContext->rcx = 0x00;
    NewContext->rdx = 0x00;
    
    NewContext->rdi = 0x00;
    NewContext->rsi = 0x00;
    NewContext->rbp = 0x00;

    NewContext->r8 = 0x00;
    NewContext->r9 = 0x00;
    NewContext->r10 = 0x00;
    NewContext->r11 = 0x00;
    NewContext->r12 = 0x00;
    NewContext->r13 = 0x00;
    NewContext->r14 = 0x00;
    NewContext->r15 = 0x00;

    NewContext->rbp = (uint64_t)0x00;
    NewContext->rip = (uint64_t)Function;
    NewContext->rflags = 0x202;


    threads[current_thread[get_processor_id()]].cpu_state = NewContext;

    //ContextLiftoff(NewContext);


    LouPrint("Done Switching Context\n");
    return STATUS_SUCCESS;
}

LOUDDK_API_ENTRY void LouKeSwitchTask(uint32_t CurrentThread, uint32_t ThreadToSwitch){


    
}