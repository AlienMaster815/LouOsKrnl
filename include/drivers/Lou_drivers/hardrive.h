

#ifndef GLOBAL_HARDRIVE_VARIABLES
#define GLOBAL_HARDRIVE_VARIABLES


typedef struct _PCI_AHCI_HEADER {
    //uint64_t ID; //Identifiers
    uint16_t VENDOR_ID; //most Significant
    uint16_t DEVICE_ID; //least significant
    uint16_t CMD; //command register
    uint16_t STS; //Device Status
    uint8_t RID; //Revision ID
    uint64_t CC; //Class Code
    uint8_t CLS; //Clear Line Size
    uint8_t MLT; //Master Latency Timer
    uint8_t HTYPE; //Header Type
    uint8_t BIST; //built in self test
    uint32_t BAR0; //Base Address Register 0 
    uint32_t BAR1; //Base Address Register 1 
    uint32_t BAR2; //Base Address Register 2 
    uint32_t BAR3; //Base Address Register 3 
    uint32_t BAR4; //Base Address Register 4
    uint32_t ABAR; //AHCI Base Address Register
    //uint32_t SS; //Subsytem Identifiers
    uint16_t SS_DEVICE_ID;
    uint16_t SS_VENDOR_ID;
    uint32_t EROM; //Exspansion ROM Base Address Register
    uint8_t CAP; //Capabillity Pointer
    //uint16_t INTR; //Interrupt Information
    uint8_t INTERRUPT_PIN;
    uint8_t INTERRUPT_LINE;
    uint8_t MGNT; //Min Grant 
    uint8_t MLANT; //Max Latency
}PCI_AHCI_HEADER, * P_PCI_AHCI_HEADER;

typedef struct _HBA_DEVICE{
    uint32_t *CAP;
    uint32_t *GHC;
    uint32_t *IS;
    uint32_t *PI;
    uint32_t *VS;
    uint32_t *CCC_CTL;
    uint32_t *CCC_PORTS;
    uint32_t *EM_LOC;
    uint32_t *EM_CTL;
    uint32_t *CAP2;
    uint32_t *BOHC;
    uintptr_t VENDOR_SPECIFIC_MAP;
}HBA_DEVICE, * P_HBA_DEVICE;


// Example definition of HBA_PORT structure

typedef volatile struct tagHBA_PORT
{
	uint32_t clb;		// 0x00, command list base address, 1K-byte aligned
	uint32_t clbu;		// 0x04, command list base address upper 32 bits
	uint32_t fb;		// 0x08, FIS base address, 256-byte aligned
	uint32_t fbu;		// 0x0C, FIS base address upper 32 bits
	uint32_t is;		// 0x10, interrupt status
	uint32_t ie;		// 0x14, interrupt enable
	uint32_t cmd;		// 0x18, command and status
	uint32_t rsv0;		// 0x1C, Reserved
	uint32_t tfd;		// 0x20, task file data
	uint32_t sig;		// 0x24, signature
	uint32_t ssts;		// 0x28, SATA status (SCR0:SStatus)
	uint32_t sctl;		// 0x2C, SATA control (SCR2:SControl)
	uint32_t serr;		// 0x30, SATA error (SCR1:SError)
	uint32_t sact;		// 0x34, SATA active (SCR3:SActive)
	uint32_t ci;		// 0x38, command issue
	uint32_t sntf;		// 0x3C, SATA notification (SCR4:SNotification)
	uint32_t fbs;		// 0x40, FIS-based switch control
	uint32_t rsv1[11];	// 0x44 ~ 0x6F, Reserved
	uint32_t vendor[4];	// 0x70 ~ 0x7F, vendor specific
} HBA_PORT;

// Example definition of FIS_DEV_BITS structure
typedef struct _FIS_DEV_BITS {
	// Add members as per your hardware specifications
	// Example members:
	uint8_t fis_type;       // FIS type
	uint8_t pmport : 4;      // Port multiplier port
	uint8_t reserved : 3;    // Reserved bits
	uint8_t c : 1;           // Command bit
	// Other members...
}FIS_DEV_BITS;


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



typedef enum
{
	FIS_TYPE_REG_H2D = 0x27,	// Register FIS - host to device
	FIS_TYPE_REG_D2H = 0x34,	// Register FIS - device to host
	FIS_TYPE_DMA_ACT = 0x39,	// DMA activate FIS - device to host
	FIS_TYPE_DMA_SETUP = 0x41,	// DMA setup FIS - bidirectional
	FIS_TYPE_DATA = 0x46,	// Data FIS - bidirectional
	FIS_TYPE_BIST = 0x58,	// BIST activate FIS - bidirectional
	FIS_TYPE_PIO_SETUP = 0x5F,	// PIO setup FIS - device to host
	FIS_TYPE_DEV_BITS = 0xA1,	// Set device bits FIS - device to host
} FIS_TYPE;

