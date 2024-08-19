#include <LouDDK.h>
#include <NtAPI.h>
#include "sata.h"

int find_cmdslot(HBA_PORT *port);
void ClearCommandSlot(HBA_PORT *port, int slot_index);

#define MASTER 0x40
#define IDENTIFY_COMMAND 0xA1
#define ATAPI_PACKET_COMMAND 0xA0
#define COMMAND_TIMEOUT 255
#define TASK_FILE_ERROR_BIT 30

// Macro definitions for parsing IDENTIFY DEVICE data
#define WORD_LOGICAL_SECTOR_SIZE_VALID 106
#define LOGICAL_SECTOR_SIZE_LOWER_WORD 117
#define LOGICAL_SECTOR_SIZE_UPPER_WORD 118

// Define error codes
#define SATA_NO_ERROR            0
#define SATA_ERROR_TFES          1
#define SATA_ERROR_HBFS          2
#define SATA_ERROR_HBDS          3
#define SATA_ERROR_IFS           4
#define SATA_ERROR_INFS          5
#define SATA_ERROR_OFS           6
#define SATA_ERROR_BUSY          7
#define SATA_ERROR_DRQ           8
#define SATA_ERROR_ATA_ERR       9

// Constants for AHCI Port Interrupt Status Register (PxIS) bits
#define HBA_PxIS_DHRS (1 << 0)   // Device to Host Register FIS Status
#define HBA_PxIS_PSS  (1 << 1)   // PIO Setup FIS Status
#define HBA_PxIS_DSS  (1 << 2)   // DMA Setup FIS Status
#define HBA_PxIS_SDBS (1 << 3)   // Set Device Bits FIS Status
#define HBA_PxIS_UFS  (1 << 4)   // Unknown FIS Status
#define HBA_PxIS_PRCS (1 << 22)  // PhyRdy Change Status
#define HBA_PxIS_IPFS (1 << 23)  // Interface Non-fatal Error Status
#define HBA_PxIS_HBDS (1 << 24)  // Host Bus Data Error Status
#define HBA_PxIS_HBFS (1 << 25)  // Host Bus Fatal Error Status
#define HBA_PxIS_TFES (1 << 30)  // Task File Error Status

// Additional constants based on common use
#define HBA_PxIS_OFS  (1 << 6)   // Overflow Status
#define HBA_PxIS_IPMS (1 << 7)   // Incorrect Port Multiplier Status
#define HBA_PxIS_INFS (1 << 27)  // Interface Non-fatal Error Status

// Definitions for the Task File Data Register (PxTFD)
#define ATA_DEV_BUSY 0x80        // Device is busy
#define ATA_DEV_DRQ  0x08        // Device is requesting data

// If you have custom commands or statuses not in AHCI standard, define them like:
#define MASTER 0x40                // Master drive (typical setting for Device Register)


typedef struct __attribute__((packed)) _SATAPI_DRIVER_OBJECT{
    uint32_t SectorSize;
    uint16_t PacketSize;
    PIDENTIFY_DEVICE_PACKET IdPacket;
    //usually check if dma is supported however 
    //if we are even looking at this structure
    //we know it is supported and its active
    uint16_t SATAPIMajorVersion;
    uint16_t SATAPIMinorVersion;
    //create a ntdriver obect for later
    DRIVER_OBJECT* NtDriverObject;
}SATAPI_DRIVER_OBJECT;

#define ATA_ERR_ABRT 3
#define ATA_ERR_IDNF 5
#define ATA_ERR_MCR 4
#define ATA_ERR_MC 6
#define ATA_ERR_UNC 7
    

