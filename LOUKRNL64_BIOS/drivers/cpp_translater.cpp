#include <drivers/Lou_drivers/hardrive.h>

/*
 * Tyler Grenier 10-10-23
 * This is an important table file because
 * the table here in this cpp file will
 * allow our kernel to talk to drivers from
 * the cpp universe without having serious
 * effect on how usermode and or other drivers
 * also in cpp interacts
 * with drivers we can either jump from cpp to c
 * and back to cpp or with this design determine
 * the fastest route and if determined just jump
 * from cpp to cpp without having to do translation
 * that also takes too long
*/

PATA pata;


extern "C" void pata_device_scanc(){
    pata.pata_device_scan();
}
extern "C" uintptr_t Read_patac(uint8_t device,pata_register_interface registers){
    uintptr_t loc = pata.Read_pata(device,registers);
    return loc;
}

extern "C" void Write_patac(uint8_t device,pata_register_interface registers, uintptr_t data){
    pata.Write_pata(device,registers,data);
}
