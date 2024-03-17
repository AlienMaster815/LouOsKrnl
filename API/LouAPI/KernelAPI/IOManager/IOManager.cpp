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
 * This is an important table file because
 * the table here in this cpp file will
 * allow our kernel to talk to drivers from
 * the cpp universe without having serious
 * effect on how usermode and or other drivers
 * also in cpp interacts
 * with drivers we can either jump from cpp to c
 * and back to cpp or with this design determine
 * the fastest route and if determined just jump
 * from cpp to cpp without having to do translation
 * that also takes too long
*/

/*
-- Tyler Grenier 2-16-24 11:09 AM
-- This File Is Now modified significantly at this 
-- point and Is now significant in the initialization
-- of this kernel
*/

#include <WDKSubsystem/WDKSubsystem.h>



PATA* pataobj = (PATA*)Lou_Alloc_Mem(sizeof(PATA));

extern "C" void pata_device_scanc(){

    pataobj->pata_device_scan();

}

extern "C" void PCI_Setup() {
    PCI_Scan_Bus();
}

PATA* RetrievePATAP(){
    return pataobj;
}


extern "C" void SetVideoMode(uint64_t Height,uint64_t Widthe, uint8_t  ColorDepth){
    
}


extern "C" void FileSystemSetup(){

    ISO9660 iso;
    
    //iso.ISOFileSystemScan(3, PATADEV);
    
    for(uint8_t i = 1; i < 5; i++) 
        iso.ISOFileSystemScan(i,PATADEV);

}

// End Of Redundant File
