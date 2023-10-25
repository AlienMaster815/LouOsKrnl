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

#include <drivers/Lou_drivers/hardrive.h>
#include <drivers/lou_drv_api.h>


void PATA::pata_device_scan(){
    
    
    LouPrint("scaning PATA devices\n");
    
    for(uint8_t i = 0; i < 4; i++)
        determine_device_type(i);
    

}


PATA::PATA(){

}
PATA::~PATA(){

}


void PATA::Read28PATA(uint8_t drive,bool Master, uint32_t Sector_Num, int BufferSize){
    
    if(Sector_Num > 0x0FFFFFFF)
        return;
    
    Port32Bit DataPort(drive);
    Port8Bit errorPort(drive + 0x1);
    Port8Bit sectorCountPort(drive + 0x2);
    Port8Bit lbaLowPort(drive + 0x3);
    Port8Bit lbaMidPort(drive + 0x4);
    Port8Bit lbaHiPort(drive + 0x5);
    Port8Bit devicePort(drive + 0x6);
    Port8Bit commandPort(drive + 0x7);
    Port8Bit controlPort(drive + 0x206);
    
}

void PATA::Read28PATAPI(uint8_t drive,bool Master, uint32_t Sector_Num, int BufferSize){
    
    if(Sector_Num > 0x0FFFFFFF)
        return;
    
    Port32Bit DataPort(drive);
    Port8Bit errorPort(drive + 0x1);
    Port8Bit sectorCountPort(drive + 0x2);
    Port8Bit lbaLowPort(drive + 0x3);
    Port8Bit lbaMidPort(drive + 0x4);
    Port8Bit lbaHiPort(drive + 0x5);
    Port8Bit devicePort(drive + 0x6);
    Port8Bit commandPort(drive + 0x7);
    Port8Bit controlPort(drive + 0x206);
    
}

void PATA::Write28PATA(uint8_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize){
    
    if(Sector_Num > 0x0FFFFFFF)
        return;
    
    Port32Bit DataPort(device);
    Port8Bit errorPort(device + 0x1);
    Port8Bit sectorCountPort(device + 0x2);
    Port8Bit lbaLowPort(device + 0x3);
    Port8Bit lbaMidPort(device + 0x4);
    Port8Bit lbaHiPort(device + 0x5);
    Port8Bit devicePort(device + 0x6);
    Port8Bit commandPort(device + 0x7);
    Port8Bit controlPort(device + 0x206);
    
}

void PATA::Write28PATAPI(uint8_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize){
    
    if(Sector_Num > 0x0FFFFFFF)
        return;
    
    Port32Bit DataPort(device);
    Port8Bit errorPort(device + 0x1);
    Port8Bit sectorCountPort(device + 0x2);
    Port8Bit lbaLowPort(device + 0x3);
    Port8Bit lbaMidPort(device + 0x4);
    Port8Bit lbaHiPort(device + 0x5);
    Port8Bit devicePort(device + 0x6);
    Port8Bit commandPort(device + 0x7);
    Port8Bit controlPort(device + 0x206);
    
    
    
}
    

void PATA::pata_Read28(uint8_t device,uint32_t Sector_Num, int BufferSize){
    

    
}


void PATA::pata_Write28(uint8_t device, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize){
    

    
}




void PATA::determine_device_type(uint8_t drive){
    if(drive == 0) //Primary Master
        pata[drive] = WakeAndIdentifyPata(0x1F0,0xA0);
    
    else if(drive == 1) //Primary Slave
        pata[drive] = WakeAndIdentifyPata(0x1F0,0xB0);
    
    else if(drive == 2) //Secondary Master
        pata[drive] = WakeAndIdentifyPata(0x170,0xA0);
    
    else if(drive == 3) //Secondary Slave
        pata[drive] = WakeAndIdentifyPata(0x170,0xB0);
    
}

uint8_t PATA::initialize_pata(uint16_t drive,bool head){

    return 1;
}

uint8_t PATA::WakeAndIdentifyPata(uint16_t Device ,uint8_t head)
{
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
        if((Device == 0x1F0) && (head == 0xA0))LouPrint("Primary Master\n");
        if((Device == 0x1F0) && (head == 0xB0))LouPrint("Primary Slave\n");
        if((Device == 0x170) && (head == 0xA0))LouPrint("Secondary Master\n");
        if((Device == 0x170) && (head == 0xB0))LouPrint("Secondary Slave\n");
        return 0;
    }
    
    while(((status & 0x80) == 0x80)
       && ((status & 0x01) != 0x01))
        status = commandPort.Read();
    
    if(status & 0x01)
    {
        LouPrint("ERROR Could Not Determine Device: Error Code: %d\n",status);
        return 0;
    }
    
    LouPrint("Found A Device On: ");
    if((Device == 0x1F0) && (head == 0xA0))LouPrint("Primary Master\n");
    if((Device == 0x1F0) && (head == 0xB0))LouPrint("Primary Slave\n");
    if((Device == 0x170) && (head == 0xA0))LouPrint("Secondary Master\n");
    if((Device == 0x170) && (head == 0xB0))LouPrint("Secondary Slave\n");
    
    if(head == 0xA0)
        return initialize_pata(Device,true);
    else if(head == 0xB0)
        return initialize_pata(Device,false);
    else
        LouPrint("ERROR Selecting Controller\n");
    
    return 0;
}

void PATA::Flush(uint8_t Device){
    uint16_t drive = 0; bool Master;
    if(Device == 1){ drive = 0x1F0; Master = true;}
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
        
        if(Device == 1)LouPrint("Primary Master\n");
        else if(Device == 2)LouPrint("Primary Slave\n");
        else if(Device == 3)LouPrint("Secondary Master\n");
        else if(Device == 4)LouPrint("Secondary Slave\n");
        
        return;
    }
}
