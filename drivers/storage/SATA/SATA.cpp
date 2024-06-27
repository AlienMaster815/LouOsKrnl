#include <LouDDK.h>
#include <NtAPI.h>
#include "sata.h"

#define HBA_PxCMD_ST    0x0001
#define HBA_PxCMD_FRE   0x0010
#define HBA_PxCMD_FR    0x4000
#define HBA_PxCMD_CR    0x8000
#define GHC_HR (1U << 0) // HBA reset bit in the GHC register

BOOLEAN AhciInit = true;

void setAhciInitializationBit(
	BOOLEAN Initialization_Bit
) {
	AhciInit = Initialization_Bit;
}

LOUDDK_API_ENTRY bool IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func) {
	//LouPrint("Checking PCI For Sata Controller\n");

	uint16_t vendorID = PciGetVendorID(bus, slot);
	uint16_t deviceID = PciGetDeviceID(bus, slot, func);
	uint8_t ClassCode = pciConfigReadByte(bus,slot,func, 0x0B);
	uint8_t SubClass = pciConfigReadByte(bus,slot,func, 0x0A);

	switch (vendorID) {
	case 0x8086:
		switch (deviceID) {
		case INTEL_DEVICE_8086_82801HM_HEM_ICH8M_ICH8M_E_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_COMET_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_COMET_LAKE_SATA_AHCI_CONTROLLER_2:
		case INTEL_ATOM_PROCESSOR_E3800_SERIES_SATA_AHCI_CONTROLLER_0f22:
		case INTEL_ATOM_PROCESSOR_E3800_SERIES_SATA_AHCI_CONTROLLER_0f23:
		case INTEL_CORP_8086_SAPPHIRE_RAPIDS_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_SAPPHIRE_RAPIDS_SATA_AHCI_CONTROLLER_1:
		case INTEL_CORP_8086_6_SERIES_C200_SERIES_CHIPSET_FAMILY_6_PORT_DESKTOP_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_6_SERIES_C200_SERIES_CHIPSET_FAMILY_6_PORT_MOBILE_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_C600_X79_SERIES_CHIPSET_6_PORT_SATA_AHCI_CONTROLLER:
		case INTEL_CORP_8086_7_SERIES_C210_SERIES_CHIPSET_FAMILY_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_CORP_8086_7_SERIES_CHIPSET_FAMILY_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_631XESB_632XESB_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_NM10_ICH7_FAMILY_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801GBM_GHM_ICH7_M_FAMILY_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801HR_HO_HH_ICH8R_DO_DH_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801HB_ICH8_4_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801IR_IO_IH_ICH9R_DO_DH_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801IB_ICH9_4_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_82801IBM_IEM_ICH9M_ICH9M_E_4_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_DEVICE_8086_ICE_LAKE_LP_SATA_CONTROLLER_AHCI_MODE_34d3:
		case INTEL_DEVICE_8086_82801JD_DO_ICH10_FAMILY_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_82801JI_ICH10_FAMILY_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_6_PORT_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_4_PORT_SATA_AHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_4_PORT_SATA_AHCI_CONTROLLER_3:
		case INTEL_DEVICE_8086_5_SERIES_3400_SERIES_CHIPSET_6_PORT_SATA_AHCI_CONTROLLER_2:
		case INTEL_DEVICE_8086_TIGER_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_ELKHART_LAKE_SATA_AHCI:
		case INTEL_DEVICE_8086_JASPER_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_EP80579_S_ATA_AHCI:
		case INTEL_DEVICE_8086_ALDER_LAKE_PCH_P_SATA_AHCI_CONTROLLER:
		case INTEL_DEVICE_8086_CELERON_N3350_PENTIUM_N4200_ATOM_E3900_SERIES_SATA_AHCI_CONTROLLER:
		case INTEL_RAPTOR_LAKE_SATA_AHCI_CONTROLLER:
		case INTEL_ALDER_LAKE_S_PCH_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_PLATFORM_CONTROLLER_HUB_EG20T_SATA_AHCI_CONTROLLER:
		case INTEL_8_SERIES_C220_SERIES_6_PORT_SATA_CONTROLLER_1_AHCI_MODE:
		case INTEL_8_SERIES_C220_SERIES_6_PORT_SATA_CONTROLLER_1_AHCI_MODE_2:
		case INTEL_9_SERIES_CHIPSET_FAMILY_SATA_CONTROLLER_AHCI_MODE_1:
		case INTEL_9_SERIES_CHIPSET_FAMILY_SATA_CONTROLLER_AHCI_MODE_2:
		case INTEL_C610_X99_SERIES_CHIPSET_FAMILY_6_PORT_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_C610_X99_SERIES_CHIPSET_FAMILY_SSATA_CONTROLLER_AHCI_MODE_1:
		case INTEL_8_SERIES_SATA_CONTROLLER_1_AHCI_MODE_1:
		case INTEL_8_SERIES_SATA_CONTROLLER_1_AHCI_MODE_2:
		case INTEL_WILDCAT_POINT_LP_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_SUNRISE_POINT_LP_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_CANNON_POINT_LP_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_Q170_Q150_B150_H170_H110_Z170_CM236_CHIPSET_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_HM170_QM170_CHIPSET_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_C620_SERIES_CHIPSET_FAMILY_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_C620_SERIES_CHIPSET_FAMILY_SSATA_CONTROLLER_AHCI_MODE:
		case INTEL_LEWISBURG_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_200_SERIES_PCH_SATA_CONTROLLER_AHCI_MODE:
		case INTEL_CANNON_LAKE_PCH_SATA_AHCI_CONTROLLER:
		case INTEL_CANNON_LAKE_MOBILE_PCH_SATA_AHCI_CONTROLLER:
		case INTEL_400_SERIES_CHIPSET_FAMILY_SATA_AHCI_CONTROLLER:
			LouPrint("Found An Intel Sata Controller\n");
			Sata_init(bus, slot, func);
			return true;
			break;

		default:
			//LouPrint("Non Sata Intel Device\n");
			break;
		}
		break;
	case AdvancedMicroDevices_1:
	case AdvancedMicroDevices_2:
	case AMD_3:
		switch (deviceID) {
		//some may be missing we will go back later


		case SB7x0SB8x0SB9x0SATAControllerAHCImode_1:
		case SB7x0SB8x0SB9x0SATAControllerAHCImode:
		case FCHSATAControllerAHCImode:
		case FCHSATAControllerAHCImode_3:
		case KabiniMullinsSATARaidAHCIModeDotHilldriver:
		case FCHSATAControllerAHCImode_2:
		case SB600NonRaid5SATA:
		case SB7x0SB8x0SB9x0SATAControllerIDEmode:
		case SB7x0SB8x0SB9x0SATAControllerNonRAID5mode:
		case SB8x0SB9x0SATAControllerStoragemode:
		//case S5000PSLSATAServerBoard:
		case X370SeriesChipsetSATAController:
		case X399SeriesChipsetSATAController:
		case A300SeriesChipsetSATAController:
		case A400SeriesChipsetSATAController:
		case A500SeriesChipsetSATAController:
		case A600SeriesChipsetSATAController:
		case FCHSATAControllerIDEmode:
		//case FCHSATAControllerAHCImode:
		//case KabiniMullinsSATARaidAHCIModeDotHilldriver:
		case FCHSATAControllerIDEmode_1:
		//case FCHSATAControllerAHCImode_2:
		case FCHSATAControllerAHCImode_1:
		case SB600SATAControllerRAID5mode:
		case SB7x0SB8x0SB9x0SATAControllerRAID5mode:
		case FCHSATAControllerRAIDmode_5:
		case FCHSATAControllerRAIDmode_4:
		case FCHSATAControllerRAIDmode_2:
		case FCHSATAControllerRAIDmode_1:
			LouPrint("Found An AMD Sata Controller\n");
			Sata_init(bus,slot,func);
			return true;
			break;
		default:
			//not ahci
			break;
		}
	default:

		break;
	}
	if(ClassCode == 0x01){
		if(SubClass == 0x05){
			LouPrint("Found Generic Sata Controller\n");
			Sata_init(bus, slot, func);
			return true;
		}
	}

	return false;
}

