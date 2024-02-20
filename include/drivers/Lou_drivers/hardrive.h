
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


typedef struct _SATA_PCI_DEVICE {
    uint8_t bus;
    uint8_t slot;
    uint8_t function;
    P_PCI_AHCI_HEADER Header;
    uint8_t version;
}SATA_PCI_DEVICE, * P_SATA_PCI_DEVICE;

UNUSED static P_SATA_PCI_DEVICE SataDevices[256];
UNUSED static P_PCI_AHCI_HEADER AhciPciHeaders[256];

#define AHCI_BAR_OFFSET       0x10  // Offset of AHCI controller's BAR in PCI configuration space
#define AHCI_REG_CAP          0x00  // Offset of AHCI capabilities register
#define AHCI_REG_GHC          0x04  // Offset of AHCI global host control register
#define AHCI_CAP_SSS          (1U << 27) // Staggered Spin-Up Supported bit in AHCI capabilities register
#define AHCI_GHC_AE           (1U << 31) // AHCI Enable bit in AHCI global host control register

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



#define _1_3_1_INTEL 1

#endif