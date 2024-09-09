#include <LouDDK.h>

#define PciGadgetHeader 0x00
#define PciBridgeHeader 0x01
#define PciCardHeader	0x02
#define BAR0Offset 0x10
#define BAR1Offset 0x14
#define BAR2Offset 0x18
#define BAR3Offset 0x1C
#define BAR4Offset 0x20
#define BAR5Offset 0x24

#define CMD_IO     0b1
#define CMD_MEMORY 0b10

bool BaseAddressRegister::DisableChildProofing(P_PCI_DEVICE_OBJECT PDEV){
	
	command = pci_read(PDEV->bus, PDEV->slot, PDEV->func, CMD_OFFSET);

	// Write back the modified command register
	write_pci(PDEV->bus, PDEV->slot, PDEV->func, CMD_OFFSET, pci_read(PDEV->bus, PDEV->slot, PDEV->func, CMD_OFFSET) & ~(CMD_IO | CMD_MEMORY));
	
	return true;
}

bool BaseAddressRegister::EnableChildProofing(P_PCI_DEVICE_OBJECT PDEV){

	write_pci(PDEV->bus, PDEV->slot, PDEV->func, CMD_OFFSET, command);

	return true;
}

BaseAddressRegister::BaseAddressRegister(P_PCI_DEVICE_OBJECT PDEV) {
	uint32_t Bar[6];
	DisableChildProofing(PDEV);
	Bar[0] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset);
	Bar[1] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR1Offset);
	Bar[2] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR2Offset);
	Bar[3] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR3Offset);
	Bar[4] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR4Offset);
	Bar[5] = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR5Offset);
	
	for (uint8_t BarNum = 0; BarNum < 6; BarNum++) {
		
		type[BarNum] = (Bar[BarNum] & 0x01) ? InputOutPut : MemoryMapping;

		if (type[BarNum] == MemoryMapping) {
			MMIO[BarNum] = true;

			LouPrint("Memory Map Is ");
			switch ((Bar[BarNum] >> 1) & 0x03) {
				case 0: { // 32-bit Memory Address
					LouPrint("32 Bit\n");
					address[BarNum] = (uint8_t*)(uintptr_t)(Bar[BarNum] & 0xFFFFFFF0);
					// Backup the original BAR value
					uint32_t original_value = Bar[BarNum];
					//LouPrint("Original Value:%h\n", original_value);
					// Write all 1s to determine size
					write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + BarNum * 4, 0xFFFFFFFF);
		
					uint32_t size_value = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + BarNum * 4) & 0xFFFFFFF0;
					// Calculate the size
					size[BarNum] = (~size_value) + 1;
					
					//LouPrint("Size Value:%h\n", size[BarNum]);

					// Restore the original BAR value
					write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + BarNum * 4, original_value);

					continue;
				}
				case 2: { // 64-bit Memory Address

					continue;
				}
				default:
					continue;
			}
		}
		else {
			// Correctly mask out the lower bits to get the base I/O address
			address[BarNum] = (uint8_t*)(uintptr_t)(Bar[BarNum] & 0xFFFFFFFC);
			prefetchable[BarNum] = false;
			MMIO[BarNum] = false;

			LouPrint("IO Map\n");

			// Calculate the size of the I/O region
			uint32_t originalBarValue = Bar[BarNum];
			write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + (BarNum * 4), 0xFFFFFFFF);
			uint32_t sizeValue = pci_read(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + (BarNum * 4));
			write_pci(PDEV->bus, PDEV->slot, PDEV->func, BAR0Offset + (BarNum * 4), originalBarValue);
			
			uint32_t ioSize = ~(sizeValue & 0xFFFFFFFC) + 1; // Correct mask for I/O size calculation
			size[BarNum] = ioSize;
		}

	}
	EnableChildProofing(PDEV);
}


BaseAddressRegister::~BaseAddressRegister() {

}

