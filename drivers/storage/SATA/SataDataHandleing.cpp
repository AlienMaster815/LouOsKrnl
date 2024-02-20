#include <LouDDK.h>


// Function to read a 32-bit value from an AHCI register
uint32_t ReadAhciRegister(uint32_t Base ,uint32_t offset) {
	// Read from the specified offset relative to the AHCI MMIO base address
	volatile uint32_t* ahci_reg = reinterpret_cast<volatile uint32_t*>(Base + offset);
	return *ahci_reg;
}


// Function to write a 32-bit value to an AHCI register
void WriteAhciRegister(uint32_t Base, uint32_t offset, uint32_t value) {
	// Write the value to the specified offset relative to the AHCI MMIO base address
	volatile uint32_t* ahci_reg = reinterpret_cast<volatile uint32_t*>(Base + offset);
	*ahci_reg = value;
}


uint32_t FindAhciAddress(uint8_t bus, uint8_t slot, uint8_t func) {
	// Read the BAR5 register (assuming it contains the MMIO base address)
	uint32_t bar5 = pci_read(bus, slot, func, 0x24); // Offset for BAR5 register

	// Extract the MMIO base address from BAR5 (bits 31:4)
	uint32_t mmio_base = bar5 & ~0xF;

	return mmio_base;
}


bool SetAHCIMode(uint32_t Base,uint8_t bus, uint8_t slot, uint8_t func) {
	// Read the AHCI controller's BAR to determine its MMIO base address
	uint32_t ahci_bar = pci_read(bus, slot, func, AHCI_BAR_OFFSET);

	// Determine the MMIO base address from the BAR (bits 31:4)
	ahci_mmio_base = ahci_bar & ~0xF;

	// Read the AHCI capabilities register to check for supported features
	uint32_t ahci_cap = ReadAhciRegister(ahci_mmio_base , AHCI_REG_CAP);

	// Check if Staggered Spin-Up is supported (optional)
	if (ahci_cap & AHCI_CAP_SSS) {
		// Implement staggered spin-up configuration if needed
	}

	// Set the AHCI Enable (AE) bit in the global host control register to enable AHCI mode
	WriteAhciRegister(ahci_mmio_base , AHCI_REG_GHC, AHCI_GHC_AE);

	// Verify if AHCI mode is enabled by reading the GHC register again
	uint32_t ghc_value = ReadAhciRegister(Base , AHCI_REG_GHC);
	bool ahci_enabled = (ghc_value & AHCI_GHC_AE) != 0;

	return ahci_enabled;
}