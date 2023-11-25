
// ATA.cpp Version 1.0 Stable Release

/*
-- Tyler Grenier 10-9-23 7:05
-- This is my first c++ file other than the
-- System i imported for writing code for
-- windows sytem drivers we will be doing a 
-- lot of c++ when it comes to running drivers
-- and doing usermode systems so in out kernel
-- we will need to have our c++ files able 
-- to handle functions and classes that are 
-- out of are kernel to either 1. translate the
-- code to the kernels c files or jump to c files
-- from c++ or handle the systems entirely 
-- depending on what the fuck were doing wich is 
-- an important milestone because now im programing 
-- for drivers
*/

/*
-- Tyler Grenier 10/26/23 12:48 AM
-- This Is Almost Completly Finnished The Last Thing I
-- Need To Do but Is Not Required Is Add Support To ATAPI
-- Advanced System Services Like Streaming And Fast Data
-- Transfer Support I Am Officialy Releaseing This file as
-- a Stable Release
*/

#include <LouDDK.h>

uint8_t pata[4];



void PATA::pata_device_scan(){
    

    LouPrint("scaning ATA devices\n");
    
    determine_device_type(0);
    determine_device_type(2);
    
    return;
}


PATA::PATA(){

}
PATA::~PATA(){

}


uint16_t* PATA::Read28PATA(uint16_t drive,bool Master, uint32_t Sector_Num, int BufferSize){
    


    Port32Bit DataPort(drive);
    Port8Bit errorPort(drive + 0x1);
    Port8Bit sectorCountPort(drive + 0x2);
    Port8Bit lbaLowPort(drive + 0x3);
    Port8Bit lbaMidPort(drive + 0x4);
    Port8Bit lbaHiPort(drive + 0x5);
    Port8Bit devicePort(drive + 0x6);
    Port8Bit commandPort(drive + 0x7);
    Port8Bit controlPort(drive + 0x206);
    
    devicePort.Write( (Master ? 0xE0 : 0xF0) | ((Sector_Num & 0x0F000000) >> 24) );
    errorPort.Write(0);
    sectorCountPort.Write(1);
    lbaLowPort.Write(  Sector_Num & 0x000000FF );
    lbaMidPort.Write( (Sector_Num & 0x0000FF00) >> 8);
    lbaLowPort.Write( (Sector_Num & 0x00FF0000) >> 16 );
    commandPort.Write(0x20);
    
    uint8_t status = commandPort.Read();
    while(((status & 0x80) == 0x80)
       && ((status & 0x01) != 0x01))
        status = commandPort.Read();
        
    if(status & 0x01)
    {
        LouPrint("ERROR Reading From Drive\n");
        return (uint16_t*)0x00;
    }
            asm volatile ("hlt");
    
    LouPrint("Reading ATA Drive: ");
    
    
    
    if     ((drive == 0x1F0) && (Master))  LouPrint("Primary Master\n");
    else if((drive == 0x1F0) && (!Master)) LouPrint("Primary Slave\n");
    else if((drive == 0x170) && (Master))  LouPrint("Secondary Master\n");
    else if((drive == 0x170) && (!Master)) LouPrint("Secondary Slave\n");
        
    uint16_t *ReadBuffer = (uint16_t *)Lou_Alloc_Mem(sizeof(uint8_t) * BufferSize);
    
    int j = 0;
    
    for(int i = 0; i < BufferSize; i += 2 && j++)
    {
        uint16_t wdata = DataPort.Read();
        
        *(ReadBuffer + (sizeof(uint16_t) * j)) = wdata;
                
        char *text = "  \0";
        text[0] = wdata & 0xFF;
        
        if(i+1 < BufferSize)
            text[1] = (wdata >> 8) & 0xFF;
        else
            text[1] = '\0';
        
        LouPrint(text);
    }
    
    for(int i = BufferSize + (BufferSize%2); i < 512; i += 2)
        DataPort.Read();
    

    
    
    return ReadBuffer;
}

