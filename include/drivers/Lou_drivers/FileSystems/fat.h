#ifndef _FAT_H
#define _FAT_H
#include <LouDDK.h>
#include <NtAPI.h>

class FAT{
    public:
        FAT();
        ~FAT();
        FSStruct InitializeFatSystem(uint8_t DriveNumber);
        uint16_t* ReadFatSystem(uint8_t DriveNumber, FSStruct* FSP);
        void WriteFatSystem(uint8_t DriveNumber, FSStruct* FSP, uint16_t* Data);

    private: 
        typedef enum{
            NONE,
            Fat12,
            Fat16,
            Fat32,
            ExFat,
        }FatFileSystemType;

        typedef struct {
            FatFileSystemType FFT;
        }FatExtendedStructure;

        FatFileSystemType DetermineFileSystemType(uint8_t DriveNumber, FSStruct* FSS);
};

#endif