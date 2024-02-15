#include <LouAPI.h>

void DeterminCPU() {

	unsigned int eax, ebx, ecx, edx;
    char vendor_id[13]; // 12 characters + null terminator

	LouPrint("Detecting CPU\n");

	//Use CPUID to Detect the cpu


	cpuid(1, &eax, &ebx, &ecx, &edx);


	unsigned int family = (eax >> 8) & 0xF;
	unsigned int model = (eax >> 4) & 0xF;
	unsigned int stepping = eax & 0xF;

	LouPrint("Family: %d\nModel: %d\nStepping: %d\n", family, model, stepping);



    // Check highest extended function supported
    cpuid(0x80000000, &eax, &ebx, &ecx, &edx);

    if (eax >= 0x80000004) {
        
       // Retrieve full vendor ID string
       eax = 0;
       ebx = 0;
       ecx = 0;
       edx = 0;
       cpuid(0x80000002, &eax, &ebx, &ecx, &edx);


       memcpy(vendor_id, &eax, sizeof(eax));
       memcpy(vendor_id + 4, &ebx, sizeof(ebx));
       memcpy(vendor_id + 8, &ecx, sizeof(ecx));
       memcpy(vendor_id + 12, &edx, sizeof(edx));
       vendor_id[12] = '\0';
       // Print the full vendor ID string
       LouPrint("Extended Vendor ID: %s\n", vendor_id);

    }
    string VenCheck = vendor_id;
    bool Intel = false, AMD = false, VIA = false;
    Intel = IsIntel(VenCheck);
    AMD = IsAMD(VenCheck);
    VIA = IsVIA(VenCheck);

    if (true == Intel) { vendor = 1; LouPrint("Intel Cpu Detected\n"); }
    if (true == AMD) { vendor = 2; LouPrint("AMD Cpu Detected\n"); }
    if (true == VIA) { vendor = 3; LouPrint("VIA Cpu Detected\n"); }



}
