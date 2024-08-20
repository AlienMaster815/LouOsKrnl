#ifndef _ATA_DRIVER_H
#define _ATA_DRIVER_H
#include <LouDDK.h>
#include <NtAPI.h>

//Native Queing
#define NORMAL_PRI 	0b00
#define ISYCHRONUS 	0b01
#define HIGH_PRI	0b10


//Power Management
#define PMReset 	0x00
#define PMActiv 	0x00
#define PMIdle		0x01
#define PMStandby	0x02
#define PMSleep 	0x03
#define PMPuis		0x04
#define PMNoS		0x05
#define PMS			0x06

//Sanatize State
#define SDIdle 		0x00
#define SDsf		0X01
#define SDsoip		0x02
#define SDsof		0x03
#define SDsos		0x04

//security States
#define SEC_POFF_NANE_NANL_NANF_NAPAE 	0x01
#define SEC_PON_NE_NL_NF_PAE0			0x02
#define SEC_PON_NE_NL_YF_PAEV			0x03
#define SEC_POFF_YE_NANL_NANF_PAENA		0x04
#define SEC_PON_YE_YL_NF_PAEV			0x05
#define SEC_PON_YE_NL_NF_PAEV			0x06
#define SEC_PON_YE_NL_YF_PAEV			0x07

#define PRIMARY_CONTROL              0x206  // Control Register and Alternate Status Register
#define SECONDARY_CONTROL            0x20E  // Control Register and Alternate Status Register

#define PRIMARY_MASTER_DATA          0x00  // Data Register
#define PRIMARY_MASTER_ERR           0x01  // Error Register (read) / Features Register (write)
#define PRIMARY_MASTER_SECCOUNT      0x02  // Sector Count Register
#define PRIMARY_MASTER_SECTOR        0x03  // Sector Number Register
#define PRIMARY_MASTER_CYL_LOW       0x04  // Cylinder Low Register
#define PRIMARY_MASTER_CYL_HIGH      0x05  // Cylinder High Register
#define PRIMARY_MASTER_DRIVE         0x06  // Drive/Head Register
#define PRIMARY_MASTER_COMMAND       0x07  // Command Register (write) / Status Register (read)

#define IDENTIFY_PACKET_DEVICE 0xEC
#define IDENTIFY_DEVICE 0xA0

#define SECONDARY_OFFSET 0x08

typedef struct _Command{
	union{
		struct {
			uint8_t FEATURE;
			uint8_t COUNT;
			uint32_t LBA : 27;
			uint8_t DEVICEb8;
			uint8_t COMMAND;
		}C28;
		struct{
			uint16_t FEATURE;
			uint16_t COUNT;
			uint64_t LBA : 47;
			uint8_t DEVICEb8;
			uint8_t COMMAND;
		}C48;
	}CommandType;
}Command, *PCommand;

typedef struct __attribute__((packed)) _prd_entry {
    uint32_t base_address;
    uint16_t byte_count;
    uint16_t reserved; // Must be zero
}PRDENTRY;

typedef struct _PataDev{
	uint8_t Devices;
    uint32_t PortLocation[6];
    bool MMIO[6];
    bool DmaSupport;
    uint32_t PRDT[6]; //if DmaSupport
	bool HDDAttached[6][4];
}PataDev, * PPataDev;


#endif