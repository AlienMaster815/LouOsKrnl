
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

#define PATADEV 1
#define PATAPIDEV 2




class Drives{
  
    
    public:
    LOUSTATUS RegisterStorageDevice(bool SystemDrive, uint8_t DriveType,uint8_t DriveNum);
    LOUSTATUS RegisterStorageDeviceA(uint8_t DriveType, uint8_t DriveNum);

    void WriteDrive(char Drive, uint8_t* Data,uint32_t Location,uint32_t BufferSize);
    void ReadDrive(char Drive,uint32_t Location,uint32_t BufferSize);
    
    void RegisterDeviceFileSystems(char Drive,uint8_t FilesystemType[256], uint8_t NumberOfFileSystem);
    
    Drives();
    ~Drives();
    
    private:
        
    typedef struct{
        char DriveLet;
        uint8_t DriveType;
        uint8_t DriveNum;
        uint8_t FileSystemType[256];
        uint8_t FileSystemNum;
    }Drive;

    uint8_t DriveSelect = 1;
    uint8_t DriveTarget = 0;
    Drive drive[23];

    bool SystemSet = false;
    
    void HandleDriveRequests(char Drive, uint8_t Request, uint8_t* Data, uint32_t Location,uint32_t BufferSize);
    
    ACCESS RequestDriveAccess(char Drive, uint8_t Request, uint8_t* Data,uint32_t Location);

};


#endif

#else


#ifndef _DRIVE_TRANSIT
#define _DRIVE_TRANSIT


#endif

#endif

#endif
