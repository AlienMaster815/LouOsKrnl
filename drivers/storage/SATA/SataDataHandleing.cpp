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


uint32_t FindAhciAddress(P_SATA_PCI_DEVICE devObj) {
	// Read the BAR5 register (assuming it contains the MMIO base address)
	uint32_t bar5 = pci_read(devObj->bus, devObj->slot, devObj->function, AHCI_BAR_OFFSET); // Offset for BAR5 register

	// Extract the MMIO base address from BAR5 (bits 31:4)
	uint32_t mmio_base = bar5 & ~0xF;

	return mmio_base;
}


bool SetAHCIMode(P_SATA_PCI_DEVICE DevObj) {
	// Read the AHCI controller's BAR to determine its MMIO base address
	uint32_t ahci_bar = pci_read(DevObj->bus, DevObj->slot, DevObj->function, AHCI_BAR_OFFSET);

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
	uint32_t ghc_value = ReadAhciRegister(ahci_mmio_base , AHCI_REG_GHC);
	bool ahci_enabled = (ghc_value & AHCI_GHC_AE) != 0;

	return ahci_enabled;
}



void GetSataCmdPacket(P_SATA_PCI_DEVICE SataObj,P_CMD_PACKET packet) {

	uint16_t CMD_Value = pciConfigReadWord(SataObj->bus,SataObj->slot,SataObj->function, CMD_OFFSET);
	
	packet->IOSpaceEnabled = CMD_Value & 1;
	packet->MemorySpaceEnabled = (CMD_Value >> 1) & 1;
	packet->BusMasterEnable = (CMD_Value >> 2) & 1;
	packet->SpecialCycleEnable = (CMD_Value >> 3) & 1;
	packet->MemoryWriteInvalidateEnable = (CMD_Value >> 4) & 1;
	packet->VGAPaletteSnooping = (CMD_Value >> 5) & 1;
	packet->ParityErrorResponseEnable = (CMD_Value >> 6) & 1;
	packet->WaitCycleEnable = (CMD_Value >> 7) & 1;
	packet->SSER = (CMD_Value >> 8) & 1;
	packet->FastBackToBackEnable = (CMD_Value >> 9) & 1;
	packet->InterruptDisable = (CMD_Value >> 10) & 1;
	packet->Reserved = (CMD_Value >> 11) & 0x1F;
}


void SendSataCmdPacket(P_SATA_PCI_DEVICE SataObj,P_CMD_PACKET packet) {

	uint16_t CMD_Value = 0;

	CMD_Value |= (packet->IOSpaceEnabled ? 1 : 0) << 0;
	CMD_Value |= (packet->MemorySpaceEnabled ? 1 : 0) << 1;
	CMD_Value |= (packet->BusMasterEnable ? 1 : 0) << 2;
	CMD_Value |= (packet->SpecialCycleEnable ? 1 : 0) << 3;
	CMD_Value |= (packet->MemoryWriteInvalidateEnable ? 1 : 0) << 4;
	CMD_Value |= (packet->VGAPaletteSnooping ? 1 : 0) << 5;
	CMD_Value |= (packet->ParityErrorResponseEnable ? 1 : 0) << 6;
	CMD_Value |= (packet->WaitCycleEnable ? 1 : 0) << 7;
	CMD_Value |= (packet->SSER ? 1 : 0) << 8;
	CMD_Value |= (packet->FastBackToBackEnable ? 1 : 0) << 9;
	CMD_Value |= (packet->InterruptDisable ? 1 : 0) << 10;

	pciConfigWriteWord(SataObj->bus, SataObj->slot, SataObj->function, CMD_OFFSET, CMD_Value);
}

