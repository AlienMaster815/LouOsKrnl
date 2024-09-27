#ifndef _AHCI_H_
#define _AHCI_H_

#include <LouDDK.h>
#include <NtAPI.h>

#pragma pack(push, 1)

typedef struct  _IDENTIFY_DEVICE_DATA {
  struct {
    USHORT Reserved1  :1;
    USHORT Retired3  :1;
    USHORT ResponseIncomplete  :1;
    USHORT Retired2  :3;
    USHORT FixedDevice  :1;
    USHORT RemovableMedia  :1;
    USHORT Retired1  :7;
    USHORT DeviceType  :1;
  } GeneralConfiguration;
  USHORT NumCylinders;
  USHORT ReservedWord2;
  USHORT NumHeads;
  USHORT Retired1[2];
  USHORT NumSectorsPerTrack;
  USHORT VendorUnique1[3];
  UCHAR  SerialNumber[20];
  USHORT Retired2[2];
  USHORT Obsolete1;
  UCHAR  FirmwareRevision[8];
  UCHAR  ModelNumber[40];
  UCHAR  MaximumBlockTransfer;
  UCHAR  VendorUnique2;
  USHORT ReservedWord48;
  struct {
    UCHAR  ReservedByte49;
    UCHAR  DmaSupported  :1;
    UCHAR  LbaSupported  :1;
    UCHAR  IordyDisable  :1;
    UCHAR  IordySupported  :1;
    UCHAR  Reserved1  :1;
    UCHAR  StandybyTimerSupport  :1;
    UCHAR  Reserved2  :2;
    USHORT ReservedWord50;
  } Capabilities;
  USHORT ObsoleteWords51[2];
  USHORT TranslationFieldsValid  :3;
  USHORT Reserved3  :13;
  USHORT NumberOfCurrentCylinders;
  USHORT NumberOfCurrentHeads;
  USHORT CurrentSectorsPerTrack;
  ULONG  CurrentSectorCapacity;
  UCHAR  CurrentMultiSectorSetting;
  UCHAR  MultiSectorSettingValid  :1;
  UCHAR  ReservedByte59  :7;
  ULONG  UserAddressableSectors;
  USHORT ObsoleteWord62;
  USHORT MultiWordDMASupport  :8;
  USHORT MultiWordDMAActive  :8;
  USHORT AdvancedPIOModes  :8;
  USHORT ReservedByte64  :8;
  USHORT MinimumMWXferCycleTime;
  USHORT RecommendedMWXferCycleTime;
  USHORT MinimumPIOCycleTime;
  USHORT MinimumPIOCycleTimeIORDY;
  USHORT ReservedWords69[6];
  USHORT QueueDepth  :5;
  USHORT ReservedWord75  :11;
  USHORT ReservedWords76[4];
  USHORT MajorRevision;
  USHORT MinorRevision;
  struct {
    USHORT SmartCommands  :1;
    USHORT SecurityMode  :1;
    USHORT RemovableMediaFeature  :1;
    USHORT PowerManagement  :1;
    USHORT Reserved1  :1;
    USHORT WriteCache  :1;
    USHORT LookAhead  :1;
    USHORT ReleaseInterrupt  :1;
    USHORT ServiceInterrupt  :1;
    USHORT DeviceReset  :1;
    USHORT HostProtectedArea  :1;
    USHORT Obsolete1  :1;
    USHORT WriteBuffer  :1;
    USHORT ReadBuffer  :1;
    USHORT Nop  :1;
    USHORT Obsolete2  :1;
    USHORT DownloadMicrocode  :1;
    USHORT DmaQueued  :1;
    USHORT Cfa  :1;
    USHORT AdvancedPm  :1;
    USHORT Msn  :1;
    USHORT PowerUpInStandby  :1;
    USHORT ManualPowerUp  :1;
    USHORT Reserved2  :1;
    USHORT SetMax  :1;
    USHORT Acoustics  :1;
    USHORT BigLba  :1;
    USHORT DeviceConfigOverlay  :1;
    USHORT FlushCache  :1;
    USHORT FlushCacheExt  :1;
    USHORT Resrved3  :2;
    USHORT SmartErrorLog  :1;
    USHORT SmartSelfTest  :1;
    USHORT MediaSerialNumber  :1;
    USHORT MediaCardPassThrough  :1;
    USHORT StreamingFeature  :1;
    USHORT GpLogging  :1;
    USHORT WriteFua  :1;
    USHORT WriteQueuedFua  :1;
    USHORT WWN64Bit  :1;
    USHORT URGReadStream  :1;
    USHORT URGWriteStream  :1;
    USHORT ReservedForTechReport  :2;
    USHORT IdleWithUnloadFeature  :1;
    USHORT Reserved4  :2;
  } CommandSetSupport;
  struct {
    USHORT SmartCommands  :1;
    USHORT SecurityMode  :1;
    USHORT RemovableMediaFeature  :1;
    USHORT PowerManagement  :1;
    USHORT Reserved1  :1;
    USHORT WriteCache  :1;
    USHORT LookAhead  :1;
    USHORT ReleaseInterrupt  :1;
    USHORT ServiceInterrupt  :1;
    USHORT DeviceReset  :1;
    USHORT HostProtectedArea  :1;
    USHORT Obsolete1  :1;
    USHORT WriteBuffer  :1;
    USHORT ReadBuffer  :1;
    USHORT Nop  :1;
    USHORT Obsolete2  :1;
    USHORT DownloadMicrocode  :1;
    USHORT DmaQueued  :1;
    USHORT Cfa  :1;
    USHORT AdvancedPm  :1;
    USHORT Msn  :1;
    USHORT PowerUpInStandby  :1;
    USHORT ManualPowerUp  :1;
    USHORT Reserved2  :1;
    USHORT SetMax  :1;
    USHORT Acoustics  :1;
    USHORT BigLba  :1;
    USHORT DeviceConfigOverlay  :1;
    USHORT FlushCache  :1;
    USHORT FlushCacheExt  :1;
    USHORT Resrved3  :2;
    USHORT SmartErrorLog  :1;
    USHORT SmartSelfTest  :1;
    USHORT MediaSerialNumber  :1;
    USHORT MediaCardPassThrough  :1;
    USHORT StreamingFeature  :1;
    USHORT GpLogging  :1;
    USHORT WriteFua  :1;
    USHORT WriteQueuedFua  :1;
    USHORT WWN64Bit  :1;
    USHORT URGReadStream  :1;
    USHORT URGWriteStream  :1;
    USHORT ReservedForTechReport  :2;
    USHORT IdleWithUnloadFeature  :1;
    USHORT Reserved4  :2;
  } CommandSetActive;
  USHORT UltraDMASupport  :8;
  USHORT UltraDMAActive  :8;
  USHORT ReservedWord89[4];
  USHORT HardwareResetResult;
  USHORT CurrentAcousticValue  :8;
  USHORT RecommendedAcousticValue  :8;
  USHORT ReservedWord95[5];
  ULONG  Max48BitLBA[2];
  USHORT StreamingTransferTime;
  USHORT ReservedWord105;
  struct {
    USHORT LogicalSectorsPerPhysicalSector  :4;
    USHORT Reserved0  :8;
    USHORT LogicalSectorLongerThan256Words  :1;
    USHORT MultipleLogicalSectorsPerPhysicalSector  :1;
    USHORT Reserved1  :2;
  } PhysicalLogicalSectorSize;
  USHORT InterSeekDelay;
  USHORT WorldWideName[4];
  USHORT ReservedForWorldWideName128[4];
  USHORT ReservedForTlcTechnicalReport;
  USHORT WordsPerLogicalSector[2];
  struct {
    USHORT ReservedForDrqTechnicalReport  :1;
    USHORT WriteReadVerifySupported  :1;
    USHORT Reserved01  :11;
    USHORT Reserved1  :2;
  } CommandSetSupportExt;
  struct {
    USHORT ReservedForDrqTechnicalReport  :1;
    USHORT WriteReadVerifyEnabled  :1;
    USHORT Reserved01  :11;
    USHORT Reserved1  :2;
  } CommandSetActiveExt;
  USHORT ReservedForExpandedSupportandActive[6];
  USHORT MsnSupport  :2;
  USHORT ReservedWord1274  :14;
  struct {
    USHORT SecuritySupported  :1;
    USHORT SecurityEnabled  :1;
    USHORT SecurityLocked  :1;
    USHORT SecurityFrozen  :1;
    USHORT SecurityCountExpired  :1;
    USHORT EnhancedSecurityEraseSupported  :1;
    USHORT Reserved0  :2;
    USHORT SecurityLevel  :1;
    USHORT Reserved1  :7;
  } SecurityStatus;
  USHORT ReservedWord129[31];
  struct {
    USHORT MaximumCurrentInMA2  :12;
    USHORT CfaPowerMode1Disabled  :1;
    USHORT CfaPowerMode1Required  :1;
    USHORT Reserved0  :1;
    USHORT Word160Supported  :1;
  } CfaPowerModel;
  USHORT ReservedForCfaWord161[8];
  struct {
    USHORT SupportsTrim  :1;
    USHORT Reserved0  :15;
  } DataSetManagementFeature;
  USHORT ReservedForCfaWord170[6];
  USHORT CurrentMediaSerialNumber[30];
  USHORT ReservedWord206;
  USHORT ReservedWord207[2];
  struct {
    USHORT AlignmentOfLogicalWithinPhysical  :14;
    USHORT Word209Supported  :1;
    USHORT Reserved0  :1;
  } BlockAlignment;
  USHORT WriteReadVerifySectorCountMode3Only[2];
  USHORT WriteReadVerifySectorCountMode2Only[2];
  struct {
    USHORT NVCachePowerModeEnabled  :1;
    USHORT Reserved0  :3;
    USHORT NVCacheFeatureSetEnabled  :1;
    USHORT Reserved1  :3;
    USHORT NVCachePowerModeVersion  :4;
    USHORT NVCacheFeatureSetVersion  :4;
  } NVCacheCapabilities;
  USHORT NVCacheSizeLSW;
  USHORT NVCacheSizeMSW;
  USHORT NominalMediaRotationRate;
  USHORT ReservedWord218;
  struct {
    UCHAR NVCacheEstimatedTimeToSpinUpInSeconds;
    UCHAR Reserved;
  } NVCacheOptions;
  USHORT ReservedWord220[35];
  USHORT Signature  :8;
  USHORT CheckSum  :8;
} IDENTIFY_DEVICE_DATA, *PIDENTIFY_DEVICE_DATA;

