#include "../../../ATA/SATA/ahci.h"
#include <Hal.h>

string DRV_VERSION = 			   "\nLousine Internal Kernel AHCI.SYS Module Version 2.01\n";
string DRV_UNLOAD_STRING_SUCCESS = "Driver Execution Completed Successfully Exiting Proccess\n\n"; 
string DRV_UNLOAD_STRING_FAILURE = "Driver Execution Failed To Execute Properly Exiting Proccess\n\n"; 

#define ATA_CMD_IDENTIFY_PACKET_DEVICE 0xA1

int find_cmdslot(HBA_PORT *port);

uint8_t InterruptRequest;
bool ExternalSata;
bool EnclosureManagement;
bool CommandCompletionCoalesing;
bool PartialStateCapable;
bool SlumberStateCapable;
bool PIOMultipleDRQBlock;
bool FisBasedSwitching;
bool PortMultiplier;
bool AhciOnly;
uint8_t HbaSpeed;
bool CommandListOveride;
bool ActivityLED;
bool AggressiveLinkPoweManagement;
bool StaggeringSpinUp;
bool MechanicalPresenceSwitch;
bool SNotificationRegister;
bool NativeCommandQueing;
bool HighMemSupport;


static inline
LOUSTATUS ResetAhciToKnowState(
HBA_MEM* Hba
);

void start_cmd(HBA_PORT *port){
    int timeout = 10000;  // Set timeout
    while ((port->cmd & HBA_PxCMD_CR) && timeout--) {
        sleep(100);  // Wait for CR to clear
    }
    if (timeout == 0) {
        LouPrint("Error: Command engine didn't clear CR\n");
        return;
    }
    port->cmd |= HBA_PxCMD_FRE | HBA_PxCMD_ST;  // Set FRE and ST bits
}

 
void stop_cmd(HBA_PORT *port){
    port->cmd &= ~HBA_PxCMD_ST;  // Clear ST (bit 0)
    port->cmd &= ~HBA_PxCMD_FRE;  // Clear FRE (bit 4)

    int timeout = 10000;  // Set timeout
    while (((port->cmd & HBA_PxCMD_FR) || (port->cmd & HBA_PxCMD_CR)) && timeout--) {
        sleep(100);  // Wait for FR and CR to clear
    }
    if (timeout == 0) {
        LouPrint("Error: Command engine didn't stop properly\n");
    }
}


