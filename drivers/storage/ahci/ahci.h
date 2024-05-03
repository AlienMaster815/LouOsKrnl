#include <LouDDK.h>

#ifndef _AHCI_H
#define _AHCI_H

#define	SATA_SIG_ATA	0x00000101	// SATA drive
#define	SATA_SIG_ATAPI	0xEB140101	// SATAPI drive
#define	SATA_SIG_SEMB	0xC33C0101	// Enclosure management bridge
#define	SATA_SIG_PM	0x96690101	// Port multiplier
 
#define AHCI_DEV_NULL 0
#define AHCI_DEV_SATA 1
#define AHCI_DEV_SEMB 2
#define AHCI_DEV_PM 3
#define AHCI_DEV_SATAPI 4
 
#define HBA_PORT_IPM_ACTIVE 1
#define HBA_PORT_DET_PRESENT 3

#define	AHCI_BASE	0x400000	// 4M

#define HBA_PxCMD_ST    0x0001
#define HBA_PxCMD_FRE   0x0010
#define HBA_PxCMD_FR    0x4000
#define HBA_PxCMD_CR    0x8000

typedef enum {
	fis_type_reg_h2d		= 0x27,
	fis_type_reg_d2h		= 0x34,
	fis_type_dma_act		= 0x39,
	fis_type_dma_setup		= 0x41,
	fis_type_data			= 0x46,
	fis_type_bist			= 0x58,
	fis_type_pio_setup		= 0x58,
	fis_type_dev_bits		= 0xA1
}FIS_TYPE;

typedef struct __attribute__((packed)) tfis_h2d {
	//DWORD 0
	uint8_t fis_type; //0x27

	uint8_t pmport : 4;
	uint8_t rsv0 : 3;
	uint8_t c : 1;

	uint8_t command;
	uint8_t featurel;

	//DWORD 1
	uint8_t lba0;
	uint8_t lba1;
	uint8_t lba2;
	uint8_t device;

	//DWORD 2
	uint8_t lba3;
	uint8_t lba4;
	uint8_t lba5;
	uint8_t featureh;

	//DWORD 3
	uint8_t countl;
	uint8_t counth;
	uint8_t icc;
	uint8_t control;

	//DWORD 4
	uint8_t rsv1[4];
}fis_reg_h2d;

typedef struct __attribute__((packed)) tfis_reg_d2h {
	// DWORD 0
	uint8_t  fis_type;    

	uint8_t  pmport : 4;    
	uint8_t  rsv0 : 2;     
	uint8_t  i : 1;         
	uint8_t  rsv1 : 1;      

	uint8_t  status;      
	uint8_t  error;       

	// DWORD 1
	uint8_t  lba0;        
	uint8_t  lba1;       
	uint8_t  lba2;       
	uint8_t  device;     

	// DWORD 2
	uint8_t  lba3;       
	uint8_t  lba4;       
	uint8_t  lba5;       
	uint8_t  rsv2;        

	// DWORD 3
	uint8_t  countl;      
	uint8_t  counth;      
	uint8_t  rsv3[2];     

	// DWORD 4
	uint8_t  rsv4[4];     // Reserved
}fis_reg_d2h;

typedef struct __attribute__((packed)) tfis_data {
	// DWORD 0
	uint8_t  fis_type;	

	uint8_t  pmport : 4;	
	uint8_t  rsv0 : 4;		

	uint8_t  rsv1[2];	

	// DWORD 1 ~ N
	uint32_t data[1];
}fis_data;

typedef struct __attribute__((packed)) tfis_pio_setup {
	// DWORD 0
	uint8_t  fis_type;

	uint8_t  pmport : 4;
	uint8_t  rsv0 : 1;	
	uint8_t  d : 1;		
	uint8_t  i : 1;
	uint8_t  rsv1 : 1;

	uint8_t  status;	
	uint8_t  error;		

	// DWORD 1
	uint8_t  lba0;		
	uint8_t  lba1;		
	uint8_t  lba2;		
	uint8_t  device;		

	// DWORD 2
	uint8_t  lba3;		
	uint8_t  lba4;		
	uint8_t  lba5;		
	uint8_t  rsv2;		

	// DWORD 3
	uint8_t  countl;		
	uint8_t  counth;		
	uint8_t  rsv3;		
	uint8_t  e_status;	

	// DWORD 4
	uint16_t tc;		
	uint8_t  rsv4[2];	
}fis_pio_setup;

