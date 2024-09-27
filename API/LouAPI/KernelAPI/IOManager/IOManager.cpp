#include <LouDDK.h>
#include <kernel/exports.h>
#include <NtAPI.h>
Drives* DriveSystem;

void PCI_Scan_Bus();

PDRIVER_OBJECT IO_SYS;
PUNICODE_STRING IO_SYS_STRING;
uint64_t IO_SYS_BASE;

uint64_t DRIVER_ENTRY_ADDRESS;

DOS_Header* IOManager;
COFF_Header* IOManager_Coff;
PE64_Optional_Header* IOManager_PE64;
Import_Directory_Table* IOManager_ImportDirectoryTable;
uint32_t ImportDirectoryTableSize;
uint32_t TableSize;


uintptr_t GET_IO_SYS_BASE() {
    return IO_SYS_BASE;
}


extern "C" LOUSTATUS IO_Manager_Init(){
    LouPrint("IO Manager Is Starting\n");    




    LouPrint("IO Manager Is Started\n");

    return 0;
}



void Register_Storage_DeviceA(uint8_t DriveType,uint8_t DriveNum){
    DriveSystem->RegisterStorageDeviceA(DriveType,DriveNum);
}

extern "C" void WriteStorageDrive(char Drive, uint8_t* Data, uint32_t Location,uint32_t BufferSize){
    DriveSystem->WriteDrive(Drive, Data,Location , BufferSize);
}

extern "C" void ReadStorageDrive(char Drive, uint32_t Location , uint32_t BufferSize){
    DriveSystem->ReadDrive(Drive,Location ,BufferSize);
}

#include <drivers/Lou_drivers/hardrive.h>

// The Following Was Moved From Another File That Was Just Redundant At This Point


/*
 * Tyler Grenier 10-10-23

*/

/*

*/

#include <WDKSubsystem/WDKSubsystem.h>



static PATA* pataobj = 0x00;

LOUDDK_API_ENTRY void pata_device_scanc(){
    pataobj = (PATA*)LouMalloc(sizeof(PATA));
    pataobj->pata_device_scan();

}

LOUDDK_API_ENTRY void PCI_Setup() {
    PCI_Scan_Bus();
}

PATA* RetrievePATAP(){
    return pataobj;
}


LOUDDK_API_ENTRY void SetVideoMode(uint64_t Height,uint64_t Widthe, uint8_t  ColorDepth){
    
}


typedef struct{
    FSStruct Fss;
}StandardPataDeviceObject;

KERNEL_IMPORT bool 
IsIdeDriveAvailable(
uint8_t Drive
);


static ISO9660 iso;
static FAT Fat;
static FSStruct Fss;

LOUDDK_API_ENTRY void FileSystemSetup(){

    //iso.ISOFileSystemScan(3, PATADEV);
        

    for(uint8_t i = 0; i < GetNumberOfStorageDevices(); i++){ 
        Fss = iso.ISOFileSystemScan(i);
        //if(Fss.FSType == ISO)continue; 
        //Fss = Fat.InitializeFatSystem(0);
            
        LouPrint("Drive:%d: Has No Filesystem\n",i);
    }
}



// End Of Redundant File
