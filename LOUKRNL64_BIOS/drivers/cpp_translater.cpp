#include <drivers/Lou_drivers/hardrive.h>



PATA pata;


extern "C" void pata_device_scanc(){
    pata.pata_device_scan();
}
extern "C" uintptr_t Read_patac(uint8_t device,register_interface registers){
    uintptr_t loc = pata.Read_pata(device,registers);
    return loc;
}

extern "C" void Write_patac(uint8_t device,register_interface registers, uintptr_t data){
    pata.Write_pata(device,registers,data);
}
