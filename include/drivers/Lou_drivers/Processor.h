#ifndef _Processor_H
#define _Processor_h

//Intel Stub

//Define Intell Strings

static const string IntelString = "Intel";

bool IsIntel(string VendorID);



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

//Define A processor Information system
static uint8_t vendor = 0;

#endif
