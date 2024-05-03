#include <NtAPI.h>
#include "../SATA/sata.h"
#include <LouDDK.h>
#include "ahci.h"

/// Tyler Grenier 4/11/24 9:55 PM
/// Im back fuckers and its good to be back
/// first up on the agenda lets start programming
/// some basic drivers to get us throught the day
/// while we finish the wdk kit for our readability/
/// portabilility now first up we have ahci...
/// and our progress on the wdk is half way...


#define CAP_S64A_MASK BITMASK(31)
#define CAP_SNCQ_MASK BITMASK(30)
#define CAP_SSNTF_MASK BITMASK(29)
#define CAP_SMPS_MASK BITMASK(28)
#define CAP_SSS_MASK BITMASK(27)
#define CAP_SALP_MASK BITMASK(26)
#define CAP_SAL_MASK BITMASK(25)
#define CAP_SCLO_MASK BITMASK(24)
#define CAP_ISS_MASK (0x0F << 20)
#define CAP_RESERVED_MASK BITMASK(19)
#define CAP_SAM_MASK BITMASK(18)
#define CAP_SPM_MASK BITMASK(17)
#define CAP_FBSS_MASK BITMASK(16)
#define CAP_PMD_MASK BITMASK(15)
#define CAP_SSC_MASK BITMASK(14)
#define CAP_PSC_MASK BITMASK(13)
#define CAP_NCS_MASK (0x1F << 8)
#define CAP_CCCS_MASK BITMASK(7)
#define CAP_EMS_MASK BITMASK(6)
#define CAP_SXS_MASK BITMASK(5)
#define CAP_NP_MASK (0x1F)

#define GHC_AE_BIT BITMASK(31)
#define GHC_MRSM_BIT BITMASK(2)
#define GHC_IE_BIT BITMASK(1)
#define GHC_HR_BIT BITMASK(0)


//Get ABAR

KERNEL_IMPORT LOUSTATUS LouEnablePciDevice(P_PCI_DEVICE_OBJECT PDEV);
bool readSataDevice(P_HBA_Port port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t* buf);
bool writeSataDevice(P_HBA_Port port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t* buf);
bool ReadSatapiDevice(P_HBA_Port port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t* buf);
bool WriteSatapiDevice(P_HBA_Port port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t* buf);

#include <stdint.h>

#define ICH_MAP 0x90
#define ENODEV 19

LOUDDK_API_ENTRY void AhciInterruptHandler();

#define ABAR 5

static inline void start_cmd(P_HBA_Port Px) {
	// wait untill the command register is ready for a neww command
	while (Px->cmd & HBA_PxCMD_CR) {
		sleep(100);
	}
	//set fre and st
	Px->cmd |= HBA_PxCMD_FRE;
	Px->cmd |= HBA_PxCMD_ST;
}

static inline void stop_cmd(P_HBA_Port Px) {
	//clear ST then fre
	Px->cmd &= ~HBA_PxCMD_ST;
	Px->cmd &= ~HBA_PxCMD_FRE;

	while (1) {
		sleep(100);
		if (Px->cmd & HBA_PxCMD_FR) {
			continue;
		}
		if (Px->cmd & HBA_PxCMD_CR) {
			continue;
		}
		break;
	}
}


LOUSTATUS ResetHba(P_HBA_Memory hba) {

	//Set AHCI Mode If not already
	if (!((hba->ghc >> 31) & 0x01)) { hba->ghc |= (1U << 31); }
	
	//Give HBA Reset Command
	hba->ghc |= 1;

	//check for reset to complete
	while (hba->ghc & 0x01) {
		sleep(100);
	}


	return LOUSTATUS_GOOD;
}