typedef enum
{
	FIS_TYPE_REG_H2D	= 0x27,	// Register FIS - host to device
	FIS_TYPE_REG_D2H	= 0x34,	// Register FIS - device to host
	FIS_TYPE_DMA_ACT	= 0x39,	// DMA activate FIS - device to host
	FIS_TYPE_DMA_SETUP	= 0x41,	// DMA setup FIS - bidirectional
	FIS_TYPE_DATA		= 0x46,	// Data FIS - bidirectional
	FIS_TYPE_BIST		= 0x58,	// BIST activate FIS - bidirectional
	FIS_TYPE_PIO_SETUP	= 0x5F,	// PIO setup FIS - device to host
	FIS_TYPE_DEV_BITS	= 0xA1,	// Set device bits FIS - device to host
} FIS_TYPE;

typedef struct tagFIS_REG_H2D
{
	// DWORD 0
	uint8_t  fis_type;	// FIS_TYPE_REG_H2D
 
	uint8_t  pmport:4;	// Port multiplier
	uint8_t  rsv0:3;		// Reserved
	uint8_t  c:1;		// 1: Command, 0: Control
 
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
 
	uint8_t  pmport:4;    // Port multiplier
	uint8_t  rsv0:2;      // Reserved
	uint8_t  i:1;         // Interrupt bit
	uint8_t  rsv1:1;      // Reserved
 
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
 
	uint8_t  pmport:4;	// Port multiplier
	uint8_t  rsv0:4;		// Reserved
 
	uint8_t  rsv1[2];	// Reserved
 
	// DWORD 1 ~ N
	uint32_t data[1];	// Payload
} FIS_DATA;