LOUSTATUS InitAHCIController(P_PCI_DEVICE_OBJECT PDEV);

LOUDDK_API_ENTRY void Sata_init(uint8_t bus, uint8_t slot, uint8_t func) {

	LouPrint("Initializing Sata Controller\n");

	P_PCI_DEVICE_OBJECT SataDev = (P_PCI_DEVICE_OBJECT)LouMalloc(sizeof(P_PCI_DEVICE_OBJECT));

	SataDev->bus = bus;
	SataDev->slot = slot;
	SataDev->func = func;
	SataDev->DeviceID = PciGetDeviceID(bus, slot, func);
	SataDev->VendorID = PciGetVendorID(bus, slot);

	uint8_t ILine = LouKeGetPciInterruptLine(SataDev);
	uint8_t IPin = LouKeGetPciInterruptPin(SataDev);

	//LouPrint("Interrupt Line:%d:PIN:%d\n",ILine,IPin);

	uint16_t CMD = LouKeReadPciCommandRegister(SataDev);
	CMD |= (PCI_INTERRUPT_ENABLE | MEMORY_SPACE_ENABLE | IO_SPACE_ENABLE);
	LouKeWritePciCommandRegister(SataDev, CMD);

	LouKeConfigureInterrupt(ILine, false, IPin, 0);

	InitAHCIController(SataDev);

}