int find_cmdslot(P_HBA_Port port) {
	// slots will hold the combined status of SACT and CI
	// Each bit corresponds to a slot; if a bit is set, the slot is busy.
	uint32_t slots = (port->sact | port->ci);

	// Assuming there are 32 slots, based on typical AHCI implementations
	for (uint32_t i = 0; i < 32; i++) {
		// Check if the slot is free by testing each bit.
		if ((slots & (1 << i)) == 0) {
			return i; // Return the index of the first free slot found
		}
	}

	// If no free slot is found, print an error message and return -1.
	LouPrint("Cannot find free command list entry\n");
	return -1;
}


static inline int CheckType(P_HBA_Port Px) {

	uint32_t ssts = Px->ssts;
	uint8_t ipm = (ssts >> 8) & 0x0F;
	uint8_t det = ssts & 0x0F;

	if (det != HBA_PORT_DET_PRESENT) {
		return AHCI_DEV_NULL;
	}
	if (ipm != HBA_PORT_IPM_ACTIVE) {
		return AHCI_DEV_NULL;
	}

	switch (Px->sig) {
	case SATA_SIG_ATAPI:
		return AHCI_DEV_SATAPI;
	case SATA_SIG_SEMB:
		return AHCI_DEV_SEMB;
	case SATA_SIG_PM: 
		return AHCI_DEV_PM;
	default:
		return AHCI_DEV_SATA;
	}

}

static inline void port_rebase(P_HBA_Port Px,uint8_t PortNum) {

	stop_cmd(Px);

	Px->clb = AHCI_BASE + (PortNum << 10);
	Px->clbu = 0;
	memset((void*)(uintptr_t)Px->clb, 0, 1024);

	Px->fb = AHCI_BASE + (32 << 10) + (PortNum << 8);
	Px->fbu = 0;
	memset((void*)(uintptr_t)(Px->fb), 0, 256);

	HBA_CMD_HEADER* CmdHeader = (HBA_CMD_HEADER*)(uintptr_t)(Px->clb);

	for (uint8_t i = 0; i < 32; i++) {
		CmdHeader[i].prdtl = 8;
		CmdHeader[i].ctba = AHCI_BASE + (40 << 10) + (PortNum << 13) + (i << 8);
		CmdHeader[i].ctbau = 0;
		memset((void*)(uintptr_t)CmdHeader[i].ctba, 0, 256);
	}
	start_cmd(Px);	// Start command engine

}

void SataRegisterPort(P_HBA_Port Px, uint8_t PortNum, uint8_t DevType);

uint16_t buffer[2048];  // Example buffer to hold one sector (if sector size is 1024 bytes)
uint32_t startBlockL = 0;  // Starting LBA low part
uint32_t startBlockH = 0;  // Starting LBA high part (if needed)
uint32_t numBlocks = 1;  // Number of blocks to read

void InitializePort(P_HBA_Port Px, uint8_t PortNum) {
	port_rebase(Px, PortNum);
	sleep(100);
	//MarkAs Uncashable if not already
	//Reset Port
	//Start Interrupts

}

static inline void ProbePort(P_HBA_Memory hba) {
	uint32_t PortInformation = hba->pi;
	int i = 0;

	while (i < 32) {

		if (PortInformation & 1) {

			int dt = CheckType((P_HBA_Port)((uint64_t)hba + 0x100 + (i * 0x80)));

			if (dt == AHCI_DEV_SATA) {
				LouPrint("Sata SATA Device Found On:%d\n",i);
				//InitializePort((P_HBA_Port)((uint64_t)hba + 0x100 + (i * 0x80)), i);
			}
			else if (dt == AHCI_DEV_SATAPI) {
				LouPrint("Sata SATAPI Device Found:%d\n",i);
				InitializePort((P_HBA_Port)((uint64_t)hba + 0x100 + (i * 0x80)), i);
			}
			else if (dt == AHCI_DEV_SEMB) {
				LouPrint("Sata SEMB Device Found:%d\n",i);
				InitializePort((P_HBA_Port)((uint64_t)hba + 0x100 + (i * 0x80)), i);
			}
			else if (dt == AHCI_DEV_PM) {
				LouPrint("Sata PM Device Found:%d\n",i);
				InitializePort((P_HBA_Port)((uint64_t)hba + 0x100 + (i * 0x80)), i);
			}
			else {
				LouPrint("No Drive Found On Port:%d\n",i);
			}

		}

		PortInformation >>= 1;
		i++;

	}

}

