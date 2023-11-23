#include <drivers/lou_drv_api.h>
#include <drivers/Lou_drivers/FileSystems/ISO.h>



bool DEBUG = true;

PFSStruct ISO9660::ISOFileSystemScan(uint8_t DrvNum, uint8_t DrvType){
    //Allocate Memory For Our Structures
    
    if(DEBUG) LouPrint("Searching For A ISO FileSystem On \n");
    
    ReadPrimaryVolumeDescriptor(DrvNum,DrvType,0,(8 * sizeof(uint8_t)));
    
    //Return The Pointer To Our Defined FS MAP
    return PFSS;
}

void ISO9660::ISOReadDirectoryStructure(uint8_t DrvNum,uint8_t DrvType,uint8_t FileSystemNum){
    
    
}

void ISO9660::ISOWriteDirectoryStructure(uint8_t DrvNum,uint8_t DrvType,uint8_t FileSystemNum){
    
    
}

void ISO9660::ISOFormatDevice(uint8_t DrvNum,uint8_t DrvType,uintptr_t Base, uintptr_t height){
    
    
}


PrimaryVolumeDescriptor ISO9660::ReadPrimaryVolumeDescriptor(uint8_t DrvNum,uint8_t DrvType,uintptr_t Base, uintptr_t height){
    PrimaryVolumeDescriptor PVD;
    
    
    
    return PVD;
}

//Private Classes

FSStruct DetectFileSystems(uint8_t DrvNum,uint8_t DrvType){
    
    FSStruct FSS;
    
    
    return FSS;
}

ISO9660::ISO9660(){
    PFSS = (PFSStruct)Lou_Alloc_Mem(sizeof(FSStruct));
}

ISO9660::~ISO9660(){
    Lou_Free_Mem((RAMADD)PFSS, sizeof(FSStruct));
}


void ISO9660::WritePrimaryVolumeDescriptor(uint8_t DrvNum,uint8_t DrvType,uintptr_t Base, uintptr_t height, PrimaryVolumeDescriptor PVD){
        
    
}
