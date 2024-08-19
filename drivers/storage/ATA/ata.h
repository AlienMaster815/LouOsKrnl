#ifndef _ATA_DRIVER_H
#define _ATA_DRIVER_H
#include <LouDDK.h>
#include <NtAPI.h>

//definitions and abreviations
//command that uses the FEATURE field (7:0), 
//COUNT field (7:0), LBA field (27:0), 
//DEVICE field (15:8) and COMMAND 
//field (7:0) to specify its arguments

//command packet to reduec function head packed for stacked commands
typedef struct __attribute__((packed)) _Command28{
    uint8_t Feature;
    uint8_t cout;
    uint32_t LBA : 28;
    uint8_t Device;
    uint8_t Command;
}Command28, * PCommand28;

#define ATA_FLAG_SLAVE_POSS        (1 << 3)  /* Controller may have a slave */
#define ATA_FLAG_SATA              (1 << 6)  /* Supports Serial ATA */

typedef enum{
    PIIX_IOCFG_REG      = 0x54,
    ICH5_PMR_REG        = 0x90,
    ICH5_PCS_REG        = 0x92,
    PIIX_SIDPR_BAR		= 5,
	PIIX_SIDPR_LEN		= 16,
	PIIX_SIDPR_IDX		= 0,
	PIIX_SIDPR_DATA		= 4,
	
    PIIX_FLAG_CHECKINTR	= (1 << 28), /* make sure PCI INTx enabled */
	PIIX_FLAG_SIDPR		= (1 << 29), /* SATA idx/data pair regs */

	PIIX_PATA_FLAGS		= ATA_FLAG_SLAVE_POSS,
	PIIX_SATA_FLAGS		= ATA_FLAG_SATA | PIIX_FLAG_CHECKINTR,

	PIIX_FLAG_PIO16		= (1 << 30), /*support 16bit PIO only*/

	PIIX_80C_PRI		= (1 << 5) | (1 << 4),
	PIIX_80C_SEC		= (1 << 7) | (1 << 6),

    /* constants for mapping table */
	P0			= 0,  /* port 0 */
	P1			= 1,  /* port 1 */
	P2			= 2,  /* port 2 */
	P3			= 3,  /* port 3 */
	IDE			= -1, /* IDE */
	NA			= -2, /* not available */
	RV			= -3, /* reserved */

	PIIX_AHCI_DEVICE	= 6,

	/* host->flags bits */
	PIIX_HOST_BROKEN_SUSPEND = (1 << 24),

}PATA_REGISTERS;

typedef struct _piix_map_data_buffer {
	const uint32_t mask;
	const uint16_t port_enable;
	const int map[][4];
}piix_map_data_buffer, * ppiix_map_data_buffer;

typedef struct _piix_host_private {
	const int *map;
	uint32_t saved_iocfg;
	void *sidpr;
}piix_host_private, * ppiix_host_private;

// Define the possible values for the port mapping
#define P0   0  // Primary Master
#define P1   1  // Primary Slave
#define SM   2  // Secondary Master
#define SS   3  // Secondary Slave
#define IDE  4  // IDE channel
#define NA   5  // Not Applicable
#define RV   6  // Reserved

// Populate the structure with the appropriate values
UNUSED static const piix_map_data_buffer ich5_map_db = {
    .mask = 0x7,
    .port_enable = 0x3,
    .map = {
        { P0, NA, P1, NA },  /* 000b */
        { P1, NA, P0, NA },  /* 001b */
        { RV, RV, RV, RV },  /* 010b */
        { RV, RV, RV, RV },  /* 011b */
        { P0, P1, IDE, IDE },/* 100b */
        { P1, P0, IDE, IDE },/* 101b */
        { IDE, IDE, P0, P1 },/* 110b */
        { IDE, IDE, P1, P0 },/* 111b */
    },
};

UNUSED static const piix_map_data_buffer ich6_map_db = {
	.mask = 0x3,
	.port_enable = 0xf,
	.map = {
		/* PM   PS   SM   SS       MAP */
		{  P0,  P2,  P1,  P3 }, /* 00b */
		{ IDE, IDE,  P1,  P3 }, /* 01b */
		{  P0,  P2, IDE, IDE }, /* 10b */
		{  RV,  RV,  RV,  RV },
	},
};