void SataRegisterHBA(uintptr_t Address);

LOUSTATUS LouInitAhciDevice(P_PCI_DEVICE_OBJECT PDEV) {

	UNUSED int32_t n_ports, i, rc;

	//we dont have a defined kit yet as previously stated so well just do things manually
	//uint8_t BAR; //Later we will get other bar types

	LouPrint("Hello Driver World\n");

	///
	/// parse device ids to make sure the system dosen use
	/// alternitive BARS
	/// 
	
	BaseAddressRegister Bars(PDEV);

	LouMapAddress((uint64_t)Bars.address[ABAR], (uint64_t)Bars.address[ABAR], KERNEL_PAGE_WRITE_PRESENT);

	rc = LouEnablePciDevice(PDEV);
	if (rc)
		return rc;

	if  (PDEV->VendorID == INTEL_PCI &&
		(PDEV->DeviceID == INTEL_DEVICE_8086_82801FR_FRW_ICH6R_ICH6RW_SATA_CONTROLLER ||
		PDEV->DeviceID == INTEL_DEVICE_8086_82801FBM_ICH6M_SATA_CONTROLLER)) {
		//This One spechial 
		LouPrint("Dis One Speshal\n");
		uint8_t MAP = pciConfigReadByte(PDEV->bus,PDEV->slot,PDEV->func,ICH_MAP);

		if (MAP & 0x3) {
			LouPrint("Device Cannot Enable AHCI Mode\n");
			return -ENODEV;
		}

	}

	LouPrint("Setting up Ahci Device\n");
	RegisterInterruptHandler(AhciInterruptHandler,50);

	//register the interrupt pin for 50
	uint8_t iline = pciConfigReadByte(PDEV->bus, PDEV->slot, PDEV->func, 0x3C);
	LouPrint("Current Interrupt Line Is|%d\n",iline);
	iline = 50;
	pciConfigWriteWord(PDEV->bus, PDEV->slot, PDEV->func, 0x3C, iline);
	while (pciConfigReadByte(PDEV->bus, PDEV->slot, PDEV->func, 0x3C) != iline);
	LouPrint("Interrupt Line Succeffuly Changed\n");


	LouPrint("AHCI Abar Address Is:%h\n", Bars.address[ABAR]);
	
	//uint32_t FOOBAR = *(uint32_t*)(uintptr_t)Bars.address[ABAR];
	
	SataRegisterHBA((uintptr_t)Bars.address[ABAR]);

	P_HBA_Memory hba = (P_HBA_Memory)(uintptr_t)Bars.address[ABAR];

	//Reset System
	ResetHba(hba);

	ProbePort(hba);

	return STATUS_SUCCESS;
}

#define ATA_DEV_BUSY 0x80
#define ATA_DEV_DRQ 0x08
#define FIS_TYPE_REG_H2D 0x27
#define ATA_CMD_READ_DMA_EX 0x25
#define HBA_PxIS_TFES (1 << 30)


