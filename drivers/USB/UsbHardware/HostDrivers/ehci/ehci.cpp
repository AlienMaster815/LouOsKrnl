/*
== Tyler Grenier 6/25/23
== EHCI Driver 1.01
==
== Use Of Driver:
== The Use of this driver is for the ability for the
== host system to interact with usb devices in the
== early boot stages of the os for having either a
== storage context support or basic controller support 
== if a vendor specific driver is not available or the
== module is either missing such as during an installation
== or if the system is in a safe mode aproch for the boot
== of the system
*/
#include <LouDDK.h>
#include <NtAPI.h>

void 
InitializeEHCIController(
P_PCI_DEVICE_OBJECT PDEV,
PPCI_COMMON_CONFIG PciConfig
){


    LouPrint("Initializing EHCI Controller\n");

    while (1);
}