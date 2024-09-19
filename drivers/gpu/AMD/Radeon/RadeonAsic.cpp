#include "atom.h"
#include "r100d.h"
#include "radeon.h"
#include "radeon_asic.h"
#include "radeon_reg.h"
#include "rs100d.h"
#include "rv200d.h"
#include "rv250d.h"

#include <LouDDK.h>
#include <NtAPI.h>

#include "r100_track.h"


LOUSTATUS R100PciGartInit(struct radeon_device *rdev){
    LOUSTATUS Status = STATUS_SUCCESS;



    return Status;
}


void RadeonLegacySetClockGating(struct radeon_device *rdev, int enable){



}

void R100McStop(struct radeon_device *rdev, struct r100_mc_save *save){
    /* Shutdown CP we shouldn't need to do that but better be safe than
	 * sorry
	 */
	rdev->ring[RADEON_RING_TYPE_GFX_INDEX].ready = false;
	WREG32(R_000740_CP_CSQ_CNTL, 0);

	/* Save few CRTC registers */
	save->GENMO_WT = RREG8(R_0003C2_GENMO_WT);
	save->CRTC_EXT_CNTL = RREG32(R_000054_CRTC_EXT_CNTL);
	save->CRTC_GEN_CNTL = RREG32(R_000050_CRTC_GEN_CNTL);
	save->CUR_OFFSET = RREG32(R_000260_CUR_OFFSET);
	if (!(rdev->flags & RADEON_SINGLE_CRTC)) {
		save->CRTC2_GEN_CNTL = RREG32(R_0003F8_CRTC2_GEN_CNTL);
		save->CUR2_OFFSET = RREG32(R_000360_CUR2_OFFSET);
	}

	/* Disable VGA aperture access */
	WREG8(R_0003C2_GENMO_WT, C_0003C2_VGA_RAM_EN & save->GENMO_WT);
	/* Disable cursor, overlay, crtc */
	WREG32(R_000260_CUR_OFFSET, save->CUR_OFFSET | S_000260_CUR_LOCK(1));
	WREG32(R_000054_CRTC_EXT_CNTL, save->CRTC_EXT_CNTL |
					S_000054_CRTC_DISPLAY_DIS(1));
	WREG32(R_000050_CRTC_GEN_CNTL,
			(C_000050_CRTC_CUR_EN & save->CRTC_GEN_CNTL) |
			S_000050_CRTC_DISP_REQ_EN_B(1));
	WREG32(R_000420_OV0_SCALE_CNTL,
		C_000420_OV0_OVERLAY_EN & RREG32(R_000420_OV0_SCALE_CNTL));
	WREG32(R_000260_CUR_OFFSET, C_000260_CUR_LOCK & save->CUR_OFFSET);
	if (!(rdev->flags & RADEON_SINGLE_CRTC)) {
		WREG32(R_000360_CUR2_OFFSET, save->CUR2_OFFSET |
						S_000360_CUR2_LOCK(1));
		WREG32(R_0003F8_CRTC2_GEN_CNTL,
			(C_0003F8_CRTC2_CUR_EN & save->CRTC2_GEN_CNTL) |
			S_0003F8_CRTC2_DISPLAY_DIS(1) |
			S_0003F8_CRTC2_DISP_REQ_EN_B(1));
		WREG32(R_000360_CUR2_OFFSET,
			C_000360_CUR2_LOCK & save->CUR2_OFFSET);
	}
}

LOUSTATUS R100McWaitForIdle(struct radeon_device *rdev){



    return STATUS_SUCCESS;
}

void R100McResume(struct radeon_device *rdev, struct r100_mc_save *save){
    /* Update base address for crtc */
	WREG32(R_00023C_DISPLAY_BASE_ADDR, rdev->mc.vram_start);
	if (!(rdev->flags & RADEON_SINGLE_CRTC)) {
		WREG32(R_00033C_CRTC2_DISPLAY_BASE_ADDR, rdev->mc.vram_start);
	}
	/* Restore CRTC registers */
	WREG8(R_0003C2_GENMO_WT, save->GENMO_WT);
	WREG32(R_000054_CRTC_EXT_CNTL, save->CRTC_EXT_CNTL);
	WREG32(R_000050_CRTC_GEN_CNTL, save->CRTC_GEN_CNTL);
	if (!(rdev->flags & RADEON_SINGLE_CRTC)) {
		WREG32(R_0003F8_CRTC2_GEN_CNTL, save->CRTC2_GEN_CNTL);
	}
}