bool readSataDevice(P_HBA_Port port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t* buf)
{
	port->is = (uint32_t)-1;		// Clear pending interrupt bits
	int spin = 0; // Spin lock timeout counter
	int slot = find_cmdslot(port);
	if (slot == -1)
		return false;

	HBA_CMD_HEADER* cmdheader = (HBA_CMD_HEADER*)(uintptr_t)port->clb;
	cmdheader += slot;
	cmdheader->cfl = sizeof(fis_reg_h2d) / sizeof(uint32_t);	// Command FIS size
	cmdheader->w = 0;		// Read from device
	cmdheader->prdtl = (uint16_t)((count - 1) >> 4) + 1;	// PRDT entries count

	HBA_CMD_TBL* cmdtbl = (HBA_CMD_TBL*)(uintptr_t)(cmdheader->ctba);
	memset(cmdtbl, 0, sizeof(HBA_CMD_TBL) +
		(cmdheader->prdtl - 1) * sizeof(HBA_PRDT_ENTRY));
	int i;
	// 8K bytes (16 sectors) per PRDT
	for (i = 0; i < cmdheader->prdtl - 1; i++)
	{
		cmdtbl->prdt_entry[i].dba = (uint32_t)(uintptr_t)buf;
		cmdtbl->prdt_entry[i].dbc = 8 * 1024 - 1;	// 8K bytes (this value should always be set to 1 less than the actual value)
		cmdtbl->prdt_entry[i].i = 1;
		buf += 4 * 1024;	// 4K words
		count -= 16;	// 16 sectors
	}
	// Last entry
	cmdtbl->prdt_entry[i].dba = (uint32_t)(uintptr_t)buf;
	cmdtbl->prdt_entry[i].dbc = (count << 9) - 1;	// 512 bytes per sector
	cmdtbl->prdt_entry[i].i = 1;

	// Setup command
	fis_reg_h2d* cmdfis = (fis_reg_h2d*)(&cmdtbl->cfis);

	cmdfis->fis_type = FIS_TYPE_REG_H2D;
	cmdfis->c = 1;	// Command
	cmdfis->command = ATA_CMD_READ_DMA_EX;

	cmdfis->lba0 = (uint8_t)startl;
	cmdfis->lba1 = (uint8_t)(startl >> 8);
	cmdfis->lba2 = (uint8_t)(startl >> 16);
	cmdfis->device = 1 << 6;	// LBA mode

	cmdfis->lba3 = (uint8_t)(startl >> 24);
	cmdfis->lba4 = (uint8_t)starth;
	cmdfis->lba5 = (uint8_t)(starth >> 8);

	cmdfis->countl = count & 0xFF;
	cmdfis->counth = (count >> 8) & 0xFF;

	// The below loop waits until the port is no longer busy before issuing a new command
	while ((port->tfd & (ATA_DEV_BUSY | ATA_DEV_DRQ)) && spin < 1000000)
	{
		spin++;
	}
	if (spin == 1000000)
	{
		LouPrint("Port is hung\n");
		return false;
	}

	port->ci = 1 << slot;	// Issue command

	// Wait for completion
	while (1)
	{
		sleep(100);
		// In some longer duration reads, it may be helpful to spin on the DPS bit 
		// in the PxIS port field as well (1 << 5)
		if ((port->ci & (1 << slot)) == 0)
			break;
		if (port->is & HBA_PxIS_TFES)	// Task file error
		{
			LouPrint("Read disk error\n");
			return false;
		}
	}

	// Check again
	if (port->is & HBA_PxIS_TFES)
	{
		LouPrint("Read disk error\n");
		return false;
	}

	return true;
}
#define ATA_CMD_WRITE_DMA_EX 0x35