uint16_t* PATA::Read28PATAPI(uint16_t drive,bool Master, uint32_t Sector_Num, int BufferSize){
        
    Port32Bit DataPort(drive);
    Port8Bit errorPort(drive + 0x1);
    Port8Bit sectorCountPort(drive + 0x2);
    Port8Bit lbaLowPort(drive + 0x3);
    Port8Bit lbaMidPort(drive + 0x4);
    Port8Bit lbaHiPort(drive + 0x5);
    Port8Bit devicePort(drive + 0x6);
    Port8Bit commandPort(drive + 0x7);
    Port8Bit controlPort(drive + 0x206);

    devicePort.Write( (Master ? 0xE0 : 0xF0) | ((Sector_Num & 0x0F000000) >> 24) );
    errorPort.Write(0);
    sectorCountPort.Write(1);
    lbaLowPort.Write(  Sector_Num & 0x000000FF );
    lbaMidPort.Write( (Sector_Num & 0x0000FF00) >> 8);
    lbaLowPort.Write( (Sector_Num & 0x00FF0000) >> 16 );
    commandPort.Write(0x20);
    
    uint8_t status = commandPort.Read();
    while(((status & 0x80) == 0x80)
       && ((status & 0x01) != 0x01))
        status = commandPort.Read();
        
    if(status & 0x01)
    {
        LouPrint("ERROR Reading From Drive\n");
        return (uint16_t*)0x00;
    }
    
    LouPrint("Reading ATAPI Drive: ");
    
    
    
    if     ((drive == 0x1F0) && (Master))  LouPrint("Primary Master\n");
    else if((drive == 0x1F0) && (!Master)) LouPrint("Primary Slave\n");
    else if((drive == 0x170) && (Master))  LouPrint("Secondary Master\n");
    else if((drive == 0x170) && (!Master)) LouPrint("Secondary Slave\n");
        
    
    uint16_t *ReadBuffer = (uint16_t *)Lou_Alloc_Mem(sizeof(uint8_t) * BufferSize);
    
    int j = 0;
    
    for(int i = 0; i < BufferSize; i += 2 && j++)
    {
        uint16_t wdata = DataPort.Read();
        
        *(ReadBuffer + (sizeof(uint16_t) * j)) = wdata;
                
        char *text = "  \0";
        text[0] = wdata & 0xFF;
        
        if(i+1 < BufferSize)
            text[1] = (wdata >> 8) & 0xFF;
        else
            text[1] = '\0';
        
        LouPrint(text);
    }
    
    
    for(int i = BufferSize + (BufferSize%2); i < BufferSize; i += 2)
        DataPort.Read();

    return ReadBuffer;


    //Later We Will Do Some More Work With this To support Advanced ATA Features
}

void PATA::Write28PATA(uint16_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize){
    
    Port32Bit DataPort(device);
    Port8Bit errorPort(device + 0x1);
    Port8Bit sectorCountPort(device + 0x2);
    Port8Bit lbaLowPort(device + 0x3);
    Port8Bit lbaMidPort(device + 0x4);
    Port8Bit lbaHiPort(device + 0x5);
    Port8Bit devicePort(device + 0x6);
    Port8Bit commandPort(device + 0x7);
    Port8Bit controlPort(device + 0x206);
    
    devicePort.Write( (Master ? 0xE0 : 0xF0) | ((Sector_Num & 0x0F000000) >> 24) );
    errorPort.Write(0);
    sectorCountPort.Write(1);
    lbaLowPort.Write(  Sector_Num & 0x000000FF );
    lbaMidPort.Write( (Sector_Num & 0x0000FF00) >> 8);
    lbaLowPort.Write( (Sector_Num & 0x00FF0000) >> 16 );
    commandPort.Write(0x20);
    
    LouPrint("Writing to ATA Drive: ");
    
    if     ((device == 0x1F0) && (Master))  LouPrint("Primary Master\n");
    else if((device == 0x1F0) && (!Master)) LouPrint("Primary Slave\n");
    else if((device == 0x170) && (Master))  LouPrint("Secondary Master\n");
    else if((device == 0x170) && (!Master)) LouPrint("Secondary Slave\n");

    for(uint32_t i = 0; i < BufferSize; i += 2)
    {
        uint16_t wdata = Data[i];
        if(i+1 < BufferSize)
            wdata |= ((uint16_t)Data[i+1]) << 8;
        DataPort.Write(wdata);
        
        char *text = "  \0";
        text[0] = (wdata >> 8) & 0xFF;
        text[1] = wdata & 0xFF;
        LouPrint(text);
    }
    
    for(uint32_t i = BufferSize + (BufferSize%2); i < 512; i += 2)
        DataPort.Write(0x0000);
    
}

