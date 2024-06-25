#ifndef _DEVICES_API_H
#define _DEVICES_API_H

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

//DEV ARCHITECTURES
#define DEV_ARCH_IDE 0x01
#define DEV_ARCH_AHCI 0x02

typedef struct __attribute__((packed)) _DeviceTableTag{
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


typedef enum{
	SATA = 1,
	SATAPI = 2,
	SEMB = 3,
	PM = 4,
}AHCI_TYPE;

typedef struct __attribute__((packed)) _AHCI_DEVICE{
	AHCI_TYPE Type;
	uintptr_t PortAddress;
	uint8_t PortNumber;
}AHCI_DEVICE, * PAHCI_DEVICE;

void 
WriteDrive(
uint8_t Drive,
uint32_t LBA_LOW,
uint32_t LBA_HIGH,
uint32_t SectorCount,
void* Data
);

void 
ReadDrive(
uint8_t Drive,
uint32_t LBA_LOW,
uint32_t LBA_HIGH,
uint32_t SectorCount,
void* Read_Buffer
);

#ifdef __cplusplus
}
#endif

#endif