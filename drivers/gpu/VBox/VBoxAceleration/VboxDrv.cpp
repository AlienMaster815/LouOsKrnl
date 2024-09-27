#include <LouDDK.h>
#include <NtAPI.h>

#include "vboxvideo.h"
#include "vbox_drv.h"

LOUSTATUS VBoxPciProbe(P_PCI_DEVICE_OBJECT PDEV){

    if(!VboxCheckSupported(VBE_DISPI_ID_HGSMI)){
        return STATUS_NO_SUCH_DEVICE;
    }

    while(1);
    return STATUS_SUCCESS;
}