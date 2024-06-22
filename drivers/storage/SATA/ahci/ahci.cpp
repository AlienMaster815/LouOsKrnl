#include "ahci.h"

string DRV_VERSION = 			   "\nLousine Internal Kernel AHCI.SYS Module Version 1.01\n";
string DRV_UNLOAD_STRING_SUCCESS = "Driver Execution Completed Successfully Exiting Proccess\n\n"; 
string DRV_UNLOAD_STRING_FAILURE = "Driver Execution Failed To Execute Properly Exiting Proccess\n\n"; 



#define	SATA_SIG_ATA	0x00000101	// SATA drive
#define	SATA_SIG_ATAPI	0xEB140101	// SATAPI drive
#define	SATA_SIG_SEMB	0xC33C0101	// Enclosure management bridge
#define	SATA_SIG_PM	0x96690101	// Port multiplier
 
#define AHCI_DEV_NULL 0
#define AHCI_DEV_SATA 1
#define AHCI_DEV_SEMB 2
#define AHCI_DEV_PM 3
#define AHCI_DEV_SATAPI 4
 
#define HBA_PORT_IPM_ACTIVE 1
#define HBA_PORT_DET_PRESENT 3

#define	AHCI_BASE	0x400000	// 4M
 
#define HBA_PxCMD_ST    0x0001
#define HBA_PxCMD_FRE   0x0010
#define HBA_PxCMD_FR    0x4000
#define HBA_PxCMD_CR    0x8000

#define ATA_CMD_PACKET 0xA0
#define ATA_CMD_READ_DMA_EX 0x25 // This is a typical value; check your specification
#define HBA_PxIS_TFES (1 << 30) 
 
#define ATA_DEV_BUSY 0x80
#define ATA_DEV_DRQ 0x08
#define HBA_PxIS_TFES (1 << 30)
#define FIS_TYPE_REG_H2D 0x27
#define ATA_CMD_WRITE_DMA_EX 0x35
#define ATAPI_CMD_READ 0xA8


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
int find_cmdslot(HBA_PORT *port)
{
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

bool ReadSATA(HBA_PORT *port, uint32_t startl, uint32_t starth, uint32_t count, uint16_t *buf){
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

bool ReadSATAPI(HBA_PORT *port, uint32_t Start, uint32_t count, uint16_t *buf){
    port->is = (uint32_t) -1;        // Clear pending interrupt bits
    int spin = 0; // Spin lock timeout counter
    int slot = find_cmdslot(port);
    if (slot == -1)
        return false;

    HBA_CMD_HEADER *cmdheader = (HBA_CMD_HEADER*)(uint64_t)port->clb;
    cmdheader += slot;
    cmdheader->cfl = sizeof(FIS_REG_H2D)/sizeof(uint32_t);    // Command FIS size
    cmdheader->w = 0;        // Read from device
    cmdheader->prdtl = (uint16_t)((count-1)>>4) + 1;    // PRDT entries count

    HBA_CMD_TBL *cmdtbl = (HBA_CMD_TBL*)(uint64_t)(cmdheader->ctba);
    memset(cmdtbl, 0, sizeof(HBA_CMD_TBL) +
         (cmdheader->prdtl-1)*sizeof(HBA_PRDT_ENTRY));

    for (int i=0; i<cmdheader->prdtl; i++){
        cmdtbl->prdt_entry[i].dba = (uint32_t)(uint64_t)buf;
        cmdtbl->prdt_entry[i].dbc = 8*1024 - 1;    // Adjust as per block size and count
        cmdtbl->prdt_entry[i].i = 1;
        buf += 4*1024; // Adjust as per block size
        count -= 16;   // Adjust as per sectors read per PRDT
    }

    // Setup command
    FIS_REG_H2D *cmdfis = (FIS_REG_H2D*)(uint64_t)(&cmdtbl->cfis);
    cmdfis->fis_type = FIS_TYPE_REG_H2D;
    cmdfis->c = 1;    // Command
    cmdfis->command = ATA_CMD_PACKET;

        // The command
    uint8_t read_cmd[12] = {0xA8, 0,
                        static_cast<uint8_t>((Start >> 0x18) & 0xFF),
                        static_cast<uint8_t>((Start >> 0x10) & 0xFF),
                        static_cast<uint8_t>((Start >> 0x08) & 0xFF),
                        static_cast<uint8_t>((Start >> 0x00) & 0xFF),
                        static_cast<uint8_t>((count >> 0x18) & 0xFF),
                        static_cast<uint8_t>((count >> 0x10) & 0xFF),
                        static_cast<uint8_t>((count >> 0x08) & 0xFF),
                        static_cast<uint8_t>((count >> 0x00) & 0xFF),
                        0, 0};

	memcpy(cmdtbl->acmd, read_cmd, 12);  // Place ATAPI command in the ACMD field


	// The below loop waits until the port is no longer busy before issuing a new command
	while ((port->tfd & (ATA_DEV_BUSY | ATA_DEV_DRQ)) && spin < 1000000){
		sleep(100);
		spin++;
	}
	if (spin == 1000000){
		LouPrint("Port is hung\n");
		return false;
	}
 

	// Issue command
    port->ci = 1 << slot;    // Set command issue register to issue command on the calculated slot

    // Wait for command completion
    while (1) {
		sleep(100); // Avoid busy waiting; give some time between checks
		//LouPrint("Waiting: CI=%h, IS=%h, TFD=%h\n", port->ci, port->is, port->tfd);

        if ((port->ci & (1 << slot)) == 0) 
            break;  // Command completed
        if (port->is & HBA_PxIS_TFES) {
            LouPrint("Read disk error\n");  // Task File Error Status
            return false;
        }

    }

    // Final error check after command execution
    if (port->is & HBA_PxIS_TFES) {
        LouPrint("Read disk error\n");
        return false;
    }

    return true;  // Successful read
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

uint16_t Buff[512];

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

static uint16_t AhciDevice = 0;

static PAHCI_DEVICE AhciBase;

static bool FirstRunTrue = true;

static inline void FirstRun(){
	AhciBase = (PAHCI_DEVICE)LouMalloc(sizeof(AHCI_DEVICE) * 512);
	FirstRunTrue = false;
}

LOUDDK_API_ENTRY void LastSataRun(){
	LouFree((RAMADD)(AhciBase + AhciDevice), sizeof(AHCI_DEVICE) * (512 - AhciDevice));
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
				LouPrint("SATAPI Device Found On Port%d\n",i);
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