void PATA::Write28PATAPI(uint16_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize){
    
    Port32Bit DataPort(device);
    Port8Bit errorPort(device + 0x1);
    Port8Bit sectorCountPort(device + 0x2);
    Port8Bit lbaLowPort(device + 0x3);
    Port8Bit lbaMidPort(device + 0x4);
    Port8Bit lbaHiPort(device + 0x5);
    Port8Bit devicePort(device + 0x6);
    Port8Bit commandPort(device + 0x7);
    Port8Bit controlPort(device + 0x206);
    
    devicePort.Write( (Master ? 0xE0 : 0xF0) | ((Sector_Num & 0x0F000000) >> 24) );
    errorPort.Write(0);
    sectorCountPort.Write(1);
    lbaLowPort.Write(  Sector_Num & 0x000000FF );
    lbaMidPort.Write( (Sector_Num & 0x0000FF00) >> 8);
    lbaLowPort.Write( (Sector_Num & 0x00FF0000) >> 16 );
    commandPort.Write(0x20);
    
    LouPrint("Writing to ATAPI Drive: ");

    for(uint32_t i = 0; i < BufferSize; i += 2)
    {
        uint16_t wdata = Data[i];
        if(i+1 < BufferSize)
            wdata |= ((uint16_t)Data[i+1]) << 8;
        DataPort.Write(wdata);
        
        char *text = "  \0";
        text[0] = (wdata >> 8) & 0xFF;
        text[1] = wdata & 0xFF;
        LouPrint(text);
    }
    
    for(uint32_t i = BufferSize + (BufferSize%2); i < 512; i += 2)
        DataPort.Write(0x0000);

    //Later We Will Do Some More Work With this To support Advanced ATA Features
}
    

uint16_t* PATA::pata_Read28(uint8_t device,uint32_t Sector_Num, int BufferSize){
    
    if(Sector_Num > 0x0FFFFFFF)
        return 0x00;
    
    uint16_t* BuffAdd = 0x00;
    
    if(device == 1){
        if     (pata[0] == 1) BuffAdd = Read28PATA(0x1F0,true,Sector_Num,BufferSize);
        else if(pata[0] == 2) BuffAdd = Read28PATAPI(0x1F0,true, Sector_Num,BufferSize);
        else LouPrint("No Drive Present\n");
    }
    else if(device == 2){
        if     (pata[1] == 1) BuffAdd = Read28PATA(0x1F0,false, Sector_Num, BufferSize);
        else if(pata[1] == 2) BuffAdd = Read28PATAPI(0x1F0,false,Sector_Num, BufferSize);
        else LouPrint("No Drive Present\n");
    }
    else if(device == 3){
        if     (pata[2] == 1) BuffAdd = Read28PATA(0x170,true, Sector_Num, BufferSize);
        else if(pata[2] == 2) BuffAdd = Read28PATAPI(0x170,true, Sector_Num, BufferSize);
        else LouPrint("No Drive Present\n");
    }
    else if(device == 4){
        if     (pata[3] == 1) BuffAdd = Read28PATA(0x170,false, Sector_Num, BufferSize);
        else if(pata[3] == 2) BuffAdd = Read28PATAPI(0x170,false, Sector_Num, BufferSize);
        else LouPrint("No Drive Present\n");
    }
    else LouPrint("Error Selecting Drive\n");
    
    return BuffAdd;
}


