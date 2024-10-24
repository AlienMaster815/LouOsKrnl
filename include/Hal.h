#ifndef _HAL_H
#define _HAL_H

    #ifdef __cplusplus

        #include <LouDDK.h>

        #pragma pack(push, 1)
        typedef struct _LINUX_PCI_DEVICE_ID {
            uint32_t vendor, device;		/* Vendor and device ID or PCI_ANY_ID*/
            uint32_t subvendor, subdevice;	/* Subsystem ID's or PCI_ANY_ID */
            uint32_t Class, class_mask;	/* (class,subclass,prog-if) triplet */
            uint64_t Flags;	    /* Data private to the driver */
        }LINUX_PCI_DEVICE_ID, * PLINUX_PCI_DEVICE_ID;

        #ifndef _KERNEL_MODULE_
            LOUDDK_API_ENTRY void* LouKeHalGetPciVirtualBaseAddress(
                PPCI_COMMON_CONFIG Config,
                uint8_t BarNumber
            );

            LOUDDK_API_ENTRY void LouKeHalRegisterPCiDevice(
                P_PCI_DEVICE_OBJECT PDEV
            );

            LOUDDK_API_ENTRY PPCI_CONTEXT LouKeHalPciSaveContext(
                P_PCI_DEVICE_OBJECT PDEV
            );

            LOUDDK_API_ENTRY void LouKeHalPciRestoreContext(
                PPCI_CONTEXT PciContext
            );

            LOUDDK_API_ENTRY void LouKeHalPciClearMaster(
                P_PCI_DEVICE_OBJECT PDEV
            );

            LOUDDK_API_ENTRY
            LOUSTATUS LouKeHalPciSetMmio(P_PCI_DEVICE_OBJECT PDEV);

            LOUDDK_API_ENTRY void LouKeHalPciSetMaster(P_PCI_DEVICE_OBJECT PDEV);


            LOUDDK_API_ENTRY uint64_t LouKeHalLinuxPciCheckForCompatibleConfiguration(
                PPCI_COMMON_CONFIG PciSearch, 
                PLINUX_PCI_DEVICE_ID LinuxCmpatibleDirectory
            );

            LOUDDK_API_ENTRY LOUSTATUS LouKeHalEnablePciDevice(P_PCI_DEVICE_OBJECT PDEV);

            LOUDDK_API_ENTRY
            int LouKeHalMallocPciIrqVectors(
                P_PCI_DEVICE_OBJECT PDEV, 
                int RequestedVectors, 
                uint64_t Flags
            );

            KERNEL_IMPORT LOUSTATUS LouKeRegisterDevice(
                P_PCI_DEVICE_OBJECT PDEV, 
                SYSTEM_DEVICE_IDENTIFIER Sdi,
                string LRE, //optional
                void* KeyData, //optional
                void* DevicePrivateData
            );

            KERNEL_IMPORT
            void LouKeHalGetPciConfiguration(
                P_PCI_DEVICE_OBJECT PDEV, 
                PPCI_COMMON_CONFIG Config
            );

            KERNEL_IMPORT void LouKeGetPciConfiguration(
                P_PCI_DEVICE_OBJECT PDEV, 
                PPCI_COMMON_CONFIG Config
            );

            LOUDDK_API_ENTRY void LouKeHalPciEnableInterrupts(P_PCI_DEVICE_OBJECT PDEV);
            LOUDDK_API_ENTRY void LouKeHalPciDisableInterrupts(P_PCI_DEVICE_OBJECT PDEV);

            LOUDDK_API_ENTRY void LouKeHalAcpiShutdown();

        #else 
            KERNEL_EXPORT uint64_t LouKeHalLinuxPciCheckForCompatibleConfiguration(
                PPCI_COMMON_CONFIG PciSearch, 
                PLINUX_PCI_DEVICE_ID LinuxCmpatibleDirectory
            );
            KERNEL_EXPORT void GetPciConfiguration(ULONG SystemIoBusNumber,ULONG SlotNumber,ULONG Function,PPCI_COMMON_CONFIG ConfigBuffer);
            KERNEL_EXPORT LOUSTATUS LouKeHalEnablePciDevice(P_PCI_DEVICE_OBJECT PDEV);

            KERNEL_EXPORT void* LouKeHalGetPciVirtualBaseAddress(
                PPCI_COMMON_CONFIG Config,
                uint8_t BarNumber
            );

            KERNEL_EXPORT PPCI_CONTEXT LouKeHalPciSaveContext(
                P_PCI_DEVICE_OBJECT PDEV
            );

            KERNEL_EXPORT void LouKeHalPciRestoreContext(
                PPCI_CONTEXT PciContext
            );

            KERNEL_EXPORT void LouKeHalPciClearMaster(
                P_PCI_DEVICE_OBJECT PDEV
            );

            KERNEL_EXPORT
            int LouKeHalMallocPciIrqVectors(
                P_PCI_DEVICE_OBJECT PDEV, 
                int RequestedVectors, 
                uint64_t Flags
            );

            KERNEL_EXPORT void LouKeHalPciSetMaster(P_PCI_DEVICE_OBJECT PDEV);

            KERNEL_EXPORT LOUSTATUS LouKeRegisterDevice(
                P_PCI_DEVICE_OBJECT PDEV, 
                SYSTEM_DEVICE_IDENTIFIER Sdi,
                string LRE, //optional
                void* KeyData, //optional
                void* DevicePrivateData
            );

            KERNEL_EXPORT 
            void LouKeGetPciConfiguration(
                P_PCI_DEVICE_OBJECT PDEV, 
                PPCI_COMMON_CONFIG Config
            );

            KERNEL_EXPORT void LouKeHalAcpiShutdown();

            #pragma pack(pop)
        #endif
    #else

    void LouKeHalAcpiShutdown();

    #endif
#endif //HAL_H