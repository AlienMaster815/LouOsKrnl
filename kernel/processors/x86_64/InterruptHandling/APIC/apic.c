#include <kernel/errors.h>
#include <stdlib.h>
#include <kernel/ports.h>

uint8_t IdentifyApicVersion(){
    // IA32_APICBASE MSR
    
    #define MSR_IA32_APICBASE 0x1B

    // Read the IA32_APICBASE MSR
    #ifdef __x86_64__    
    uint64_t apic_base = read_msr(MSR_IA32_APICBASE);

    // Extract the version from bits 16 to 23
    uint8_t version = (apic_base >> 16) & 0xFF;
    
    return version;
    #endif
    
    return 0;
}

extern void SetApicTimerOneShot(uint64_t Timer);

//tailcall
void SetApicTimer(uint64_t Timer, uint64_t mode) {

    if (mode == 1) {
        SetApicTimerOneShot(Timer);
    }

    else if(mode == 2) {

    }

}

