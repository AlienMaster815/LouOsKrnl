#ifndef _STORAGE_STRUCT_H
#define _STORAGE_STRUCT_H
#include <stdint.h>

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
    }register_interface;

#endif