int find_cmdslot(HBA_PORT *port);

bool ReadSATAPI(HBA_PORT *port, uint32_t lba, uint32_t count, uint16_t *buf) {
    const uint32_t BytesPerSector = 2048;  // Fixed sector size for ATAPI devices

    port->is = (uint32_t)-1; // Clear pending interrupt bits
    int spin = 0; // Spin lock timeout counter
    int slot = find_cmdslot(port); // Find a command slot
    if (slot == -1)
        return false;

    HBA_CMD_HEADER* cmdheader = (HBA_CMD_HEADER*)(uint64_t)port->clb + slot;
    cmdheader->cfl = sizeof(FIS_REG_H2D) / sizeof(uint32_t); // Command FIS size
    cmdheader->w = 0; // Read from device
    cmdheader->prdtl = (uint16_t)((count * BytesPerSector - 1) / (8 * 1024)) + 1; // PRDT entries count, each handles up to 8K bytes

    HBA_CMD_TBL* cmdtbl = (HBA_CMD_TBL*)(uint64_t)(cmdheader->ctba);
    memset(cmdtbl, 0, sizeof(HBA_CMD_TBL) + (cmdheader->prdtl - 1) * sizeof(HBA_PRDT_ENTRY));
    uint32_t totalBytes = count * BytesPerSector;  // Total bytes to read
    uint16_t *currentBuf = buf;
    uint32_t bytesRemaining = totalBytes;

    for (int i = 0; i < cmdheader->prdtl; i++) {
        uint32_t bytesThisEntry = (bytesRemaining < 8192) ? bytesRemaining : 8192;  // Each PRDT handles up to 8K bytes
        cmdtbl->prdt_entry[i].dba = (uint32_t)(uint64_t)currentBuf;
        cmdtbl->prdt_entry[i].dbc = bytesThisEntry - 1;  // Byte count (0-based, hence -1)
        cmdtbl->prdt_entry[i].i = 1;

        currentBuf += bytesThisEntry / sizeof(uint16_t);  // Move buffer pointer
        bytesRemaining -= bytesThisEntry;
    }

    // Setup ATAPI command in the command FIS
    FIS_REG_H2D* cmdfis = (FIS_REG_H2D*)(uint64_t)(&cmdtbl->cfis);
    memset(cmdfis, 0, sizeof(FIS_REG_H2D));
    cmdfis->fis_type = FIS_TYPE_REG_H2D;
    cmdfis->c = 1; // Command
    cmdfis->command = ATA_CMD_PACKET; // ATAPI Packet command

    uint8_t atapi_command[12] = {
        0xA8, // READ (12) command
        0x00, // Reserved
        (uint8_t)(lba >> 24), // LBA high
        (uint8_t)(lba >> 16),
        (uint8_t)(lba >> 8),
        (uint8_t)lba, // LBA low
        0x00, // Reserved
        (uint8_t)(totalBytes >> 24), // Transfer length high
        (uint8_t)(totalBytes >> 16),
        (uint8_t)(totalBytes >> 8),
        (uint8_t)totalBytes, // Transfer length low
        0x00  // Control
    };

    memcpy(cmdtbl->acmd, atapi_command, 12); // Copy ATAPI command to command table

    // Wait until the port is no longer busy before issuing a new command
    while ((port->tfd & (ATA_DEV_BUSY | ATA_DEV_DRQ)) && spin < 1000000) {
        sleep(100); // Sleep to avoid busy waiting
        spin++;
    }
    if (spin == 1000000) {
        LouPrint("Port is hung\n");
        return false;
    }

    port->ci = 1 << slot; // Issue command

    // Wait for command completion
    while (1) {
        if ((port->ci & (1 << slot)) == 0)
            break;
        if (port->is & HBA_PxIS_TFES) { // Task File Error Status
            LouPrint("Read disk error\n");
            return false;
        }
        sleep(100); // Sleep to avoid busy waiting
    }

    // Check again for errors
    if (port->is & HBA_PxIS_TFES) {
        LouPrint("Read disk error\n");
        return false;
    }

    return true;
}



