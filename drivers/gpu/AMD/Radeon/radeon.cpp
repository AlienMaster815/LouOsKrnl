#include <LouDDK.h>
#include <NtAPI.h>
#include "radeon.h"

void RadeonRingLockupUpdate(struct radeon_device *rdev,
struct radeon_ring *ring
){



}

bool RadeonRingTestLockup(struct radeon_device *rdev, struct radeon_ring *ring){

    return true;
}

uint32_t r100_mm_rreg_slow(struct radeon_device *rdev, uint32_t reg){

    return 0;
}
void r100_mm_wreg_slow(struct radeon_device *rdev, uint32_t reg, uint32_t v){

    
}

bool RadeonBootTestPostCard(struct radeon_device *rdev){


    return true;
}

bool RadeonGetBios(
    struct radeon_device* rdev
){



    return true;
}

LOUSTATUS RadeonComBiosInit(struct radeon_device *rdev){
    LOUSTATUS Status = STATUS_SUCCESS;



    return Status;
}

LOUSTATUS RadeonAgpInit(struct radeon_device *rdev){
    LOUSTATUS Status = STATUS_SUCCESS;



    return Status;
}

void RadeonAgpDisable(struct radeon_device *rdev){

}

LOUSTATUS RadeonFenceDriverInit(struct radeon_device *rdev){
    LOUSTATUS Status = STATUS_SUCCESS;



    return Status;
}

LOUSTATUS RadeonPmInit(struct radeon_device *rdev){
    LOUSTATUS Status = STATUS_SUCCESS;



    return Status;
}

void RadeonWbDisable(struct radeon_device *rdev){

}

LOUSTATUS RadeonFenceDriverStartRing(struct radeon_device *rdev, int ring){
    LOUSTATUS Status = STATUS_SUCCESS;



    return Status;
}   

LOUSTATUS RadeonEnabelInterrupts(struct radeon_device *rdev){
    LOUSTATUS Status = STATUS_SUCCESS;



    return Status;
}

LOUSTATUS RadeonWbInit(
    struct radeon_device* rdev
){
    LOUSTATUS Status = STATUS_SUCCESS;



    return Status;
}

void RadeonIbPoolDiable(struct radeon_device *rdev){

}

void RadeonInteruptDisable(struct radeon_device *rdev){

}

void RadeonSurfaceInit(struct radeon_device *rdev){


}

LOUSTATUS RadeonIbPoolInit(struct radeon_device *rdev){
    LOUSTATUS Status = STATUS_SUCCESS;



    return Status;
}

LOUSTATUS RadeonScratchGet(struct radeon_device *rdev, uint32_t *reg){



    return STATUS_SUCCESS;
}

LOUSTATUS RadeonIbGet(struct radeon_device *rdev, int ring,
struct radeon_ib *ib, struct radeon_vm *vm,
uint64_t size){



    return STATUS_SUCCESS;
}

void RadeonScratchFree(struct radeon_device *rdev, uint32_t reg){

}

LOUSTATUS RadeonFenceWaitTimeout(struct radeon_fence *fence, bool interruptible, long timeout){

    return STATUS_SUCCESS;
}

void RadeonIbFree(struct radeon_device *rdev, struct radeon_ib *ib){

}

LOUSTATUS RadeonIbSchedule(struct radeon_device *rdev, struct radeon_ib *ib,
struct radeon_ib *const_ib, bool hdp_flush
){


    return STATUS_SUCCESS;        
}

LOUSTATUS RadeonRingLock(struct radeon_device *rdev, struct radeon_ring *cp, unsigned ndw){

    return STATUS_SUCCESS;
}

void RadeonRingUnlockCommit(struct radeon_device *rdev, struct radeon_ring *cp,
bool hdp_flush
){


}

void RadeonUpdateDisplayPriority(struct radeon_device *rdev){
    
}

void RadeonGttLocation(struct radeon_device *rdev, struct radeon_mc *mc){

}

void RadeonVRamLocation(struct radeon_device *rdev, struct radeon_mc *mc, uint64_t base){

}

void RadeonUpdateBandwidthInfo(struct radeon_device *rdev){
    
}
