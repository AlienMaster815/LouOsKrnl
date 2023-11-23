#include <LouDDK.h>



bool DEBUG = true;

PFSStruct ISO9660::ISOFileSystemScan(uint8_t DrvNum, uint8_t DrvType){
    //Allocate Memory For Our Structures
    
    if(DEBUG) LouPrint("Searching For A ISO FileSystem On \n");
    
    FSStruct FSS = DetectFileSystems(DrvNum, DrvType);
    
    *PFSS = FSS;
    
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
    PATA pata;
    
    switch(DrvType){
            
        case(PATADEV):{
            PATABUFF patabuff = pata.pata_Read28(DrvNum, 0x10, 2048);
            if(patabuff != READ_ERROR){ // Check If The Device Did Not Run Into Errors
                
                PVD.Type = (int8)*patabuff;
                PVD.Identifier = (char *)(patabuff + (sizeof(uint8_t) * 1));
                PVD.Version = (int8)*(patabuff + (sizeof(uint8_t) * 6));
                
                for(int i = 6; i < 2048; i++){
                    int j = 0;
                    PVD.Data[j] = (int8)*(patabuff + (sizeof(uint8_t) * i));
                    j++;
                }
                Lou_Free_Mem((RAMADD)patabuff,sizeof(uint8_t) * 2048);
                return PVD;
            }
            else{
                LouPrint("Error Reading Drive\n");
                Lou_Free_Mem((RAMADD)patabuff,sizeof(uint8_t) * 2048);
                return PVD;
            }
        }
        default:{
            LouPrint("UnKnown Device Type\n");
            return PVD;
            break;
        }
    }
    
    return PVD;
}

//Private Classes

FSStruct ISO9660::DetectFileSystems(uint8_t DrvNum,uint8_t DrvType){
    FSStruct FSS;

    
    
    return FSS;
}


void ISO9660::WritePrimaryVolumeDescriptor(uint8_t DrvNum,uint8_t DrvType,uintptr_t Base, uintptr_t height, PrimaryVolumeDescriptor PVD){
        
    
}




ISO9660::ISO9660(){
    PFSS = (PFSStruct)Lou_Alloc_Mem(sizeof(FSStruct));
}

ISO9660::~ISO9660(){
    Lou_Free_Mem((RAMADD)PFSS, sizeof(FSStruct));
}
