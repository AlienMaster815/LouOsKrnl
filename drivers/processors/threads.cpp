#include <LouDDK.h>
#include <NtAPI.h>
#include "Processors.h"

#define MAX_THREADS 512
#define MAX_CORES 256

typedef enum {
    THREAD_READY = 0,
    THREAD_RUNNING = 1,
    THREAD_TERMINATED = 2,
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



    uint64_t rip;      // Instruction Pointer
    uint64_t cs;       // Code Segment
    uint64_t rflags;   // Flags Register
    uint64_t rsp;      // Stack Pointer
    uint64_t ss;       // Stack Segment
    //uint64_t error;    // Error Code (only if applicable)
} CPUContext;


typedef struct {
    uint64_t KERNEL_STACK;
    bool NewTask;
    CPUContext* cpu_state;
    thread_state_t state;
    int thread_id;
    int core_id; // Core assigned to the thread
    int LastThread;
} thread_t;


UNUSED static thread_t threads[MAX_THREADS];
UNUSED static int current_thread[MAX_CORES] = {0}; // Track current thread per core
UNUSED static int thread_count = 0;

UNUSED static uint16_t core_count = 1;

KERNEL_IMPORT void SetInterruptFlags();
KERNEL_IMPORT void UnSetInterruptFlags();
KERNEL_IMPORT void LouKeRunThreadContext(
    uint64_t Ctex,
    uint64_t CCTex,
    uint64_t StorAddress
);

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
    //implement mr round robin
    for(uint16_t i = CurrentThread ; i <= thread_count; i++){
        if(threads[i].state == THREAD_READY){
            if(threads[CurrentThread].state != THREAD_TERMINATED){
                threads[CurrentThread].state = THREAD_READY;
            }
            threads[i].state = THREAD_RUNNING;
            return i;
        }
    }
    for(uint16_t i = 0; i <= CurrentThread; i++){
        if(threads[i].state == THREAD_READY){
            if(threads[CurrentThread].state != THREAD_TERMINATED){
                threads[CurrentThread].state = THREAD_READY;
            }
            threads[i].state = THREAD_RUNNING;
            return i;
        }
    }

    return 0;

}

LOUDDK_API_ENTRY void local_apic_send_eoi();

mutex_t FOO;
LOUDDK_API_ENTRY uint64_t UpdateThreadManager(uint64_t CpuCurrentState) {
    
    MutexLock(&FOO);
    int Next = find_next_thread(current_thread[get_processor_id()]); 
    threads[current_thread[get_processor_id()]].cpu_state = (CPUContext*)CpuCurrentState;
    threads[Next].cpu_state->rflags = threads[current_thread[get_processor_id()]].cpu_state->rflags;
    if(thread_count == 0){
        local_apic_send_eoi();
        MutexUnlock(&FOO);
        return (uint64_t)CpuCurrentState;
    }

    local_apic_send_eoi();
    current_thread[get_processor_id()] = Next;  
    MutexUnlock(&FOO);
    return (uint64_t)threads[current_thread[get_processor_id()]].cpu_state;
}

LOUDDK_API_ENTRY void RegisterLastKnownStackLocation(CPUContext* State){
    threads[0].cpu_state = State;
}



LOUDDK_API_ENTRY LOUSTATUS InitThreadManager() {
    
    LOUSTATUS Status = LOUSTATUS_GOOD;

    if (!GetNPROC()) return STATUS_UNSUCCESSFUL;

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
LOUDDK_API_ENTRY uint64_t GetThreadContext(
    int Thread
);


KERNEL_IMPORT void ThreadStart(void(*Function)(PVOID), PVOID Parameters);

void ThreadStub(int(*Thread)(PVOID), PVOID FunctionParam);

LOUDDK_API_ENTRY LOUSTATUS LouKeCreateThread(void (*Function)(), PVOID FunctionParameters, uint32_t StackSize) {

        //UnSetInterruptFlags();
        //LouPrint("Switching Context\n");
        void* NewStack = LouMallocEx(StackSize + sizeof(CPUContext), 16);

        UNUSED uint64_t StackTop = (uint64_t)NewStack + StackSize;
        StackTop &= ~(15);

        memset((void*)StackTop, 0, StackSize);

        CPUContext* NewContext = (CPUContext*)(StackTop - sizeof(CPUContext));

        NewContext->rax = 0x00;
        NewContext->rbx = 0x00;
        NewContext->rcx = (uint64_t)Function;
        NewContext->rdx = (uint64_t)FunctionParameters;
        
        NewContext->rdi = 0x00;
        NewContext->rsi = 0x00;
        NewContext->rbp = StackTop;

        NewContext->r8 =  0x00;
        NewContext->r9 =  0x00;
        NewContext->r10 = 0x00;
        NewContext->r11 = 0x00;
        NewContext->r12 = 0x00;
        NewContext->r13 = 0x00;
        NewContext->r14 = 0x00;
        NewContext->r15 = 0x00;
        NewContext->rsp = (uint64_t)StackTop;
        NewContext->rip = (uint64_t)ThreadStub;
        NewContext->rflags = 0x202;

        NewContext->cs = 0x08;
        NewContext->ss = 0x10;
        thread_count++;

        threads[thread_count].cpu_state = NewContext;
        threads[thread_count].state = THREAD_READY;
        //SetInterruptFlags();


    return STATUS_SUCCESS;
}

LOUDDK_API_ENTRY uint64_t GetThreadContext(
    int Thread
){
    return (uint64_t)threads[Thread].cpu_state;
}

unsigned long long get_rsp() {
    unsigned long long rsp_value;
    
    __asm__ __volatile__ (
        "mov %%rsp, %0"
        : "=r" (rsp_value) // Output operand
    );
    
    return rsp_value;
}

LOUDDK_API_ENTRY void ManualContextSwitch(uint64_t Context_1, uint64_t Context_2){

    current_thread[get_processor_id()] = Context_1;

    threads[Context_2].cpu_state = (CPUContext*)(get_rsp() + 120);

    LouKeRunThreadContext(GetThreadContext(Context_1), 0, 0);

}

mutex_t BAR;
void ThreadStub(int(*Thread)(PVOID), PVOID FunctionParam){

    int Result = Thread(FunctionParam);
    MutexLock(&BAR);
    LouPrint("Thread Exited With Code:%d\n", Result);
    MutexLock(&BAR);
    threads[current_thread[get_processor_id()]].state = THREAD_TERMINATED;
    LouFree((uint8_t*)(threads[current_thread[get_processor_id()]].cpu_state));
    while(1);
}