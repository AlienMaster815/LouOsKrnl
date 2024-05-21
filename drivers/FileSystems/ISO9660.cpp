/*
-- Tyler Grenier 2/5/24  PM
-- Iso FileSystem 1.01 Release
-- Features: 
-- Detects ISO Filesystems
-- Reads ISO Filesystems
-- Current Limits Cannot Read Devices Other Than PATA or legacy ATA
*/


#include <LouDDK.h>

[[maybe_unused]] static VolumeDescriptor PriVolDesc;
[[maybe_unused]] static DirectoryTable CDT;

bool DEBUG = true;

FSStruct ISO9660::ISOFileSystemScan(uint8_t DrvNum, uint8_t DrvType){
    //Allocate Memory For Our Structures   



    FSStruct FSS = DetectFileSystems(DrvNum, DrvType);
    
    //Return The Pointer To Our Defined FS MAP
    return FSS;
}

void ISO9660::MinipulateDirectoryTable(strA Directory) {

}

void ISO9660::ISOReadDirectoryStructure(uint8_t DrvNum,uint8_t DrvType){
    
    switch (DrvType) {

        case(PATADEV): {

            VolumeDescriptor VD = ReadVolumeDescriptor(DrvNum, DrvType);

            if ((VD.Identifier == 0x0000) && (VD.Type == 0) && (VD.Version == 0)) {
                LouPrint("No FileSystem On Device\n");
                //At this point unmount/eject the drive
                return;
            }

            LouPrint("Parsing File Directory\n");

            PriVolDesc = VD;

            CDT.DirectoryLength = PriVolDesc.Data[156 - 7];
            CDT.ExtendedAttributeLength = PriVolDesc.Data[157 - 7];
            
            CDT.MSBExtentLocation.LSB = ((int16_LSB)(PriVolDesc.Data[158 - 7] << 8) |
                                         (int16_LSB)(PriVolDesc.Data[159 - 7]));
            CDT.MSBExtentLocation.MSB = ((int16_LSB)(PriVolDesc.Data[160 - 7] << 8) |
                                         (int16_LSB)(PriVolDesc.Data[161 - 7]));

            CDT.DataLength.LSB = ((int16_LSB)(PriVolDesc.Data[162 - 7] << 8) |
                                  (int16_LSB)(PriVolDesc.Data[163 - 7]));
            CDT.DataLength.MSB = ((int16_LSB)(PriVolDesc.Data[164 - 7] << 8) | 
                                  (int16_LSB)(PriVolDesc.Data[165 - 7]));

            CDT.Time[0] = PriVolDesc.Data[166 - 7];
            CDT.Time[1] = PriVolDesc.Data[167 - 7];
            CDT.Time[2] = PriVolDesc.Data[168 - 7];
            CDT.Time[3] = PriVolDesc.Data[169 - 7];
            CDT.Time[4] = PriVolDesc.Data[170 - 7];
            CDT.Time[5] = PriVolDesc.Data[171 - 7];
            CDT.Time[6] = PriVolDesc.Data[172 - 7];

            CDT.Flags = PriVolDesc.Data[173 - 7];
            CDT.FileUnitSize = PriVolDesc.Data[174 - 7];
            CDT.GapSize = PriVolDesc.Data[175 - 7];

            CDT.MSBVolumeSequenceNumber.LSB = ((int16_LSB)(PriVolDesc.Data[176 - 7] << 8) |
                (int16_LSB)(PriVolDesc.Data[177 - 7]));
            CDT.MSBVolumeSequenceNumber.MSB = ((int16_LSB)(PriVolDesc.Data[178 - 7] << 8) |
                (int16_LSB)(PriVolDesc.Data[179 - 7]));

            CDT.LengthOfFileIdentifier = PriVolDesc.Data[180 - 7];

            strD FileIdentifier;

            char Foo[255];
            uint16_t Bar = (181 - 7);
            
            for (uint8_t i = 0; i < CDT.LengthOfFileIdentifier; i++) {
                Foo[i] = PriVolDesc.Data[Bar + i];
            }
            Bar = Bar + CDT.LengthOfFileIdentifier;

            Foo[Bar] = '\0';

            FileIdentifier = Foo;

            CDT.FileIdentifier = FileIdentifier;

            LouPrint("Done Parsing File Directory\n");

            return;
        }

        default: {
            LouPrint("Unkown Device Type\n");
            return;;
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
                VD.Identifier = 0x0000;
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
        
        ISOReadDirectoryStructure(DrvNum, DrvType);
              
        FSS.FSNum = VolumeSize;
        FSS.FSType = ISO;
    }
    return FSS;
}




ISO9660::ISO9660(){

}

ISO9660::~ISO9660(){

}