typedef struct tagFIS_REG_H2D
{
	// DWORD 0
	uint8_t  fis_type;	// FIS_TYPE_REG_H2D

	uint8_t  pmport : 4;	// Port multiplier
	uint8_t  rsv0 : 3;		// Reserved
	uint8_t  c : 1;		// 1: Command, 0: Control

	uint8_t  command;	// Command register
	uint8_t  featurel;	// Feature register, 7:0

	// DWORD 1
	uint8_t  lba0;		// LBA low register, 7:0
	uint8_t  lba1;		// LBA mid register, 15:8
	uint8_t  lba2;		// LBA high register, 23:16
	uint8_t  device;		// Device register

	// DWORD 2
	uint8_t  lba3;		// LBA register, 31:24
	uint8_t  lba4;		// LBA register, 39:32
	uint8_t  lba5;		// LBA register, 47:40
	uint8_t  featureh;	// Feature register, 15:8

	// DWORD 3
	uint8_t  countl;		// Count register, 7:0
	uint8_t  counth;		// Count register, 15:8
	uint8_t  icc;		// Isochronous command completion
	uint8_t  control;	// Control register

	// DWORD 4
	uint8_t  rsv1[4];	// Reserved
} FIS_REG_H2D;

typedef struct tagFIS_REG_D2H
{
	// DWORD 0
	uint8_t  fis_type;    // FIS_TYPE_REG_D2H

	uint8_t  pmport : 4;    // Port multiplier
	uint8_t  rsv0 : 2;      // Reserved
	uint8_t  i : 1;         // Interrupt bit
	uint8_t  rsv1 : 1;      // Reserved

	uint8_t  status;      // Status register
	uint8_t  error;       // Error register

	// DWORD 1
	uint8_t  lba0;        // LBA low register, 7:0
	uint8_t  lba1;        // LBA mid register, 15:8
	uint8_t  lba2;        // LBA high register, 23:16
	uint8_t  device;      // Device register

	// DWORD 2
	uint8_t  lba3;        // LBA register, 31:24
	uint8_t  lba4;        // LBA register, 39:32
	uint8_t  lba5;        // LBA register, 47:40
	uint8_t  rsv2;        // Reserved

	// DWORD 3
	uint8_t  countl;      // Count register, 7:0
	uint8_t  counth;      // Count register, 15:8
	uint8_t  rsv3[2];     // Reserved

	// DWORD 4
	uint8_t  rsv4[4];     // Reserved
} FIS_REG_D2H;


typedef struct tagFIS_DATA
{
	// DWORD 0
	uint8_t  fis_type;	// FIS_TYPE_DATA

	uint8_t  pmport : 4;	// Port multiplier
	uint8_t  rsv0 : 4;		// Reserved

	uint8_t  rsv1[2];	// Reserved

	// DWORD 1 ~ N
	uint32_t data[1];	// Payload
} FIS_DATA;
typedef struct tagFIS_PIO_SETUP
{
	// DWORD 0
	uint8_t  fis_type;	// FIS_TYPE_PIO_SETUP

	uint8_t  pmport : 4;	// Port multiplier
	uint8_t  rsv0 : 1;		// Reserved
	uint8_t  d : 1;		// Data transfer direction, 1 - device to host
	uint8_t  i : 1;		// Interrupt bit
	uint8_t  rsv1 : 1;

	uint8_t  status;		// Status register
	uint8_t  error;		// Error register

	// DWORD 1
	uint8_t  lba0;		// LBA low register, 7:0
	uint8_t  lba1;		// LBA mid register, 15:8
	uint8_t  lba2;		// LBA high register, 23:16
	uint8_t  device;		// Device register

	// DWORD 2
	uint8_t  lba3;		// LBA register, 31:24
	uint8_t  lba4;		// LBA register, 39:32
	uint8_t  lba5;		// LBA register, 47:40
	uint8_t  rsv2;		// Reserved

	// DWORD 3
	uint8_t  countl;		// Count register, 7:0
	uint8_t  counth;		// Count register, 15:8
	uint8_t  rsv3;		// Reserved
	uint8_t  e_status;	// New value of status register

	// DWORD 4
	uint16_t tc;		// Transfer count
	uint8_t  rsv4[2];	// Reserved
} FIS_PIO_SETUP;

