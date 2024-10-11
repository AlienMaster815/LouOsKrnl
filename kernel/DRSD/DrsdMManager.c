#include <LouAPI.h>

LOUSTATUS LouKeRegisterDevice(
    P_PCI_DEVICE_OBJECT PDEV, 
    SYSTEM_DEVICE_IDENTIFIER Sdi,
    string LRE, //optional
    void* KeyData, //optional
    void* DevicePrivateData
);

//manager for the object
static PDrsdBufferObjects DrsdObjectanager;
static uint16_t NumberOfActiveObjectManagers = 0;
//manager for VRam
static PDrsdVRamObject DrsdVramManager;
static uint8_t NumberOfActiveVRamManagers = 0;

static inline void InitializeVRamManagerObject(
    PDrsdVRamObject Obj,
    PListHeader LastHeader,
    uint64_t Base, uint64_t Height,
    uint16_t x,
    uint16_t y,
    uint8_t Bpp,
    uint8_t FramebufferType,
    PFrameBufferModeDefinition SupportedModes,
    PDrsdStandardFrameworkObject FrameWorkReference,
    void* DeviceObject
){
    Obj->Header.LastHeader = LastHeader;
    Obj->Header.NextHeader = 0x00;
    Obj->Base = Base;
    Obj->Height = Height;
    Obj->FrameBuffer.FramebufferBase = Base;
    Obj->FrameBuffer.FramebufferSize = Height;   
    Obj->FrameBuffer.Width = x;
    Obj->FrameBuffer.Height = y;
    Obj->FrameBuffer.Pitch = (x * (Bpp/8));
    Obj->FrameBuffer.Bpp = Bpp;
    Obj->DeviceObject = DeviceObject; 
    Obj->SupportedModes = SupportedModes;     
    Obj->FrameWorkReference = FrameWorkReference;     
}

static inline void ReuseVRamManagerObject(
    PDrsdVRamObject Obj,
    PListHeader LastHeader,
    uint64_t Base, uint64_t Height,
    uint8_t x,
    uint8_t y,
    uint8_t Bpp,
    uint8_t FramebufferType,
    PFrameBufferModeDefinition SupportedModes,
    PDrsdStandardFrameworkObject FrameWorkReference,
    void* DeviceObject
){
    //Obj->Header.LastHeader = LastHeader; headers are not changed
    //Obj->Header.NextHeader = 0x00;
    Obj->Base = Base;
    Obj->Height = Height;
    Obj->FrameBuffer.FramebufferBase = Base;
    Obj->FrameBuffer.FramebufferSize = Height;
    Obj->FrameBuffer.Width = x;
    Obj->FrameBuffer.Height = y;
    Obj->FrameBuffer.Pitch = (x * (Bpp/8));
    Obj->FrameBuffer.Bpp = Bpp;
    Obj->DeviceObject = DeviceObject;
    Obj->SupportedModes = SupportedModes;  
    Obj->FrameWorkReference = FrameWorkReference;     
}

static spinlock_t VRamRegistrationLock;
//Registers a VRam Object To Tables
LOUSTATUS LouKeRegisterFrameBufferDevice(
    void* Device, 
    uint64_t VRamBase, 
    uint64_t VRamSize,
    uint16_t Width,
    uint16_t Height,
    uint8_t Bpp,
    uint8_t FramebufferType,
    PFrameBufferModeDefinition SupportedModes,
    PDrsdStandardFrameworkObject FrameWorkReference
){
    LouKIRQL OldIrql;
    //LouKeAcquireSpinLock(&VRamRegistrationLock, &OldIrql);
    if(NumberOfActiveVRamManagers == 0){
        DrsdVramManager = (PDrsdVRamObject)LouMalloc(sizeof(DrsdVRamObject));
        if(!DrsdVramManager){
            LouKeReleaseSpinLock(&VRamRegistrationLock, &OldIrql);
            return STATUS_INSUFFICIENT_RESOURCES;
        }
        InitializeVRamManagerObject(
            DrsdVramManager, 
            0x00, 
            VRamBase, 
            VRamSize, 
            Width,
            Height,
            Bpp,
            FramebufferType,
            SupportedModes,
            FrameWorkReference, 
            Device
        );
        NumberOfActiveVRamManagers++;
        LouKeRegisterDevice(
            (P_PCI_DEVICE_OBJECT)Device, 
            GRAPHICS_DEVICE_T, 
            "HKEY:Annya/System64/Drivers/Gpu", 
            (void*)DrsdVramManager, 
            (void*)DrsdVramManager
        );
        LouKeReleaseSpinLock(&VRamRegistrationLock, &OldIrql);
        return STATUS_SUCCESS;
    }

    PDrsdVRamObject tmp = DrsdVramManager;

    for(
        uint8_t VRamManagerIndex = 0; 
        VRamManagerIndex < NumberOfActiveVRamManagers; 
        VRamManagerIndex++
    ){
        //once an object is created it cannot be destroyed it is reused instead
        //Note VRam cannot change Dynamically but could be unallocated when the
        //Device Is Pnp Compatible (E.g. EGPU, Docks, hot swap pcie"Rare But do exist")
        if(tmp->Base == 0x00){
            ReuseVRamManagerObject(
            (PDrsdVRamObject)tmp->Header.NextHeader, 
            (PListHeader)tmp, 
            VRamBase, 
            VRamSize, 
            Width,
            Height,
            Bpp,
            FramebufferType,
            SupportedModes,
            FrameWorkReference,
            Device
            );
            LouKeRegisterDevice(
                (P_PCI_DEVICE_OBJECT)Device, 
                GRAPHICS_DEVICE_T, 
                "HKEY:Annya/System64/Drivers/Gpu", 
                (void*)tmp, 
                (void*)tmp
            );
            LouKeReleaseSpinLock(&VRamRegistrationLock, &OldIrql);
            return STATUS_SUCCESS;   
        }
        tmp = (PDrsdVRamObject)tmp->Header.NextHeader;

    }
    //else allocate a new system
    tmp->Header.NextHeader = (ListHeader*)LouMalloc(sizeof(PDrsdVRamObject));
    InitializeVRamManagerObject(
        (PDrsdVRamObject)tmp->Header.NextHeader, 
        (PListHeader)tmp, 
        VRamBase, 
        VRamSize, 
        Width,
        Height,
        Bpp,
        FramebufferType,
        SupportedModes,
        FrameWorkReference,
        Device
    );   
    LouKeRegisterDevice(
        (P_PCI_DEVICE_OBJECT)Device, 
        GRAPHICS_DEVICE_T, 
        "HKEY:Annya/System64/Drivers/Gpu", 
        (void*)tmp, 
        (void*)tmp
    );
    NumberOfActiveVRamManagers++;
    LouKeReleaseSpinLock(&VRamRegistrationLock, &OldIrql);
    return STATUS_SUCCESS;
}