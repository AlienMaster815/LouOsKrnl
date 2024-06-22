#include <LouDDK.h>
#include <NtAPI.h>
// Updateing Systems As Needed

//important structures are here to keep them safe from the rest of the os
typedef struct __attribute__((packed)) _BPB{
    uint8_t JumpShort3CNop[3];
    uint8_t OEMID[8];
    uint16_t BytesPerSector;
    uint8_t BytesPerCluster;
    uint16_t NumberOfReservedSectors;
    uint8_t NumberOfAllocationtables;
    uint16_t NumberOfRootDirectories;
    uint16_t NumberOfSectorsInLogicalVolume;
    uint8_t MDT;
    uint16_t NumberOfLegacySectors; //Fat 12/16/
    uint16_t NumberOfSectorsPerTracks;
    uint16_t NumberOfHeads;
    uint32_t NumberOfHiddenSectors;
    uint32_t LargeSectorCount;
}BPB, * PBPB;

typedef struct __attribute__((packed)) _EBR_12_16{
    BPB BiosParameterBlock;
    uint8_t DriveNumber;
    uint8_t NtFlags;
    uint8_t Signature; //28 or 29
    char VolumeID[4];
    char VolumeLabel[22];
    uint8_t BootCode[448];
    uint8_t BootSignature; //0xAA55
}EBR_12_16, *PEBR_12_16;

typedef struct __attribute__((packed)) _EBR_32{
    BPB BiosParameterBlock;
    uint32_t SectorsPetFileAllocationTable;
    uint16_t FLAGS;
    uint16_t FatVersionNumber;
    uint32_t NumberOfRootClusters; //often 2
    uint16_t FSInfoSector;
    uint16_t NumberOfBackupBootSectors;
    uint8_t NullBytes[12];
    uint8_t DriveNumber;
    uint8_t NtFlags;
    uint8_t Signature; //28 or 29
    char VolumeID[4];
    char VolumeLabel[22];
    char SystemId[8]; //always "FAT32   "
    uint8_t BootCode[420];
    uint8_t BootSignature; //0xAA55
}EBR_32, *PEBR_32;

typedef struct __attribute__((packed)) _FSInfo{
    uint32_t LeadSignature; //must be 0x41615252 to indicate a valid FSInfo structure
    uint8_t RSVB[480];
    uint32_t SecondarySignature; //signature (must be 0x61417272)
    uint32_t LastKnownFreeSector; //0xFFFFFFFF means unkown and it needs to be recomputed However, this value might be incorrect and should at least be range checked (<= volume cluster count)
    uint32_t ClusterNumberForDriver;
    uint8_t RSVB2[12];
    uint32_t TrailSignature; //	Trail signature (0xAA550000)
}FSInfo, * PFSInfo;

typedef struct __attribute__((packed)) _EBR_X{
    uint8_t JumpShort3CNop[3];
    char OEMID[8]; // "EXFAT   "
    uint8_t NullBytes[53];
    uint64_t PartitionOffset;
    uint64_t VolumeLength;
    uint32_t FatSectorOffset;
    uint32_t FatSectorLength;
    uint32_t ClusterHeapSectorOffset;
    uint32_t ClusterCount;
    uint32_t RDC; //root directory cluster
    uint32_t SNP; //serial number of partition
    uint16_t FSR; //file system revision
    uint8_t SectorShift;
    uint8_t ClusterShift;
    uint8_t NumberOfAllocationtables;
    uint8_t DriveSelect;
    uint8_t PercentageInUse;
    uint8_t RSB[7];
}EBR_X, *PEBR_X;

//for now use void
void ReadExFat(uintptr_t PointerToExEBP){
    /*
    PEBR_X EBR = (PEBR_X)PointerToExEBP;

    uint64_t SectorSize = (1 << EBR->SectorShift);
    uint64_t ClusterSize = (1 << (EBR->SectorShift + EBR->ClusterShift));

    uint64_t ClusterArray = EBR->ClusterHeapSectorOffset * SectorSize - 2 * ClusterSize;
    uint64_t FatOffset = EBR->FatSectorOffset * SectorSize;
    uint64_t UsableSpace = EBR->ClusterCount * ClusterSize;
    
    LouPrint("Cluster Array:%d\n", ClusterArray);
    LouPrint("Fat Offset   :%d\n", FatOffset);
    LouPrint("Usable Space :%d\n", UsableSpace);
    */
}

void ReadFat12(uintptr_t PointerToEBP12, uint32_t ActiveCluster){
    /*
    PEBR_12_16 EBR = (PEBR_12_16)PointerToEBP12;

    uint8_t FAT_Table[EBR->BiosParameterBlock.BytesPerSector * 2];
    uint32_t FAT_Offset = ActiveCluster + (ActiveCluster/ 2);
    uint32_t Fat_Sector = EBR->BiosParameterBlock.NumberOfReservedSectors + (FAT_Offset / EBR->BiosParameterBlock.BytesPerSector);
    uint32_t Ent_Offset = FAT_Offset % EBR->BiosParameterBlock.BytesPerSector;

    LouPrint("FAT Table :%d\n", FAT_Table);
    LouPrint("FAT Offset:%d\n", FAT_Offset);
    LouPrint("FAT Sector:%d\n", Fat_Sector);
    LouPrint("Ent Offset:%d\n", Ent_Offset);
    */
}

void ReadFat32(uintptr_t PointerToEBP32, uint32_t ActiveCluster){
    UNUSED PEBR_32 EBR = (PEBR_32)PointerToEBP32;

    //uint32_t FAT_Offset = ActiveCluster * 4;
    //uint32_t FAT_Sector = (EBR->BiosParameterBlock.NumberOfReservedSectors) + (FAT_Offset / EBR->BiosParameterBlock.BytesPerSector);
    //uint32_t Ent_Offset = FAT_Offset % EBR->BiosParameterBlock.BytesPerSector;

    //LouPrint("FAT Table :%d\n", FAT_Table);
    LouPrint("FAT Offset:%d\n", PointerToEBP32);
    LouPrint("Bytes Per Sector:%d\n", (uint16_t*)(uint8_t*)(PointerToEBP32 + 11));
    //LouPrint("FAT Sector:%d\n", FAT_Sector);
    //LouPrint("Ent Offset:%d\n", Ent_Offset);    

}

FAT::FAT(){

}
FAT::~FAT(){

}

FSStruct FAT::InitializeFatSystem(uint8_t DriveNumber, uint8_t DriveType){
    FSStruct FSS;
    FSS.SystemDisk = false;
    FSS.FSType = 0;
    FSS.FSNum = 0;
    FSS.ExtendedFilesystemParameters = 0;


    LouPrint("Checking For FAT System\n");

    //LouPrint("Drive Number Is:%d\n", DriveNumber);

    UNUSED FAT::FatFileSystemType FTT = DetermineFileSystemType(DriveNumber, DriveType, &FSS);

    while(1);
    return FSS;
}
uint16_t* FAT::ReadFatSystem(uint8_t DriveNumber, uint8_t DriveType, FSStruct* FSP){
    
    return 0;
}
void FAT::WriteFatSystem(uint8_t DriveNumber,uint8_t DriveType, FSStruct* FSP, uint16_t* Data){

}
 
 //PrivateFunctions
 FAT::FatFileSystemType FAT::DetermineFileSystemType(uint8_t DriveNumber, uint8_t DriveType, FSStruct* FSS){
    FatFileSystemType FTT;

    FTT = NONE;

    LouPrint("Determining If Drive Is Fat\n");

    LouPrint("Drive Number:%d\n",DriveNumber);



    //char* FOO = "Hello World";


    return FTT;    
 }