bool writeSataDevice(P_HBA_Port port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t* buf) {
	port->is = (uint32_t)-1;  // Clear pending interrupt bits
	int spin = 0;
	int slot = find_cmdslot(port);
	if (slot == -1)
		return false;
	HBA_CMD_HEADER* cmdheader = (HBA_CMD_HEADER*)(uintptr_t)port->clb;
	cmdheader += slot;
	cmdheader->cfl = sizeof(fis_reg_h2d) / sizeof(uint32_t);
	cmdheader->w = 1;  // Write to device
	cmdheader->prdtl = (uint16_t)((count - 1) >> 4) + 1;

	HBA_CMD_TBL* cmdtbl = (HBA_CMD_TBL*)(uintptr_t)(cmdheader->ctba);
	memset(cmdtbl, 0, sizeof(HBA_CMD_TBL) + (cmdheader->prdtl - 1) * sizeof(HBA_PRDT_ENTRY));
	int i;
	for (i = 0; i < cmdheader->prdtl; i++) {
		cmdtbl->prdt_entry[i].dba = (uint32_t)(uintptr_t)buf;
		cmdtbl->prdt_entry[i].dbc = 8 * 1024 - 1;
		cmdtbl->prdt_entry[i].i = 1;
		buf += 4 * 1024;
		count -= 16;
	}

	fis_reg_h2d* cmdfis = (fis_reg_h2d*)(&cmdtbl->cfis);
	cmdfis->fis_type = FIS_TYPE_REG_H2D;
	cmdfis->c = 1;
	cmdfis->command = ATA_CMD_WRITE_DMA_EX;

	cmdfis->lba0 = (uint8_t)startl;
	cmdfis->lba1 = (uint8_t)(startl >> 8);
	cmdfis->lba2 = (uint8_t)(startl >> 16);
	cmdfis->device = 1 << 6;

	cmdfis->lba3 = (uint8_t)(startl >> 24);
	cmdfis->lba4 = (uint8_t)starth;
	cmdfis->lba5 = (uint8_t)(starth >> 8);

	cmdfis->countl = count & 0xFF;
	cmdfis->counth = (count >> 8) & 0xFF;

	while ((port->tfd & (ATA_DEV_BUSY | ATA_DEV_DRQ)) && spin < 1000000) {
		sleep(100);
		spin++;
	}
	if (spin == 1000000) {
		return false;
	}


	port->ci = 1 << slot;

	while (1) {
		sleep(500);
		if ((port->ci & (1 << slot)) == 0)
			break;
		if (port->is & HBA_PxIS_TFES) {
			return false;
		}
	}

	return true;
}


#define ATA_CMD_PACKET 0xA0  // Typically used for ATAPI devices



bool ReadSatapiDevice(P_HBA_Port port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t* buf) {
	port->is = (uint32_t)-1;  // Clear pending interrupt bits

	int slot = find_cmdslot(port);
	if (slot == -1)
		return false;

	HBA_CMD_HEADER* cmdheader = (HBA_CMD_HEADER*)(uintptr_t)port->clb;
	cmdheader += slot;
	cmdheader->cfl = sizeof(fis_reg_h2d) / sizeof(uint32_t);    // Command FIS size
	cmdheader->w = 0;  // Read from device
	cmdheader->prdtl = (uint16_t)((count - 1) >> 4) + 1;  // PRDT entries count

	HBA_CMD_TBL* cmdtbl = (HBA_CMD_TBL*)(uintptr_t)(cmdheader->ctba);
	memset(cmdtbl, 0, sizeof(HBA_CMD_TBL) +
		(cmdheader->prdtl - 1) * sizeof(HBA_PRDT_ENTRY));
	int i;
	for (i = 0; i < cmdheader->prdtl - 1; i++) {
		cmdtbl->prdt_entry[i].dba = (uint32_t)(uintptr_t)buf;
		cmdtbl->prdt_entry[i].dbc = 8 * 1024 - 1;  // 8K bytes (this value should always be set to 1 less than the actual value)
		cmdtbl->prdt_entry[i].i = 1;
		buf += 4 * 1024;  // 4K words
		count -= 16;  // 16 sectors
	}
	// Last entry
	cmdtbl->prdt_entry[i].dba = (uint32_t)(uintptr_t)buf;
	cmdtbl->prdt_entry[i].dbc = (count << 9) - 1;  // 512 bytes per sector
	cmdtbl->prdt_entry[i].i = 1;

	// Setup command
	fis_reg_h2d* cmdfis = (fis_reg_h2d*)(&cmdtbl->cfis);
	cmdfis->fis_type = FIS_TYPE_REG_H2D;
	cmdfis->c = 1;  // Command
	cmdfis->command = ATA_CMD_PACKET;  // Sending a packet command for ATAPI

	cmdfis->lba0 = (uint8_t)startl;
	cmdfis->lba1 = (uint8_t)(startl >> 8);
	cmdfis->lba2 = (uint8_t)(startl >> 16);
	cmdfis->device = 0x40;  // LBA mode set, master drive

	cmdfis->lba3 = (uint8_t)(startl >> 24);
	cmdfis->lba4 = (uint8_t)starth;
	cmdfis->lba5 = (uint8_t)(starth >> 8);

	cmdfis->countl = count & 0xFF;
	cmdfis->counth = (count >> 8) & 0xFF;

	int spin = 0;  // Declare spin here
	// Check if the port is not busy before issuing the command
	while ((port->tfd & (ATA_DEV_BUSY | ATA_DEV_DRQ)) && (spin++ < 1000000)) {
		sleep(100);
	}

	if (spin >= 1000000) {
		return false;  // Port is hung, return failure
	}

	port->ci = 1 << slot;  // Issue command


	// Wait for completion
	while (port->ci & (1 << slot)) {
		sleep(100);
		if (port->is & HBA_PxIS_TFES) {  // Check for task file error
			return false;
		}
	}
	return true;  // Success
}

