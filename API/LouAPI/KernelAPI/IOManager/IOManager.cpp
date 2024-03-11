#include <LouDDK.h>
#include <kernel/exports.h>
#include <NtAPI.h>
Drives* DriveSystem;

void PCI_Scan_Bus();

PDRIVER_OBJECT IO_SYS;
PUNICODE_STRING IO_SYS_STRING;
uintptr_t IO_SYS_BASE;

uintptr_t GET_IO_SYS_BASE() {
    return IO_SYS_BASE;
}

extern "C" LOUSTATUS IO_Manager_Init(){
    LouPrint("IO Manager Is Starting\n");    
    DeclareExports();
    
    UNUSED DOS_Header* IOManager = FindDriverFile();

    IO_SYS_BASE = (uintptr_t)IOManager;

    LouPrint("ADDRESS OF IO MANAGER IS:%h\n",IOManager);

    //Create Driver Object
    IO_SYS = (PDRIVER_OBJECT)Lou_Alloc_Mem(sizeof(DRIVER_OBJECT));
    IO_SYS_STRING = (PUNICODE_STRING)Lou_Alloc_Mem(sizeof(UNICODE_STRING) * 4);

    //IO_SYS_STRING =;

    //Set Up Linkings

    uintptr_t COFFOffset = IOManager->e_lfanew;

    uintptr_t PE64_Offset = COFFOffset + sizeof(COFF_Header); //BUGBUG: SYSTEM NOT ALIGNED //UPDATE: NOW IT IS

    PE64_Optional_Header* PE64_Address = (PE64_Optional_Header*)((uintptr_t)PE64_Offset + (uintptr_t)IOManager);
   
    // Find The Entry Point
    UNUSED void (*DRIVER_ENTRY)(PDRIVER_OBJECT,PUNICODE_STRING) = (void(*)(PDRIVER_OBJECT,PUNICODE_STRING))((uintptr_t)(PE64_Address->addressOfEntryPoint + IOManager));

    LouPrint("Driver Entry Function Linked At Address:%h\n",DRIVER_ENTRY);

    UNUSED Import_Directory_Table* ITableAddress = (Import_Directory_Table*)(uintptr_t)(PE64_Address->importTableEntry.virtualAddress + IOManager);


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
