#ifndef _Processor_H
#define _Processor_h

//Intel Stub

//Define Intell Strings

static const string IntelString = "Intel";
static const string IntelCoreString = "Core";
static const string IntelCoreVersionString[] = {"i3", "I3", "i5", "I5","i7", "I7", "i9", "I9" };
static const string SpeedString = "@";

bool IsIntel(string VendorID);
bool IsCore(string VendorID);
bool WhatSpeed(string VendorID);
uint8_t GetCoreVersion(string VendorID);
uint64_t GetCoreGeneration(string VendorID);

//Define Intel brand
#define INTEL 1

//Define Intel Products

#define INTEL_CORE_I3 3
#define INTEL_CORE_I5 5
#define INTEL_CORE_I7 7
#define INTEL_CORE_I9 9

bool IsIntelIntegratedGraphics();
//End Of Intel Stub

//AMD Stub

//Define AMD Strings

static const string AMDString = "AMD";

bool IsAMD(string VendorID);


//End Of AMD Stub

//VIA Stub

//define VIA String
static const string VIAString = "VIA";

bool IsVIA(string VendorID);

//End Of VIA Stub


void DeterminCPU();

static string CPUFullString;

//Define A processor Information system
static uint8_t vendor = 0;
static uint8_t Processor = 0;
static uint8_t CoreVersion = 0;
static uint64_t CoreGeneration = 0;
static double Speed = 0.0;

#endif
