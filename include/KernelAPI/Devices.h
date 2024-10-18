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

#ifndef _PCI_H
#include <drivers/Lou_drivers/pci.h>
#endif
#ifndef _STYPES_H
#include <SharedTypes.h>
#endif

typedef enum{
	MASTER_TABLE				  = 0,
    ATA_DEVICE_T                  = 1,
    GRAPHICS_DEVICE_T             = 2,
    NETWORK_DEVICE_T              = 3,
    SOUND_DEVICE_T                = 4,
    MBOARD_DEVICE_T               = 5,
    ACPI_DEVICE_T                 = 6,
    POINTING_DEVICE_T             = 7,
    INTERFACING_DEVICE_T          = 8,
    SERIAL_DEVICE_T               = 9,
    SCSI_DEVICE_T                 = 10,
    GENERIC_PCI_DEVICE_T          = 11,
    USB_DEVICE_T                  = 12,
    BLUETOOTH_DEVICE_T            = 13,
    PRINTER_DEVICE_T              = 14,
    POWER_MANAGEMENT_DEVICE_T     = 15,
    VIRTUAL_DEVICE_T              = 16,
    SECURITY_DEVICE_T             = 17,
    INPUT_DEVICE_T                = 18,
    NVME_DEVICE_T                 = 20,
    WIFI_DEVICE_T                 = 21,
	ATA_LEGACY_DEVICE_T			  = 22,	
	FILESYSTEM_DEVICE_T			  = 23,
}SYSTEM_DEVICE_IDENTIFIER;

typedef struct _DEVICE_DIRECTORY_TABLE{
    ListHeader TableStart;
    SYSTEM_DEVICE_IDENTIFIER Sdi;
    string LOUSINE_REGISTRATION_ENTRY;
    void* KeyData;
    P_PCI_DEVICE_OBJECT PDEV;
    void* DevicePrivateData;
    void* DeviceSpecificData;
}DEVICE_DIRECTORY_TABLE, * PDEVICE_DIRECTORY_TABLE, DEIVCE_INFORMATION_TABLE, * PDEVICE_INFORMATION_TABLE;

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

SYSTEM_DEVICE_IDENTIFIER LouKeGetStorageDeviceSystemIdentifier(uint8_t DriveNumber);
uint8_t LouKeDeviceManagerGetGpuCount();
void LouKeDrsdPciResetScreen(P_PCI_DEVICE_OBJECT PDEV);

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
uint64_t LBA,
uint32_t SectorCount,
uint64_t* BufferSize,
LOUSTATUS* State
);

#ifdef __cplusplus
}
#endif
#pragma pack(pop)
#endif