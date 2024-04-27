

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

typedef struct {
    uint8_t PORT0 : 1;
    uint8_t PORT1 : 1;
    uint8_t PORT2 : 1;
    uint8_t PORT3 : 1;
    uint8_t PORT4 : 1;
    uint8_t PORT5 : 1;
    uint8_t PORT6 : 1;
    uint8_t PORT7 : 1;
    uint8_t PORT8 : 1;
    uint8_t PORT9 : 1;
    uint8_t PORT10 : 1;
    uint8_t PORT11 : 1;
    uint8_t PORT12 : 1;
    uint8_t PORT13 : 1;
    uint8_t PORT14 : 1;
    uint8_t PORT15 : 1;
    uint8_t PORT16 : 1;
    uint8_t PORT17 : 1;
    uint8_t PORT18 : 1;
    uint8_t PORT19 : 1;
    uint8_t PORT20 : 1;
    uint8_t PORT21 : 1;
    uint8_t PORT22 : 1;
    uint8_t PORT23 : 1;
    uint8_t PORT24 : 1;
    uint8_t PORT25 : 1;
    uint8_t PORT26 : 1;
    uint8_t PORT27 : 1;
    uint8_t PORT28 : 1;
    uint8_t PORT29 : 1;
    uint8_t PORT30 : 1;
    uint8_t PORT31 : 1;
}IS_Register;

typedef struct {
    uint8_t NP : 5;
    uint8_t SXS : 1;
    uint8_t EMS : 1;
    uint8_t CCCS : 1;
    uint8_t NCS : 5;
    uint8_t PSC : 1;
    uint8_t SSC : 1;
    uint8_t PMD : 1;
    uint8_t FBSS : 1;
    uint8_t SPM : 1;
    uint8_t SAM : 1;
    uint8_t RESERVED : 1;
    uint8_t ISS : 4;
    uint8_t SCLO : 1;
    uint8_t SAL : 1;
    uint8_t SALP : 1;
    uint8_t SSS : 1;
    uint8_t SMPS : 1;
    uint8_t SSNTF : 1;
    uint8_t SNCQ : 1;
    uint8_t S64A : 1;
}CAP_Register, * P_CAP_Register;

typedef struct {
    uint32_t HR : 1;
    uint32_t IE : 1;
    uint32_t Reserved : 28;
    uint32_t MSRM : 1;
    uint32_t AE : 1;
}GHC_Register, * P_GHC_Register;

typedef struct {
    uint8_t Port0 : 1;
    uint8_t Port1 : 1;
    uint8_t Port2 : 1;
    uint8_t Port3 : 1;
    uint8_t Port4 : 1;
    uint8_t Port5 : 1;
    uint8_t Port6 : 1;
    uint8_t Port7 : 1;
    uint8_t Port8 : 1;
    uint8_t Port9 : 1;
    uint8_t Port10 : 1;
    uint8_t Port11 : 1;
    uint8_t Port12 : 1;
    uint8_t Port13 : 1;
    uint8_t Port14 : 1;
    uint8_t Port15 : 1;
    uint8_t Port16 : 1;
    uint8_t Port17 : 1;
    uint8_t Port18 : 1;
    uint8_t Port19 : 1;
    uint8_t Port20 : 1;
    uint8_t Port21 : 1;
    uint8_t Port22 : 1;
    uint8_t Port23 : 1;
    uint8_t Port24 : 1;
    uint8_t Port25 : 1;
    uint8_t Port26 : 1;
    uint8_t Port27 : 1;
    uint8_t Port28 : 1;
    uint8_t Port29 : 1;
    uint8_t Port30 : 1;
    uint8_t Port31 : 1;
}PI_Register;

typedef struct {
    uint16_t MNR : 16;
    uint16_t MJR : 16;
}VS_Register;

typedef struct {
    uint16_t EN : 1;
    uint16_t RESERVED : 2;
    uint16_t Interrupt : 5;
    uint16_t CC : 8;
    uint16_t Timeout : 16;
}CCC_CTL_Register;

