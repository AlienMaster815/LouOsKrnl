#include <LouDDK.h>
#include <NtAPI.h>

LOUDDK_API_ENTRY LOUSTATUS IntelIGPUInit(uint8_t DriverType) {
	__attribute__((unused)) DRIVER_OBJECT GPUOBJ;
	
	return LOUSTATUS_GOOD;
}