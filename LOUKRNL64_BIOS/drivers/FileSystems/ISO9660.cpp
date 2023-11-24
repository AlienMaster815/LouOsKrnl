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

char* ISO9660::ReadDirectory(char* Directory){
    
    return 0x00;
}


VolumeDescriptor ISO9660::ReadVolumeDescriptor(uint8_t DrvNum,uint8_t DrvType,uint32_t sector, uint32_t buffer){
    VolumeDescriptor PVD;
    PATA pata;
    
    switch(DrvType){
            
        case(PATADEV):{
            PATABUFF patabuff = pata.pata_Read28(DrvNum, sector, buffer);
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
    VolumeDescriptor PVD = ReadVolumeDescriptor(DrvNum,DrvType);
    
    // Create A File System Structure
    if((PVD.Type == ISO_PrimaryVolumeDescriptor) && (strncmp(PVD.Identifier, "CD001", 5) == 0) && (PVD.Version == 0x01)){
        int16_LSB_MSB VolumeSetSize;
        VolumeSetSize.LSB = (PVD.Data[120] << 8) | PVD.Data[121];
        VolumeSetSize.MSB = (PVD.Data[122] << 8) | PVD.Data[123];
        
        uint32_t VolumeSize = (VolumeSetSize.LSB << 8) | VolumeSetSize.MSB;
        
     /* uint16_t PathTableSizeLowLow = (PVD.Data[132] << 8) | PVD.Data[133];
        uint16_t PathTableSizeHighLow = (PVD.Data[134] << 8) | PVD.Data[135];
        uint16_t PathTableSizeLowHigh = (PVD.Data[132] << 8) | PVD.Data[133];
        uint16_t PathTableSizeHighHigh = (PVD.Data[134] << 8) | PVD.Data[135];
        
        int32_LSB_MSB PathTableSize;
        
        PathTableSize.LSB = (PathTableSizeLowLow << 16) | PathTableSizeHighLow;
        PathTableSize.MSB = (PathTableSizeLowHigh << 16) | PathTableSizeHighHigh;
      */
        
        FSS.FSNum = VolumeSize;
        FSS.FSType = ISO;
    }
    return FSS;
}


void ISO9660::WriteVolumeDescriptor(uint8_t DrvNum,uint8_t DrvType,uintptr_t Base, uintptr_t height, VolumeDescriptor VD){
        
    
}




ISO9660::ISO9660(){
    PFSS = (PFSStruct)Lou_Alloc_Mem(sizeof(FSStruct));
}

ISO9660::~ISO9660(){
    Lou_Free_Mem((RAMADD)PFSS, sizeof(FSStruct));
}
