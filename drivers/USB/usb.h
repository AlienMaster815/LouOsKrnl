#ifndef _USB_H
#define _USB_H
#include <LouDDK.h>
#include <NtAPI.h>

typedef enum{
    ControlTransfer,
    BulkTransfer,
    InterruptTransfer,
    RealTimeTransfer,
}TransferType;

#endif