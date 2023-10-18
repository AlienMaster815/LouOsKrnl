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
    if(drive == 0){
        //primary master
        //TODO: write the identify comand then probe certain asspects to find the device type
        //pata_register_interface primasterwake;
        //primasterwake.DATA_REG = 0x1f0;
        //primasterwake.device_head_register = 0xA0;
    }
    else if(drive == 1){
        //primary slave
        //TODO: write the identify comand then probe certain asspects to find the device type
        //pata_register_interface prislavewake;
        //prislavewake.DATA_REG = 0x1f0;
        //prislavewake.device_head_register = 0xB0;
    }
    else if(drive == 2){
        //secondary master
        //TODO: write the identify comand then probe certain asspects to find the device type
        //pata_register_interface secmasterewake;
        //secmasterwake.DATA_REG = 0x170;
        //secmasterwake.device_head_register = 0xA0;
        
    }
    else if(drive == 3){
        //secondary slave
        //TODO: write the identify comand then probe certain asspects to find the device type
        //pata_register_interface secslavewake;
        //secslavewake.DATA_REG = 0x170;
        //secslavewake.device_head_register = 0xB0;
    }
    
}

void PATA::initialize_pata(uint8_t drive){

}