UNUSED static const piix_map_data_buffer ich6m_map_db = {
	.mask = 0x3,
	.port_enable = 0x5,

	/* Map 01b isn't specified in the doc but some notebooks use
	 * it anyway.  MAP 01b have been spotted on both ICH6M and
	 * ICH7M.
	 */
	.map = {
		/* PM   PS   SM   SS       MAP */
		{  P0,  P2,  NA,  NA }, /* 00b */
		{ IDE, IDE,  P1,  P3 }, /* 01b */
		{  P0,  P2, IDE, IDE }, /* 10b */
		{  RV,  RV,  RV,  RV },
	},
};

UNUSED static const piix_map_data_buffer ich8_map_db = {
	.mask = 0x3,
	.port_enable = 0xf,
	.map = {
		/* PM   PS   SM   SS       MAP */
		{  P0,  P2,  P1,  P3 }, /* 00b (hardwired when in AHCI) */
		{  RV,  RV,  RV,  RV },
		{  P0,  P2, IDE, IDE }, /* 10b (IDE mode) */
		{  RV,  RV,  RV,  RV },
	},
};

UNUSED static const piix_map_data_buffer ich8_2port_map_db = {
	.mask = 0x3,
	.port_enable = 0x3,
	.map = {
		/* PM   PS   SM   SS       MAP */
		{  P0,  NA,  P1,  NA }, /* 00b */
		{  RV,  RV,  RV,  RV }, /* 01b */
		{  RV,  RV,  RV,  RV }, /* 10b */
		{  RV,  RV,  RV,  RV },
	},
};

UNUSED static const piix_map_data_buffer ich8m_apple_map_db = {
	.mask = 0x3,
	.port_enable = 0x1,
	.map = {
		/* PM   PS   SM   SS       MAP */
		{  P0,  NA,  NA,  NA }, /* 00b */
		{  RV,  RV,  RV,  RV },
		{  P0,  P2, IDE, IDE }, /* 10b */
		{  RV,  RV,  RV,  RV },
	},
};

UNUSED static const piix_map_data_buffer tolapai_map_db = {
	.mask = 0x3,
	.port_enable = 0x3,
	.map = {
		/* PM   PS   SM   SS       MAP */
		{  P0,  NA,  P1,  NA }, /* 00b */
		{  RV,  RV,  RV,  RV }, /* 01b */
		{  RV,  RV,  RV,  RV }, /* 10b */
		{  RV,  RV,  RV,  RV },
	},
};

UNUSED static const piix_map_data_buffer *piix_map_db_table[16];


enum piix_controller_ids {
	/* controller IDs */
	piix_pata_mwdma,	/* PIIX3 MWDMA only */
	piix_pata_33,		/* PIIX4 at 33Mhz */
	ich_pata_33,		/* ICH up to UDMA 33 only */
	ich_pata_66,		/* ICH up to 66 Mhz */
	ich_pata_100,		/* ICH up to UDMA 100 */
	ich_pata_100_nomwdma1,	/* ICH up to UDMA 100 but with no MWDMA1*/
	ich5_sata,
	ich6_sata,
	ich6m_sata,
	ich8_sata,
	ich8_2port_sata,
	ich8m_apple_sata,	/* locks up on second port enable */
	tolapai_sata,
	piix_pata_vmw,			/* PIIX4 for VMware, spurious DMA_ERR */
	ich8_sata_snb,
	ich8_2port_sata_snb,
	ich8_2port_sata_byt,
};

UNUSED static void initialize_piix_map_db_table() {
    piix_map_db_table[ich5_sata]           = &ich5_map_db;
    piix_map_db_table[ich6_sata]           = &ich6_map_db;
    piix_map_db_table[ich6m_sata]          = &ich6m_map_db;
    piix_map_db_table[ich8_sata]           = &ich8_map_db;
    piix_map_db_table[ich8_2port_sata]     = &ich8_2port_map_db;
    piix_map_db_table[ich8m_apple_sata]    = &ich8m_apple_map_db;
    piix_map_db_table[tolapai_sata]        = &tolapai_map_db;
    piix_map_db_table[ich8_sata_snb]       = &ich8_map_db;
    piix_map_db_table[ich8_2port_sata_snb] = &ich8_2port_map_db;
    piix_map_db_table[ich8_2port_sata_byt] = &ich8_2port_map_db;
}

#endif