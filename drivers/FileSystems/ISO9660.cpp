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

static inline
uint16_t convert_endian(uint16_t data) {
    return ((data & 0x00FF) << 8) | ((data & 0xFF00) >> 8);
}

FSStruct ISO9660::ISOFileSystemScan(uint8_t DrvNum){
    //Allocate Memory For Our Structures   

    FSStruct FSS = DetectFileSystems(DrvNum);
    
    //Return The Pointer To Our Defined FS MAP
    return FSS;
}

void ISO9660::ISOReadDirectoryStructure(uint8_t DrvNum){

    VolumeDescriptor VD = ReadVolumeDescriptor(DrvNum);

    if ((VD.Identifier == 0x0000) && (VD.Type == 0) && (VD.Version == 0)) {
                //LouPrint("No FileSystem On Device\n");
                //At this point unmount/eject the drive or if its a burner burn it
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

void ISO9660::ISOFormatDevice(uint8_t DrvNum,uintptr_t Base, uintptr_t height){
    
    
}





VolumeDescriptor ISO9660::ReadVolumeDescriptor(uint8_t DrvNum,uint32_t sector, uint32_t buffer){
    
    VolumeDescriptor VD;

    LOUSTATUS Status = STATUS_SUCCESS;
    uint64_t BufferSize = 2048;

    uint16_t* Test = (uint16_t*)ReadDrive(
        DrvNum,
        sector,
        1,
        &BufferSize,
        &Status
        );

        if(Test == 0x00){
            LouPrint("ISO FileSystem Has Not Been Found\n");
            VD.Type = 0;
            VD.Identifier = 0x0000;
            VD.Version = 0;
            LouPrint("VD Parsed\n");
            LouFree((RAMADD)Test);
            return VD;
        }
        //LouPrint("Test:%bs\n",Test[0]);

        //for (uint64_t i = 0; i < 0x200/2; ++i) {
        //    LouPrint("%h ", Test[i]);
        //}

        //LouPrint("Done\n");

        //while (1);

        //LouPrint("Parseing VD\n");

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


        if ((VD.Type != 1) || (strcmp(VD.Identifier, "CD001") != 0) || (VD.Version != 1)) {
            LouPrint("ISO FileSystem Has Not Been Found\n");
            VD.Type = 0;
            VD.Identifier = 0x0000;
            VD.Version = 0;
            LouPrint("VD Parsed\n");
            LouFree((RAMADD)Test);
            return VD;
        }
            
        //If We are here we have successfully found an ISO Filesystem

        //LouPrint("ISO FileSystem Has Been Found Parseing ISO System Information\n");

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


        //LouPrint("VD Parsed\n");

        LouFree((RAMADD)Test);

        return VD;
}

//Private Classes

FSStruct ISO9660::DetectFileSystems(uint8_t DrvNum){
    FSStruct FSS;
    VolumeDescriptor PVD = ReadVolumeDescriptor(DrvNum);
    


    // Create A File System Structure
    if((PVD.Type == ISO_PrimaryVolumeDescriptor) && (strncmp(PVD.Identifier, "CD001", 5) == 0) && (PVD.Version == 0x01)){
        int16_LSB_MSB VolumeSetSize;
        VolumeSetSize.LSB = (PVD.Data[120] << 8) | PVD.Data[121];
        VolumeSetSize.MSB = (PVD.Data[122] << 8) | PVD.Data[123];
        
        uint32_t VolumeSize = (VolumeSetSize.LSB << 8) | VolumeSetSize.MSB;

        ISOReadDirectoryStructure(DrvNum);
        
        LouPrint("Figureing Out If this is a system disk\n");

        FSS.FSNum = VolumeSize;
        FSS.FSType = ISO;
        FILE* Kernel = ISOLouKefopen(DrvNum, "/ANNYA/SYSTEM64/LOUOSKRNL.EXE");

        if(Kernel != 0x00){
            LouPrint("Kernel Found This Is A System Disk\n");
            LouPrint("LOUOSKRNL.EXE Has Been Loaded Off Of Disk At Address:%h\n", Kernel);
            LouPrint("Closing The Kernel File\n");
            ISOLouKefclose(Kernel);
            LouPrint("Kernel File Successfully Closed\n");
            FSS.SystemDisk = true;
        }
    }
    return FSS;
}




ISO9660::ISO9660(){

}

ISO9660::~ISO9660(){

}


FILE* ISO9660::ISOLouKeFindDirectory(
    uint32_t RootLBA,
    uint32_t RootSize, 
    uint8_t DrvNum, 
    string Dir
    ){

    LOUSTATUS Status = LOUSTATUS_GOOD;
    uint64_t BufferSize = RootSize;

    uint16_t* Test = (uint16_t*)ReadDrive(
        DrvNum,
        RootLBA,
        1,
        &BufferSize,
        &Status
    );

    UNUSED uint8_t* FOO = (uint8_t*)(uint64_t)Test;
    
    //Dir = GetNextDirectoryName(Dir);
    string NewDir = GetNextDirectoryName(Dir);

    string SearchDirectory = NewDir;

    bool FinalRecurse = false;

    while(1){
        if (FOO[32] == CurrenDirectoryStringLength(SearchDirectory) || FinalRecurse){
            if(strncmp((const char*)SearchDirectory, (const char*)&FOO[33], CurrenDirectoryStringLength(SearchDirectory)) == 0){

                SearchDirectory = GetNextDirectoryName(SearchDirectory);
                            
                RootLBA = ISOGetLBA(FOO);
                RootSize = ISOGetDirecotrySize(FOO);

                if(RootSize){
                    BufferSize = ((RootSize + 2047) / 2048) * 2048;
                }

                LouFree((RAMADD)Test);
                uint16_t* Test = (uint16_t*)ReadDrive(
                    DrvNum,
                    RootLBA,
                    1,
                    &BufferSize,
                    &Status
                );
                FOO = (uint8_t*)(uint64_t)Test;

                if(FinalRecurse){
                    FILE* Handle = (FILE*)LouMallocEx(RootSize, KILOBYTE_PAGE);
                    memcpy(Handle, FOO, RootSize);
                    LouPrint("Done With Recursion: Found File\n");
                    LouFree((RAMADD)Test); // Free before exiting
                    return Handle;
                }
                else if(*(char*)(SearchDirectory + CurrenDirectoryStringLength(SearchDirectory)) == '.'){
                    FinalRecurse = true;
                }

            }
        }
        if(FOO[0] == 0){
            break;
        }
        else{
            FOO += FOO[0];   
        }
    }

    LouPrint("Done With Recursion: Could Not Find File\n");
    LouFree((RAMADD)Test); // Free before exiting
    return 0;
}

#define ROOT_DIRECTORY_START 156 - 7
#define ROOT_DIRECTORY_END 190 - 7
#define SIZE_OF_ROOT_DIRECTORY_ENTRY 34

#define LBA_LSB32 ROOT_DIRECTORY_START + 2
#define LBA_LSB_HI32 LBA_LSB32 + 1
#define LBA_MSB_LO32 LBA_LSB_HI32 + 1
#define LBA_MSB32 LBA_MSB_LO32 + 1

#define DL_LSB32 ROOT_DIRECTORY_START + 10
#define DL_LSB_HI32 DL_LSB32 + 1
#define DL_MSB_LO32 DL_LSB_HI32 + 1
#define DL_MSB DL_MSB_LO32 + 1

static spinlock_t IsoLock;

FILE* ISO9660::ISOLouKefopen(uint8_t DrvNum,string Path){
    LouKIRQL LouIrql;

    LouKeAcquireSpinLock(&IsoLock, &LouIrql);
    UNUSED VolumeDescriptor VD = ReadVolumeDescriptor(DrvNum);

    //:/Dir/dir/.../file
    LouPrint("Opening File:%s\n", Path);

    //for(uint32_t i = (ROOT_DIRECTORY_START); i < (ROOT_DIRECTORY_END); i++){
    //    LouPrint("DATA:%d ",VD.Data[i]);
    //}

    uint64_t LBA = 0;
    uint64_t DATA_LEN = 0;
    LBA |= VD.Data[LBA_LSB32];    
    LBA |= (VD.Data[LBA_LSB_HI32] << 8);
    LBA |= (VD.Data[LBA_MSB_LO32] << 16);
    LBA |= (VD.Data[LBA_MSB32] << 24);

    DATA_LEN |= VD.Data[DL_LSB32];
    DATA_LEN |= (VD.Data[DL_LSB_HI32] << 8);
    DATA_LEN |= (VD.Data[DL_MSB_LO32] << 16);
    DATA_LEN |= (VD.Data[DL_MSB] << 24);        
            
    FILE* Result = ISOLouKeFindDirectory(
        LBA, 
        DATA_LEN, 
        DrvNum, 
        Path
    );
    LouKeReleaseSpinLock(&IsoLock, &LouIrql);
    return Result;
}

FILE* ISO9660::ISOLouKefclose(FILE* File){

    //uint64_t FOO = *(uint64_t*)File;

    LouFree((RAMADD)File);

    return 0;
}


uint32_t ISO9660::ISOGetLBA(uint8_t* DirectoryEntry){

    uint32_t LBA = 0;

    LBA |= DirectoryEntry[2];    
    LBA |= (DirectoryEntry[3] << 8);
    LBA |= (DirectoryEntry[4] << 16);
    LBA |= (DirectoryEntry[5] << 24);

    return LBA;
}
        
uint32_t ISO9660::ISOGetDirecotrySize(uint8_t* DirectoryEntry){

    uint32_t DATA_LEN = 0;

    DATA_LEN |= DirectoryEntry[10];
    DATA_LEN |= (DirectoryEntry[11] << 8);
    DATA_LEN |= (DirectoryEntry[12] << 16);
    DATA_LEN |= (DirectoryEntry[13] << 24);

    return DATA_LEN;
}