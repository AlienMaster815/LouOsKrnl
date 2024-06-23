#ifndef _ISO_H
#define _ISO_H

//include <cstdlib>
// Define Data Types For ISO Filesystems

#include <LouDDK.h>
#include <NtAPI.h>


//8BitTypes
typedef uint8_t  int8;
typedef int8_t   sint8;
//16BitTypes
typedef uint16_t int16_LSB;
typedef uint16_t int16_MSB;
typedef int16_t sint16_LSB;
typedef int16_t sint16_MSB;
//32BitTypes
typedef uint32_t int32_LSB;
typedef uint32_t int32_MSB;
typedef int32_t sint32_LSB;
typedef int32_t sint32_MSB;

typedef char* strA;
typedef char* strD;

// Pack The Structures For Pointers In memory Tho Later We Might Align It For More Acurate Readings

#pragma pack(1)
typedef struct _int16_LSB_MSB{
    int16_LSB LSB;
    int16_MSB MSB;
}int16_LSB_MSB, *pint16_LSB_MSB;

typedef struct _sint16_LSB_MSB{
    sint16_LSB LSB;
    sint16_MSB MSB;
}sint16_LSB_MSB, *psint16_LSB_MSB;

typedef struct _int32_LSB_MSB{
    int32_LSB LSB;
    int32_MSB MSB;
}int32_LSB_MSB, *pint32_LSB_MSB;

typedef struct _sint32_LSB_MSB{
    sint32_LSB LSB;
    sint32_MSB MSB;
}sint32_LSB_MSB, *psint32_LSB_MSB;
#pragma pack(0)


typedef struct _VolumeDescriptor{
    int8 Type;
    strA Identifier;
    int8 Version;
    int8_t Data[2041 - 7];
}VolumeDescriptor, *PVolumeDescriptor,* P_VolumeDescriptor;

typedef struct _DirectoryTable {
    int8 DirectoryLength;
    int8 ExtendedAttributeLength;
    int32_LSB_MSB MSBExtentLocation;
    int32_LSB_MSB DataLength;
    int8 Time[7];
    int8 Flags; // the last byte is File Flags and is seperate from the first 3 bytes
    int8 FileUnitSize;
    int8 GapSize;
    int16_LSB_MSB MSBVolumeSequenceNumber;
    int8 LengthOfFileIdentifier;
    strD FileIdentifier;
}DirectoryTable, *PDirectoryTable,* P_DirectoryTable;

#define ISO_BOOTRECORD 0
#define ISO_PrimaryVolumeDescriptor 1
#define ISO_SupplementaryVolumeDescriptor 2
#define ISO_VolumePartitionDescriptor 3
#define ISO_VolumeDescriptorSetTerminator 255

class ISO9660{
    
    public:
        FSStruct ISOFileSystemScan(uint8_t DrvNum);
        void ISOReadDirectoryStructure(uint8_t DrvNum);
        void ISOFormatDevice(uint8_t DrvNum,uintptr_t Base, uintptr_t height);
        FILE* ISOLouKefopen(uint8_t DrvNum,string Path);
        FILE* ISOLouKefclose(FILE* File);

        ISO9660();
        ~ISO9660();

    private:
        FSStruct FSS;
        FSStruct DetectFileSystems(uint8_t DrvNum);
        VolumeDescriptor ReadVolumeDescriptor(uint8_t DrvNum, uint32_t sector = 0x10, uint32_t buffer = 2048);
        uint32_t ISOGetLBA(uint8_t* DirectoryEntry);
        uint32_t ISOGetDirecotrySize(uint8_t* DirectoryEntry);
        FILE* ISOLouKeFindDirectory(uint32_t RootLBA, uint32_t RootSize, uint8_t DrvNum, string Dir);

};

#endif