typedef struct tagFIS_PIO_SETUP
{
	// DWORD 0
	uint8_t  fis_type;	// FIS_TYPE_PIO_SETUP
 
	uint8_t  pmport:4;	// Port multiplier
	uint8_t  rsv0:1;		// Reserved
	uint8_t  d:1;		// Data transfer direction, 1 - device to host
	uint8_t  i:1;		// Interrupt bit
	uint8_t  rsv1:1;
 
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
 
	uint8_t  pmport:4;	// Port multiplier
	uint8_t  rsv0:1;		// Reserved
	uint8_t  d:1;		// Data transfer direction, 1 - device to host
	uint8_t  i:1;		// Interrupt bit
	uint8_t  a:1;            // Auto-activate. Specifies if DMA Activate FIS is needed
 
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
	FIS_TYPE    	sdbfis;		// Set Device Bit FIS
 
	// 0x60
	uint8_t         ufis[64];
 
	// 0xA0
	uint8_t   	rsv[0x100-0xA0];
} HBA_FIS;

typedef struct tagHBA_CMD_HEADER
{
	// DW0
	uint8_t  cfl:5;		// Command FIS length in DWORDS, 2 ~ 16
	uint8_t  a:1;		// ATAPI
	uint8_t  w:1;		// Write, 1: H2D, 0: D2H
	uint8_t  p:1;		// Prefetchable
 
	uint8_t  r:1;		// Reset
	uint8_t  b:1;		// BIST
	uint8_t  c:1;		// Clear busy upon R_OK
	uint8_t  rsv0:1;		// Reserved
	uint8_t  pmp:4;		// Port multiplier port
 
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
	uint32_t dbc:22;		// Byte count, 4M max
	uint32_t rsv1:9;		// Reserved
	uint32_t i:1;		// Interrupt on completion
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
	uint8_t  rsv[0xA0-0x2C];
 
	// 0xA0 - 0xFF, Vendor specific registers
	uint8_t  vendor[0x100-0xA0];
 
	// 0x100 - 0x10FF, Port control registers
	HBA_PORT	ports[1];	// 1 ~ 32
} HBA_MEM;

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

#define ATA_CMD_PACKET 0xA0
#define ATA_CMD_READ_DMA_EX 0x25 // This is a typical value; check your specification
#define HBA_PxIS_TFES (1 << 30) 
 
#define ATA_DEV_BUSY 0x80
#define ATA_DEV_DRQ 0x08
#define HBA_PxIS_TFES (1 << 30)
#define FIS_TYPE_REG_H2D 0x27
#define ATA_CMD_WRITE_DMA_EX 0x35
#define ATAPI_CMD_READ 0xA8

typedef union _AHCIGHC{
	struct{
		uint32_t HardRest : 1;
		uint32_t InterruptEnable : 1;
		uint32_t MRSM : 1; 			
		uint32_t Reserved0 : 28; 	
		uint32_t AhciEnable : 1;
	}Bits;
	uint32_t Status;
}AHCI_GHC, *PAHCI_GHC;

typedef struct  _AHCI_PORT{
	uint32_t CommandListBase;
	uint32_t CommandListBaseHigh;
	uint32_t FisBase;
	uint32_t FisBaseHigh;
	uint32_t InterruptStat;
	uint32_t InterruptEnable;
	uint32_t CommandnStatus;
	uint32_t Reserved;
	uint32_t TaskFile;
	uint32_t Signature;
	uint32_t SataStatus;
	uint32_t SataControl;
	uint32_t SataError;
	uint32_t SataActive;
	uint32_t CoomandIssue;
	uint32_t SataNotification;
	uint32_t FisBasedSwitch;
	uint32_t Reserved2[11];
	uint32_t VendorSpecific[4]; 
}AHCI_PORT, * PAHCI_PORT;