typedef struct tagFIS_DMA_SETUP
{
	// DWORD 0
	uint8_t  fis_type;	// FIS_TYPE_DMA_SETUP

	uint8_t  pmport : 4;	// Port multiplier
	uint8_t  rsv0 : 1;		// Reserved
	uint8_t  d : 1;		// Data transfer direction, 1 - device to host
	uint8_t  i : 1;		// Interrupt bit
	uint8_t  a : 1;            // Auto-activate. Specifies if DMA Activate FIS is needed

	uint8_t  rsved[2];       // Reserved

	//DWORD 1&2

	uint64_t DMAbufferID;    // DMA Buffer Identifier. Used to Identify DMA buffer in host memory.
	// SATA Spec says host specific and not in Spec. Trying AHCI spec might work.

//DWORD 3
	uint32_t rsvd;           //More reserved

	//DWORD 4
	uint32_t DMAbufOffset;   //Byte offset into buffer. First 2 bits must be 0

	//DWORD 5
	uint32_t TransferCount;  //Number of bytes to transfer. Bit 0 must be 0

	//DWORD 6
	uint32_t resvd;          //Reserved

} FIS_DMA_SETUP;
typedef volatile struct tagHBA_MEM
{
	// 0x00 - 0x2B, Generic Host Control
	uint32_t cap;		// 0x00, Host capability
	uint32_t ghc;		// 0x04, Global host control
	uint32_t is;		// 0x08, Interrupt status
	uint32_t pi;		// 0x0C, Port implemented
	uint32_t vs;		// 0x10, Version
	uint32_t ccc_ctl;	// 0x14, Command completion coalescing control
	uint32_t ccc_pts;	// 0x18, Command completion coalescing ports
	uint32_t em_loc;		// 0x1C, Enclosure management location
	uint32_t em_ctl;		// 0x20, Enclosure management control
	uint32_t cap2;		// 0x24, Host capabilities extended
	uint32_t bohc;		// 0x28, BIOS/OS handoff control and status

	// 0x2C - 0x9F, Reserved
	uint8_t  rsv[0xA0 - 0x2C];

	// 0xA0 - 0xFF, Vendor specific registers
	uint8_t  vendor[0x100 - 0xA0];

	// 0x100 - 0x10FF, Port control registers
	HBA_PORT	ports[1];	// 1 ~ 32
} HBA_MEM;


typedef volatile struct tagHBA_FIS
{
	// 0x00
	FIS_DMA_SETUP	dsfis;		// DMA Setup FIS
	uint8_t         pad0[4];

	// 0x20
	FIS_PIO_SETUP	psfis;		// PIO Setup FIS
	uint8_t         pad1[12];

	// 0x40
	FIS_REG_D2H	rfis;		// Register – Device to Host FIS
	uint8_t         pad2[4];

	// 0x58
	FIS_DEV_BITS	sdbfis;		// Set Device Bit FIS

	// 0x60
	uint8_t         ufis[64];

	// 0xA0
	uint8_t   	rsv[0x100 - 0xA0];
} HBA_FIS;


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


//INTEL REGISTERS SUBJECT TO CHANGE
typedef struct _INTEL_1_3_1_HBA_DEVICE {
    uint8_t INTEL_RESERVED[34];
    uint8_t INTEL_RESERVED_NVMHCI[40];
    uint8_t INTEL_SPECIFIC_REGISTERS[60];
    uint8_t INTEL_PORT0_REGISTERS[80];
    uint8_t INTEL_PORT1_REGISTERS[80];
    uint8_t INTEL_PORT2_PORT29_REGISTERS[224];
    uint8_t INTEL_PORT30_REGISTERS[80];
    uint8_t INTEL_PORT31_REGISTERS[80];
}INTEL_1_3_1_HBA_DEVICE, * P_INTEL_1_3_1_HBA_DEVICE;


typedef struct _SATA_PCI_DEVICE {
    uint8_t bus;
    uint8_t slot;
    uint8_t function;
    P_PCI_AHCI_HEADER Header;
    
}SATA_PCI_DEVICE, * P_SATA_PCI_DEVICE;

UNUSED static P_SATA_PCI_DEVICE SataDevices[256];
UNUSED static P_PCI_AHCI_HEADER AhciPciHeaders[256];
UNUSED static P_HBA_DEVICE HbaDevices[256];

#define AHCI_BAR_OFFSET       0x10  // Offset of AHCI controller's BAR in PCI configuration space
#define AHCI_REG_CAP          0x00  // Offset of AHCI capabilities register
#define AHCI_REG_GHC          0x04  // Offset of AHCI global host control register
#define AHCI_CAP_SSS          (1U << 27) // Staggered Spin-Up Supported bit in AHCI capabilities register
#define AHCI_GHC_AE           (1U << 31) // AHCI Enable bit in AHCI global host control register


