#include <LouDDK.h>


bool DEBUG = true;

FSStruct ISO9660::ISOFileSystemScan(uint8_t DrvNum, uint8_t DrvType){
    //Allocate Memory For Our Structures   



    FSStruct FSS = DetectFileSystems(DrvNum, DrvType);
    
    //Return The Pointer To Our Defined FS MAP
    return FSS;
}

void ISO9660::ISOReadDirectoryStructure(uint8_t DrvNum,uint8_t DrvType,uint8_t FileSystemNum){
    
    switch (DrvType) {

        case(PATADEV): {

            VolumeDescriptor VD = ReadVolumeDescriptor(DrvNum, DrvType);

            if ((VD.Identifier == NULL) && (VD.Type == 0) && (VD.Version == 0)) {
                LouPrint("No FileSystem On Device");
                //At this point unmount/eject the drive
                return;
            }

            LouPrint("Parsing File Directory\n");

            break;
        }

        default: {
            LouPrint("Unkown Device Type\n");
            break;
        }
    }
    
}

void ISO9660::ISOFormatDevice(uint8_t DrvNum,uint8_t DrvType,uintptr_t Base, uintptr_t height){
    
    
}


VolumeDescriptor ISO9660::ReadVolumeDescriptor(uint8_t DrvNum,uint8_t DrvType,uint32_t sector, uint32_t buffer){
    
    VolumeDescriptor VD;

    switch(DrvType){
            
        case(PATADEV):{
            PATA* pata __attribute__((unused));
            pata = RetrievePATAP();
            pata->pata_Read(DrvNum,sector,buffer);
            if(!pata->AtaReadSuccess()) return VD;
            uint16_t *Test = GetAtaBufferAddr();
            // Logic For Parseing The Volume Descriptor
                        
            LouPrint("Parseing VD\n");

            VD.Type = Test[0] & 0xFF;

            char foo[6];
            foo[0] = (char)(Test[0] >> 8);
            foo[1] = (char)(Test[1] & 0xFF);
            foo[2] = (char)(Test[1] >> 8);
            foo[3] = (char)(Test[2] & 0xFF);
            foo[4] = (char)(Test[2] >> 8);
            foo[5] = '\0';
            VD.Identifier = foo;
            VD.Version = Test[3] & 0xFF;



            //LouPrint("Type is: %d\n", VD.Type);
            //LouPrint("Identifier is: %s \n",VD.Identifier);
            //LouPrint("Version is: %d\n", VD.Version);

            if ((VD.Type != 1) && (strcmp(VD.Identifier, "CD001") != 0) && (VD.Version != 1)) {
                LouPrint("ISO FileSystem Has Not Been Found\n");
                VD.Type = 0;
                VD.Identifier = NULL;
                VD.Version = 0;
                LouPrint("VD Parsed\n");
                return VD;
            }
            
            //If We are here we have successfully found an ISO Filesystem

            LouPrint("ISO FileSystem Has Been Found Parseing ISO System Information\n");
            
            uint16_t i = 0, BufferSelector = 0;
            bool condition = false;

            //Parse Through The Rest Of The Data Buffer
            do{
                if (false == condition) {
                    VD.Data[BufferSelector] = (uint8_t)(Test[i + 3] >> 8);
                    condition = true;
                    BufferSelector++;
                    i++;
                }
                else {
                    VD.Data[BufferSelector] = (uint8_t)(Test[i + 3] & 0xFF);
                    BufferSelector++;
                    condition = false; 
                }
            } while (i < ((2041 - 7) / 2));


            LouPrint("VD Parsed\n");

            //PrimaryVolumeDescriptor = VD;

            return VD;
        }
        default:{
            LouPrint("UnKnown Device Type\n");
            return VD;
            break;
        }
    }
    
    return VD;
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
        
        ISOReadDirectoryStructure(DrvNum, DrvType, 0);
              
        FSS.FSNum = VolumeSize;
        FSS.FSType = ISO;
    }
    return FSS;
}




ISO9660::ISO9660(){

}

ISO9660::~ISO9660(){

}

