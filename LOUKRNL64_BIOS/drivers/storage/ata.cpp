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

void PATA::initialize_pata(uint8_t drive){

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
    if(status == 0xFF)
        return 0;
    
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
    
    //TODO: Write Code To Determine What Type Of Device IS Connected
    
    return 0;
}
