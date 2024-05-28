#include "apic.h"

//I appologise if this is messy but at this point i just need this to work
// I WILL FIX IT LATER BEFORE 1.0

#define CPUID_LEAF_TSC 0x15
#define APIC_BASE 0xFEE00000
#define APIC_DIVIDE_CONFIG 0x3E0


APIC::APIC_TIMER::APIC_TIMER() {
    IsX6Supported = IsX6CpuIdSupported();
}


APIC::APIC_TIMER::~APIC_TIMER() {

}

void APIC::APIC_TIMER::ApicSetTimer() {

    //long double Frequency = GetApicTimerFrequency();

    //if (Frequency == 0.0) {
    //    LouPrint("ERROR Getting Frequency\n");
    //}




}

void APIC::APIC_TIMER::ApicEnableTimer() {

    ApicSetTimer();

    if (IsX6Supported) {
        LouPrint("X6 Instruction Supported\n");
  
    
    }
    else {
        LouPrint("X6 Instruction Not Supported\n");

    }
}

BOOLEAN APIC::APIC_TIMER::IsX6CpuIdSupported() {
    uint32_t eax, ebx, ecx, edx;

    // CPUID with EAX=0x06
    __asm__ __volatile__(
        "cpuid"
        : "=a" (eax), "=b" (ebx), "=c" (ecx), "=d" (edx)
        : "a" (0x06)
    );

    // Check if ARAT (Always Running APIC Timer) is supported
    return (eax & (1 << 2)) != 0;
}



long double GetApicClock();

// Function to calculate APIC timer frequency
long double APIC::APIC_TIMER::GetApicTimerFrequency() {
    return GetApicClock();
}

void sleep_apic(uint64_t Milliseconds) {

}


long double GetApicClock() {
    // Set APIC timer to a known initial count (e.g., 0xFFFFFFFF)
    uint32_t initial_count = 0xFFFFFFFF;
    WRITE_REGISTER_ULONG(LVT_INITIAL_COUNT_REGISTER, initial_count);

    // Read initial APIC timer count
    uint32_t start_apic = READ_REGISTER_ULONG(LVT_CURRENT_COUNT_REGISTER);

    // Wait for a fixed period (e.g., 1 second)
    //sleep_Apic(10);

    // Read final APIC timer count
    uint32_t end_apic = READ_REGISTER_ULONG(LVT_CURRENT_COUNT_REGISTER);

    // Calculate elapsed APIC timer ticks
    uint32_t elapsed_apic = start_apic - end_apic;

    // Calculate the number of ticks per second
    long double ticks_per_second = (long double)(10 * elapsed_apic);

    return ticks_per_second;
}