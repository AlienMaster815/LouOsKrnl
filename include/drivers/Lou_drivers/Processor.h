#ifndef _Processor_H
#define _Processor_h


#ifdef __cplusplus
#include <LouDDK.h>
#endif


//Intel Stub

//Define Intell Strings

UNUSED static const string IntelString = "Intel";
UNUSED static const string IntelCoreString = "Core";
UNUSED static const string IntelCoreVersionString[] = { "i3", "I3", "i5", "I5","i7", "I7", "i9", "I9" };
UNUSED static const string SpeedString = "@";

#define INTEL_GENERATION_T uint64_t
#define INTEL_IGPU_DEVICE_IDENTIFICATION_NUIMBER uint8_t

#ifndef __cplusplus
bool IsIntel(string VendorID);
bool IsIntelCore(string VendorID);
bool WhatIntelSpeed(string VendorID);
uint8_t GetIntelCoreVersion(string VendorID);
uint64_t GetIntelCoreGeneration(string VendorID);
#else 
KERNEL_IMPORT bool IsIntel(string VendorID);
KERNEL_IMPORT bool IsIntelCore(string VendorID);
KERNEL_IMPORT bool WhatIntelSpeed(string VendorID);
KERNEL_IMPORT uint8_t GetIntelCoreVersion(string VendorID);
KERNEL_IMPORT uint64_t GetIntelCoreGeneration(string VendorID);
INTEL_IGPU_DEVICE_IDENTIFICATION_NUIMBER GetGen4IGPUID();
#endif

//Define Intel brand
#define GENUINEINTEL 1

//Define Intel Products

#define INTEL_CORE_I3 3
#define INTEL_CORE_I5 5
#define INTEL_CORE_I7 7
#define INTEL_CORE_I9 9

#ifndef __cplusplus
bool IsIntelIntegratedGraphics();
#else
KERNEL_IMPORT bool IsIntelIntegratedGraphics();
#endif
//End Of Intel Stub

//AMD Stub
#define AUTHENTICAMD 2
//Define AMD Strings

UNUSED static const string AMDString = "AMD";

#ifndef __cplusplus
bool IsAMD(string VendorID);
#else
KERNEL_IMPORT bool IsAMD(string VendorID);
#endif

//End Of AMD Stub

//VIA Stub

#define AUTHENTICVIA 3

//define VIA String
UNUSED static const string VIAString = "VIA";

#ifndef __cplusplus
bool IsVIA(string VendorID);
#else
KERNEL_IMPORT bool IsVIA(string VendorID);
#endif

//End Of VIA Stub

UNUSED static string CPUFullString;

//Define A processor Information system

#ifndef __cplusplus
void DeterminCPU();

uint8_t GetCPUVendor();

uint8_t GetProcessor();

uint8_t GetCPUCoreVersion();

uint64_t GetCPUCoreGeneration();
#else

KERNEL_IMPORT void DeterminCPU();

KERNEL_IMPORT uint8_t GetCPUVendor();

KERNEL_IMPORT uint8_t GetProcessor();

KERNEL_IMPORT uint8_t GetCPUCoreVersion();

KERNEL_IMPORT uint64_t GetCPUCoreGeneration();


#endif


#endif
