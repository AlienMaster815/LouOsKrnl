#include <LouDDK.h>
#include <kernel/exports.h>
#include <NtAPI.h>
#include <Hal.h>
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





#include <drivers/Lou_drivers/hardrive.h>

// The Following Was Moved From Another File That Was Just Redundant At This Point


/*
 * Tyler Grenier 10-10-23

*/

/*

*/

#include <WDKSubsystem/WDKSubsystem.h>


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

KERNEL_IMPORT
uint8_t LouKeGetNumberOfStorageDevices();

LOUDDK_API_ENTRY void FileSystemSetup(){        

    for(uint8_t i = 0; i < LouKeGetNumberOfStorageDevices(); i++){ 
        Fss = iso.ISOFileSystemScan(i);
        if(Fss.FSType == ISO){

            FSStruct* NewIsoSystem = (FSStruct*)LouMalloc(sizeof(FSStruct));
            *NewIsoSystem = Fss; 
            LouKeRegisterDevice(0, FILESYSTEM_DEVICE_T, 
            "HKEY_LOCAL_MACHINE:Annya/System64/Drivers/Filesystem",
            NewIsoSystem, (void*)(uintptr_t)i);
            continue;
        }

        //Fss = Fat.InitializeFatSystem(0);
            
        LouPrint("Drive:%d: Has No Filesystem\n",i);
    }
}



// End Of Redundant File
