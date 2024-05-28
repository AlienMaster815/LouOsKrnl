#include <LouAPI.h>

static uint8_t vendor = 0;
static uint8_t Processor = 0;
static uint8_t CoreVersion = 0;
static uint64_t CoreGeneration = 0;
static double Speed = 0.0;

uint8_t GetCPUVendor() {
    return vendor;
}

uint8_t GetProcessor(){
    return Processor;
}

uint8_t GetCPUCoreVersion() {
    return CoreVersion;
}

uint64_t GetCPUCoreGeneration() {
    return CoreGeneration;
}

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
        vendor = GENUINEINTEL; LouPrint("Intel Cpu Detected\n");
        bool core = IsIntelCore(VenCheck); if(core == true)LouPrint("Intel Core Cpu Detected\n");
        if (core == true) {
            uint8_t foo = GetIntelCoreVersion(VenCheck);
            if ((0 == foo) || (1 == foo))      { CoreVersion = INTEL_CORE_I3; LouPrint("Intel Core 3 Detected\n"); }
            else if ((2 == foo) || (3 == foo)) { CoreVersion = INTEL_CORE_I5; LouPrint("Intel Core 5 Detected\n"); }
            else if ((4 == foo) || (5 == foo)) { CoreVersion = INTEL_CORE_I7; LouPrint("Intel Core 7 Detected\n"); }
            else if ((6 == foo) || (7 == foo)) { CoreVersion = INTEL_CORE_I9; LouPrint("Intel Core 9 Detected\n"); }
            else LouPrint("Unkown Core\n");
            CoreGeneration = GetIntelCoreGeneration(VenCheck);
            LouPrint("Core Generation is: %d\n",CoreGeneration);
        }
        return;
    }
    else if (true == AMD)   { vendor = AUTHENTICAMD; LouPrint("AMD Cpu Detected\n");}
    else if (true == VIA)   { vendor = AUTHENTICVIA; LouPrint("VIA Cpu Detected\n");}


}

// MSR register for TSC frequency
#define MSR_PLATFORM_INFO 0xCE
#define MSR_TSC 0x10

//Returns Speed In GHZ
long double GetProcessorSpeed() {
    uint64_t tsc_freq = read_msr(MSR_TSC);

    // Convert to GHz
    return (long double)tsc_freq / 1e9;
}

uint32_t GetProcessorBusSpeed() {
    uint64_t platform_info = read_msr(MSR_PLATFORM_INFO);
    uint32_t bus_freq = (platform_info >> 8) & 0xFF; // Extract bus frequency in MHz

    return bus_freq;
}

uint16_t NPROC = 0;

uint16_t GetNPROC() {
    return NPROC;
}

void UpgradeNPROC(){
    NPROC++;
}

void DowngradeNPROC(){
    NPROC--;
}