bool WriteSatapiDevice(P_HBA_Port port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t* buf) {
	port->is = (uint32_t)-1;

	int slot = find_cmdslot(port);
	if (slot == -1)
		return false;

	HBA_CMD_HEADER* cmdheader = (HBA_CMD_HEADER*)(uintptr_t)port->clb;
	cmdheader += slot;
	cmdheader->cfl = sizeof(fis_reg_h2d) / sizeof(uint32_t);
	cmdheader->w = 1;

	HBA_CMD_TBL* cmdtbl = (HBA_CMD_TBL*)(uintptr_t)(cmdheader->ctba);
	memset(cmdtbl, 0, sizeof(HBA_CMD_TBL) + (cmdheader->prdtl - 1) * sizeof(HBA_PRDT_ENTRY));
	int i;
	for (i = 0; i < cmdheader->prdtl; i++) {
		cmdtbl->prdt_entry[i].dba = (uint32_t)(uintptr_t)buf;
		cmdtbl->prdt_entry[i].dbc = 8 * 1024 - 1;
		cmdtbl->prdt_entry[i].i = 1;
		buf += 4 * 1024;
		count -= 16;
	}

	fis_reg_h2d* cmdfis = (fis_reg_h2d*)(&cmdtbl->cfis);
	cmdfis->fis_type = FIS_TYPE_REG_H2D;
	cmdfis->c = 1;
	cmdfis->command = ATA_CMD_PACKET;

	cmdfis->lba0 = (uint8_t)startl;
	cmdfis->lba1 = (uint8_t)(startl >> 8);
	cmdfis->lba2 = (uint8_t)(startl >> 16);
	cmdfis->device = 0x40;

	cmdfis->lba3 = (uint8_t)(startl >> 24);
	cmdfis->lba4 = (uint8_t)starth;
	cmdfis->lba5 = (uint8_t)(starth >> 8);

	cmdfis->countl = count & 0xFF;
	cmdfis->counth = (count >> 8) & 0xFF;

	int spin = 0;
	while ((port->tfd & (ATA_DEV_BUSY | ATA_DEV_DRQ)) && (spin++ < 1000000)) {
		sleep(100);
	}

	if (spin >= 1000000) {
		return false;
	}

	port->ci = 1 << slot;

	while (port->ci & (1 << slot)) {
		sleep(100);
		if (port->is & HBA_PxIS_TFES) {
			return false;
		}
	}

	return true;
}


LOUDDK_API_ENTRY void AhciInterruptHandler() {
	LouPrint("AHCI INTERRUPT\n");
	/*
		Check global interrupt status.Write back its value.For all the ports that have a corresponding set bit...
		Check the port interrupt status.Write back its value.If zero, continue to the next port.
		If error bit set, reset port / retry commands as necessary.
		Compare issued commands register to the commands you have recorded as issuing.For any bits where a command was issued but is no longer running, this means that the command has completed.
		Once done, continue checking if any other devices sharing the IRQ also need servicing.
	*/
	while (1);
}