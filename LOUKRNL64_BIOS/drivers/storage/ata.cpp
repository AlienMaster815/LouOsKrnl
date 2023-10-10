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
#include <drivers/Lou_drivers/lou_drv_api.h>

void PATA::pata_device_scan(){
    LouPrint("Hello Driver World \n");
}
    
uintptr_t PATA::Read_pata(uint8_t device,register_interface registers){
    return 0;
}

void PATA::Write_pata(uint8_t device,register_interface registersm, uintptr_t data){

}

PATA::PATA(){

}
PATA::~PATA(){

}
    
uintptr_t PATA::read_pata_device(uint8_t device, register_interface registers){
    
    return 0;
}
void PATA::write_pata_device(uint8_t device, register_interface registers, uintptr_t data){

}

uintptr_t PATA::read_patapi_device(uint8_t device, register_interface registers){
    return 0;
}
void PATA::write_patapi_device(uint8_t device, register_interface registers, uintptr_t data){

}
    
void PATA::determine_device_type(uint8_t drive){

}    

void PATA::initialize_pata(uint8_t drive){

}
