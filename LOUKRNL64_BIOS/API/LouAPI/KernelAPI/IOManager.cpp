#include <drivers/lou_drv_api.h>
#include <KernelAPI/Drives.h>

Drives* DriveSystem;

extern "C" LOUSTATUS IO_Manager_Init(){
    LouPrint("IO Manager Is Starting\n");
    DriveSystem = (Drives*) Lou_Alloc_Mem(sizeof(Drives));
    
    if(DriveSystem == 0)return 1;
    
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

// TODO: Set Up A c to cpp Translator For Our New IO Manager
