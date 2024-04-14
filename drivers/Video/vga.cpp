#include <LouDDK.h>

bool IsVGA(uint8_t bus,uint8_t slot,uint8_t function) {

	uint16_t vendorID = PciGetVendorID(bus, slot);
	uint16_t deviceID = PciGetDeviceID(bus, slot, function);

	switch (vendorID) {

	case INTEL_PCI: {

		switch (deviceID) {

		default:
			break;
		}
		break;
	}

	case AdvancedMicroDevices_1:
	case AdvancedMicroDevices_2:

		switch (deviceID) {

		default:
			break;
		}

		break;

	//case NVIDIA: {
		//switch (deviceID) {

		//default:
			//break;
		//}
		// break;
	//}

	case VirtualBox:
		switch (deviceID) {
		case VirtualBoxGraphicsAdapter:
			LouPrint("Found A Virtualbox Video Adapter\n");
			return true;
			break;
		default:
			break;
		}
		break;

	default:
		break;

	}
	return false;
}