bool ReadSATA(HBA_PORT *port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t *buf){
	
	UNUSED static uint32_t SectorSizeInBytes;
	
	
	port->is = (uint32_t) -1;		// Clear pending interrupt bits
	int spin = 0; // Spin lock timeout counter
	int slot = find_cmdslot(port);
	if (slot == -1)
		return false;
 
	HBA_CMD_HEADER *cmdheader = (HBA_CMD_HEADER*)(uint64_t)port->clb;
	cmdheader += slot;
	cmdheader->cfl = sizeof(FIS_REG_H2D)/sizeof(uint32_t);	// Command FIS size
	cmdheader->w = 0;		// Read from device
	cmdheader->prdtl = (uint16_t)((count-1)>>4) + 1;	// PRDT entries count
 
	HBA_CMD_TBL *cmdtbl = (HBA_CMD_TBL*)(uint64_t)(cmdheader->ctba);
	memset(cmdtbl, 0, sizeof(HBA_CMD_TBL) +
 		(cmdheader->prdtl-1)*sizeof(HBA_PRDT_ENTRY));
	int32_t i;
	// 8K bytes (16 sectors) per PRDT
	for (i=0; i<cmdheader->prdtl-1; i++){
		cmdtbl->prdt_entry[i].dba = (uint32_t)(uint64_t)buf;
		cmdtbl->prdt_entry[i].dbc = 8*1024-1;	// 8K bytes (this value should always be set to 1 less than the actual value)
		cmdtbl->prdt_entry[i].i = 1;
		buf += 4*1024;	// 4K words
		count -= 16;	// 16 sectors
	}
	// Last entry
	cmdtbl->prdt_entry[i].dba = (uint32_t)(uint64_t)buf;
	cmdtbl->prdt_entry[i].dbc = (count<<9)-1;	// 512 bytes per sector
	cmdtbl->prdt_entry[i].i = 1;
 
	// Setup command
	FIS_REG_H2D *cmdfis = (FIS_REG_H2D*)(uint64_t)(&cmdtbl->cfis);
 
	cmdfis->fis_type = FIS_TYPE_REG_H2D;
	cmdfis->c = 1;	// Command
	cmdfis->command = ATA_CMD_READ_DMA_EX;
 
	cmdfis->lba0 = (uint8_t)startl;
	cmdfis->lba1 = (uint8_t)(startl>>8);
	cmdfis->lba2 = (uint8_t)(startl>>16);
	cmdfis->device = 1<<6;	// LBA mode
 
	cmdfis->lba3 = (uint8_t)(startl>>24);
	cmdfis->lba4 = (uint8_t)starth;
	cmdfis->lba5 = (uint8_t)(starth>>8);
 
	cmdfis->countl = count & 0xFF;
	cmdfis->counth = (count >> 8) & 0xFF;
 
	// The below loop waits until the port is no longer busy before issuing a new command
	while ((port->tfd & (ATA_DEV_BUSY | ATA_DEV_DRQ)) && spin < 1000000){
		sleep(100);
		spin++;
	}
	if (spin == 1000000){
		LouPrint("Port is hung\n");
		return false;
	}
 
	port->ci = 1<<slot;	// Issue command
 
	// Wait for completion
	while (1){
		sleep(100);
		// In some longer duration reads, it may be helpful to spin on the DPS bit 
		// in the PxIS port field as well (1 << 5)
		if ((port->ci & (1<<slot)) == 0) 
			break;
		if (port->is & HBA_PxIS_TFES){
			LouPrint("Read disk error\n");
			return false;
		}
	}
 
	// Check again
	if (port->is & HBA_PxIS_TFES){
		LouPrint("Read disk error\n");
		return false;
	}
 
	return true;
}

