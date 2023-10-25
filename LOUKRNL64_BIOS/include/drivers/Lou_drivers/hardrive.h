#include <cstdint.h>

#ifndef _IDE_
#define _IDE_

#include <drivers/Lou_drivers/storage_struct.h>



class PATA{
    public:
    
    void pata_Read28(uint8_t device,uint32_t Sector_Num, int BufferSize = 512);
    void pata_Write28(uint8_t device, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize);
    
    void pata_device_scan();
    
    PATA();
    ~PATA();

    private:
    

    uint8_t pata[4];
    
    void Read28PATA(uint8_t drive,bool Master, uint32_t Sector_Num, int BufferSize);
    void Read28PATAPI(uint8_t drive,bool Master, uint32_t Sector_Num, int BufferSize);
    
    void Write28PATA(uint8_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize);
    void Write28PATAPI(uint8_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize);
    
    void determine_device_type(uint8_t drive);
    uint8_t initialize_pata(uint16_t drive,bool Master);
    uint8_t WakeAndIdentifyPata(uint16_t Device ,uint8_t head);
    void Flush(uint8_t Device);
    
};
#endif


#ifndef _SERIAL_
#define _SERIAL_


#endif
