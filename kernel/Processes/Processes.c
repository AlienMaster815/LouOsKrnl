#include <LouAPI.h>


static uint8_t PspHostSiloGlobals[832]; 


int64_t PsIsServerSilo(void* arg1) {
    // If the input pointer is not null, check the value at the offset 0x5d0
    if (arg1 != NULL) {
        bool result = *((uint8_t*)arg1 + 0x5d0) != 0;
        return result;
    }
    
    // If the input pointer is null, return true (1)
    return 1;
}

void* PsGetCurrentServerSiloGlobals() {
    // Retrieve the gsbase value (current processor's GS segment base address)
    uint64_t gsbase = __readgsqword(0);;
    
    // Check if the value at offset 0x1A0 is 0
    if (*(void**)((uintptr_t)gsbase + 0x1A0) == 0) {
        void* rax = *(void**)((uintptr_t)gsbase + 0x188);
        void* rcx = *(void**)((uintptr_t)rax + 0x658);
        
        if (rcx == (void*)-3) {
            rcx = *(void**)((uintptr_t)(*(void**)((uintptr_t)rax + 0x220)) + 0x870);
        } else if (rcx != NULL) {
            // Loop through until a server silo is found
            while (!PsIsServerSilo(rcx)) {
                rcx = *(void**)((uintptr_t)rcx + 0x508);
            }
        }
        
        // Return the silo's globals if one is found
        if (rcx != NULL) {
            return *(void**)((uintptr_t)rcx + 0x5D0);
        }
    }
    
    // If no server silo globals found, return PspHostSiloGlobals
    return &PspHostSiloGlobals;
}