void PATA::pata_Write28(uint8_t device, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize){
    
    if(Sector_Num > 0x0FFFFFFF)
        return;
    if(BufferSize > 512)
        return;
    
    if(device == 1){
        if     (pata[0] == 1) Write28PATA(0x1F0,true,Sector_Num,Data ,BufferSize);
        else if(pata[0] == 2) Write28PATAPI(0x1F0,true, Sector_Num,Data,BufferSize);
        else LouPrint("No Drive Present\n");
    }
    else if(device == 2){
        if     (pata[1] == 1) Write28PATA(0x1F0,false, Sector_Num, Data, BufferSize);
        else if(pata[1] == 2) Write28PATAPI(0x1F0,false,Sector_Num, Data, BufferSize);
        else LouPrint("No Drive Present\n");
    }
    else if(device == 3){
        if     (pata[2] == 1) Write28PATA(0x170,true, Sector_Num, Data, BufferSize);
        else if(pata[2] == 2) Write28PATAPI(0x170,true, Sector_Num, Data, BufferSize);
        else LouPrint("No Drive Present\n");
    }
    else if(device == 4){
        if     (pata[3] == 1) Write28PATA(0x170,false, Sector_Num, Data, BufferSize);
        else if(pata[3] == 2) Write28PATAPI(0x170,false, Sector_Num, Data, BufferSize);
        else LouPrint("No Drive Present\n");
    }
    else LouPrint("Error Selecting Drive\n");
    
}




void PATA::determine_device_type(uint8_t drive){

    if(drive == 0){ //Primary Master
        WakeAndIdentifyPata(0x1F0,0xA0);
        return;
    }
    else if(drive == 1){ //Primary Slave

        WakeAndIdentifyPata(0x1F0,0xB0);
        return;
    }
    else if(drive == 2){ //Secondary Master

        WakeAndIdentifyPata(0x170,0xA0);
        return;
    }
    else if(drive == 3){ //Secondary Slave
        WakeAndIdentifyPata(0x170,0xB0);
        return;
    }
    
}


void PATA::initialize_pata(uint16_t drive,bool Master){

    ISO9660 iso9660;
    bool FileSystemCD = false;
    bool WriteAble = false;
    bool FileSystemExist = false;

    LouPrint("Scanning For Filesystem\n");    

    if((drive == 0x1F0) && (Master)){
        pata[0] = 1;

        FSStruct FSS = iso9660.ISOFileSystemScan(1,PATADEV);

        if(FSS.FSType == ISO){ //Its An ISO
            FileSystemExist = true;
            FileSystemCD = true;
            pata[0] = 2;
        }
        
        //If The Drive Has A FileSystem Or Is Writeable Then Register It As A Device
        if(((!FileSystemCD) && (FileSystemExist)) && (!WriteAble))Register_Storage_DeviceA(PATAPIDEV,1);
        if(((!FileSystemCD) && (FileSystemExist)) || (WriteAble))Register_Storage_DeviceA(PATADEV, 1);
        return;
    }
    else if((drive == 0x1F0) && (!Master)){
        pata[1] = 1;

        FSStruct FSS = iso9660.ISOFileSystemScan(1,PATADEV);
          
        if(FSS.FSType == ISO){ //Its An ISO
            FileSystemExist = true;
            FileSystemCD = true;
            pata[1] = 2;
        }
        
        
            
        
        //If The Drive Has A FileSystem Or Is Writeable Then Register It As A Device
        if(((!FileSystemCD) && (FileSystemExist)) && (!WriteAble))Register_Storage_DeviceA(PATAPIDEV,1);
        if(((!FileSystemCD) && (FileSystemExist)) || (WriteAble))Register_Storage_DeviceA(PATADEV, 2);
        return;
    }
    else if((drive == 0x170) &&  (Master)){
        pata[2] = 1;

        FSStruct FSS = iso9660.ISOFileSystemScan(1,PATADEV);
        
        if(FSS.FSType == ISO){ //Its An ISO
            FileSystemExist = true;
            FileSystemCD = true;
            pata[2] = 2;
        }
        
        
            
        
        //If The Drive Has A FileSystem Or Is Writeable Then Register It As A Device
        if(((!FileSystemCD) && (FileSystemExist)) && (!WriteAble))Register_Storage_DeviceA(PATAPIDEV,1);
        if(((!FileSystemCD) && (FileSystemExist)) || (WriteAble))Register_Storage_DeviceA(PATADEV, 3);
        return;
    }
    else if((drive == 0x170) && (!Master)){
        pata[3] = 1;
        
        FSStruct FSS = iso9660.ISOFileSystemScan(1,PATADEV);
        
        if(FSS.FSType == ISO){ //Its An ISO
            FileSystemExist = true;
            FileSystemCD = true;
            pata[3] = 2;
        }
        
        
            
        
        //If The Drive Has A FileSystem Or Is Writeable Then Register It As A Device
        if(((!FileSystemCD) && (FileSystemExist)) && (!WriteAble))Register_Storage_DeviceA(PATAPIDEV,1);
        if(((!FileSystemCD) && (FileSystemExist)) || (WriteAble))Register_Storage_DeviceA(PATADEV, 4);
        return;
        
    }
    

}

