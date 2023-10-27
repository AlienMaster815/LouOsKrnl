/*
-- Tyler Grenier 10/26/23 10:04
-- This File Will Be Used To Standardize The Drives
-- So That The Drivers can Just Boom I want To Select
-- The C Drive or the E Drive And read or Write From it
-- As Well as give an automatiic Request Drive Acces
-- Implemented into the Read And Write Call Unlike The
-- Linux Kernel That You Request The Permision To acces
-- The Drive And Then You Can Do Whatever You Want When
-- There Should In My Oppinion Be Constant Acces Checks
-- OtherWise things Can Just be injected or written Where
-- They arent supposed To be __-- SUDO rm -r / --__ I swear
-- Try it Youll Erase The entire Fucking Drive Only The
-- Kernel Itself Should Ever Have The Right To Minipulate System
-- Files Windows Fucks This Up Too Just Not As Bad The Windows
-- System Allows The Coppying Of Files From Windows
-- System directories with basic copy and paste Which
-- Shouldent be a thing And Honestly Dosent Even Block System
-- Files From Even Being Read By Non Sytstem Administrators AND
-- ITS WAAAAY TO EASY FOR YOU TO BECOME AN ADMISISRATOR... Anywayse
-- Thats Todays Rant...
*/


// TODO: Write A Storage Driver Release


#include <KernelAPI/Drives.h>
#include <drivers/lou_drv_api.h>
#include <drivers/Lou_drivers/hardrive.h>

LOUSTATUS Drives::RegisterStorageDevice(bool SystemDrive, uint8_t DriveType, uint8_t DriveNum){
    if((SystemDrive) && (!SystemSet)){
        drive[DriveSelect].DriveLet = 'C';
        drive[DriveSelect].DriveNum = DriveNum;
        SystemSet = true;
    }
    else if((SystemDrive) && (SystemSet)) LouPanic("Access Violation System Drive Already Set" ,BAD);
    // We Will Change This To Good When We Have a Proper Panic Handler Such As when We Have System
    // Input
    else{
        drive[DriveSelect].DriveLet = driveLet[DriveTarget];
        drive[DriveSelect].DriveNum = DriveNum;
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
            //TODO: Handle No Drive Exists
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
                    pata->pata_Read28(drive[i].DriveNum, Location, BufferSize);
                    Lou_Free_Mem((RAMADD) pata,sizeof(PATA));
                }
                case PATAPIDEV:{
                    PATA* pata = (PATA*) Lou_Alloc_Mem(sizeof(PATA));
                    pata->pata_Read28(drive[i].DriveNum, Location, BufferSize);
                    Lou_Free_Mem((RAMADD) pata,sizeof(PATA));
                }
            }
        }
        case WRITE:{
            switch(drive[i].DriveType){
                default: LouPrint("Unknown Device\n");
                case PATADEV:{
                    PATA* pata = (PATA*) Lou_Alloc_Mem(sizeof(PATA));
                    pata->pata_Write28(drive[i].DriveNum, Location , Data, BufferSize);
                    Lou_Free_Mem((RAMADD) pata,sizeof(PATA));
                }
                case PATAPIDEV:{
                    PATA* pata = (PATA*) Lou_Alloc_Mem(sizeof(PATA));
                    pata->pata_Write28(drive[i].DriveNum, Location , Data, BufferSize);
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
