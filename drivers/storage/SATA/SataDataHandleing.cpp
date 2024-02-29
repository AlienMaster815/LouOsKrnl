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
	//CMD_Value |= (packet->SpecialCycleEnable ? 1 : 0) << 3;
	CMD_Value |= (packet->MemoryWriteInvalidateEnable ? 1 : 0) << 4;
	//CMD_Value |= (packet->VGAPaletteSnooping ? 1 : 0) << 5;
	CMD_Value |= (packet->ParityErrorResponseEnable ? 1 : 0) << 6;
	//CMD_Value |= (packet->WaitCycleEnable ? 1 : 0) << 7;
	CMD_Value |= (packet->SSER ? 1 : 0) << 8;
	CMD_Value |= (packet->FastBackToBackEnable ? 1 : 0) << 9;
	CMD_Value |= (packet->InterruptDisable ? 1 : 0) << 10;
	pciConfigWriteWord(SataObj->bus, SataObj->slot, SataObj->function, CMD_OFFSET, CMD_Value);
}

void GetStsPacket(P_SATA_PCI_DEVICE SataObj, P_STS_PACKET packet) {
	uint16_t STS_Value = pciConfigReadWord(SataObj->bus, SataObj->slot, SataObj->function, STS_OFFSET);
	packet->Reserved1 = STS_Value & 0x07;
	packet->InterruptStatus = (STS_Value >> 3) & 1;
	packet->CapabilitiesList = (STS_Value >> 4) & 1;
	packet->Mhz66Support = (STS_Value >> 5) & 1;
	packet->Reserved2 = (STS_Value >> 6) & 1;
	packet->FastBackToBackCapable = (STS_Value >> 7) & 1;
	packet->MasterDataPairyErrorDetected = (STS_Value >> 8) & 1;
	packet->DEVSEL = (STS_Value >> 9) & 0x03;
	packet->STA = (STS_Value >> 11) & 1;;
	packet->RTA = (STS_Value >> 12) & 1;;
	packet->RMA = (STS_Value >> 13) & 1;;
	packet->SSE = (STS_Value >> 14) & 1;;
	packet->DPE = (STS_Value >> 15) & 1;;
}
void SendStsPacket(P_SATA_PCI_DEVICE SataObj, P_STS_PACKET packet) {
	uint16_t STS_Value = 0;
	STS_Value |= (packet->MasterDataPairyErrorDetected ? 1 : 0) << 8;
	STS_Value |= (packet->STA ? 1 : 0) << 11;
	STS_Value |= (packet->RTA ? 1 : 0) << 12;
	STS_Value |= (packet->RMA ? 1 : 0) << 13;
	STS_Value |= (packet->SSE ? 1 : 0) << 14;
	STS_Value |= (packet->DPE ? 1 : 0) << 15;
}

void GetRIDPacket(P_SATA_PCI_DEVICE SataObj, P_PCI_AHCI_HEADER Header) {
	Header->RID = pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, RID_OFFSET);
}

void GetCCPacket(P_SATA_PCI_DEVICE SataObj,P_CC_PACKET  packet) {
	packet->PI = pciConfigReadByte(SataObj->bus,SataObj->slot,SataObj->function,CC_OFFSET);
	packet->SCC = pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, CC_OFFSET + 1);
	packet->BCC = pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, CC_OFFSET + 2);
}

void GetCLSPacket(P_SATA_PCI_DEVICE SataObj, P_PCI_AHCI_HEADER Header) {
	Header->CLS = pciConfigReadByte(SataObj->bus,SataObj->slot,SataObj->function,CLS_OFFSET);
}

void GetMLTPacket(P_SATA_PCI_DEVICE SataObj, P_PCI_AHCI_HEADER Header) {
	Header->MLT = pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, MLT_OFFSET);
}

void SendMLTPacket(P_SATA_PCI_DEVICE SataObj, P_PCI_AHCI_HEADER Header,uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, MLT_OFFSET, Value);
}

void GetHtypePacket(P_SATA_PCI_DEVICE SataObj, P_HTYPE_PACKET packet){
	uint8_t HTYPE = pciConfigReadByte(SataObj->bus,SataObj->slot,SataObj->function, HTYPE_OFFSET);
	packet->HeaderLayout = HTYPE & 0x7F;
	packet->HBAStep = (HTYPE >> 8) & 1;
}

void GetBistPacket(P_SATA_PCI_DEVICE SataObj,P_BIST_PACKET packet){
	uint8_t BIST_Value = pciConfigReadByte(SataObj->bus,SataObj->slot,SataObj->function,BIST_OFFSET);
	packet->CC = BIST_Value & 0x07;
	packet->SB = (BIST_Value >> 6) & 1;
	packet->BC = (BIST_Value >> 7) & 1;
}

void SendBistPacket(P_SATA_PCI_DEVICE SataObj,bool Value) {
	uint8_t BIST_Value = 0;

	BIST_Value |= (Value ? 1 : 0) << 6;

	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, BIST_OFFSET, BIST_Value);
}

void GetCAP(P_SATA_PCI_DEVICE SataObj,P_PCI_AHCI_HEADER header) {
	header->CAP = pciConfigReadByte(SataObj->bus,SataObj->slot,SataObj->function,CAP_OFFSET);
}

void GetInterruptPacket(P_SATA_PCI_DEVICE SataObj, P_INTERRUPT_PACKET packet) {
	packet->ILINE = pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function,INTERRUPT_LINE_OFFSET);
	packet->IPIN = pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function,INTERRUPT_PIN_OFFSET);
}

void SendInterruptPacket(P_SATA_PCI_DEVICE SataObj, uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, INTERRUPT_LINE_OFFSET, Value);
}

void GetMGNTPacket(P_SATA_PCI_DEVICE SataObj, P_PCI_AHCI_HEADER header) {
	header->MGNT = pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, MGNT_OFFSET);
}

void GetMLATPacket(P_SATA_PCI_DEVICE SataObj, P_PCI_AHCI_HEADER header) {
	header->MLANT = pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, MLANT_OFFSET);
}

void GetSSPacket(P_SATA_PCI_DEVICE SataObj, P_SS_PACKET packet) {
	packet->VEN_ID = pciConfigReadWord(SataObj->bus, SataObj->slot, SataObj->function, SS_VEN_ID_OFFSET);
	packet->DEV_ID = pciConfigReadWord(SataObj->bus, SataObj->slot, SataObj->function, SS_DEV_ID_OFFSET);
}