typedef struct __attribute__((packed)) tfis_dma_Setup {
	// DWORD 0
	uint8_t  fis_type;	

	uint8_t  pmport : 4;	
	uint8_t  rsv0 : 1;		
	uint8_t  d : 1;	
	uint8_t  i : 1;	
	uint8_t  rsv1 : 1;

	uint8_t  status;		
	uint8_t  error;		

	// DWORD 1
	uint8_t  lba0;	
	uint8_t  lba1;		
	uint8_t  lba2;		
	uint8_t  device;

	// DWORD 2
	uint8_t  lba3;		
	uint8_t  lba4;		
	uint8_t  lba5;	
	uint8_t  rsv2;

	// DWORD 3
	uint8_t  countl;
	uint8_t  counth;
	uint8_t  rsv3;
	uint8_t  e_status;

	// DWORD 4
	uint16_t tc;		
	uint8_t  rsv4[2];
}fis_dma_setup;

typedef struct __attribute__((packed)) tHBA_Memory {
	uint32_t cap;
	uint32_t ghc;
	uint32_t is;
	uint32_t pi;
	uint32_t vs;
	uint32_t ccc_ctl;
	uint32_t ccc_ports;
	uint32_t em_loc;
	uint32_t em_ctl;
	uint32_t cap2;
	uint32_t bohc;
}HBA_Memory, * P_HBA_Memory;

typedef struct __attribute__((packed)) tHBA_Port {
	uint32_t clb;		
	uint32_t clbu;		
	uint32_t fb;		
	uint32_t fbu;		
	uint32_t is;		
	uint32_t ie;		
	uint32_t cmd;		
	uint32_t rsv0;		
	uint32_t tfd;		
	uint32_t sig;		
	uint32_t ssts;		
	uint32_t sctl;		
	uint32_t serr;		
	uint32_t sact;		
	uint32_t ci;		
	uint32_t sntf;		
	uint32_t fbs;		
	uint32_t rsv1[11];	
	uint32_t vendor[4];	
} HBA_Port, * P_HBA_Port;

/*
typedef volatile struct tagHBA_FIS
{
	// 0x00
	fis_dma_setup	dsfis;		// DMA Setup FIS
	uint8_t         pad0[4];

	// 0x20
	fis_pio_setup	psfis;		// PIO Setup FIS
	uint8_t         pad1[12];

	// 0x40
	fis_reg_d2h	rfis;		// Register – Device to Host FIS
	uint8_t         pad2[4];

	// 0x58
	fis_dev_bits	sdbfis;		// Set Device Bit FIS

	// 0x60
	uint8_t         ufis[64];

	// 0xA0
	uint8_t   	rsv[0x100 - 0xA0];
} hba_fis;
*/

typedef struct tagHBA_CMD_HEADER
{
	// DW0
	uint8_t  cfl : 5;		// Command FIS length in DWORDS, 2 ~ 16
	uint8_t  a : 1;		// ATAPI
	uint8_t  w : 1;		// Write, 1: H2D, 0: D2H
	uint8_t  p : 1;		// Prefetchable

	uint8_t  r : 1;		// Reset
	uint8_t  b : 1;		// BIST
	uint8_t  c : 1;		// Clear busy upon R_OK
	uint8_t  rsv0 : 1;		// Reserved
	uint8_t  pmp : 4;		// Port multiplier port

	uint16_t prdtl;		// Physical region descriptor table length in entries

	// DW1
	volatile
		uint32_t prdbc;		// Physical region descriptor byte count transferred

	// DW2, 3
	uint32_t ctba;		// Command table descriptor base address
	uint32_t ctbau;		// Command table descriptor base address upper 32 bits

	// DW4 - 7
	uint32_t rsv1[4];	// Reserved
} HBA_CMD_HEADER;


typedef struct tagHBA_PRDT_ENTRY
{
	uint32_t dba;		// Data base address
	uint32_t dbau;		// Data base address upper 32 bits
	uint32_t rsv0;		// Reserved

	// DW3
	uint32_t dbc : 22;		// Byte count, 4M max
	uint32_t rsv1 : 9;		// Reserved
	uint32_t i : 1;		// Interrupt on completion
} HBA_PRDT_ENTRY;

typedef struct tagHBA_CMD_TBL
{
	// 0x00
	uint8_t  cfis[64];	// Command FIS

	// 0x40
	uint8_t  acmd[16];	// ATAPI command, 12 or 16 bytes

	// 0x50
	uint8_t  rsv[48];	// Reserved

	// 0x80
	HBA_PRDT_ENTRY	prdt_entry[1];	// Physical region descriptor table entries, 0 ~ 65535
} HBA_CMD_TBL;



#endif