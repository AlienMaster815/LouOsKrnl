#include <drivers/lou_drv_api.h>
#include <KernelAPI/Drives.h>

Drives* DriveSystem;

extern "C" LOUSTATUS IO_Manager_Init(){
    
    DriveSystem = (Drives*) Lou_Alloc_Mem(sizeof(Drives));
    
    
    
    return 0;
}

void Register_Storage_DeviceA(uint8_t DriveType,uint8_t DriveNum){
    DriveSystem->RegisterStorageDeviceA(DriveType,DriveNum);
}

// TODO: Set Up A c to cpp Translator For Our New IO Manager
