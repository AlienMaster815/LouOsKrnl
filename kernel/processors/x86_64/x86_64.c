#include <LouAPI.h>

void DeterminCPU() {

    unsigned int eax, ebx, ecx, edx;
    char brand[49]; // Enough space for the 48-character brand string + null terminator

    LouPrint("Detecting CPU\n");

    // Initial CPUID call
    cpuid(1, &eax, &ebx, &ecx, &edx);

    unsigned int family = (eax >> 8) & 0xF;
    unsigned int model = (eax >> 4) & 0xF;
    unsigned int stepping = eax & 0xF;

    //LouPrint("Family: %d\nModel: %d\nStepping: %d\n", family, model, stepping);

    // Check highest function supported
    cpuid(0x80000000, &eax, &ebx, &ecx, &edx);

    if (eax >= 0x80000004) {
        // Retrieve and assemble the processor brand string
        unsigned int* brand_part = (unsigned int*)brand;
        for (unsigned int i = 0; i < 3; ++i) {
            cpuid(0x80000002 + i, &eax, &ebx, &ecx, &edx);
            brand_part[i * 4 + 0] = eax;
            brand_part[i * 4 + 1] = ebx;
            brand_part[i * 4 + 2] = ecx;
            brand_part[i * 4 + 3] = edx;
        }
        brand[48] = '\0'; // Ensure null-termination

        // Print the full brand string
        LouPrint("Processor Brand: %s\n", brand);
    }




    string VenCheck = brand;
    CPUFullString = VenCheck;
    bool Intel = false, AMD = false, VIA = false;
    Intel = IsIntel(VenCheck);
    AMD = IsAMD(VenCheck);
    VIA = IsVIA(VenCheck);

    if (true == Intel) { 
        vendor = INTEL; LouPrint("Intel Cpu Detected\n");
        bool core = IsCore(VenCheck); if(core == true)LouPrint("Intel Core Cpu Detected\n");
        if (core == true) {
            uint8_t foo = GetCoreVersion(VenCheck);
            if ((0 == foo) || (1 == foo))      { CoreVersion = INTEL_CORE_I3; LouPrint("Intel Core 3 Detected\n"); }
            else if ((2 == foo) || (3 == foo)) { CoreVersion = INTEL_CORE_I5; LouPrint("Intel Core 5 Detected\n"); }
            else if ((4 == foo) || (5 == foo)) { CoreVersion = INTEL_CORE_I7; LouPrint("Intel Core 7 Detected\n"); }
            else if ((6 == foo) || (7 == foo)) { CoreVersion = INTEL_CORE_I9; LouPrint("Intel Core 9 Detected\n"); }
            else LouPrint("Unkown Core\n");
            CoreGeneration = GetCoreGeneration(VenCheck);
            LouPrint("Core Generation is: %d\n",CoreGeneration);
        }
    }
    if (true == AMD)   { vendor = 2; LouPrint("AMD Cpu Detected\n");}
    if (true == VIA)   { vendor = 3; LouPrint("VIA Cpu Detected\n");}


}
