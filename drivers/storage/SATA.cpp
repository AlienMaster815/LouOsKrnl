#include <LouDDK.h>

uint8_t DevSet = 0;
uint8_t DeviceSelected;
uint32_t ahci_mmio_base;

// Function to read a 32-bit value from an AHCI register
uint32_t read_ahci_register(uint32_t offset) {
	// Read from the specified offset relative to the AHCI MMIO base address
	volatile uint32_t* ahci_reg = reinterpret_cast<volatile uint32_t*>(ahci_mmio_base + offset);
	return *ahci_reg;
}

// Function to write a 32-bit value to an AHCI register
void write_ahci_register(uint32_t offset, uint32_t value) {
	// Write the value to the specified offset relative to the AHCI MMIO base address
	volatile uint32_t* ahci_reg = reinterpret_cast<volatile uint32_t*>(ahci_mmio_base + offset);
	*ahci_reg = value;
}

bool SetAHCIMode(uint8_t bus, uint8_t slot, uint8_t func) {
	// Read the AHCI controller's BAR to determine its MMIO base address
	uint32_t ahci_bar = pci_read(bus, slot, func, AHCI_BAR_OFFSET);

	// Determine the MMIO base address from the BAR (bits 31:4)
	ahci_mmio_base = ahci_bar & ~0xF;

	// Read the AHCI capabilities register to check for supported features
	uint32_t ahci_cap = read_ahci_register(ahci_mmio_base + AHCI_REG_CAP);

	// Check if Staggered Spin-Up is supported (optional)
	if (ahci_cap & AHCI_CAP_SSS) {
		// Implement staggered spin-up configuration if needed
	}

	// Set the AHCI Enable (AE) bit in the global host control register to enable AHCI mode
	write_ahci_register(ahci_mmio_base + AHCI_REG_GHC, AHCI_GHC_AE);

	// Verify if AHCI mode is enabled by reading the GHC register again
	uint32_t ghc_value = read_ahci_register(ahci_mmio_base + AHCI_REG_GHC);
	bool ahci_enabled = (ghc_value & AHCI_GHC_AE) != 0;

	return ahci_enabled;
}



LOUDDK_API_ENTRY void IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func) {

	LouPrint("Checking PCI For Sata Controller\n");
	switch (PciGetVendorID(bus,slot)) {

	case 0x8086:
		if (CheckPciDeviceID(INTEL_DEVICE_8086_82801HM_HEM_ICH8M_ICH8M_E_SATA_CONTROLLER_AHCI_MODE, bus, slot, func)) {
			LouPrint("Found A Sata Device\n");
			Sata_init(bus, slot, func);
		}
		break;
	
	default:
		LouPrint("Not A Sata Device\n");
	}
}

LOUDDK_API_ENTRY void Sata_init(uint8_t bus, uint8_t slot, uint8_t func) {


	LouPrint("Creating SATA Object\n");

	SataDevices[DevSet] = (P_SATA_PCI_DEVICE)Lou_Alloc_Mem(sizeof(SATA_PCI_DEVICE));

	SataDevices[DevSet]->bus = bus;
	SataDevices[DevSet]->slot = slot;
	SataDevices[DevSet]->function = func;
	DeviceSelected = DevSet;
	DevSet++;

	LouPrint("Initializing Sata Device\n");

	if (!SetAHCIMode(SataDevices[DeviceSelected]->bus, SataDevices[DeviceSelected]->slot, SataDevices[DeviceSelected]->function)) {
		LouPrint("AHCI Mode unable to be Set\n");
		return;
	}

	//TODO:finish initializing controller
	

}
LOUDDK_API_ENTRY void UnmountSataDevice() {

}