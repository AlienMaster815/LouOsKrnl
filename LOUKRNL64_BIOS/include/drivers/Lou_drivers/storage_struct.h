#ifndef _STORAGE_STRUCT_H
#define _STORAGE_STRUCT_H
#include <stdint.h>

#ifndef _SERIAL_STRUCT
#define _SERIAL_STRUCT
    typedef struct{
        uint16_t DATA_REG;
        uint8_t ERROR_REG;
        uint8_t SECTOR_COUNT;
        uint8_t LBA_Low;
        uint8_t LBA_mid;
        uint8_t LBA_high;
        uint8_t device_head_register;
        uint8_t status_reg;
        uint8_t command_reg;
    }pata_register_interface;

    typedef struct{
        uint8_t primaster;
        uint8_t prislave;
        uint8_t secmaster;
        uint8_t secslave;
    }device_table;
#endif



#endif
