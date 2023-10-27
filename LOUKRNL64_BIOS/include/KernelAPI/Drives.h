
#ifndef _DRIVES_H
#define _DRIVES_H
#include <stdlib.h>
#include <stdint.h>
#include <KernelAPI/Security.h>
#ifdef __cplusplus

#ifndef _DRIVE_API
#define _DRIVE_API

#define REGISTER 1
#define WRITE 2
#define READ 3

#define ATA 1
#define ATAPI 2

class Drives{
  
    
    public:
    LOUSTATUS RegisterStorageDevice(bool SystemDrive, uint8_t DriveType); 
    LOUSTATUS RegisterStorageDeviceA(uint8_t DriveType);

    void WriteDrive(char Drive);
    void ReadDrive(char Drive);
    
    Drives();
    ~Drives();
    
    private:
    
    uint8_t drive[26];
    
    void HandleDriveRequests(char Drive, uint8_t Request);
    
    ACCESS RequestDriveAccess(char Drive);

};


#endif

#else


#ifndef _DRIVE_TRANSIT
#define _DRIVE_TRANSIT


#endif

#endif

#endif