typedef struct {
    uint8_t Port0 : 1;
    uint8_t Port2 : 1;
    uint8_t Port3 : 1;
    uint8_t Port4 : 1;
    uint8_t Port5 : 1;
    uint8_t Port6 : 1;
    uint8_t Port7 : 1;
    uint8_t Port8 : 1;
    uint8_t Port9 : 1;
    uint8_t Port10 : 1;
    uint8_t Port11 : 1;
    uint8_t Port12 : 1;
    uint8_t Port13 : 1;
    uint8_t Port14 : 1;
    uint8_t Port15 : 1;
    uint8_t Port16 : 1;
    uint8_t Port17 : 1;
    uint8_t Port18 : 1;
    uint8_t Port19 : 1;
    uint8_t Port20 : 1;
    uint8_t Port21 : 1;
    uint8_t Port22 : 1;
    uint8_t Port23 : 1;
    uint8_t Port24 : 1;
    uint8_t Port25 : 1;
    uint8_t Port26 : 1;
    uint8_t Port27 : 1;
    uint8_t Port28 : 1;
    uint8_t Port29 : 1;
    uint8_t Port30 : 1;
    uint8_t Port31 : 1;
}CCC_PORTS_Register;

typedef struct {
    uint16_t BufferSize : 16;
    uint16_t Offset : 16;
}EM_LOC_Register;


typedef struct {
    uint8_t STS_MR : 1;
    uint8_t RESERVED : 7;
    uint8_t CTL_TM : 1;
    uint8_t CTL_RST : 1;
    uint8_t RESERVED2 : 6;
    uint8_t SUPP_LED : 1;
    uint8_t SUPP_SAFTE : 1;
    uint8_t SUPP_SES2 : 1;
    uint8_t SUPP_SGPIO : 1;
    uint8_t RESERVED3 : 4;
    uint8_t ATTR_SMB : 1;
    uint8_t ATTR_ALHD : 1;
    uint8_t ATTR_PM : 1;
    uint8_t RESERVED4 : 4;
}EM_CTL_Register;

typedef struct {
    uint32_t BOH : 1;
    uint32_t NVMP : 1;
    uint32_t APST : 1;
    uint32_t SDS : 1;
    uint32_t SADM : 1;
    uint32_t DESO : 1;
    uint32_t RESERVED : 26;
}CAP2_Register;

typedef struct {
    uint32_t BOS : 1;
    uint32_t OOS : 1;
    uint32_t SOOE : 1;
    uint32_t OOC : 1;
    uint32_t BB : 1;
    uint32_t RESERVED : 27;
}BOHC_Register;

typedef struct _HBA_DEVICE{
    CAP_Register CAP;
    GHC_Register GHC;
    IS_Register  IS;
    PI_Register  PI;
    VS_Register VS;
    CCC_CTL_Register CCC_CTL;
    CCC_PORTS_Register CCC_PORTS;
    EM_LOC_Register EM_LOC;
    EM_CTL_Register EM_CTL;
    CAP2_Register CAP2;
    BOHC_Register BOHC;
    uintptr_t VENDOR_SPECIFIC_MAP;
}HBA_DEVICE, * P_HBA_DEVICE;

typedef struct {
    uint32_t RESERVED : 10;
    uint32_t CLB : 22;
}PxCLB_Register;

typedef struct {
    uint32_t CLBU;
}PxCLBU_Register;

typedef struct {
    uint32_t RESERVED : 8;
    uint32_t FB : 24;
}PxFB_Register;

typedef struct {
    uint32_t FBU;
}PxFBU_Register;

typedef struct {
    uint32_t DHRS : 1;
    uint32_t PSS : 1;
    uint32_t DSS : 1;
    uint32_t SDBS : 1;
    uint32_t UFS : 1;
    uint32_t DPS : 1;
    uint32_t PCS : 1;
    uint32_t DMPS : 1;
    uint32_t RESERVED : 14;
    uint32_t PRCS : 1;
    uint32_t IPMS : 1;
    uint32_t OFS : 1;
    uint32_t RESERVED2 : 1;
    uint32_t INFS : 1;
    uint32_t IFS : 1;
    uint32_t HBDS : 1;
    uint32_t HBFS : 1;
    uint32_t TFES : 1;
    uint32_t CPDS : 1;
}PxIS_Register;