typedef struct  _AHCI_MEMORY_REGISTERS{ //Sanity Pack
	uint32_t Capabilities;
	uint32_t GlobalHost;
	uint32_t InterruptStat;
	uint32_t PortImplementation;
	uint32_t PortVersion;
	uint32_t CommandCompletion;
	uint32_t CommandCompletionPorts;
	uint32_t EnclosureLocation;
	uint32_t Enclosure;
	uint32_t ExtendedCapabilities;
	uint32_t BiosHandoff;
	uint32_t Reserved[0x1d];
	uint32_t VendorSpecific[0x18]; 
	AHCI_PORT PortList[32]; 
}AHCI_MEMORY_REGISTERS, * PAHCI_MEMORY_REGISTERS;


typedef struct _DPC_BUFFER
{
    CSHORT Type;
    UCHAR Number;
    UCHAR Importance;
    struct
    {
        PVOID F;
        PVOID B;
    };
    PVOID DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    PVOID DpcData;
} DPC_BUFFER;

typedef struct _STOR_DPC
{
    DPC_BUFFER Dpc;
    ULONG* Lock;
} STOR_DPC, *PSTOR_DPC;

typedef struct  _AHCI_QUEU {
	void* Buffer[255];
	uint32_t Head;
	uint32_t Tail;
}AHCI_QUEU, * PAHCI_QUEU;

typedef struct  _AHCI_FIS_DMA_SETUP{
	uint32_t FisTypeSetup;
	uint16_t Reserved;
	uint32_t DmaBufferLow;
	uint32_t DmaBufferHigh;
	uint32_t Reserved2;
	uint32_t DMAbufferOffset;
	uint32_t TransferCount;
	uint32_t Reserved3;
}AHCI_FIS_DMA_SETUP, * PAHCI_FIS_DMA_SETUP;

typedef struct _AHCI_PIO_SETUP_FIS
{
    UCHAR FisType;
    UCHAR Reserved1 :5;
    UCHAR D :1;
    UCHAR I :1;
    UCHAR Reserved2 :1;
    UCHAR Status;
    UCHAR Error;

    UCHAR SectorNumber;
    UCHAR CylLow;
    UCHAR CylHigh;
    UCHAR Dev_Head;

    UCHAR SectorNumb_Exp;
    UCHAR CylLow_Exp;
    UCHAR CylHigh_Exp;
    UCHAR Reserved3;

    UCHAR SectorCount;
    UCHAR SectorCount_Exp;
    UCHAR Reserved4;
    UCHAR E_Status;

    USHORT TransferCount;
    UCHAR Reserved5[2];
} AHCI_PIO_SETUP_FIS;

typedef struct _AHCI_D2H_REGISTER_FIS
{
    UCHAR FisType;
    UCHAR Reserved1 :6;
    UCHAR I:1;
    UCHAR Reserved2 :1;
    UCHAR Status;
    UCHAR Error;

    UCHAR SectorNumber;
    UCHAR CylLow;
    UCHAR CylHigh;
    UCHAR Dev_Head;

    UCHAR SectorNum_Exp;
    UCHAR CylLow_Exp;
    UCHAR CylHigh_Exp;
    UCHAR Reserved;

    UCHAR SectorCount;
    UCHAR SectorCount_Exp;
    UCHAR Reserved3[2];

    UCHAR Reserved4[4];
} AHCI_D2H_REGISTER_FIS;

typedef struct _AHCI_SET_DEVICE_BITS_FIS
{
    UCHAR FisType;

    UCHAR PMPort: 4;
    UCHAR Reserved1 :2;
    UCHAR I :1;
    UCHAR N :1;

    UCHAR Status_Lo :3;
    UCHAR Reserved2 :1;
    UCHAR Status_Hi :3;
    UCHAR Reserved3 :1;

    UCHAR Error;

    UCHAR Reserved5[4];
} AHCI_SET_DEVICE_BITS_FIS;

typedef struct  _AHCI_RECIEVED_FIS{
	AHCI_FIS_DMA_SETUP DmaFisSet;
	uint32_t MaxiPad0;
	AHCI_PIO_SETUP_FIS PioSetup;
	uint32_t MaxiPad1[3];
	AHCI_D2H_REGISTER_FIS RFis; 
	uint32_t MaxiPad2;
	AHCI_SET_DEVICE_BITS_FIS SetDeviceFis;
	uint32_t UnKnFis[16];
	uint32_t Reserved[24];
}AHCI_RECIEVED_FIS, * PAHCI_RECIEVED_FIS;

typedef union _AHCI_COMMAND_HEADER_DESCRIPTION
{
    struct
    {
        ULONG CFL : 5;       
        ULONG A : 1;     
        ULONG W : 1;  
        ULONG P : 1;         

        ULONG R : 1;        
        ULONG B : 1;
        ULONG C : 1;
        ULONG RSV : 1;
        ULONG PMP : 4;

        ULONG PRDTL : 16;
    };

    ULONG Status;
} AHCI_COMMAND_HEADER_DESCRIPTION;

