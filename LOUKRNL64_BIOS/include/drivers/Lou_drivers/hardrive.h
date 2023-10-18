#include <cstdint.h>

#ifndef _IDE_
#define _IDE_

#include <drivers/Lou_drivers/storage_struct.h>



class PATA{
    public:
    
        
    void pata_device_scan();
    
    uintptr_t Read_pata(uint8_t device,pata_register_interface registers);
    void Write_pata(uint8_t device,pata_register_interface registers, uintptr_t data);

    PATA();
    ~PATA();

    private:
    

    uint8_t pata[4];
    
    uintptr_t read_pata_device(uint8_t device, pata_register_interface registers);
    void write_pata_device(uint8_t device, pata_register_interface registers, uintptr_t data);

    uintptr_t read_patapi_device(uint8_t device, pata_register_interface registers);
    void write_patapi_device(uint8_t device, pata_register_interface registers, uintptr_t data);
    
    void determine_device_type(uint8_t drive);    
    void initialize_pata(uint8_t drive);
  
};
#endif

#ifndef _SERIAL_
#define _SERIAL_

#endif