void PATA::WakeAndIdentifyPata(uint16_t Device ,uint8_t head){

    Port32Bit DataPort(Device);
    Port8Bit errorPort(Device + 0x1);
    Port8Bit sectorCountPort(Device + 0x2);
    Port8Bit lbaLowPort(Device + 0x3);
    Port8Bit lbaMidPort(Device + 0x4);
    Port8Bit lbaHiPort(Device + 0x5);
    Port8Bit devicePort(Device + 0x6);
    Port8Bit commandPort(Device + 0x7);
    Port8Bit controlPort(Device + 0x206);

    
    
    devicePort.Write(head);
    controlPort.Write(0);
    
    

    uint8_t status = commandPort.Read();
    if(status == 0xFF){
        LouPrint("No Device On\n");
        if     ((Device == 0x1F0) && (head == 0xA0))LouPrint("Primary Master\n");
        else if((Device == 0x1F0) && (head == 0xB0))LouPrint("Primary Slave\n");
        else if((Device == 0x170) && (head == 0xA0))LouPrint("Secondary Master\n");
        else if((Device == 0x170) && (head == 0xB0))LouPrint("Secondary Slave\n");
        return;
    }

  

    while(((status & 0x80) == 0x80)
       && ((status & 0x01) != 0x01))
        status = commandPort.Read();
    
        

    if(status & 0x01)
    {
        LouPrint("ERROR Could Not Determine Device: Error Code: %d\n",status);
        return;
    }
    


    LouPrint("Found A Device On: ");
    if     ((Device == 0x1F0) && (head == 0xA0))LouPrint("Primary Master\n");
    else if((Device == 0x1F0) && (head == 0xB0))LouPrint("Primary Slave\n");
    else if((Device == 0x170) && (head == 0xA0))LouPrint("Secondary Master\n");
    else if((Device == 0x170) && (head == 0xB0))LouPrint("Secondary Slave\n");
    


    if(head == 0xA0){

        initialize_pata(Device,true);
    }    
    else if(head == 0xB0){

        initialize_pata(Device,false);
    }
    else{

        LouPrint("ERROR Selecting Controller\n");
    }
    return;
}

void PATA::Flush(uint8_t Device){
    uint16_t drive = 0; bool Master;
    if     (Device == 1){ drive = 0x1F0; Master = true;}
    else if(Device == 2){ drive = 0x1F0; Master = false;}
    else if(Device == 3){ drive = 0x170; Master = true;}
    else if(Device == 4){ drive = 0x170; Master = false;}
    
    if(drive == 0){
        LouPrint("ERROR Selecting Controller\n");
        return;
    }; //later we will change this for error handleing
    
    Port32Bit DataPort(drive);
    Port8Bit errorPort(drive + 0x1);
    Port8Bit sectorCountPort(drive + 0x2);
    Port8Bit lbaLowPort(drive + 0x3);
    Port8Bit lbaMidPort(drive + 0x4);
    Port8Bit lbaHiPort(drive + 0x5);
    Port8Bit devicePort(drive + 0x6);
    Port8Bit commandPort(drive + 0x7);
    Port8Bit controlPort(drive + 0x206);

    devicePort.Write(Master ? 0xE0 : 0xF0);
    commandPort.Write(0xE7);
    
    uint8_t status = commandPort.Read();
    if(status == 0x00)
        return;
    
    while(((status & 0x80) == 0x80)
       && ((status & 0x01) != 0x01))
        status = commandPort.Read();
    
    if(status & 0x01)
    {
        LouPrint("ERROR Could Not Flush Device: ");
        
        if     (Device == 1)LouPrint("Primary Master\n");
        else if(Device == 2)LouPrint("Primary Slave\n");
        else if(Device == 3)LouPrint("Secondary Master\n");
        else if(Device == 4)LouPrint("Secondary Slave\n");
        
        return;
    }
}