typedef struct {
    uint32_t DHRE : 1;
    uint32_t PSE : 1;
    uint32_t DSE : 1;
    uint32_t SDBE : 1;
    uint32_t UFE : 1;
    uint32_t DPE : 1;
    uint32_t PCE : 1;
    uint32_t DMPE : 1;
    uint32_t RESERVED : 14;
    uint32_t PRCE : 1;
    uint32_t IPME : 1;
    uint32_t OFE : 1;
    uint32_t RESERVED2 : 1;
    uint32_t INFE : 1;
    uint32_t IFE : 1;
    uint32_t HBDE : 1;
    uint32_t HBFE : 1;
    uint32_t TFEE : 1;
    uint32_t CPDE : 1;
}PxIE_Register;

typedef struct {
    uint32_t ST : 1;
    uint32_t SUD : 1;
    uint32_t POD : 1;
    uint32_t CLO : 1;
    uint32_t FRE : 1;
    uint32_t RESERVED : 3;
    uint32_t CCS : 5;
    uint32_t MPSS : 1;
    uint32_t FR : 1;
    uint32_t CR : 1;
    uint32_t CPS : 1;
    uint32_t PMA : 1;
    uint32_t HPCP : 1;
    uint32_t MPSP : 1;
    uint32_t CPD : 1;
    uint32_t ESP : 1;
    uint32_t FBSCP : 1;
    uint32_t APSTE : 1;
    uint32_t ATAPI : 1;
    uint32_t DLAE : 1;
    uint32_t ALPE : 1;
    uint32_t ASP : 1;
    uint32_t ICC : 4;
}PxCMD_Register;

typedef struct {
    uint32_t DET : 4;
    uint32_t SPD : 4;
    uint32_t IPM : 4;
    uint32_t RESERVED : 20;
}PxSSTS_Register;

typedef struct {
    uint32_t STS : 8;
    uint32_t ERR : 8;
    uint32_t RESERVED : 16;
}PxTFD_Register;

typedef struct {
    uint32_t SIG;
}PxSIG_Register;

typedef struct {
    uint32_t DET : 4;
    uint32_t SPD : 4;
    uint32_t IPM : 4;
    uint32_t SPM : 4;
    uint32_t PMP : 4;
    uint32_t RESERVED : 12;
}PxSCTL_Register;

typedef struct {
    uint32_t ERR : 16;
    uint32_t DIAG : 16;
}PxSERR_Register;

typedef struct {


}PxSACT_Register;

typedef struct {
    uint32_t CI;
}PxCI_Register;

typedef struct {

}PxSNTF_Register;

typedef struct {

}PxFBS_Register;

typedef struct {

}PxDEVSLP_Register;

typedef struct {
    uint64_t RESERVED1; //8
    uint32_t RESERVED2; //4 + 8 = 12
    uint16_t RESERVED3; //2 + 12 14
    uint8_t RESERVED4; //15
}PxVS_Register;

typedef struct {
    PxCLB_Register PxCLB;
    PxCLBU_Register PxCLBU;
    PxFB_Register PxFB;
    PxFBU_Register PxFBU;
    PxIS_Register PxIS;
    PxIE_Register PxIE;
    PxCMD_Register PxCMD;
    PxTFD_Register PxTFD;
    PxSIG_Register PxSIG;
    PxSSTS_Register PxSSTS;
    PxSCTL_Register PxSCTL;
    PxSERR_Register PxSERR;
    PxSACT_Register PxSACT;
    PxCI_Register PxCI;
    PxSNTF_Register PxSNTF;
    PxFBS_Register PxFBS;
    PxDEVSLP_Register PxDEVSLP;
    PxVS_Register PxVS;
}HBA_PORTx, * P_HBA_PORTx;


#pragma pack(pop)


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




#pragma pack(1) // Ensure byte alignment





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
LOUDDK_API_ENTRY bool IsSataCheck(uint8_t bus, uint8_t slot, uint8_t func);

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
