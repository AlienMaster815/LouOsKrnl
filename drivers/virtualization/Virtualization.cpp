#include <LouDDK.h>


bool isVirtualizationDevice(uint8_t bus,uint8_t slot,uint8_t function) {

	uint16_t vendorID = PciGetVendorID(bus, slot);
	uint16_t deviceID = PciGetDeviceID(bus, slot, function);

	switch (vendorID){
	case VirtualBox:
		switch (deviceID){
		case VirtualBoxGuestService:
		case VirtualBoxUSBTablet:
		case VirtualBoxMultiTouchTablet:
			LouPrint("Found A Virtualbox Host\n");
			return true;
			break;
		default:
			break;
		}

	default:
		break;
	}

	return false;
}