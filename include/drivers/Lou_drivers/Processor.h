#ifndef _Processor_H
#define _Processor_h


#ifdef __cplusplus
#include <LouDDK.h>
#endif


//Intel Stub

//Define Intell Strings

UNUSED static const string IntelString = "Intel";
UNUSED static const string IntelCoreString = "Core(TM) ";
UNUSED static const string IntelCore2String = "Core(TM)2";
UNUSED static const string IntelPentiumString = "Pentium";
UNUSED static const string XENON_STRING = "Xeon";
UNUSED static const string ATOM_STRING = "ATOM";
UNUSED static const string XENON_CORE_MASTER_STRING[] = {"CPU 51", "CPU 54"};
UNUSED static const string IntelCoreVersionString[] = { "i3", "I3", "i5", "I5","i7", "I7", "i9", "I9" };
UNUSED static const string SpeedString = "@";

#define INTEL_GENERATION_T uint64_t
#define INTEL_IGPU_DEVICE_IDENTIFICATION_NUIMBER uint8_t

#ifndef __cplusplus
bool IsIntel(string VendorID);
bool IsIntelCore(string VendorID);
bool IsIntelPentium(string VendorID);
bool IsIntelXenon(string VendorID);
bool IsIntelCore2(string VendorID);
bool IsIntelAtom(string VendorID);

bool WhatIntelSpeed(string VendorID);
uint8_t GetIntelCoreVersion(string VendorID);
uint64_t GetIntelCoreGeneration(string VendorID);
uint8_t GetMasterXenonVersion(string VendorID);
uint64_t GetIntelXenonGeneration(string VendorID);
#else 
KERNEL_IMPORT bool IsIntel(string VendorID);
KERNEL_IMPORT bool IsIntelCore(string VendorID);
KERNEL_IMPORT bool WhatIntelSpeed(string VendorID);
KERNEL_IMPORT uint8_t GetIntelCoreVersion(string VendorID);
KERNEL_IMPORT uint64_t GetIntelCoreGeneration(string VendorID);
INTEL_IGPU_DEVICE_IDENTIFICATION_NUIMBER GetGen4IGPUID();
#endif

#define UNKOWN_PROCESSOR 0

//Define Intel brand
#define GENUINEINTEL 1

#define PENTIUM_4 1
#define XENON51xx_PROCESSOR 2
#define CORE2_PROCESSOR 3
#define XENON54xx_PROCESSOR 4
#define INTEL_CORE_PROCESSOR 5
#define ATOM_PROCESSOR 6

//VERSIONS 
#define EM64T 1
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

#define ATHLON_X1_CORE 1
#define ATHLON_X2_CORE 2
#define PHENOM_CORE 3
#define RYZEN_CORE 4

//Define AMD Strings

UNUSED static const string AMDString =         "AMD";
UNUSED static const string AMDAthlonX1String = "Athlon(tm) 64 Pr";
UNUSED static const string AMDAthlonX2String = "Athlon(tm) 64 X2";
UNUSED static const string AMDPhenomString =   "Phenom";
UNUSED static const string AMDRyzenString =    "Ryzen";

#ifndef __cplusplus
bool IsAMD(string VendorID);
bool IsAMDAthlonX1(string VendorID);
bool IsAMDAthlonX2(string VendorID);
bool IsAMDPhenom(string VendorID);
bool IsAMDRyzen(string VendorID);
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