static inline uint32_t AhciCheckErrors(HBA_PORT *port) {
    if (!port) return SATA_NO_ERROR;

    // Check Interrupt Status register
    if (port->is & HBA_PxIS_TFES) {
        LouPrint("Task File Error Status Set\n");
        return SATA_ERROR_TFES;
    }
    if (port->is & HBA_PxIS_HBFS) {
        LouPrint("Host Bus Fatal Error Status Set\n");
        return SATA_ERROR_HBFS;
    }
    if (port->is & HBA_PxIS_HBDS) {
        LouPrint("Host Bus Data Error Status Set\n");
        return SATA_ERROR_HBDS;
    }
    if (port->is & HBA_PxIS_INFS) {
        LouPrint("Interface Non-fatal Error Status Set\n");
        return SATA_ERROR_INFS;
    }
    if (port->is & HBA_PxIS_OFS) {
        LouPrint("Overflow Status Set\n");
        return SATA_ERROR_OFS;
    }

    // Check Task File Data register
    uint8_t status = (uint8_t)(port->tfd >> 8);  // Upper byte of TFD is status
    uint8_t error = (uint8_t)(port->tfd & 0xFF); // Lower byte of TFD is error

    if (status & ATA_DEV_BUSY) {
        LouPrint("Drive is Busy\n");
        return SATA_ERROR_BUSY;
    }
    if (status & ATA_DEV_DRQ) {
        LouPrint("Data Request Pending\n");
        return SATA_ERROR_DRQ;
    }
    if (error) { // Non-zero error register implies an error
        LouPrint("ATA Error Register Set: %bc\n", error);
        return SATA_ERROR_ATA_ERR;
    }

    // No errors detected
    return SATA_NO_ERROR;
}

LOUSTATUS SATAPISendIdentifyPacket(
HBA_PORT* Port, //in 
PIDENTIFY_DEVICE_PACKET IdentifyPacket //out
){

    if(IdentifyPacket == 0x00){ //if null
        return (LOUSTATUS)STATUS_INSUFFICIENT_RESOURCES;
    }

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
    Fis->command = IDENTIFY_COMMAND; // identify command
    Fis->device = MASTER;

    //zero everything that is not needed
    // For saftey purposes
    Fis->lba0 = 0;
    Fis->lba1 = 0;
    Fis->lba2 = 0;
    Fis->lba3 = 0;
    Fis->lba4 = 0;
    Fis->lba5 = 0;
    Fis->featurel = 0;
    Fis->featureh = 0;
    Fis->countl = 0;
    Fis->counth = 0;

    // Setup the PRDT in the command table
    HBA_PRDT_ENTRY* prdtEntry = &SelectedTable->prdt_entry[0];
    prdtEntry->dba = (uintptr_t)IdentifyPacket; // Data base address
    prdtEntry->dbc = 511; // 512 bytes (0 based, so 511 means 512 bytes)
    prdtEntry->i = 1; // Interrupt on completion

    // Setup the command header
    SelectedHeader->prdtl = 1; // Number of PRDT entries
    SelectedHeader->cfl = sizeof(FIS_REG_H2D) / sizeof(uint32_t); // Command FIS length in DWORDs


    Port->ci = (1 << FreeSlot); // Issue the command

    uint8_t CommandTimeout = COMMAND_TIMEOUT;
    while (Port->ci & (1 << FreeSlot)) {
        if (CommandTimeout == 0) { // When timeout counter reaches zero, exit with a timeout status
            return (LOUSTATUS)STATUS_IO_TIMEOUT;
        }
        sleep(100); // Sleep for 100 milliseconds to reduce CPU usage while waiting
        CommandTimeout--; // Decrement the timeout counter after sleeping
    }

    if (Port->is & (1 << TASK_FILE_ERROR_BIT)) { // Example check for task file error
        // Handle error
        return (LOUSTATUS)STATUS_UNSUCCESSFUL;
    }

    return STATUS_SUCCESS;
}

uint16_t GetSatapiSectorSize(
PIDENTIFY_DEVICE_PACKET Packet
){

    uint32_t sectorSize = 512;  // Default sector size

    // Check if the device is a CD-ROM or DVD-ROM or Blu-ray drive
    if ((Packet->GeneralConfiguration & 0x1F00) == 0x0500 ||  // CD-ROM device
        (Packet->GeneralConfiguration & 0x1F00) == 0xEB00) { // Removable media
        return 2048;  // Optical media sector size
    }

    // Check if the device reports a larger logical sector size
    if (((Packet->CommandSetSupported[1] >> 14) & 0x01) == 0 && 
        ((Packet->CommandSetSupported[1] >> 12) & 0x01) == 1) {
        // Combine words 117 and 118 to form the sector size
        sectorSize = Packet->WriteReadVerifySectorCountMode3Only[1] | 
                     ((uint32_t)Packet->WriteReadVerifySectorCountMode2Only[0] << 16);
    }

    return sectorSize;
}