//typedef struct _AHCI_COMMAND_HEADER
//{
//    AHCI_COMMAND_HEADER_DESCRIPTION DI;   // DW 0
//    ULONG PRDBC;                          // DW 1
//    ULONG CTBA;                           // DW 2
//    ULONG CTBA_U;                         // DW 3
//    ULONG Reserved[4];                    // DW 4-7
//} AHCI_COMMAND_HEADER, *PAHCI_COMMAND_HEADER;

typedef struct  _AHCI_COMMAND_HEADER{
    uint32_t Options;
    uint32_t Status;
    uint32_t TableAddress;
    uint32_t TableAddressHi;
    uint32_t Reserved[4];
}AHCI_COMMAND_HEADER, * PAHCI_COMMAND_HEADER;

typedef enum _STOR_DEVICE_POWER_STATE {
  StorPowerDeviceUnspecified = 0,
  StorPowerDeviceD0,
  StorPowerDeviceD1,
  StorPowerDeviceD2,
  StorPowerDeviceD3,
  StorPowerDeviceMaximum
} STOR_DEVICE_POWER_STATE, *PSTOR_DEVICE_POWER_STATE;

typedef struct  _AHCI_PORT_EXTENSION{
	uint32_t PortNumber;
	uint32_t QueueSlot;
	uint32_t CommandIssuedSlots;
	uint32_t MaxQueDepth;

	struct{
		uint8_t RemovableDevices;
		uint8_t Lba48Mode;
		uint8_t IsActive;
		LARGE_INTEGER MaxLba;
		uint32_t BytesPerLogicalSector;
		uint32_t BytesPerPhysicalSector;
		uint8_t  VendorId[41];
		uint8_t  RevisionID[9];
		uint8_t  SerialNumber[21];
	}DevParam;

	STOR_DPC CmdCompletion;
	PAHCI_PORT Port;
	AHCI_QUEU SrbQueu;
	AHCI_QUEU CompletionQueu;
	PSCSI_REQUEST_BLOCK Slot[32];
	PAHCI_RECIEVED_FIS RFis;
	PAHCI_COMMAND_HEADER CommandList;
	STOR_DEVICE_POWER_STATE DevPowStat;
	PIDENTIFY_DEVICE_DATA IdData;
	STOR_PHYSICAL_ADDRESS IDDPA;
	struct _AHCI_ADAPTER_EXTENSION* AdapterExtension;
}AHCI_PORT_EXTENSION, * PAHCI_PORT_EXTENSION;


typedef struct  _AHCI_ADAPTER_EXTENSION{
	uint32_t  SystemIoBusNumber;
	uint32_t  SlotNumber;
	uint64_t  AhciBaseAddress;
	volatile uint32_t* InterruptStatus;
	uint32_t  PortImplemented;
	uint32_t  PortCount;
	
	uint16_t  VendorID;
	uint16_t  DeviceID;
	uint16_t  RevisionID;

	uint32_t  Version;
	uint32_t  Capabilities;
	uint32_t  SecondaryCapabilities;
	uint32_t  LastInterruptPort;
	uint32_t  CurrentComandSlot;

	void* 	  NonCahchedXtention;

	struct{
		uint32_t MessagePerPort : 1;
		uint32_t Removed : 1; 
		uint32_t Reserved : 30;
	}StateFlags;

	PAHCI_MEMORY_REGISTERS ABAR;
	AHCI_PORT_EXTENSION PortExtention[32];
}AHCI_ADAPTER_EXTENSION, * PAHCI_ADAPTER_EXTENSION;



#define EM_CTRL_MSG_TYPE                0xF0000
 
#define EM_MSG_LED_HBA_PORT             0x0F
#define EM_MSG_LED_PMP_PORT             0xF0000
#define EM_MSG_LED_VALUE                0xFFFF0000
#define EM_MSG_LED_VALUE_ACTIVITY       0x70000
#define EM_MSG_LED_ VALUE_OFF           0xFFFF0000
#define EM_MSG_LED_VALUE_ON             0x10000

#define SATA_PMP_MAX_PORTS 15


