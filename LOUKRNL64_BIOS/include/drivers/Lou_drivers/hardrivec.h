    
#ifndef _HDC_H
#define _HDC_H
#include <drivers/Lou_drivers/storage_struct.h>

void pata_device_scanc();
uintptr_t Read_patac(uint8_t device,register_interface registers);
void Write_patac(uint8_t device,register_interface registers, uintptr_t data);
#endif
