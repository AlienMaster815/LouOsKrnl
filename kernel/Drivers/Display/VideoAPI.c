#include <LouAPI.h>


void SwitchVideoDevice(uint8_t DeviceType, uint8_t DeviceNum, uint8_t DriverType) {
	
	if((DeviceType == INTEGRATED_DEVICE) && (GENUINEINTEL == GetCPUVendor()))IntelIGPUInit(DriverType);

}