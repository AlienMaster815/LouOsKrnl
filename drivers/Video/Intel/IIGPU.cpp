#include <LouDDK.h>
#include <NtAPI.h>


void Is1Gen() {

	LouPrint("Initializing Gen 1 IGPU\n");

}
void Is2Gen() {

	LouPrint("Initializing Gen 2 IGPU\n");

}
void Is3Gen() {

	LouPrint("Initializing Gen 3 IGPU\n");

}
void Is4Gen() {
	INTEL_IGPU_DEVICE_IDENTIFICATION_NUIMBER Id = GetGen4IGPUID();
	if (NO_GPUID == Id) { LouPrint("No IGPU Detected\n"); return; }

	LouPrint("Initializing Gen 4 IGPU\n");

}
void Is5Gen() {

	LouPrint("Initializing Gen 5 IGPU\n");

}
void Is6Gen() {

	LouPrint("Initializing Gen 6 IGPU\n");

}
void Is7Gen() {

	LouPrint("Initializing Gen 7 IGPU\n");

}
void Is8Gen() {

	LouPrint("Initializing Gen 8 IGPU\n");

}
void Is9Gen() {

	LouPrint("Initializing Gen 9 IGPU\n");

}
void Is10Gen() {

	LouPrint("Initializing Gen 10 IGPU\n");

}
void Is11Gen() {

	LouPrint("Initializing Gen 11 IGPU\n");

}
void Is12Gen() {

	LouPrint("Initializing Gen 12 IGPU\n");

}
void Is13Gen() {

	LouPrint("Initializing Gen 13 IGPU\n");

}
void Is14Gen() {

	LouPrint("Initializing Gen 14 IGPU\n");

}
void Is15Gen() {

	LouPrint("Initializing Gen 15 IGPU\n");

}


LOUDDK_API_ENTRY LOUSTATUS IntelIGPUInit(uint8_t DriverType) {
	
	LouPrint("Initializing Intel Integrated Graphics\n");
	//Parse for what gen
	INTEL_GENERATION_T Generation = GetCPUCoreGeneration();

	if (Generation < 2000) Is1Gen();
	else if ((Generation >= 2000) && (Generation < 3000)) Is2Gen();
	else if ((Generation >= 3000) && (Generation < 4000)) Is3Gen();
	else if ((Generation >= 4000) && (Generation < 5000)) Is4Gen();
	else if ((Generation >= 5000) && (Generation < 6000)) Is5Gen();
	else if ((Generation >= 6000) && (Generation < 7000)) Is6Gen();
	else if ((Generation >= 7000) && (Generation < 8000)) Is7Gen();
	else if ((Generation >= 8000) && (Generation < 9000)) Is8Gen();
	else if ((Generation >= 9000) && (Generation < 10000)) Is9Gen();
	else if ((Generation >= 10000) && (Generation < 11000)) Is10Gen();
	else if ((Generation >= 11000) && (Generation < 12000)) Is11Gen();
	else if ((Generation >= 12000) && (Generation < 13000)) Is12Gen();
	else if ((Generation >= 13000) && (Generation < 14000)) Is13Gen();
	else if ((Generation >= 14000) && (Generation < 15000)) Is14Gen();
	else if ((Generation >= 15000) && (Generation < 16000)) Is15Gen();
	else { LouPrint("Intel Processor May Not Have IGPU\n"); return (!LOUSTATUS_GOOD); }

	return LOUSTATUS_GOOD;
}