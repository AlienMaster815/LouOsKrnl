
#include <LouDDK.h>
#include <Hal.h>



LOUSTATUS LouKeHalEnablePciDevice(P_PCI_DEVICE_OBJECT PDEV){
    LOUSTATUS Status = STATUS_SUCCESS;

    LouKeWritePciCommandRegister(PDEV, MEMORY_SPACE_ENABLE | IO_SPACE_ENABLE);

    return Status;
}

LOUDDK_API_ENTRY
LOUSTATUS LouKeHalPciSetMmio(P_PCI_DEVICE_OBJECT PDEV){
    LOUSTATUS Status = STATUS_SUCCESS;

    LouKeWritePciCommandRegister(PDEV, MEMORY_SPACE_ENABLE);

    return Status;
}