

#ifndef GLOBAL_HARDRIVE_VARIABLES
#define GLOBAL_HARDRIVE_VARIABLES
#pragma pack(push, 1)




typedef struct _SS_PACKET {
    uint16_t VEN_ID;
    uint16_t DEV_ID;
}SS_PACKET, * P_SS_PACKET;



typedef struct _INTERRUPT_PACKET{
    uint8_t IPIN;
    uint8_t ILINE;
}INTERRUPT_PACKET, * P_INTERRUPT_PACKET;

typedef struct _HTYPE_PACKET {
    uint8_t HeaderLayout;
    bool HBAStep;
}HTYPE_PACKET, * P_HTYPE_PACKET;


typedef struct _CC_PACKET {
    uint8_t PI;
    uint8_t SCC;
    uint8_t BCC;
}CC_PACKET, * P_CC_PACKET;

typedef struct _BIST_PACKET {
    uint8_t CC;
    bool SB;
    bool BC;
}BIST_PACKET, * P_BIST_PACKET;

typedef struct _CMD_PACKET {
    bool IOSpaceEnabled;
    bool MemorySpaceEnabled;
    bool BusMasterEnable;
    bool SpecialCycleEnable;
    bool MemoryWriteInvalidateEnable;
    bool VGAPaletteSnooping; //Really intell What Kind of stupid name is this...
    bool ParityErrorResponseEnable;
    bool WaitCycleEnable;
    bool SSER;
    bool FastBackToBackEnable;
    bool InterruptDisable;
    uint8_t Reserved;
}CMD_PACKET, * P_CMD_PACKET;


typedef struct _STS_PACKET {
    uint8_t Reserved1;
    bool InterruptStatus;
    bool CapabilitiesList;
    bool Mhz66Support;
    bool Reserved2;
    bool FastBackToBackCapable;
    bool MasterDataPairyErrorDetected;
    uint8_t DEVSEL;
    bool STA;
    bool RTA;
    bool RMA;
    bool SSE;
    bool DPE;
}STS_PACKET, * P_STS_PACKET;

typedef struct _PCI_AHCI_HEADER {
    uint32_t ID; //Identifiers
    P_CMD_PACKET CMD;
    P_STS_PACKET STS;
    uint8_t RID; //Revision ID
    P_CC_PACKET CC; //Class Code
    uint8_t CLS; //Clear Line Size
    uint8_t MLT; //Master Latency Timer
    P_HTYPE_PACKET HTYPE; //Header Type
    P_BIST_PACKET BIST; //built in self test
    uint32_t BAR0; //Base Address Register 0 
    uint32_t BAR1; //Base Address Register 1 
    uint32_t BAR2; //Base Address Register 2 
    uint32_t BAR3; //Base Address Register 3 
    uint32_t BAR4; //Base Address Register 4
    uint32_t ABAR; //AHCI Base Address Register
    uint32_t EROM; //Exspansion ROM Base Address Register
    uint8_t CAP; //Capabillity Pointer
    P_INTERRUPT_PACKET INTR;
    uint8_t MGNT; //Min Grant 
    uint8_t MLANT; //Max Latency
}PCI_AHCI_HEADER, * P_PCI_AHCI_HEADER;
#pragma pack(pop)


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
UNUSED static uint8_t DeviceSelected = 0;
UNUSED static uint32_t ahci_mmio_base;
#define SATA 1
#define SATAPI 2
#define SEMB 3
#define PM 4

LOUDDK_API_ENTRY void Sata_init(uint8_t bus, uint8_t slot,uint8_t func);
LOUDDK_API_ENTRY void IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func);

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
