#include <LouAPI.h>

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
    void* DeviceObject
){
    Obj->Header.LastHeader = LastHeader;
    Obj->Header.NextHeader = 0x00;
    Obj->Base = Base;
    Obj->Height = Height;
    Obj->FrameBuffer.FramebufferBase = 0;
    Obj->FrameBuffer.FramebufferSize = 0;
    Obj->DeviceObject = DeviceObject;   
}

static inline void ReuseVRamManagerObject(
    PDrsdVRamObject Obj,
    PListHeader LastHeader,
    uint64_t Base, uint64_t Height,
    void* DeviceObject
){
    //Obj->Header.LastHeader = LastHeader; headers are not changed
    //Obj->Header.NextHeader = 0x00;
    Obj->Base = Base;
    Obj->Height = Height;
    Obj->FrameBuffer.FramebufferBase = 0;
    Obj->FrameBuffer.FramebufferSize = 0;
    Obj->DeviceObject = DeviceObject;   
}

static spinlock_t VRamRegistrationLock;
//Registers a VRam Object To Tables
LOUSTATUS LouKeRegisterVRam(
    void* Device, 
    uint64_t VRamBase, 
    uint64_t VRamSize
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
            Device
        );
        NumberOfActiveVRamManagers++;
        LouKeReleaseSpinLock(&VRamRegistrationLock, &OldIrql);
        return STATUS_SUCCESS;
    }
    //else Do More Complicated Bullshit

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
            Device
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
        Device
    );   
    NumberOfActiveVRamManagers++;
    LouKeReleaseSpinLock(&VRamRegistrationLock, &OldIrql);
    return STATUS_SUCCESS;
}