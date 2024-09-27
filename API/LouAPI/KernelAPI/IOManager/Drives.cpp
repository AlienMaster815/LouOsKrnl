/*
-- Tyler Grenier 10/26/23 10:04
*/


// TODO: Write A Storage Driver Release



#include <LouDDK.h>


    char driveLet[23] = {'D', 'E', 'F', 'G', 'H',
                         'I', 'J', 'K', 'L', 'M',
                         'N', 'O', 'P', 'Q', 'R',
                         'S', 'T', 'U', 'V', 'W',
                         'X', 'Y', 'Z'};



void Drives::RegisterDeviceFileSystems(char Drive, uint8_t FileSystemType[256],uint8_t NumberOfFileSystem){
    
    // TODO: Register FileSystems Of The Drives In Question
    
}


LOUSTATUS Drives::RegisterStorageDevice(bool SystemDrive, uint8_t DriveType, uint8_t DriveNum){
    if((SystemDrive) && (!SystemSet)){
        
        drive[0].DriveLet = 'C';
        drive[0].DriveNum = DriveNum;
        drive[0].DriveType = DriveType;
        SystemSet = true;
    }
    else if((SystemDrive) && (SystemSet)) LouPanic("Access Violation System Drive Already Set" ,BAD);
    // We Will Change This To Good When We Have a Proper Panic Handler Such As when We Have System
    // Input
    else{
        drive[DriveSelect].DriveLet = driveLet[DriveTarget];
        drive[DriveSelect].DriveNum = DriveNum;
        drive[DriveSelect].DriveType = DriveType;
        LouPrint("%c:",drive[DriveSelect].DriveLet);
        LouPrint(" ");
        if(DriveType == PATADEV)LouPrint("PATA\n");
        if(DriveType == PATAPIDEV)LouPrint("PATAPI\n");
        DriveTarget++;
    }
    DriveSelect++;
    return 0;
}

LOUSTATUS Drives::RegisterStorageDeviceA(uint8_t DriveType,uint8_t DriveNum){
    
    RegisterStorageDevice(false, DriveType,DriveNum);
    return 0;
}

void Drives::WriteDrive(char Drive, uint8_t* Data, uint32_t Location,uint32_t BufferSize){
    
    ACCESS status = RequestDriveAccess(Drive, WRITE, Data, Location);
    
    if(status) HandleDriveRequests(Drive, WRITE, Data ,Location, BufferSize);
    
}


void Drives::ReadDrive(char Drive, uint32_t Location , uint32_t BufferSize){
    
    ACCESS status = RequestDriveAccess(Drive, READ, 0, Location);
    
    if(status) HandleDriveRequests(Drive, READ, 0 ,Location, BufferSize);
    
}

Drives::Drives(){
    
    
}

Drives::~Drives(){
    
    
}

void Drives::HandleDriveRequests(char Drive, uint8_t Request, uint8_t* Data,uint32_t Location, uint32_t BufferSize){
    uint8_t i;
    for(i = 0; drive[i].DriveLet == Drive ; i++){
        if (i > 25){
            // No Drive Exists
            LouPrint("Error Finding Drive Is It Connected?\n");
            return;
        }
    }
    
    switch(Location){
        default: LouPrint("Error Handling IO Request\n");
    
        case READ:{
            switch(drive[i].DriveType){
                default: LouPrint("Unknown Device\n");
                case PATADEV:{
                    PATA* pata = (PATA*) Lou_Alloc_Mem(sizeof(PATA));
                    pata->pata_Read(drive[i].DriveNum, Location, BufferSize);
                    Lou_Free_Mem((RAMADD) pata,sizeof(PATA));
                }
                case PATAPIDEV:{
                    PATA* pata = (PATA*) Lou_Alloc_Mem(sizeof(PATA));
                    pata->pata_Read(drive[i].DriveNum, Location, BufferSize);
                    Lou_Free_Mem((RAMADD) pata,sizeof(PATA));
                }
            }
        }
        case WRITE:{
            switch(drive[i].DriveType){
                default: LouPrint("Unknown Device\n");
                case PATADEV:{
                    PATA* pata = (PATA*) Lou_Alloc_Mem(sizeof(PATA));
                    pata->pata_Write(drive[i].DriveNum, Location , Data, BufferSize);
                    Lou_Free_Mem((RAMADD) pata,sizeof(PATA));
                }
                case PATAPIDEV:{
                    PATA* pata = (PATA*) Lou_Alloc_Mem(sizeof(PATA));
                    pata->pata_Write(drive[i].DriveNum, Location , Data, BufferSize);
                    Lou_Free_Mem((RAMADD) pata,sizeof(PATA));
                }
            }
        }
    }

}

ACCESS Drives::RequestDriveAccess(char Drive, uint8_t Request, uint8_t* Data,uint32_t Location){
    
    // Later We Will Read File Types and Filesystem Layers
    // Along With What Were Writing to see if The Operation
    // is permited
    
    return GRANTED;
}

