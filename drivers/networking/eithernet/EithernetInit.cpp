#include <LouDDK.h>

bool IsEithernet(uint8_t bus, uint8_t slot, uint8_t function) {


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


	default:
		break;

	}
	return false;
}