#include <LouDDK.h>





LOUDDK_API_ENTRY void IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func) {
	LouPrint("Checking PCI For Sata Controller\n");

	uint16_t vendorID = PciGetVendorID(bus, slot);
	uint16_t deviceID = PciGetDeviceID(bus, slot, func);

	switch (vendorID) {
	case 0x8086:
		switch (deviceID) {
		case INTEL_DEVICE_8086_82801HM_HEM_ICH8M_ICH8M_E_SATA_CONTROLLER_AHCI_MODE:
			LouPrint("Found Device: Intel HM HEM ICH8M E SATA CONTROLLER AHCI\n");
			Sata_init(bus, slot, func);
			break;
		default:
			LouPrint("Non Sata Intel Device\n");
			break;
		}
		break;
	default:
		LouPrint("Not A Sata Device\n");
		break;
	}
}


LOUDDK_API_ENTRY void Sata_init(uint8_t bus, uint8_t slot, uint8_t func) {



}

LOUDDK_API_ENTRY void UnmountSataDevice(uint8_t Device) {


}



