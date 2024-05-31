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

string GetVenString(){
    
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
    return CPUFullString;
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
        bool core = IsIntelCore(VenCheck);       if(core)    {LouPrint("Intel Core CPU Detected\n");    Processor = INTEL_CORE_PROCESSOR;}
        bool Pentium = IsIntelPentium(VenCheck); if(Pentium) {LouPrint("Intel Pentium CPU Detected\n"); Processor = PENTIUM_4;}
        bool Xenon = IsIntelXenon(VenCheck);     if(Xenon)   {LouPrint("Intel Xenon CPU Detected\n");}
        bool Core2 = IsIntelCore2(VenCheck);     if(Core2)   {LouPrint("Intel Core 2 CPU Detected\n");  Processor = CORE2_PROCESSOR;}
        bool Atom = IsIntelAtom(VenCheck);       if(Atom)    {LouPrint("Intel Atom CPU Detected");      Processor = ATOM_PROCESSOR;}
        if (core) {
            uint8_t foo = GetIntelCoreVersion(VenCheck);
            if ((0 == foo) || (1 == foo))      { CoreVersion = INTEL_CORE_I3; LouPrint("Intel Core 3 Detected\n"); }
            else if ((2 == foo) || (3 == foo)) { CoreVersion = INTEL_CORE_I5; LouPrint("Intel Core 5 Detected\n"); }
            else if ((4 == foo) || (5 == foo)) { CoreVersion = INTEL_CORE_I7; LouPrint("Intel Core 7 Detected\n"); }
            else if ((6 == foo) || (7 == foo)) { CoreVersion = INTEL_CORE_I9; LouPrint("Intel Core 9 Detected\n"); }
            else {CoreVersion = UNKOWN_PROCESSOR; LouPrint("Unkown Core\n");}
            CoreGeneration = GetIntelCoreGeneration(VenCheck);
            LouPrint("Core Generation is: %d\n",CoreGeneration);
            return;
        }
        if (Xenon){
            uint8_t foo = GetMasterXenonVersion(VenCheck);
            if (foo == 51){Processor = XENON51xx_PROCESSOR; LouPrint("Xenon 51 Core Detected\n");}
            if (foo == 54){Processor = XENON54xx_PROCESSOR; LouPrint("Xenon 54 Core Detected\n");}
            CoreGeneration = GetIntelXenonGeneration(VenCheck);
            return;
        }
        return;
    }
    else if (true == AMD){ 
        vendor = AUTHENTICAMD; 
        LouPrint("AMD Cpu Detected\n");
        if(IsAMDAthlonX1(VenCheck)){
            Processor = ATHLON_X1_CORE;
            return;
        }
        else if(IsAMDAthlonX2(VenCheck)){
            Processor = ATHLON_X2_CORE;
            return;
        }
        else if(IsAMDPhenom(VenCheck)){
            Processor = PHENOM_CORE;
            return;
        }
        else if(IsAMDRyzen(VenCheck)){
            Processor = RYZEN_CORE;
        }
    }
    else if (true == VIA){ vendor = AUTHENTICVIA; LouPrint("VIA Cpu Detected\n");}


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

extern void init_fpu();

void InitializeFloatPointUnit(){

}