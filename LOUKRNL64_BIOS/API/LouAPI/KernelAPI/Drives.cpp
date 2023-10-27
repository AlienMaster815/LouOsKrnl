
#include <KernelAPI/Drives.h>

LOUSTATUS Drives::RegisterStorageDevice(bool SystemDrive, uint8_t DriveType){
    
    return 0;
}

LOUSTATUS Drives::RegisterStorageDeviceA(uint8_t DriveType){
    
    RegisterStorageDevice(false, DriveType);
    return 0;
}

void Drives::WriteDrive(char Drive){
    
    
}


void Drives::ReadDrive(char Drive){
    
    
}

Drives::Drives(){
    
    
}

Drives::~Drives(){
    
    
}

void Drives::HandleDriveRequests(char Drive, uint8_t Request){
    
    
}

ACCESS Drives::RequestDriveAccess(char Drive){
    
    return GRANTED;
}