#define AHCI_MAX_PORTS  32
#define AHCI_MAX_SG  168
#define AHCI_DMA_BOUNDARY  0xFFFFFFF
#define AHCI_MAX_CMD  32
#define AHCI_CMD_SIZE  32
#define AHCI_CMD_SLOT_SIZE  AHCI_MAX_CMD * AHCI_CMD_SIZE
#define AHCI_RX_FIS_SIZE  256
#define AHCI_CMD_TABLE_CDB  0x40
#define AHCI_CMD_TABLE_HDR_SIZE  0x80
#define AHCI_CMD_TABLE_SIZE  AHCI_CMD_TABLE_HDR_SIZE + (AHCI_MAX_SG * 16)
#define AHCI_CMD_TABLE_AR_SIZE  AHCI_CMD_TABLE_SIZE * AHCI_MAX_CMD
#define AHCI_PORT_PRIV_FBS_DMA_SIZE  AHCI_CMD_SLOT_SIZE + AHCI_CMD_TABLE_AR_SIZE + (AHCI_RX_FIS_SIZE * 16)
#define AHCI_IRQ_ON_SG  (1 << 31)
#define AHCI_CMD_ATAPI  (1 << 5)
#define AHCI_CMD_WRITE  (1 << 6)
#define AHCI_CMD_PREFETCH  (1 << 7)
#define AHCI_RESET  (1 < 8)
#define AHCI_CLEAR_BUSY  (1 << 10)
#define RX_FIS_PIO_SETUP  0x20
#define RX_FIS_D2H_REG   0x40
#define RX_FIS_SDB  0x58
#define RX_FIS_UNK  0x60
#define HOST_CAP  0x0
#define HOST_CTL  0x04
#define HOST_IRQ_STATUS  0x08
#define HOST_PORTS_IMPL  0x0C
#define HOST_VERSION  0x10
#define HOST_EM_LOC  0x1C
#define HOST_EM_CTL  0x20
#define HOST_CAP2  0x24
#define HOST_REST  1
#define HOST_IRQ_ENABLE  (1 << 1)
#define HOST_MRSM  (1 << 2)
#define HOST_AHCI_ENABLE  (1 << 31)
#define HOST_CAP_SXS  (1 << 5)
#define HOST_CAP_EMS  (1 << 6)
#define HOST_CAP_CCC  (1 << 7)
#define HOST_CAP_PART  (1 << 13)
#define HOST_CAP_SSC  (1 << 4)
#define HOST_CAP_PIO_MULTI  (1 << 15)
#define HOST_CAP_FBS  (1 << 16)
#define HOST_CAP_PMP  (1 << 17)
#define HOST_CAP_ONLY  (1 << 18)
#define HOST_CAP_CLO  (1 << 24)
#define HOST_CAP_LED  (1 << 25)
#define HOST_CAP_ALPM  (1 << 26)
#define HOST_CAP_SSS  (1 << 27)
#define HOST_CAP_MPS  (1 << 28)
#define HOST_CAP_SNTF  (1 << 29)
#define HOST_CAP_NCQ  (1 << 30)
#define HOST_CAP_64  (1 << 31)
#define HOST_CAP2_BOH  1
#define HOST_CAP2_NVMHCI  (1 << 1) 
#define HOST_CAP2_APST  (1 << 2)
#define HOST_CAP2_SDS  (1 << 3)
#define HOST_CAP2_SADM  (1 << 4)
#define HOST_CAP2_DESO  (1 << 5)
#define PORT_LIST_ADDR  0x00
#define PORT_LIST_ADDR_HI  0x04
#define PORT_FIS_ADDR  0x08
#define PORT_FIS_ADDR_HI  0x0C
#define PORT_IRQ_STATUS  0x10
#define PORT_IRQ_MASK  0x14
#define PORT_CMD  0x18
#define PORT_TFDATA  0x20
#define PORT_SIG  0x24
#define PORT_CMD_ISSUE  0x38
#define PORT_SCR_STATUS  0x28
#define PORT_SRC_CONTROL  0x2C
#define PORT_SCR_ERROR  0x30
#define PORT_SRC_ACTIVE  0x34
#define PORT_SRC_NTF  0x3C
#define PORT_FBS  0x40
#define PORT_DEVSLP  0x44
#define PORT_IRQ_COLD_PRES  (1 << 31)
#define PORT_IRQ_TF_ERROR  (1 << 30)
#define PORT_IRQ_HBUS_ERROR  (1 << 29)
#define PORT_IRQ_HBUS_DATA_ERROR  (1 << 28)
#define PORT_IRQ_IF_ERROR  (1 << 27)
#define PORT_IRQ_IF_NONFATAL  (1 << 26)
#define PORT_IRQ_OVERFLOW  (1 << 24)
#define PORT_IRQ_BAD_PMP  (1 << 23)
#define PORT_IRQ_PHYRDY  (1 << 22)
#define PORT_IRQ_DMPS  (1 << 7)
#define PORT_IRQ_CONNECT  (1 << 6)
#define PORT_IRQ_SG_DONE  (1 << 5)
#define PORT_IRQ_UNK_FIS  (1 << 4)
#define PORT_IRQ_SDB_FIS  (1 << 3)
#define PORT_IRQ_DMAS_FIS  (1 << 2)
#define PORT_IRQ_PIOS_FIS  (1 << 1)
#define PORT_IRQ_D2H_REG_FIS  1
#define PORT_IRQ_FREEZE    PORT_IRQ_HBUS_ERROR | PORT_IRQ_IF_ERROR | PORT_IRQ_CONNECT |\
                        PORT_IRQ_PHYRDY | PORT_IRQ_UNK_FIS | PORT_IRQ_BAD_PMP
#define PORT_IRQ_ERROR     PORT_IRQ_FREEZE | PORT_IRQ_TF_ERROR | PORT_IRQ_HBUS_DATA_ERROR
#define DEF_PORT_IRQ       PORT_IRQ_ERROR | PORT_IRQ_SG_DONE | PORT_IRQ_SDB_FIS | \
                        PORT_IRQ_DMAS_FIS | PORT_IRQ_PIOS_FIS | PORT_IRQ_D2H_REG_FIS
