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
    
uintptr_t PATA::Read_pata(uint8_t device,pata_register_interface registers){
    return 0;
}

void PATA::Write_pata(uint8_t device,pata_register_interface registers, uintptr_t data){

}

PATA::PATA(){

}
PATA::~PATA(){

}
    
uintptr_t PATA::read_pata_device(uint8_t device, pata_register_interface registers){
    
    return 0;
}
void PATA::write_pata_device(uint8_t device, pata_register_interface registers, uintptr_t data){

}

uintptr_t PATA::read_patapi_device(uint8_t device, pata_register_interface registers){
    return 0;
}
void PATA::write_patapi_device(uint8_t device, pata_register_interface registers, uintptr_t data){

}
    
void PATA::determine_device_type(uint8_t drive){
    if(drive == 0)
        WakeAndIdentifyPata(0x1F0,0xA0);
    
    else if(drive == 1)
        WakeAndIdentifyPata(0x1F0,0xB0);
    
    else if(drive == 2)
        WakeAndIdentifyPata(0x170,0xA0);
    
    else if(drive == 3) //Secondary Slave
        WakeAndIdentifyPata(0x170,0xB0);
}

void PATA::initialize_pata(uint8_t drive){

}

uint8_t PATA::WakeAndIdentifyPata(uint16_t Device ,uint8_t head){
    
    Port16Bit DataReg;
    Port8Bit ComandReg;
    
    DataReg.port_number = Device;
    ComandReg.port_number = device + 1;
    
    
    
    
    
    return 0;
}
