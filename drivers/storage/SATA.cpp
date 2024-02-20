#include <LouDDK.h>

uint8_t DevSet = 0;
uint8_t DeviceSelected;
uint32_t ahci_mmio_base;

//CMD Related Functions
uint16_t GetCMDValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadWord(SataObj->bus, SataObj->slot, SataObj->function, CMD_OFFSET);
}

void WriteCMDValue(P_SATA_PCI_DEVICE SataObj,uint16_t Value) {
	pciConfigWriteWord(SataObj->bus, SataObj->slot, SataObj->function, CMD_OFFSET, Value);
}
//End Of CMD Related Functions

//STS Related Functions
uint16_t GetSTSValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadWord(SataObj->bus, SataObj->slot, SataObj->function, STS_OFFSET);
}

void WriteSTSValue(P_SATA_PCI_DEVICE SataObj, uint16_t Value) {
	pciConfigWriteWord(SataObj->bus, SataObj->slot, SataObj->function, STS_OFFSET, Value);
}
//End Of STS Related Functions

//CC Related Functions
uint32_t GetCCValue(P_SATA_PCI_DEVICE SataObj) {
	return pci_read(SataObj->bus, SataObj->slot, SataObj->function, CC_OFFSET);
}

void WriteCCValue(P_SATA_PCI_DEVICE SataObj, uint32_t Value) {
	write_pci(SataObj->bus, SataObj->slot, SataObj->function, CC_OFFSET, Value);
}
//End Of CC Related Functions

//RID Related Functions
uint8_t GetRIDValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, RID_OFFSET);
}

void WriteRIDValue(P_SATA_PCI_DEVICE SataObj, uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, RID_OFFSET, Value);
}
//End Of RID Related Functions


//CLS Related Functions
uint8_t GetCLSValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, CLS_OFFSET);
}

void WriteCLSValue(P_SATA_PCI_DEVICE SataObj, uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, CLS_OFFSET, Value);
}
//End Of CLS Related Functions


//MLT Related Functions
uint8_t GetMLTValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, MLT_OFFSET);
}

void WriteMLTValue(P_SATA_PCI_DEVICE SataObj, uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, MLT_OFFSET, Value);
}
//End Of MLT Related Functions


//HTYPE Related Functions
uint8_t GetHTYPEValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, HTYPE_OFFSET);
}

void WriteHTYPEValue(P_SATA_PCI_DEVICE SataObj, uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, HTYPE_OFFSET, Value);
}
//End Of HTYPE Related Functions


//BIST Related Functions
uint8_t GetBISTValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, BIST_OFFSET);
}

void WriteBISTValue(P_SATA_PCI_DEVICE SataObj, uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, BIST_OFFSET, Value);
}
//End Of BIST Related Functions


//BAR Related Functions
uint32_t GetBARValue(P_SATA_PCI_DEVICE SataObj,uint8_t OFFSET) {
	return pci_read(SataObj->bus, SataObj->slot, SataObj->function, OFFSET);
}

void WriteBARValue(P_SATA_PCI_DEVICE SataObj,uint8_t OFFSET, uint32_t Value) {
	write_pci(SataObj->bus, SataObj->slot, SataObj->function, OFFSET, Value);
}

uint32_t GetABARValue(P_SATA_PCI_DEVICE SataObj) {
	return pci_read(SataObj->bus, SataObj->slot, SataObj->function, ABAR_OFFSET);
}

void WriteABARValue(P_SATA_PCI_DEVICE SataObj, uint32_t Value) {
	write_pci(SataObj->bus, SataObj->slot, SataObj->function, ABAR_OFFSET, Value);
}
//End Of Bar Related Functions

//SS Related Functions

uint16_t GetSS_DEVICE_IDValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadWord(SataObj->bus, SataObj->slot, SataObj->function, SS_VEN_ID_OFFSET);
}

void WriteSS_DEVICE_IDValue(P_SATA_PCI_DEVICE SataObj, uint16_t Value) {
	pciConfigWriteWord(SataObj->bus, SataObj->slot, SataObj->function, SS_VEN_ID_OFFSET, Value);
}


uint16_t GetSS_VENDOR_IDValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadWord(SataObj->bus, SataObj->slot, SataObj->function, SS_DEV_ID_OFFSET);
}

void WriteSS_VENDOR_IDValue(P_SATA_PCI_DEVICE SataObj, uint16_t Value) {
	pciConfigWriteWord(SataObj->bus, SataObj->slot, SataObj->function, SS_DEV_ID_OFFSET, Value);
}
//End Of SS Related Functions

//EROM Related Code 
uint32_t GetEROMValue(P_SATA_PCI_DEVICE SataObj) {
	return pci_read(SataObj->bus, SataObj->slot, SataObj->function, EROM_OFFSET);
}