#define PORT_CMD_ASP		 (1 << 27) 
#define PORT_CMD_ALPE		 (1 << 26) 
#define PORT_CMD_ATAPI		 (1 << 24) 
#define PORT_CMD_FBSCP		 (1 << 22) 
#define PORT_CMD_ESP		 (1 << 21) 
#define PORT_CMD_CPD		 (1 << 20) 
#define PORT_CMD_MPSP		 (1 << 19) 
#define PORT_CMD_HPCP		 (1 << 18) 
#define PORT_CMD_PMP		 (1 << 17) 
#define PORT_CMD_LIST_ON	 (1 << 15) 
#define PORT_CMD_FIS_ON		 (1 << 14) 
#define PORT_CMD_FIS_RX		 (1 << 4)  
#define PORT_CMD_CLO		 (1 << 3)  
#define PORT_CMD_POWER_ON	 (1 << 2)  
#define PORT_CMD_SPIN_UP	 (1 << 1)  
#define PORT_CMD_START		 1
#define PORT_CMD_ICC_MASK	 (0xfu << 28) 
#define PORT_CMD_ICC_ACTIVE	 (0x1u << 28) 
#define PORT_CMD_ICC_PARTIAL	 (0x2u << 28) 
#define PORT_CMD_ICC_SLUMBER	 (0x6u << 28) 
#define PORT_CMD_CAP		   PORT_CMD_HPCP | PORT_CMD_MPSP | \
				            PORT_CMD_CPD | PORT_CMD_ESP | PORT_CMD_FBSCP
#define PORT_FBS_DWE_OFFSET	 16
#define PORT_FBS_ADO_OFFSET	 12
#define PORT_FBS_DEV_OFFSET	 8  
#define PORT_FBS_DEV_MASK	 (0xf << PORT_FBS_DEV_OFFSET)  
#define PORT_FBS_SDE		 (1 << 2)
#define PORT_FBS_DEC		 (1 << 1) 
#define PORT_FBS_EN		     1 
#define PORT_DEVSLP_DM_OFFSET	 25             
#define PORT_DEVSLP_DM_MASK	 (0xf << 25)    
#define PORT_DEVSLP_DITO_OFFSET	 15             
#define PORT_DEVSLP_MDAT_OFFSET	 10             
#define PORT_DEVSLP_DETO_OFFSET	 2              
#define PORT_DEVSLP_DSP		 (1 << 1)         
#define PORT_DEVSLP_ADSE	 (1)
#define AHCI_HFLAG_NO_NCQ		 (1)
#define AHCI_HFLAG_IGN_IRQ_IF_ERR	 (1 << 1) 
#define AHCI_HFLAG_IGN_SERR_INTERNAL	 (1 << 2) 
#define AHCI_HFLAG_32BIT_ONLY		 (1 << 3) 
#define AHCI_HFLAG_MV_PATA		 (1 << 4) 
#define AHCI_HFLAG_NO_MSI		 (1 << 5) 
#define AHCI_HFLAG_NO_PMP		 (1 << 6)
#define AHCI_HFLAG_SECT255		 (1 << 8) 
#define AHCI_HFLAG_YES_NCQ		 (1 << 9) 
#define AHCI_HFLAG_NO_SUSPEND		 (1 << 10) 
#define AHCI_HFLAG_SRST_TOUT_IS_OFFLINE	 (1 << 11)
#define AHCI_HFLAG_NO_SNTF		 (1 << 12) 
#define AHCI_HFLAG_NO_FPDMA_AA		 (1 << 13)
#define AHCI_HFLAG_YES_FBS		 (1 << 14) 
#define AHCI_HFLAG_DELAY_ENGINE		 (1 << 15) 
#define AHCI_HFLAG_NO_DEVSLP		 (1 << 17)
#define AHCI_HFLAG_NO_FBS		 (1 << 18)
#define AHCI_HFLAG_MULTI_MSI		 (1 << 20)
#define  AHCI_HFLAG_WAKE_BEFORE_STOP	 (1 << 22)
#define AHCI_HFLAG_YES_ALPM		 (1 << 23) 
#define AHCI_HFLAG_NO_WRITE_TO_RO	 (1 << 24)
#define AHCI_HFLAG_SUSPEND_PHYS		 (1 << 25) 						     
#define AHCI_HFLAG_NO_SXS		 (1 << 26) 
#define AHCI_HFLAG_43BIT_ONLY		 (1 << 27) 
#define AHCI_HFLAG_INTEL_PCS_QUIRK	 (1 << 28) 
#define AHCI_FLAG_COMMON		 ATA_FLAG_SATA | ATA_FLAG_PIO_DMA | \
					          ATA_FLAG_ACPI_SATA | ATA_FLAG_AN
#define ICH_MAP				 0x90 
#define PCS_6				 0x92
#define PCS_7				 0x94 
#define EM_MAX_SLOTS			 SATA_PMP_MAX_PORTS
#define EM_MAX_RETRY			 5
#define EM_CTL_RST		 (1 << 9) 
#define EM_CTL_TM		 (1 << 8)
#define EM_CTL_MR		 (1 << 0)
#define EM_CTL_ALHD		 (1 << 26) 
#define EM_CTL_XMT		 (1 << 25)
#define EM_CTL_SMB		 (1 << 24) 
#define EM_CTL_SGPIO		 (1 << 19)
#define EM_CTL_SES		 (1 << 18) 
#define EM_CTL_SAFTE		 (1 << 17) 
#define EM_CTL_LED		 (1 << 16)
#define EM_MSG_TYPE_LED		 (1 << 0) 
#define EM_MSG_TYPE_SAFTE	 (1 << 1)
#define EM_MSG_TYPE_SES2	 (1 << 2)
#define EM_MSG_TYPE_SGPIO	 (1 << 3)



