#include "ahci.h"

string DRV_VERSION = 			   "\nLousine Internal Kernel AHCI.SYS Module Version 1.01\n";
string DRV_UNLOAD_STRING_SUCCESS = "Driver Execution Completed Successfully Exiting Proccess\n\n"; 
string DRV_UNLOAD_STRING_FAILURE = "Driver Execution Failed To Execute Properly Exiting Proccess\n\n"; 

#define ATA_CMD_IDENTIFY_PACKET_DEVICE 0xA1

int find_cmdslot(HBA_PORT *port);

bool GetSectorSize(HBA_PORT *port, uint32_t *sectorSize) {
    // Assuming cmdtable and cmdheader setup is similar to your ReadSATAPI function
	LouPrint("Retrieveing Sector Size\n");
    HBA_CMD_HEADER* cmdheader = (HBA_CMD_HEADER*)(uintptr_t)(port->clb);
    HBA_CMD_TBL* cmdtbl = (HBA_CMD_TBL*)(uintptr_t)(cmdheader->ctba);
    memset(cmdtbl, 0, sizeof(HBA_CMD_TBL));

    // Setup command FIS for IDENTIFY PACKET DEVICE
    FIS_REG_H2D* cmdfis = (FIS_REG_H2D*)(uintptr_t)(&cmdtbl->cfis);
    cmdfis->fis_type = FIS_TYPE_REG_H2D;
    cmdfis->c = 1;
    cmdfis->command = ATA_CMD_IDENTIFY_PACKET_DEVICE;

    // Setup buffer for response
    uint16_t* identifyData = (uint16_t*)(uintptr_t)cmdtbl->prdt_entry[0].dba;
    memset(identifyData, 0, 512); // Size of the IDENTIFY data buffer

	LouPrint("issueing Command\n");

    // Issue command
    port->ci = 1 << find_cmdslot(port); // Set the appropriate command slot
    while (port->ci & 1) { // Wait for completion
		sleep(100);
    }
	LouPrint("Checking For Errors\n");
    // Check for errors
    if (port->is & HBA_PxIS_TFES) {
        return false;
    }
	LouPrint("Parseing Data\n");
    // Parse IDENTIFY data for sector size
    // Note: Adjust these indexes based on actual IDENTIFY data layout for your device
    // For example, we use index 106 for sector size as per some specifications; this is hypothetical.
    if (identifyData[106] & 0x4000) { // Check if word 106 indicates that the logical sector size is reported
        if (identifyData[106] & 0x1000) {
            *sectorSize = 4096; // The device uses 4K logical sectors
        } else {
            *sectorSize = 512; // The device uses 512-byte logical sectors
        }
    } else {
        *sectorSize = 2048; // Default or traditional sector size for optical drives
    }

    return true;
}



// Start command engine
void start_cmd(HBA_PORT *port){
	// Wait until CR (bit15) is cleared
	while (port->cmd & HBA_PxCMD_CR)sleep(100);
 
	// Set FRE (bit4) and ST (bit0)
	port->cmd |= HBA_PxCMD_FRE;
	port->cmd |= HBA_PxCMD_ST; 
}
 
// Stop command engine
void stop_cmd(HBA_PORT *port){
	// Clear ST (bit0)
	port->cmd &= ~HBA_PxCMD_ST;
 
	// Clear FRE (bit4)
	port->cmd &= ~HBA_PxCMD_FRE;
 
	// Wait until FR (bit14), CR (bit15) are cleared
	while(1)
	{
		sleep(100);
		if (port->cmd & HBA_PxCMD_FR)
			continue;
		if (port->cmd & HBA_PxCMD_CR)
			continue;
		break;
	}
 
}

void port_rebase(HBA_PORT *port, int portno){
	stop_cmd(port);	// Stop command engine
 
	// Command list offset: 1K*portno
	// Command list entry size = 32
	// Command list entry maxim count = 32
	// Command list maxim size = 32*32 = 1K per port
	port->clb = AHCI_BASE + (portno<<10);
	port->clbu = 0;
	memset((void*)(uintptr_t)(port->clb), 0, 1024);
 
	// FIS offset: 32K+256*portno
	// FIS entry size = 256 bytes per port
	port->fb = AHCI_BASE + (32<<10) + (portno<<8);
	port->fbu = 0;
	memset((void*)(uintptr_t)(port->fb), 0, 256);
 
	// Command table offset: 40K + 8K*portno
	// Command table size = 256*32 = 8K per port
	HBA_CMD_HEADER *cmdheader = (HBA_CMD_HEADER*)(uintptr_t)(port->clb);
	for (int i=0; i<32; i++)
	{
		cmdheader[i].prdtl = 8;	// 8 prdt entries per command table
					// 256 bytes per command table, 64+16+48+16*8
		// Command table offset: 40K + 8K*portno + cmdheader_index*256
		cmdheader[i].ctba = AHCI_BASE + (40<<10) + (portno<<13) + (i<<8);
		cmdheader[i].ctbau = 0;
		memset((void*)(uintptr_t)cmdheader[i].ctba, 0, 256);
	}
 
	start_cmd(port);	// Start command engine
}