bool WriteSATA(HBA_PORT *port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t *buf) {
    port->is = (uint32_t) -1;        // Clear pending interrupt bits
    int spin = 0; // Spin lock timeout counter
    int slot = find_cmdslot(port);
    if (slot == -1)
        return false;
 
    HBA_CMD_HEADER *cmdheader = (HBA_CMD_HEADER*)(uint64_t)port->clb;
    cmdheader += slot;
    cmdheader->cfl = sizeof(FIS_REG_H2D)/sizeof(uint32_t);    // Command FIS size
    cmdheader->w = 1;        // Write to device
    cmdheader->prdtl = (uint16_t)((count-1)>>4) + 1;    // PRDT entries count
 
    HBA_CMD_TBL *cmdtbl = (HBA_CMD_TBL*)(uint64_t)(cmdheader->ctba);
    memset(cmdtbl, 0, sizeof(HBA_CMD_TBL) +
        (cmdheader->prdtl-1)*sizeof(HBA_PRDT_ENTRY));
    int32_t i;
    // 8K bytes (16 sectors) per PRDT
    for (i=0; i<cmdheader->prdtl-1; i++){
        cmdtbl->prdt_entry[i].dba = (uint32_t)(uint64_t)buf;
        cmdtbl->prdt_entry[i].dbc = 8*1024-1;    // 8K bytes (this value should always be set to 1 less than the actual value)
        cmdtbl->prdt_entry[i].i = 1;
        buf += 4*1024;    // 4K words
        count -= 16;    // 16 sectors
    }
    // Last entry
    cmdtbl->prdt_entry[i].dba = (uint32_t)(uint64_t)buf;
    cmdtbl->prdt_entry[i].dbc = (count<<9)-1;    // 512 bytes per sector
    cmdtbl->prdt_entry[i].i = 1;
 
    // Setup command
    FIS_REG_H2D *cmdfis = (FIS_REG_H2D*)(uint64_t)(&cmdtbl->cfis);
 
    cmdfis->fis_type = FIS_TYPE_REG_H2D;
    cmdfis->c = 1;    // Command
    cmdfis->command = ATA_CMD_WRITE_DMA_EX;
 
    cmdfis->lba0 = (uint8_t)startl;
    cmdfis->lba1 = (uint8_t)(startl>>8);
    cmdfis->lba2 = (uint8_t)(startl>>16);
    cmdfis->device = 1<<6;    // LBA mode
 
    cmdfis->lba3 = (uint8_t)(startl>>24);
    cmdfis->lba4 = (uint8_t)starth;
    cmdfis->lba5 = (uint8_t)(starth>>8);
 
    cmdfis->countl = count & 0xFF;
    cmdfis->counth = (count >> 8) & 0xFF;
 
    // The below loop waits until the port is no longer busy before issuing a new command
    while ((port->tfd & (ATA_DEV_BUSY | ATA_DEV_DRQ)) && spin < 1000000){
        sleep(100);
        spin++;
    }
    if (spin == 1000000){
        LouPrint("Port is hung\n");
        return false;
    }
 
    port->ci = 1<<slot;    // Issue command
 
    // Wait for completion
    while (1){
		sleep(100);
        // In some longer duration reads, it may be helpful to spin on the DPS bit 
        // in the PxIS port field as well (1 << 5)
        if ((port->ci & (1<<slot)) == 0) 
            break;
        if (port->is & HBA_PxIS_TFES){
            LouPrint("Write disk error\n");
            return false;
        }
    }
 
    // Check again
    if (port->is & HBA_PxIS_TFES){
        LouPrint("Write disk error\n");
        return false;
    }
 
    return true;
}
