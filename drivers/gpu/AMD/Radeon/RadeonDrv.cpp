#include <LouDDK.h>
#include <NtAPI.h>

#include "radeon_drv.h"
#include "radeon.h"
#include "radeon_kms.h"
#include "radeon_ttm.h"
#include "radeon_device.h"
#include "radeon_prime.h"

//1.0 Lousine Kernel Initial Implementation
//

#define LOUSINE_KERNEL_SYSTEM_RADEON_DRIVER_MAJOR_VERSION "1"
#define LOUSINE_KERNEL_SYSTEM_RADEON_DRIVER_MINOR_VERSION "0.10"
#define LOUSINE_KERNEL_SYSTEM_RADEON_DRIVER_MAJOR_RSC_LVL "0"

UNUSED int radeon_no_wb;
UNUSED int radeon_mode_set = -1;
UNUSED int radeon_dynclks = -1;
UNUSED int radeon_r4xx_atom;
UNUSED int radeon_agpmode = 0;
UNUSED int radeon_vram_limt;
UNUSED int radeon_gart_size = -1; /* auto */
UNUSED int radeon_benchmarking;
UNUSED int radeon_testing;
UNUSED int radeon_connector_table;
UNUSED int radeon_tv = 1;
UNUSED int radeon_audio = -1;
UNUSED int radeon_disp_priority;
UNUSED int radeon_hw_i2c;
UNUSED int radeon_pcie_gen2 = -1;
UNUSED int radeon_msi = -1;
UNUSED int radeon_lockup_timeout = 10000;
UNUSED int radeon_fastfb;
UNUSED int radeon_dpm = -1;
UNUSED int radeon_aspm = -1;
UNUSED int radeon_runtime_pm = -1;
UNUSED int radeon_hard_reset;
UNUSED int radeon_vm_size = 8;
UNUSED int radeon_vm_block_size = -1;
UNUSED int radeon_deep_color;
UNUSED int radeon_use_pflipirq = 2;
UNUSED int radeon_bapm = -1;
UNUSED int radeon_backlight = -1;
UNUSED int radeon_auxch = -1;
UNUSED int radeon_uvd = 1;
UNUSED int radeon_vce = 1;

#include "RadeonIDs.h"
#include <Hal.h>


//static inline
bool IsAmdRadeon(P_PCI_DEVICE_OBJECT PDEV, uint64_t* Flags){
    PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
    GetPciConfiguration(PDEV->bus, PDEV->slot, PDEV->func, PciConfig);

    uint64_t i = LouKeHalLinuxPciCheckForCompatibleConfiguration(PciConfig, RadeonDeviceIds);

    if(i > RADEON_SUPPORTED_DEVICES){
        LouFree((RAMADD)PciConfig);
        return false;
    }

    LouFree((RAMADD)PciConfig);
    return true;
}

LOUSTATUS RadeonPciProbe(P_PCI_DEVICE_OBJECT PDEV){

    uint64_t Flags;

    if(!IsAmdRadeon(PDEV, &Flags)){
        LouPrint("No Such Device\n");
        return STATUS_NO_SUCH_DEVICE;
    }

    UNUSED PDrsdDevice DDEV;
    UNUSED struct radeon_device *rdev;
    LOUSTATUS Status = STATUS_SUCCESS;       

    rdev = (struct radeon_device*)LouMalloc(sizeof(struct radeon_device));

    if(!rdev){
        return STATUS_INSUFFICIENT_RESOURCES;
    }

    rdev->pdev = PDEV;
    DDEV = rdev->ddev;

    LouKeHalEnablePciDevice(PDEV);

    //later we will do some fancy device registering for now lets just get the device running

    

    return Status;
}