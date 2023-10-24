#include <cstdint.h>

#ifndef _IDE_
#define _IDE_

#include <drivers/Lou_drivers/storage_struct.h>



class PATA{
    public:
    
        
    void pata_device_scan();

    PATA();
    ~PATA();

    private:
    

    uint8_t pata[4];

    
    void determine_device_type(uint8_t drive);    
    void initialize_pata(uint8_t drive);
    uint8_t WakeAndIdentifyPata(uint16_t Device ,uint8_t head);
    
    protected:
  
};
#endif


#ifndef _SERIAL_
#define _SERIAL_


#endif
