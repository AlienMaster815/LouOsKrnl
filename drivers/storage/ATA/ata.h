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



#endif