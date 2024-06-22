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

LOUDDK_API_ENTRY void pata_device_scanc(){

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

static StandardPataDeviceObject pata[4];

static ISO9660 iso;
static FAT Fat;

LOUDDK_API_ENTRY void FileSystemSetup(){

    // take note the way this function looks may be silly and redundant
    // but its because the stack is wonky right now if you change this 
    // your also expected to find the bug before you exspect me to 
    // release Your Update - Fuck You : Tyler Grenier

    // Oh and if you think just think that raising my stack budget is
    // the fix go fuck yourself all that does is wate unesscisary
    // resources, FUCK OFF THIS IS NOT WINDOWS GO SUCK MICROSOFTS DICK
    // WE DONT WANT YOU


    //iso.ISOFileSystemScan(3, PATADEV);
    
    for(uint8_t i = 1; i < 5; i++){ 
        /*if(IsIdeDriveAvailable(i - 1)){
            pata[i - 1].Fss = iso.ISOFileSystemScan(i,PATADEV);
            if(pata[i - 1].Fss.FSType == ISO)continue; 
            pata[i - 1].Fss = Fat.InitializeFatSystem(i, PATADEV);
            LouPrint("Drive:%d: Has No Filesystem\n",i);

        } */
    }


}


LOUDDK_API_ENTRY uintptr_t GetPataDeviceObjectPointer(uint8_t Drive){
    return (uintptr_t)(&pata[Drive]);
} 

// End Of Redundant File