//PCI Header Ofsets
#define DEVICE_ID_OFFSET 0x0
#define VENDOR_ID_OFFSET 0x2
#define CMD_OFFSET 0x4
#define STS_OFFSET 0x6
#define RID_OFFSET 0x8
#define CC_OFFSET 0x9
#define CLS_OFFSET 0xC
#define MLT_OFFSET 0xD
#define HTYPE_OFFSET 0xE
#define BIST_OFFSET 0xF
#define BAR0_OFFSET 0x10
#define BAR1_OFFSET 0x14
#define BAR2_OFFSET 0x18
#define BAR3_OFFSET 0x1B
#define BAR4_OFFSET 0x20
#define ABAR_OFFSET 0x24
#define SS_DEV_ID_OFFSET 0x2C
#define SS_VEN_ID_OFFSET 0x2E
#define EROM_OFFSET 0x30
#define CAP_OFFSET 0x34
#define INTERRUPT_PIN_OFFSET 0x3C
#define INTERRUPT_LINE_OFFSET 0x3D
#define MGNT_OFFSET 0x3E
#define MLANT_OFFSET 0x3F


//HBA Generic Offset Information
#define HBA_CAP_OFFSET 0x0
#define HBA_GHC_OFFSET 0x4
#define HBA_IS_OFFSET 0x8
#define HBA_PI_OFFSET 0xC
#define HBA_VS_OFFSET 0x10
#define HBA_CCC_CTL_OFFSET 0x14
#define HBA_CCC_PORTS_OFFSET 0x18
#define HBA_EM_LOC_OFFSET 0x1C
#define HBA_EM_CTL_OFFSET 0x20
#define HBA_CAP2_OFFSET 0x24
#define HBA_BOHC_OFFSET 0x28
//End Of Generic


//Start Of Intel HBA Information
#define INTEL_RESERVED_OFFSET 0x2C
#define INTEL_RESERVED_NVMHCI_OFFSET 0x60
#define INTEL_SPECIFIC_REGISTERS_OFFSET 0xA0
#define INTEL_PORT0_CONTROL_REGISTERS_OFFSET 0x100
#define INTEL_PORT1_CONTROL_REGISTERS_OFFSET 0x180
#define INTEL_PORT2_TO_29_CONTROL_REGISTERS_OFFSET 0x200
#define INTEL_PORT30_CONTROL_REGISTERS_OFFSET 0x1000
#define INTEL_PORT31_CONTROL_REGISTERS_OFFSET 0x1080

//End Of Intel Information


#define _1_3_1_INTEL 1

#endif



#ifdef __cplusplus
#include <LouDDK.h>

#ifndef _IDE_
#define _IDE_

#define READ_ERROR 0x00

extern "C" uint16_t * GetAtaBufferAddr();


#include <LouDDK.h>

[[maybe_unused]] static uint16_t atabuffer[2352];

typedef uint16_t* PATABUFF;


class PATA{
    public:
    
    void pata_Read(uint8_t device,uint32_t Sector_Num, int BufferSize = 512);
    void pata_Write(uint8_t device, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize);
    
    void pata_device_scan();
    
    bool AtaReadSuccess();
    
    PATA();
    ~PATA();

    private:
    
    bool UsingSystemDriver = false;

    void Read28PATA(uint16_t drive,bool Master, uint32_t Sector_Num, int BufferSize);
    void Read28PATAPI(uint16_t drive,bool Master, uint32_t Sector_Num, int BufferSize);
    
    void Write28PATA(uint16_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize);
    void Write28PATAPI(uint16_t device,bool Master, uint32_t Sector_Num ,uint8_t* Data, uint32_t BufferSize);
    
    void determine_device_type(uint8_t drive);
    void initialize_pata(uint16_t drive,bool Master);
    void WakeAndIdentifyPata(uint16_t Device ,uint8_t Master);
    void Flush(uint8_t Device);
    
};




#endif

#ifndef _SATA
#define _SATA

UNUSED static uint8_t DevSet = 0;
UNUSED static uint8_t DeviceSelected;
UNUSED static uint32_t ahci_mmio_base;



LOUDDK_API_ENTRY void Sata_init(uint8_t bus, uint8_t slot,uint8_t func);
LOUDDK_API_ENTRY void IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func);



// Function to read a 32-bit value from an AHCI register
uint32_t ReadAhciRegister(uint32_t Base, uint32_t offset);
// Function to write a 32-bit value to an AHCI register
void WriteAhciRegister(uint32_t Base,uint32_t offset, uint32_t value);
uint32_t FindAhciAddress(P_SATA_PCI_DEVICE devObj);
bool SetAHCIMode(P_SATA_PCI_DEVICE DevObj);

#endif

#else
#include <LouAPI.h>

#ifndef _HDC_H
#define _HDC_H

#define READ_ERROR 0x00


void Sata_init(uint8_t bus, uint8_t slot, uint8_t func);
void IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func);

void pata_device_scanc();

#endif



#endif
