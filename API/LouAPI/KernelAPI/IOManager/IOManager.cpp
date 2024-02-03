#include <LouDDK.h>
#include <kernel/exports.h>
Drives* DriveSystem;

extern "C" LOUSTATUS IO_Manager_Init(){
    LouPrint("IO Manager Is Starting\n");
    DriveSystem = (Drives*) Lou_Alloc_Mem(sizeof(Drives));
    
    if(DriveSystem == 0)return 1;
    
    DeclareExports();
    
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

#include <WDKSubsystem/WDKSubsystem.h>



PATA* pataobj = (PATA*)Lou_Alloc_Mem(sizeof(PATA));

extern "C" void pata_device_scanc(){

    pataobj->pata_device_scan();

}



PATA* RetrievePATAP(){
    return pataobj;
}


extern "C" void SetVideoMode(uint64_t Height,uint64_t Widthe, uint8_t  ColorDepth){
    
}


extern "C" void FileSystemScan(){

    ISO9660 iso;
    
    iso.ISOFileSystemScan(3, PATADEV);
    
    //for(uint8_t i = 1; i < 5; i++) 
        //iso.ISOFileSystemScan(i,PATADEV);

}

// End Of Redundant File