void WriteEROMValue(P_SATA_PCI_DEVICE SataObj, uint32_t Value) {
	write_pci(SataObj->bus, SataObj->slot, SataObj->function, EROM_OFFSET, Value);
}
//End Of EROM Related Code
 
//CAP Related Code
uint8_t GetCAPValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, CAP_OFFSET);
}

void WriteCAPValue(P_SATA_PCI_DEVICE SataObj, uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, CAP_OFFSET, Value);
}
//End Of CAP Related Code


//INTERRUPT RELATED CODE

uint8_t GetINTERRUPT_PINValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, INTERRUPT_PIN_OFFSET);
}

void WriteINTERRUPT_PINValue(P_SATA_PCI_DEVICE SataObj, uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, INTERRUPT_PIN_OFFSET, Value);
}

uint8_t GetINTERRUPT_LINEValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, INTERRUPT_LINE_OFFSET);
}

void WriteINTERRUPT_LINEValue(P_SATA_PCI_DEVICE SataObj, uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, INTERRUPT_LINE_OFFSET, Value);
}


//ENDO OF INTERRUPT RELATED CODE

//MIN AND MAX RELATED CODE 

uint8_t GetMGNTValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, MGNT_OFFSET);
}

void WriteMGNTValue(P_SATA_PCI_DEVICE SataObj, uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, MGNT_OFFSET, Value);
}

uint8_t GetMLANTValue(P_SATA_PCI_DEVICE SataObj) {
	return pciConfigReadByte(SataObj->bus, SataObj->slot, SataObj->function, MLANT_OFFSET);
}

void WriteMLANTValue(P_SATA_PCI_DEVICE SataObj, uint8_t Value) {
	pciConfigWriteByte(SataObj->bus, SataObj->slot, SataObj->function, MLANT_OFFSET, Value);
}

//END OF MIN AND MAX RELATED CODE


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


uint32_t find_ahci_mmio_base(uint8_t bus, uint8_t slot, uint8_t func) {
	// Read the BAR5 register (assuming it contains the MMIO base address)
	uint32_t bar5 = pci_read(bus, slot, func, 0x24); // Offset for BAR5 register

	// Extract the MMIO base address from BAR5 (bits 31:4)
	uint32_t mmio_base = bar5 & ~0xF;

	return mmio_base;
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
		LouPrint("AHCI Mode Unable To Be Setup\n");
		return;
	}

	//TODO:finish initializing controller
   
	AhciPciHeaders[DeviceSelected] = (P_PCI_AHCI_HEADER)Lou_Alloc_Mem(sizeof(PCI_AHCI_HEADER));

	SataDevices[DeviceSelected]->Header = AhciPciHeaders[DeviceSelected];
	
	AhciPciHeaders[DeviceSelected]->VENDOR_ID = PciGetVendorID(SataDevices[DeviceSelected]->bus, SataDevices[DeviceSelected]->bus);
	AhciPciHeaders[DeviceSelected]->DEVICE_ID = PciGetDeviceID(SataDevices[DeviceSelected]->bus, SataDevices[DeviceSelected]->bus, SataDevices[DeviceSelected]->function);
	AhciPciHeaders[DeviceSelected]->CMD = GetCMDValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->STS = GetSTSValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->RID = GetRIDValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->CC = GetCCValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->CLS = GetCLSValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->MLT = GetMLTValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->HTYPE = GetHTYPEValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->BIST = GetBISTValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->BAR0 = GetBARValue(SataDevices[DeviceSelected],BAR0_OFFSET);
	AhciPciHeaders[DeviceSelected]->BAR1 = GetBARValue(SataDevices[DeviceSelected],BAR1_OFFSET);
	AhciPciHeaders[DeviceSelected]->BAR2 = GetBARValue(SataDevices[DeviceSelected],BAR2_OFFSET);
	AhciPciHeaders[DeviceSelected]->BAR3 = GetBARValue(SataDevices[DeviceSelected],BAR3_OFFSET);
	AhciPciHeaders[DeviceSelected]->BAR4 = GetBARValue(SataDevices[DeviceSelected],BAR4_OFFSET);
	AhciPciHeaders[DeviceSelected]->ABAR = GetABARValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->SS_VENDOR_ID = GetSS_VENDOR_IDValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->SS_DEVICE_ID = GetSS_DEVICE_IDValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->EROM = GetEROMValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->CAP = GetCAPValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->INTERRUPT_PIN = GetINTERRUPT_PINValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->INTERRUPT_LINE = GetINTERRUPT_LINEValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->MGNT = GetMGNTValue(SataDevices[DeviceSelected]);
	AhciPciHeaders[DeviceSelected]->MLANT = GetMLANTValue(SataDevices[DeviceSelected]);

	

}

/*


\
	uint8_t MGNT; //Min Grant
	uint8_t MLANT; //Max Latency
}PCI_AHCI_HEADER, * P_PCI_AHCI_HEADER;
*/

LOUDDK_API_ENTRY void UnmountSataDevice() {

}