int CheckSataType(HBA_PORT *port)
{
	uint32_t ssts = port->ssts;
 
	uint8_t ipm = (ssts >> 8) & 0x0F;
	uint8_t det = ssts & 0x0F;
 
	if (det != HBA_PORT_DET_PRESENT)	// Check drive status
		return AHCI_DEV_NULL;
	if (ipm != HBA_PORT_IPM_ACTIVE)
		return AHCI_DEV_NULL;
 
	switch (port->sig)
	{
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

#define ATA_DEV_BUSY 0x80
#define ATA_DEV_DRQ 0x08
 

 // Find a free command list slot
int find_cmdslot(HBA_PORT *port){
    // If not set in SACT and CI, the slot is free
    uint32_t slots = (port->sact | port->ci);
    for (uint32_t i = 0; i < 32; i++) { // Iterate over 32 possible slots
        if ((slots & (1 << i)) == 0) { // Check if the i-th bit is 0 (slot is free)
            return i;
        }
    }
    LouPrint("Cannot find free command list entry\n");
    return -1; // No free slot found
}



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

/*
typedef enum{
	SATA,
	SATAPI,
	SEMB,
	PM,
}AHCI_TYPE;

typedef struct _AHCI_DEVICE{
	AHCI_TYPE Type;
	uintptr_t PortAddress;
	uint8_t PortNumber;
}AHCI_DEVICE, * PAHCI_DEVICE;
*/
static uint16_t AhciDevice = 0;

LOUDDK_API_ENTRY uint16_t GetNumberOfAhciDevices(){
	return AhciDevice; 
}

static PAHCI_DEVICE AhciBase;

static bool FirstRunTrue = true;

static inline void FirstRun(){
	AhciBase = (PAHCI_DEVICE)LouMalloc(sizeof(AHCI_DEVICE) * 512);
	FirstRunTrue = false;
}

LOUDDK_API_ENTRY void LastSataRun(){
	LouFree((RAMADD)(AhciBase + (AhciDevice * sizeof(AHCI_DEVICE))), sizeof(AHCI_DEVICE) * (512 - AhciDevice));
}

LOUDDK_API_ENTRY uintptr_t GetSataDeviceObjects(){
	return (uintptr_t)AhciBase;
}

void ProbePorts(HBA_MEM* Hba){
	LouPrint("Probing Hba Pi Port For Implemented Ports (PI)\n");
	
	uint32_t Pi = Hba->pi;
	uint8_t i = 0;
	while (i < 32){
		if(Pi & 0x01){
			int dt = CheckSataType(&Hba->ports[i]);
			if(dt == AHCI_DEV_SATA){
				LouPrint("SATA Device Found On Port:%d\n",i);
				port_rebase(&Hba->ports[i],i);
				AhciBase[AhciDevice].Type = SATA;
				AhciBase[AhciDevice].PortAddress = (uintptr_t)&Hba->ports[i];
				AhciBase[AhciDevice].PortNumber = i;
				AhciDevice++;
			}
			else if(dt == AHCI_DEV_SATAPI){
				LouPrint("SATAPI Device Found On Port:%d\n",i);
				port_rebase(&Hba->ports[i],i);
				AhciBase[AhciDevice].Type = SATAPI;
				AhciBase[AhciDevice].PortAddress = (uintptr_t)&Hba->ports[i];
				AhciBase[AhciDevice].PortNumber = i;
				AhciDevice++;
			}
			else if(dt == AHCI_DEV_SEMB){
				LouPrint("SEMB Drive Found On Port:%d\n",i);
				port_rebase(&Hba->ports[i],i);
				AhciBase[AhciDevice].Type = SEMB;
				AhciBase[AhciDevice].PortAddress = (uintptr_t)&Hba->ports[i];
				AhciBase[AhciDevice].PortNumber = i;
				AhciDevice++;
			}
			else if(dt == AHCI_DEV_PM){
				LouPrint("PM Device Found On Port:%d\n",i);
				port_rebase(&Hba->ports[i],i);
				AhciBase[AhciDevice].Type = PM;
				AhciBase[AhciDevice].PortAddress = (uintptr_t)&Hba->ports[i];
				AhciBase[AhciDevice].PortNumber = i;
				AhciDevice++;
			}
			else{
				LouPrint("No drive found at port %d\n", i);
			}
		}
		Pi >>= 1;
		i ++;
	}

}



LOUSTATUS InitAHCIController(P_PCI_DEVICE_OBJECT PDEV) {

	LouPrint(DRV_VERSION);

	if(FirstRunTrue)FirstRun();

	LouPrint("Initializing AHCI Device\n");

	BaseAddressRegister BARS(PDEV);
	HBA_MEM* Hba = (HBA_MEM*)BARS.address[5];

	uint64_t AhciVBase = (uint64_t)LouMalloc(KILOBYTE_PAGE);

	//map page here
	LouMapAddress((uint64_t)Hba,AhciVBase ,KERNEL_PAGE_WRITE_PRESENT, KILOBYTE_PAGE);
	
	Hba = (HBA_MEM*)AhciVBase;

	ProbePorts(Hba);

	
	LouPrint(DRV_UNLOAD_STRING_SUCCESS);

	return LOUSTATUS_GOOD;
}