void port_rebase(HBA_PORT *port, int portno) {
    stop_cmd(port);  // Stop command engine

    // Allocate separate memory regions for command list, FIS, and command tables
    uint32_t* clb_base = (uint32_t*)(uintptr_t)LouMallocEx(1024, KILOBYTE_PAGE);  // 1K per port for command list
    uint32_t* fb_base = (uint32_t*)(uintptr_t)LouMallocEx(256, KILOBYTE_PAGE);   // 256 bytes for FIS
    uint32_t* ctba_base = (uint32_t*)(uintptr_t)LouMallocEx(32 * 256, KILOBYTE_PAGE);  // 32 command tables of 256 bytes

    // Assign the Command List Base and FIS Base addresses
    port->clb = (uintptr_t)clb_base;
    port->clbu = 0;  // Zero out upper 32 bits for 32-bit addresses
    memset(clb_base, 0, 1024);

    port->fb = (uintptr_t)fb_base;
    port->fbu = 0;
    memset(fb_base, 0, 256);

    // Setup Command Table for each command header
    HBA_CMD_HEADER *cmdheader = (HBA_CMD_HEADER*)(uintptr_t)(port->clb);
    for (int i = 0; i < 32; i++) {
        cmdheader[i].prdtl = 8;  // Set PRDT length to 8
        cmdheader[i].ctba = (uintptr_t)(ctba_base + (i * 256));  // Command table offset
        cmdheader[i].ctbau = 0;  // Upper 32 bits
        memset((void*)(uintptr_t)cmdheader[i].ctba, 0, 256);
    }

    start_cmd(port);  // Start the command engine
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


void ClearCommandSlot(HBA_PORT *port, int slot_index) {
    // Check if command has completed by checking the PxCI register
    if ((port->ci & (1 << slot_index)) == 0) {
        // Command has completed, now clear the command slot
		HBA_CMD_HEADER* Headers = (HBA_CMD_HEADER*)(uintptr_t)port->clb;
        HBA_CMD_HEADER *cmd_header = &Headers[slot_index];
        memset((void *)(uintptr_t)cmd_header->ctba, 0, sizeof(HBA_CMD_TBL));  // Assuming ctba points to the command table

        // Optionally, reset any command header fields if necessary
        cmd_header->cfl = 0; // Clear command FIS length
        cmd_header->prdtl = 0; // Clear PRDT length
        // Clear any implemented status or error flags
    }
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
	uintptr_t DeviceObject
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
	LouFree((RAMADD)(AhciBase + (AhciDevice * sizeof(AHCI_DEVICE))));
}

LOUDDK_API_ENTRY uintptr_t GetSataDeviceObjects(){
	return (uintptr_t)AhciBase;
}

uintptr_t GetSatapiDriverObjectPointer(
HBA_PORT* Port
);

static inline void ProbePorts(HBA_MEM* Hba);

bool GetSataSectorSize(HBA_PORT *port, uint32_t *sectorSize);

KERNEL_IMPORT
void LouKePrintLittleEndianBufferHex(
    uintptr_t DataPointer,
    uint64_t Offset,
    uint64_t Length
);

void* ReadSATAPI(
HBA_PORT *port, 
uintptr_t DriverObject,
uint32_t lba, 
uint32_t count, 
LOUSTATUS* StateOfOperation,
uint32_t* BufferSize
);

static inline 
LOUSTATUS LoadMedia(
    HBA_PORT* Port,
    uintptr_t DriverObject
){

    LouPrint("Starting Mount\n");
    int FreeSlot = find_cmdslot(Port);

    if(FreeSlot == -1){//no slot available
        return (LOUSTATUS)STATUS_INSUFFICIENT_RESOURCES;
    }
    
    //cleanup slot just in case it was already used
    //and the system forgot to clean it already
    ClearCommandSlot(Port,FreeSlot);

    //get the address of the command headers
    HBA_CMD_HEADER* CmdHeaders = (HBA_CMD_HEADER*)(uintptr_t)Port->clb;
    //get the address of the free header
    HBA_CMD_HEADER* SelectedHeader = (HBA_CMD_HEADER*)&CmdHeaders[FreeSlot];
    //Get the Command Table
    HBA_CMD_TBL* SelectedTable = (HBA_CMD_TBL*)(uintptr_t)((uintptr_t)SelectedHeader->ctba | ((uintptr_t)SelectedHeader->ctbau << 32));

    FIS_REG_H2D* Fis = (FIS_REG_H2D*)&(SelectedTable->cfis);

    Fis->fis_type = FIS_TYPE_REG_H2D;
    Fis->c = 1; //packet is a command
    Fis->command = 0xA0; //ATAPI Packet Command
    Fis->device = 0x40; //master device
    
    // Setup command header
    SelectedHeader->cfl = sizeof(FIS_REG_H2D) / sizeof(uint32_t); // Command FIS length in DWORDs (should be 5)
    SelectedHeader->w = 0; // Not a write operation
    SelectedHeader->prdtl = 0; // No PRDT entries required for this command

    uint8_t* atapi_command = SelectedTable->acmd;
	atapi_command[0] = 0x1B;
	atapi_command[1] = 0x00;
	atapi_command[2] = 0x00;
	atapi_command[3] = 0x00;
	atapi_command[4] = 0x03;
	atapi_command[5] = 0x00;
	atapi_command[6] = 0x00;
	atapi_command[7] = 0x00;
	atapi_command[8] = 0x00;
	atapi_command[9] = 0x00;
	atapi_command[10] = 0x00;
	atapi_command[11] = 0x00;

    Port->ci = 1 << FreeSlot; // Issue command to the slot found earlier

    while ((Port->ci >> FreeSlot) & 0x01) {
        // Wait for command completion
        sleep(100);
    }
    if (Port->is & HBA_PxIS_TFES) { // Task File Error Status
        // Handle error
    }

    return STATUS_SUCCESS;
}

static inline void ProbePorts(HBA_MEM* Hba){
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
				AhciBase[AhciDevice].HBA_Address = (uintptr_t)Hba;
				AhciBase[AhciDevice].InterruptRequestNumber = InterruptRequest;
				//for each implemented device check their hba properties and features
				//and initialize them
				AhciBase[AhciDevice].PCap = (P_SATA_CAPABILITIES)LouMalloc(sizeof(SATA_CAPABILITIES));
				AhciBase[AhciDevice].Setup = (PGLOBAL_DEVICE_INFORMATON)LouMalloc(sizeof(GLOBAL_DEVICE_INFORMATON));
				AhciBase[AhciDevice].PCap->ExternalSata = ExternalSata;
				AhciBase[AhciDevice].PCap->EnclosureManagement = EnclosureManagement;
				AhciBase[AhciDevice].PCap->CommandCompletionCoalesing = CommandCompletionCoalesing;
				AhciBase[AhciDevice].PCap->PartialStateCapable = PartialStateCapable;
				AhciBase[AhciDevice].PCap->SlumberStateCapable = SlumberStateCapable;
				AhciBase[AhciDevice].PCap->PIOMultipleDRQBlock = PIOMultipleDRQBlock;
				AhciBase[AhciDevice].PCap->FisBasedSwitching = FisBasedSwitching;
				AhciBase[AhciDevice].PCap->PortMultiplier = PortMultiplier;
				AhciBase[AhciDevice].PCap->AhciOnly = AhciOnly;
				AhciBase[AhciDevice].PCap->HbaSpeed = HbaSpeed;
				AhciBase[AhciDevice].PCap->CommandListOveride = CommandListOveride;
				AhciBase[AhciDevice].PCap->ActivityLED = ActivityLED;
				AhciBase[AhciDevice].PCap->AggressiveLinkPoweManagement = AggressiveLinkPoweManagement;
				AhciBase[AhciDevice].PCap->StaggeringSpinUp = StaggeringSpinUp;
				AhciBase[AhciDevice].PCap->MechanicalPresenceSwitch = MechanicalPresenceSwitch;
				AhciBase[AhciDevice].PCap->SNotificationRegister = SNotificationRegister;
				AhciBase[AhciDevice].PCap->NativeCommandQueing = NativeCommandQueing;
				AhciBase[AhciDevice].PCap->HighMemSupport = HighMemSupport;
				GetSataSectorSize(&Hba->ports[i] , &AhciBase[AhciDevice].PCap->SectorSize);
				AhciBase[AhciDevice].InititializationStatus = true;
				AhciBase[AhciDevice].Setup->UsingDma = true;
				AhciDevice++;
			}
			else if(dt == AHCI_DEV_SATAPI){
				LouPrint("SATAPI Device Found On Port:%d\n",i);
				port_rebase(&Hba->ports[i],i);
				AhciBase[AhciDevice].Type = SATAPI;
				AhciBase[AhciDevice].PortAddress = (uintptr_t)&Hba->ports[i];
				AhciBase[AhciDevice].PortNumber = i;
				AhciBase[AhciDevice].DriverObject = GetSatapiDriverObjectPointer(&Hba->ports[i]);
				AhciBase[AhciDevice].HBA_Address = (uintptr_t)Hba;
				AhciBase[AhciDevice].InterruptRequestNumber = InterruptRequest;
				//for each implemented device check their hba properties and features
				//and initialize them
				AhciBase[AhciDevice].PCap = (P_SATA_CAPABILITIES)LouMalloc(sizeof(SATA_CAPABILITIES));
				AhciBase[AhciDevice].Setup = (PGLOBAL_DEVICE_INFORMATON)LouMalloc(sizeof(GLOBAL_DEVICE_INFORMATON));
				AhciBase[AhciDevice].PCap->ExternalSata = ExternalSata;
				AhciBase[AhciDevice].PCap->EnclosureManagement = EnclosureManagement;
				AhciBase[AhciDevice].PCap->CommandCompletionCoalesing = CommandCompletionCoalesing;
				AhciBase[AhciDevice].PCap->PartialStateCapable = PartialStateCapable;
				AhciBase[AhciDevice].PCap->SlumberStateCapable = SlumberStateCapable;
				AhciBase[AhciDevice].PCap->PIOMultipleDRQBlock = PIOMultipleDRQBlock;
				AhciBase[AhciDevice].PCap->FisBasedSwitching = FisBasedSwitching;
				AhciBase[AhciDevice].PCap->PortMultiplier = PortMultiplier;
				AhciBase[AhciDevice].PCap->AhciOnly = AhciOnly;
				AhciBase[AhciDevice].PCap->HbaSpeed = HbaSpeed;
				AhciBase[AhciDevice].PCap->CommandListOveride = CommandListOveride;
				AhciBase[AhciDevice].PCap->ActivityLED = ActivityLED;
				AhciBase[AhciDevice].PCap->AggressiveLinkPoweManagement = AggressiveLinkPoweManagement;
				AhciBase[AhciDevice].PCap->StaggeringSpinUp = StaggeringSpinUp;
				AhciBase[AhciDevice].PCap->MechanicalPresenceSwitch = MechanicalPresenceSwitch;
				AhciBase[AhciDevice].PCap->SNotificationRegister = SNotificationRegister;
				AhciBase[AhciDevice].PCap->NativeCommandQueing = NativeCommandQueing;
				AhciBase[AhciDevice].PCap->HighMemSupport = HighMemSupport;
				AhciBase[AhciDevice].InititializationStatus = true;
				AhciBase[AhciDevice].Setup->UsingDma = true;
				//LoadMedia(
        		//	&Hba->ports[i],
        		//	AhciBase[AhciDevice].DriverObject
    			//);
				AhciDevice++;
			}
			else if(dt == AHCI_DEV_SEMB){
				LouPrint("SEMB Drive Found On Port:%d\n",i);
				port_rebase(&Hba->ports[i],i);
				AhciBase[AhciDevice].Type = SEMB;
				AhciBase[AhciDevice].PortAddress = (uintptr_t)&Hba->ports[i];
				AhciBase[AhciDevice].PortNumber = i;
				AhciBase[AhciDevice].HBA_Address = (uintptr_t)Hba;
				AhciBase[AhciDevice].InterruptRequestNumber = InterruptRequest;
				//for each implemented device check their hba properties and features
				//and initialize them
				AhciBase[AhciDevice].PCap = (P_SATA_CAPABILITIES)LouMalloc(sizeof(SATA_CAPABILITIES));
				AhciBase[AhciDevice].Setup = (PGLOBAL_DEVICE_INFORMATON)LouMalloc(sizeof(GLOBAL_DEVICE_INFORMATON));
				AhciBase[AhciDevice].PCap->ExternalSata = ExternalSata;
				AhciBase[AhciDevice].PCap->EnclosureManagement = EnclosureManagement;
				AhciBase[AhciDevice].PCap->CommandCompletionCoalesing = CommandCompletionCoalesing;
				AhciBase[AhciDevice].PCap->PartialStateCapable = PartialStateCapable;
				AhciBase[AhciDevice].PCap->SlumberStateCapable = SlumberStateCapable;
				AhciBase[AhciDevice].PCap->PIOMultipleDRQBlock = PIOMultipleDRQBlock;
				AhciBase[AhciDevice].PCap->FisBasedSwitching = FisBasedSwitching;
				AhciBase[AhciDevice].PCap->PortMultiplier = PortMultiplier;
				AhciBase[AhciDevice].PCap->AhciOnly = AhciOnly;
				AhciBase[AhciDevice].PCap->HbaSpeed = HbaSpeed;
				AhciBase[AhciDevice].PCap->CommandListOveride = CommandListOveride;
				AhciBase[AhciDevice].PCap->ActivityLED = ActivityLED;
				AhciBase[AhciDevice].PCap->AggressiveLinkPoweManagement = AggressiveLinkPoweManagement;
				AhciBase[AhciDevice].PCap->StaggeringSpinUp = StaggeringSpinUp;
				AhciBase[AhciDevice].PCap->MechanicalPresenceSwitch = MechanicalPresenceSwitch;
				AhciBase[AhciDevice].PCap->SNotificationRegister = SNotificationRegister;
				AhciBase[AhciDevice].PCap->NativeCommandQueing = NativeCommandQueing;
				AhciBase[AhciDevice].PCap->HighMemSupport = HighMemSupport;
				AhciBase[AhciDevice].InititializationStatus = true;
				AhciBase[AhciDevice].Setup->UsingDma = true;
				AhciDevice++;
			}
			else if(dt == AHCI_DEV_PM){
				LouPrint("PM Device Found On Port:%d\n",i);
				port_rebase(&Hba->ports[i],i);
				AhciBase[AhciDevice].Type = PM;
				AhciBase[AhciDevice].PortAddress = (uintptr_t)&Hba->ports[i];
				AhciBase[AhciDevice].PortNumber = i;
				AhciBase[AhciDevice].HBA_Address = (uintptr_t)Hba;
				AhciBase[AhciDevice].InterruptRequestNumber = InterruptRequest;
				//for each implemented device check their hba properties and features
				//and initialize them
				AhciBase[AhciDevice].PCap = (P_SATA_CAPABILITIES)LouMalloc(sizeof(SATA_CAPABILITIES));
				AhciBase[AhciDevice].Setup = (PGLOBAL_DEVICE_INFORMATON)LouMalloc(sizeof(GLOBAL_DEVICE_INFORMATON));
				AhciBase[AhciDevice].PCap->ExternalSata = ExternalSata;
				AhciBase[AhciDevice].PCap->EnclosureManagement = EnclosureManagement;
				AhciBase[AhciDevice].PCap->CommandCompletionCoalesing = CommandCompletionCoalesing;
				AhciBase[AhciDevice].PCap->PartialStateCapable = PartialStateCapable;
				AhciBase[AhciDevice].PCap->SlumberStateCapable = SlumberStateCapable;
				AhciBase[AhciDevice].PCap->PIOMultipleDRQBlock = PIOMultipleDRQBlock;
				AhciBase[AhciDevice].PCap->FisBasedSwitching = FisBasedSwitching;
				AhciBase[AhciDevice].PCap->PortMultiplier = PortMultiplier;
				AhciBase[AhciDevice].PCap->AhciOnly = AhciOnly;
				AhciBase[AhciDevice].PCap->HbaSpeed = HbaSpeed;
				AhciBase[AhciDevice].PCap->CommandListOveride = CommandListOveride;
				AhciBase[AhciDevice].PCap->ActivityLED = ActivityLED;
				AhciBase[AhciDevice].PCap->AggressiveLinkPoweManagement = AggressiveLinkPoweManagement;
				AhciBase[AhciDevice].PCap->StaggeringSpinUp = StaggeringSpinUp;
				AhciBase[AhciDevice].PCap->MechanicalPresenceSwitch = MechanicalPresenceSwitch;
				AhciBase[AhciDevice].PCap->SNotificationRegister = SNotificationRegister;
				AhciBase[AhciDevice].PCap->NativeCommandQueing = NativeCommandQueing;
				AhciBase[AhciDevice].PCap->HighMemSupport = HighMemSupport;
				AhciBase[AhciDevice].InititializationStatus = true;
				AhciBase[AhciDevice].Setup->UsingDma = true;
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

KERNEL_IMPORT uint8_t FindTrueIRQ(uint8_t IRQ);

#define ESATA_BIT 5
#define EMS_BIT 6
#define CCC_BIT 7
#define PS_BIT 13
#define SS_BIT 14
#define PMD_BIT 15
#define FBSS_BIT 16
#define SPM_BIT 17
#define SAM_BIT 18
#define ISS_BIT 20
#define SCLO_BIT 24
#define SAL_BIT 25
#define SALP_BIT 26
#define SSS_BIT 27
#define SMPS_BIT 28
#define SSNTF_BIT 29
#define SNCQ_BIT 30
#define S64A_BIT 31

static inline LOUSTATUS InitializeHostBusAdapter(
HBA_MEM* Hba
){

	static uint32_t Capiabilities = Hba->cap;

	//check ExternalSATA Support
	if((Capiabilities >> ESATA_BIT) & 0x01){
		LouPrint("One Or More Drives May Be:%s\n", "ESATA");
		ExternalSata = true;;
	}
	else{
		ExternalSata = false;
	}
	//check for enclosure Managemnet
	if((Capiabilities >> EMS_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Enclosure Management");
		EnclosureManagement = true;
	}
	else {
		EnclosureManagement = false;
	}
	//check for Communist Party
	if((Capiabilities >> CCC_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Command Completion Coalesing");
		CommandCompletionCoalesing = true;
	}
	else {
		CommandCompletionCoalesing = false;
	}
	//check for Partial State
	if((Capiabilities >> PS_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Partial State");
		PartialStateCapable = true;
	}
	else{
		PartialStateCapable = false;
	}
	//check slumber state
	if((Capiabilities >> SS_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Slumber State");
		SlumberStateCapable = true;
	}
	else {
		SlumberStateCapable = false;
	}
	//Check PMD
	if((Capiabilities >> PMD_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "PIO Multiple DRQ Block");
		PIOMultipleDRQBlock = true;
	}
	else{
		PIOMultipleDRQBlock = false;
	}
	//check Fis Base
	if((Capiabilities >> FBSS_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Fis Based Switching");
		FisBasedSwitching = true;
	}
	else{
		FisBasedSwitching = false;
	}
	//Check for SPM
	if((Capiabilities >> SPM_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Port Multipliers");
		PortMultiplier = true;
	}
	else{
		PortMultiplier = false;
	}
	//check for SAM
	if((Capiabilities >> SAM_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "AHCI ONLY MODE");
		AhciOnly = true;
	}
	else {
		AhciOnly = true;
	}
	//assign ISS
	HbaSpeed = (Capiabilities >> ISS_BIT) & 0xF; //grab the 4 bits
	//check for sclo
	if((Capiabilities >> SCLO_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Command List Overide");
		CommandListOveride = true;
	}
	else{
		CommandListOveride = false;
	}
	//check sal
	if((Capiabilities >> SAL_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Activity LED");
		ActivityLED = true;
	}
	else{
		ActivityLED = false;
	}
	//check for salp
	if((Capiabilities >> SALP_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Aggresive Link Power Management");
		AggressiveLinkPoweManagement = true;
	}
	else{
		AggressiveLinkPoweManagement = false;
	}
	//check for the super N@zis
	if((Capiabilities >> SSS_BIT) & 0x0){
		LouPrint("Host Bus Adapter Supports:%s\n", "Staggered Spinup");
		StaggeringSpinUp = true;
	}
	else{
		StaggeringSpinUp = false;
	}
	//check for simps
	if((Capiabilities >> SMPS_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Mechanical Presence Switching");
		MechanicalPresenceSwitch = true;
	}
	else{
		MechanicalPresenceSwitch = false;
	}
	//check for ssntf
	if((Capiabilities >> SSNTF_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "SNotification");
		SNotificationRegister = true;
	}
	else{
		SNotificationRegister = false;
	}
	//check for SNCQ
	if((Capiabilities >> SNCQ_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Native Command Queing");
		NativeCommandQueing = true;
	}
	else{
		NativeCommandQueing = false;
	}
	//check for s64a
	if((Capiabilities >> S64A_BIT) & 0x01){
		LouPrint("Host Bus Adapter Supports:%s\n", "Supports 64 bit Memory Managment");
		HighMemSupport = true;
	}
	else{
		HighMemSupport = false;
	}

	return STATUS_SUCCESS;
}

LOUSTATUS InitAHCIController(P_PCI_DEVICE_OBJECT PDEV) {

	LouPrint(DRV_VERSION);

	InterruptRequest = FindTrueIRQ(LouKeGetPciInterruptPin(PDEV));

	if(FirstRunTrue)FirstRun();

	LouPrint("Initializing AHCI Device\n");

	PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
	GetPciConfiguration(PDEV->bus,PDEV->slot,PDEV->func,PciConfig);
	HBA_MEM* Hba = (HBA_MEM*)LouKeHalGetPciVirtualBaseAddress(PciConfig, 5);

	//for each implemented device check their hba properties and features
	//and initialize them

	ResetAhciToKnowState(Hba);
	
	InitializeHostBusAdapter(Hba);

	ProbePorts(Hba);

	LouFree((RAMADD)PciConfig);
	LouPrint(DRV_UNLOAD_STRING_SUCCESS);
	return LOUSTATUS_GOOD;
}


LOUDDK_API_ENTRY void AHCI_Interrupt_Handler(){

	//open devices 
	static uint16_t NumDev = GetNumberOfDevices();
	static PDeviceInformationTable Devices = GetDeviceInformationTable();
	//parse devices for ahci devices
	for(uint16_t i = 0; i < NumDev; i++){
		if(Devices[i].DeviceArchitecture == DEV_ARCH_AHCI){
			//for all implemented devices check:
			//the port interrupt status registers
			//to see if and what needs to be serviced



		}
	}
}
static inline
LOUSTATUS ResetAhciToKnowState(
    HBA_MEM* Hba
) {
    // Ensure AHCI is enabled
    if (!((Hba->ghc >> 31) & 0x01)) Hba->ghc |= (1 << 31);

    // First Phase: INIT & Wait for AHCI Enable
    Hba->ghc |= 1;

    // Wait for GHC.AHCI_EN bit to be set, and wait for reset to complete
    int timeout = 10000;  // Timeout to prevent infinite loops
    while ((Hba->ghc & 0x01) && !((Hba->ghc >> 31) & 0x01) && timeout--) {
        sleep(100);
    }

    // Check if timeout occurred
    if (timeout == 0) {
        return STATUS_TIMEOUT;
    }

    // Check if the controller is idle and AHCI is enabled
    if (((Hba->ghc >> 31) & 0x01) == 0  // AHCI not enabled
        && ((Hba->ccc_ctl & 0x01) == 1)) // CCC_CTL not disabled
    {
        return STATUS_UNSUCCESSFUL;
    }

    LouPrint("AHCI Device Reset to Known State\n");
    return STATUS_SUCCESS;
}