uint16_t GetSatapiPacketSize(
PIDENTIFY_DEVICE_PACKET Packet
){

    uint16_t packetSize = 0;  // Default to 0, as it's undefined until we know more

    // Check if the device is an ATAPI device
    if ((Packet->GeneralConfiguration & 0x8000) != 0) {
        // It's an ATAPI device, determine the packet size
        if ((Packet->GeneralConfiguration & 0x60) == 0x20) {
            packetSize = 16;  // 16-byte packets
        } else if ((Packet->GeneralConfiguration & 0x60) == 0x40) {
            packetSize = 12;  // 12-byte packets
        }
    }

    return packetSize;

}

uintptr_t GetSatapiDriverObjectPointer(
HBA_PORT* Port
){

    SATAPI_DRIVER_OBJECT* DriverObject = (SATAPI_DRIVER_OBJECT*)LouMalloc(sizeof(SATAPI_DRIVER_OBJECT));
    if(DriverObject == 0x00){//if null
        return 0x00; //return null dont continue
    }

    DriverObject->NtDriverObject = (DRIVER_OBJECT*)LouMalloc(sizeof(DRIVER_OBJECT));

    LouPrint("Createing SATAPI Driver Object\n");

    //Allocate 512 bytes alligned bt 2 kilobytes
    static PIDENTIFY_DEVICE_PACKET IdentifyPacket = (PIDENTIFY_DEVICE_PACKET)LouMallocEx(sizeof(IDENTIFY_DEVICE_PACKET), 2 * KILOBYTE); 
    memset(IdentifyPacket, 0, sizeof(IDENTIFY_DEVICE_PACKET));

    LOUSTATUS Status = SATAPISendIdentifyPacket(Port, IdentifyPacket);

    if(Status != STATUS_SUCCESS){
        LouPrint("FUCK\nIdPacket Faild To Send\n");
        //identifying the drive didnt take free up the used resources
        LouFree((RAMADD)DriverObject->NtDriverObject);
        LouFree((RAMADD)DriverObject);
        LouFree((RAMADD)IdentifyPacket);
        return 0x00;
    }

    LouPrint("Parseing IdPacket\n");

    //get the version wich is easyest

    DriverObject->SATAPIMajorVersion = IdentifyPacket->MajorVersion;
    DriverObject->SATAPIMinorVersion = IdentifyPacket->MinorVersion;

    DriverObject->SectorSize = GetSatapiSectorSize(
        IdentifyPacket
    );

    DriverObject->PacketSize = GetSatapiPacketSize(
        IdentifyPacket
    );

    LouPrint("Done Parseing The IdPacket\n");
    //LouPrint("SATAPI Version %d:%d\n",DriverObject->SATAPIMajorVersion, DriverObject->SATAPIMinorVersion);
    //LouPrint("Sector Size:%d\n",DriverObject->SectorSize);
    //LouPrint("Packet Size:%d\n",DriverObject->PacketSize);

    return (uintptr_t)DriverObject;
}

KERNEL_IMPORT
LOUSTATUS RequestPhysicalAddress(
    uint64_t VAddress,
    uint64_t* PAddress
);

static inline
bool AhciATAPI_CFIS(
    uintptr_t CommandTable,
    uint8_t LBA0,
    uint8_t LBA1,
    uint8_t LBA2,
    uint8_t LBA3,
    uint8_t LBA4,
    uint8_t LBA5,
    uint16_t Count,
    uint16_t Features,
    uint8_t Device
){


    return true;
}

static inline
void* AhciBuild_PRDT(
    HBA_CMD_TBL* cmdTable,
    uint16_t count,
    LOUSTATUS* StateOfOperation,
    uint64_t* BufferSize
){

    return 0x00;
}

void* ReadSATAPI(
HBA_PORT *Port, 
uintptr_t DriverObject,
uint32_t lba_low,
uint32_t lba_hi, 
uint32_t count, 
LOUSTATUS* StateOfOperation,
uint64_t* BufferSize
){

    return 0x00;
}