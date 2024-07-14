/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_KMDFDriver1,
    0xacddbe59,0xe302,0x4824,0x95,0x31,0x2c,0xcb,0x41,0x50,0x6b,0x89);
// {acddbe59-e302-4824-9531-2ccb41506b89}
