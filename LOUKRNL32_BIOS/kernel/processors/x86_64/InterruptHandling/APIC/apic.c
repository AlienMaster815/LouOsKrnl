#include <kernel/errors.h>
#include <stdlib.h>
#include <kernel/ports.h>

uint8_t IdentifyApicVersion(){
    // IA32_APICBASE MSR
    
    #define MSR_IA32_APICBASE 0x1B

    // Read the IA32_APICBASE MSR
    uint32_t apic_base; //= read_msr(MSR_IA32_APICBASE);

    // Extract the version from bits 16 to 23
    uint8_t version = (apic_base >> 16) & 0xFF;
    
    return version;
}

void GetApicInformation(uint8_t version){
    
}

void GatherInterruptDiscriptorTableDependencies(uint8_t version){
    
}

void StartMainAdvancedProgramableInterruptController(uint8_t version){
    
}

uint8_t GetNumberOfOnboardLocalAdvancedProgramableInterruptControllers(uint8_t version){
    return 0;
}

void StartLocalAdvancedProgramableInterruptController(uint8_t version, uint8_t localApicNumber){
    
}

void StartIOAdvancedProgramableInterruptController(uint8_t version){
    
}

void ConfigureMainAdvancedProgramableInterruptController(uint8_t version){
    
}

void ConfigureLocalAdvancedProgramableInterruptController(uint8_t version, uint8_t localApicNumber){
    
}

void ConfigureIOAdvancedProgramableInterruptController(uint8_t version){
    
}
