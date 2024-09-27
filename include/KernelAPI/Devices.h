#ifndef _DEVICES_API_H
#define _DEVICES_API_H
#pragma pack(push, 1)
#ifndef __cplusplus
#include <LouAPI.h>
#endif

#ifdef __cplusplus
#include <LouDDK.h>
#include <NtAPI.h>
extern "C" {
#endif

//DEV TYPES
#define DEV_TYPE_STORAGE 1

//DEV SUB TYPES
#define DEV_SUB_TYPE_SATA    0x01
#define DEV_SUB_TYPE_SATAPI  0x02
#define DEV_SUB_TYPE_SEMB    0x03
#define DEV_SUB_TYPE_PM      0x04
#define DEV_SUB_TYPE_ATA   	 0x05
//#define DEV_SUB_TYPE_ATAPI   0x06

//DEV ARCHITECTURES
#define DEV_ARCH_IDE 0x01
#define DEV_ARCH_AHCI 0x02

typedef struct  _DeviceTableTag{
    uint8_t DeviceType;
    uint8_t DeviceSubType;
    uint8_t DeviceArchitecture;
    uint8_t DeviceNumber;
    uintptr_t DeviceObject;
    uintptr_t DriverObject;
}DeviceInformationTable,* PDeviceInformationTable;

uint16_t GetNumberOfDevices();
uint16_t GetNumberOfStorageDevices();

PDeviceInformationTable 
GetDeviceInformationTable();

PDeviceInformationTable 
ScanConnectedIDEDevices(
PDeviceInformationTable Table,
uint16_t* NumberOfCurrentEtries
);

PDeviceInformationTable
ScanConnectedAhciDevices(
PDeviceInformationTable Table,
uint16_t* NumberOfCurrentEtries
);

uintptr_t GetPataDeviceObjectPointer(uint8_t Drive);
uintptr_t GetSataDeviceObjects();
uint16_t GetNumberOfAhciDevices();

bool 
IsIdeDriveAvailable(
uint8_t Drive
);

//global device information
typedef struct  _GLOBAL_DEVICE_INFORMATON{
	bool UsingDma;
}GLOBAL_DEVICE_INFORMATON, * PGLOBAL_DEVICE_INFORMATON;


typedef enum{
	SATA = 1,
	SATAPI = 2,
	SEMB = 3,
	PM = 4,
}AHCI_TYPE;

typedef struct _SATA_CAP_TAG{
	bool ExternalSata;
	bool EnclosureManagement;
	bool CommandCompletionCoalesing;
	bool PartialStateCapable;
	bool SlumberStateCapable;
	bool PIOMultipleDRQBlock;
	bool FisBasedSwitching;
	bool PortMultiplier;
	bool AhciOnly;
	uint8_t HbaSpeed;
	bool CommandListOveride;
	bool ActivityLED;
	bool AggressiveLinkPoweManagement;
	bool StaggeringSpinUp;
	bool MechanicalPresenceSwitch;
	bool SNotificationRegister;
	bool NativeCommandQueing;
	bool HighMemSupport;
	uint32_t SectorSize;
}SATA_CAPABILITIES, * P_SATA_CAPABILITIES;



typedef struct  _AHCI_DEVICE{
	AHCI_TYPE Type;
	uintptr_t PortAddress;
	uint8_t PortNumber;
	uint8_t InterruptRequestNumber;
	uintptr_t DriverObject;
	uintptr_t HBA_Address;
	P_SATA_CAPABILITIES PCap;
	PGLOBAL_DEVICE_INFORMATON Setup;
	LOUSTATUS InititializationStatus;
}AHCI_DEVICE, * PAHCI_DEVICE;

void 
WriteDrive(
uint8_t Drive,
uint32_t LBA_LOW,
uint32_t LBA_HIGH,
uint32_t SectorCount,
void* Data
);
 
void* 
ReadDrive(
uint8_t Drive,
uint32_t LBA_LOW,
uint32_t LBA_HIGH,
uint32_t SectorCount,
uint64_t* BufferSize,
LOUSTATUS* State
);

#ifdef __cplusplus
}
#endif
#pragma pack(pop)
#endif