typedef struct  _AHCI_SG{
    uint32_t Address;
    uint32_t AddressHi;
    uint32_t Reserved;
    uint32_t FlagSize;
}AHCI_SG, * PAHCI_SG;

// I Was told i need to keep track of these ut well see
typedef struct  _AHCI_EM_PRIVATE{
    uint32_t SwitchActivity;
    uint32_t TimerFlags;
    uint32_t SavedActivity;
    uint32_t Activity;
    uint32_t LedState;
    uintptr_t AtaLinkLink;
}AHCI_EM_PRIVATE , * PAHCI_EM_PRIVATE;

typedef struct  _AHCI_PORT_PRIVATE{
    uintptr_t AtaLink;
    PAHCI_COMMAND_HEADER CmdSlots;
    uintptr_t DbaAddress;
    void* CommandTable;
    uintptr_t CmdTableDma;
    void* RxFis;
    uintptr_t RxFisDma;
    uint32_t NcqSawD2h:1;
    uint32_t NcqSawDmas:1;
    uint32_t NcqSawSdb:1;
    spinlock_t Lock;
    uint32_t IntMask;
    bool FbsSupporr;
    bool FbsEnabled;
    int FbsLastDev;
    AHCI_EM_PRIVATE EmPrivate[EM_MAX_SLOTS];
    //later we will have a id strings for interrupt processing so well include it now
    string InterruptProccessingString;
}AHCI_PORT_PRIVATE, * PAHCI_PORT_PRIVATE;

typedef struct  _AHCI_HOST_PRIVATE{
    uint32_t Flags;
    uint32_t MaskPortMapping;
    uint32_t DeviceVMemmoryIo;
    uint32_t CapData;
    uint32_t Cap2Data;
    uint32_t AhciVersion;
    uint32_t PortMaping;
    uint32_t InitialCap;
    uint32_t InitialCap2;
    uint32_t InitialPortMapping;
    uint32_t InitialPortCap[AHCI_MAX_PORTS];
    uint32_t EmLocation;
    uint32_t EmBufferSize;
    uint32_t EmMsgType;
    uint32_t ReMappedNvme;
    bool GotRuntimePm;
    uint32_t GetRuntimePowerMode;
    uintptr_t ClkBulkData;
    uint32_t FRsts;
    uintptr_t TrgetPower;
    uintptr_t AhciRegulator;
    uintptr_t PhyRegulator;
    uintptr_t PhysLocation;
    unsigned NumberOfPorts;
    void* PlatformData;
    uint32_t Irq;

    void (*StartEngine)(uintptr_t AtaPort);
    int  (*StopEngine)(uintptr_t AtaPort);
    void (*IrqHandler)();
    int  (*GetIrqVector)(uintptr_t AhciHost, int Port);
}AHCI_HOST_PRIVATE, * PAHCI_HOST_PRIVATE;

UNUSED static int AhciIgnoreSSS;

UNUSED static uintptr_t AhciSHostGroups;
UNUSED static uintptr_t AhciSDevGroups;

UNUSED static uintptr_t AhciOperations;
UNUSED static uintptr_t AhciPlatformOps;
UNUSED static uintptr_t AhciPmpRetrySrstOperations;

//uint32_t AhciClassifyDevice(uintptr_t AtaPort);
//void FillAhciCommandSlot(PAHCI_PORT_PRIVATE PortPrivate, uint32_t Tag, uint32_t Options);
//void SaveAhciInitialConfig(P_PCI_DEVICE_OBJECT PDEV, PAHCI_HOST_PRIVATE HostPrivate);
//void InitializeAhciController(uintptr_t AtaHost);
//void ResetAhciController(uintptr_t AtaHost);
//int AhciCommandSoftwareReset(uintptr_t AtaLink, uint32_t* Class, int pmp, uint32_t Dedline, int (*CheckReady)(uintptr_t AtaLink));
//int AhciCommandHardwareReset(uintptr_t AtaLink, uint32_t* CLass, uint32_t Deadline, bool *Online);
//uint32_t AhciQcInssue(uintptr_t Qc);
//int AhciStopEngine(uintptr_t AtaPort);
//void AhciStartFisRx(uintptr_t AtaPort);
//void AhciStartEngine(uintptr_t AtaPort);
//int AhciCheckReady(uintptr_t AtaLink);
//int AhciKickEngine(uintptr_t AtaPort);
//int AhciPortResume(uintptr_t AtaPort);
//void AhciSetEmMessage(PAHCI_HOST_PRIVATE HostPrivate, uintptr_t AtaPortInfo);
//int AhciResetEm(uintptr_t AtaHost);
//void AhciPrintInfo(uintptr_t AhciHost);
//int AhciHostActive(uintptr_t AtaHost, uintptr_t SHT);
//void AhciErrorHandler(uintptr_t AtaPort);
//void AhciHandlePortInterrupt(uintptr_t AtaHost, uint32_t IrqMask);

typedef struct  _AHCI_PORT_INFO{
    uint64_t flags;
    uint64_t pio_mask;
    uint64_t udma_mask;
    uint64_t OperationFlags;
}AHCI_PORT_INFO, * PAHCI_PORT_INFO; 



static inline int AhciNrPorts(uint32_t cap){
	return (cap & 0x1f) + 1;
}


#pragma pack(pop)
#endif//_AHCI_H_