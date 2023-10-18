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

device_table* ide = (device_table*)Lou_Alloc_Mem(sizeof(device_table));
pata_register_interface* primaster = (pata_register_interface*) Lou_Alloc_Mem(sizeof(pata_register_interface));
pata_register_interface* prislave = (pata_register_interface*) Lou_Alloc_Mem(sizeof(pata_register_interface));
pata_register_interface* secmaster = (pata_register_interface*) Lou_Alloc_Mem(sizeof(pata_register_interface));
pata_register_interface* secslave = (pata_register_interface*) Lou_Alloc_Mem(sizeof(pata_register_interface));

void PATA::pata_device_scan(){
    
    
    LouPrint("scaning PATA devices\n");
    
    
    
    if((ide->primaster && ide->prislave && ide->secmaster && ide->secslave) == 0){
        //if there are no devices connected that are pata free up space for other things
        RAMADD idefree = (RAMADD)ide;
        RAMADD primasterfree = (RAMADD)primaster;
        RAMADD prislavefree = (RAMADD)prislave;
        RAMADD secmasterfree = (RAMADD)secmaster;
        RAMADD secslavefree = (RAMADD)secslave;
        Lou_Free_Mem(idefree, sizeof(device_table));
        Lou_Free_Mem(primasterfree, sizeof(pata_register_interface));
        Lou_Free_Mem(prislavefree, sizeof(pata_register_interface));
        Lou_Free_Mem(secmasterfree, sizeof(pata_register_interface));
        Lou_Free_Mem(secslavefree, sizeof(pata_register_interface));
        LouPrint("No PATA Devices Found \n");
    }
    else{
        
        //if there are actual devices dynamically free up data for other things
        
        if(ide->primaster == 0){
            RAMADD primasterfree = (RAMADD)primaster;
            Lou_Free_Mem(primasterfree, sizeof(pata_register_interface));
        }
        
        if(ide->prislave == 0){
            RAMADD prislavefree = (RAMADD)prislave;
            Lou_Free_Mem(prislavefree, sizeof(pata_register_interface));
        }
        if(ide->secmaster == 0){
            RAMADD secmasterfree = (RAMADD)secmaster;
            Lou_Free_Mem(secmasterfree, sizeof(pata_register_interface));
        }
        if(ide->secslave == 0){
            RAMADD secslavefree = (RAMADD)secslave;
            Lou_Free_Mem(secslavefree, sizeof(pata_register_interface));
        }
    }
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

}    

void PATA::initialize_pata(uint8_t drive){

}
