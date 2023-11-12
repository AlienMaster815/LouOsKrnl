#include <stdlib.h>
LOUSTATUS IO_Manager_Init();
void Register_Storage_DeviceA(uint8_t DriveType,uint8_t DriveNum);
void WriteStorageDrive(char Drive, uint8_t* Data, uint32_t Location,uint32_t BufferSize);
void ReadStorageDrive(char Drive, uint32_t Location , uint32_t BufferSize);
