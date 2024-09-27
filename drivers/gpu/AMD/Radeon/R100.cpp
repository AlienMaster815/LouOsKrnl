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
#include <Hal.h>

#include "r100_track.h"

///TODO:RadeonBoSize

LOUSTATUS R100CsParse(struct radeon_cs_parser *p){


	return STATUS_SUCCESS;
}

static void R100CsTrackTexturePrint(struct r100_cs_track_texture *t)
{
	LouPrint("pitch                      %d\n", t->pitch);
	LouPrint("use_pitch                  %d\n", t->use_pitch);
	LouPrint("width                      %d\n", t->width);
	LouPrint("width_11                   %d\n", t->width_11);
	LouPrint("height                     %d\n", t->height);
	LouPrint("height_11                  %d\n", t->height_11);
	LouPrint("num levels                 %d\n", t->num_levels);
	LouPrint("depth                      %d\n", t->txdepth);
	LouPrint("bpp                        %d\n", t->cpp);
	LouPrint("coordinate type            %d\n", t->tex_coord_type);
	LouPrint("width round to power of 2  %d\n", t->roundup_w);
	LouPrint("height round to power of 2 %d\n", t->roundup_h);
	LouPrint("compress format            %d\n", t->compress_format);
}

int R100TrackCompressSize(int compress_format, int w, int h){

	int block_width, block_height, block_bytes;
	int wblocks, hblocks;
	int min_wblocks;
	int sz;

	block_width = 4;
	block_height = 4;

	switch (compress_format) {
	case R100_TRACK_COMP_DXT1:
		block_bytes = 8;
		min_wblocks = 4;
		break;
	default:
	case R100_TRACK_COMP_DXT35:
		block_bytes = 16;
		min_wblocks = 2;
		break;
	}

	hblocks = (h + block_height - 1) / block_height;
	wblocks = (w + block_width - 1) / block_width;
	if (wblocks < min_wblocks)
		wblocks = min_wblocks;
	sz = wblocks * hblocks * block_bytes;
	return sz;
}


LOUSTATUS R100CsTrackCube(struct radeon_device *rdev,
			      struct r100_cs_track *track, unsigned idx)
{
	unsigned face, w, h;
	struct radeon_bo *cube_robj;
	unsigned long size;
	unsigned compress_format = track->textures[idx].compress_format;

	for (face = 0; face < 5; face++) {
		cube_robj = track->textures[idx].cube_info[face].robj;
		w = track->textures[idx].cube_info[face].width;
		h = track->textures[idx].cube_info[face].height;

		if (compress_format) {
			size = R100TrackCompressSize(compress_format, w, h);
		} else
			size = w * h;
		size *= track->textures[idx].cpp;

		size += track->textures[idx].cube_info[face].offset;

		if (size > RadeonBoSize(cube_robj)) {
			LouPrint("Cube texture offset greater than object size %h %h\n",
				  size, RadeonBoSize(cube_robj));
			R100CsTrackTexturePrint(&track->textures[idx]);
			return STATUS_UNSUCCESSFUL;
		}
	}
	return STATUS_SUCCESS;
}

LOUSTATUS R100CsTrackCheck(struct radeon_device *rdev, struct r100_cs_track *track){

	UNUSED struct radeon_bo *robj;
	UNUSED unsigned long size;
	UNUSED unsigned u, i, w, h, d;
	UNUSED LOUSTATUS ret;

	for (u = 0; u < track->num_texture; u++) {
		if (!track->textures[u].enabled)
			continue;
		if (track->textures[u].lookup_disable)
			continue;
		robj = track->textures[u].robj;
		if (robj == 0x00) {
			LouPrint("No texture bound to unit %u\n", u);
			return STATUS_UNSUCCESSFUL;
		}
		size = 0;
		for (i = 0; i <= track->textures[u].num_levels; i++) {
			if (track->textures[u].use_pitch) {
				if (rdev->family < CHIP_R300)
					w = (track->textures[u].pitch / track->textures[u].cpp) / (1 << i);
				else
					w = track->textures[u].pitch / (1 << i);
			} else {
				w = track->textures[u].width;
				if (rdev->family >= CHIP_RV515)
					w |= track->textures[u].width_11;
				w = w / (1 << i);
				if (track->textures[u].roundup_w)
					w = RoundUpPowerOf2(w);
			}
			h = track->textures[u].height;
			if (rdev->family >= CHIP_RV515)
				h |= track->textures[u].height_11;
			h = h / (1 << i);
			if (track->textures[u].roundup_h)
				h = RoundUpPowerOf2(h);
			if (track->textures[u].tex_coord_type == 1) {
				d = (1 << track->textures[u].txdepth) / (1 << i);
				if (!d)
					d = 1;
			} else {
				d = 1;
			}
			if (track->textures[u].compress_format) {

				size += R100TrackCompressSize(track->textures[u].compress_format, w, h) * d;
				/* compressed textures are block based */
			} else
				size += w * h * d;
		}
		size *= track->textures[u].cpp;

		switch (track->textures[u].tex_coord_type) {
		case 0:
		case 1:
			break;
		case 2:
			if (track->separate_cube) {
				ret = R100CsTrackCube(rdev, track, u);
				if (ret)
					return ret;
			} else
				size *= 6;
			break;
		default:
			LouPrint("Invalid texture coordinate type %u for unit "
				  "%u\n", track->textures[u].tex_coord_type, u);
			return -STATUS_UNSUCCESSFUL;
		}
		if (size > RadeonBoSize(robj)) {
			LouPrint("Texture of unit %u needs %lu bytes but is "
				  "%lu\n", u, size, RadeonBoSize(robj));
			R100CsTrackTexturePrint(&track->textures[u]);
			return STATUS_UNSUCCESSFUL;
		}
	}

	return STATUS_SUCCESS;
}


void R100CsTrackClear(struct radeon_device *rdev, struct r100_cs_track *track){
	unsigned i, face; //I dont like using unsigned but fuck it
	track->cb_dirty = true;
	track->zb_dirty = true;
	track->tex_dirty = true;
	track->aa_dirty = true;

	if (rdev->family < CHIP_R300) {
		track->num_cb = 1;
		if (rdev->family <= CHIP_RS200)
			track->num_texture = 3;
		else
			track->num_texture = 6;
		track->maxy = 2048;
		track->separate_cube = true;
	} else {
		track->num_cb = 4;
		track->num_texture = 16;
		track->maxy = 4096;
		track->separate_cube = false;
		track->aaresolve = false;
		track->aa.robj = 0x00;
	}

	for (i = 0; i < track->num_cb; i++) {
		track->cb[i].robj = 0x00;
		track->cb[i].pitch = 8192;
		track->cb[i].cpp = 16;
		track->cb[i].offset = 0;
	}
	track->z_enabled = true;
	track->zb.robj = 0x00;
	track->zb.pitch = 8192;
	track->zb.cpp = 4;
	track->zb.offset = 0;
	track->vtx_size = 0x7F;
	track->immd_dwords = 0xFFFFFFFFUL;
	track->num_arrays = 11;
	track->max_indx = 0x00FFFFFFUL;
	for (i = 0; i < track->num_arrays; i++) {
		track->arrays[i].robj = 0x00;
		track->arrays[i].esize = 0x7F;
	}
	for (i = 0; i < track->num_texture; i++) {
		track->textures[i].compress_format = R100_TRACK_COMP_NONE;
		track->textures[i].pitch = 16536;
		track->textures[i].width = 16536;
		track->textures[i].height = 16536;
		track->textures[i].width_11 = 1 << 11;
		track->textures[i].height_11 = 1 << 11;
		track->textures[i].num_levels = 12;
		if (rdev->family <= CHIP_RS200) {
			track->textures[i].tex_coord_type = 0;
			track->textures[i].txdepth = 0;
		} else {
			track->textures[i].txdepth = 16;
			track->textures[i].tex_coord_type = 1;
		}
		track->textures[i].cpp = 64;
		track->textures[i].robj = 0x00;
		/* CS IB emission code makes sure texture unit are disabled */
		track->textures[i].enabled = false;
		track->textures[i].lookup_disable = false;
		track->textures[i].roundup_w = true;
		track->textures[i].roundup_h = true;
		if (track->separate_cube)
			for (face = 0; face < 5; face++) {
				track->textures[i].cube_info[face].robj = 0x00;
				track->textures[i].cube_info[face].width = 16536;
				track->textures[i].cube_info[face].height = 16536;
				track->textures[i].cube_info[face].offset = 0;
			}
	}
}

LOUSTATUS R100RbbmFiFoWaitForEntry(struct radeon_device *rdev, unsigned n){
	int i;
	uint32_t tmp;

	for (i = 0; i < rdev->usec_timeout; i+=2) {
		tmp = RREG32(RADEON_RBBM_STATUS) & RADEON_RBBM_FIFOCNT_MASK;
		if (tmp >= n) {
			return STATUS_SUCCESS;
		}
		sleep(2);
	}
	return STATUS_TIMEOUT;
}

LOUSTATUS R100GuiWaitForIdle(struct radeon_device *rdev){

	int i;
	uint32_t tmp;
	if(R100RbbmFiFoWaitForEntry(rdev, 64)){
		LouPrint("Radeon: Warning : wait for empty RBBM fifo failed! Bad things might happen.\n");
	}
	for (i = 0; i < rdev->usec_timeout; i+=2) {
		tmp = RREG32(RADEON_RBBM_STATUS);
		if (!(tmp & RADEON_RBBM_ACTIVE)) {
			return STATUS_SUCCESS;
		}
		sleep(2);
	}
	return STATUS_TIMEOUT;
}

LOUSTATUS R100McWaitForIdle(struct radeon_device *rdev){
	int i;
	uint32_t tmp;
	
	for(i = 0 ;i < rdev->usec_timeout; i+=2){
		tmp = RREG32(RADEON_MC_STATUS);
		if(tmp & RADEON_MC_IDLE){
			return STATUS_SUCCESS;
		}
		sleep(2);
	}

    return STATUS_TIMEOUT;
}

bool R100GpuIsLockup(struct radeon_device *rdev, struct radeon_ring *ring){
	uint32_t rbbm_Status;

	rbbm_Status = RREG32(R_000E40_RBBM_STATUS);
	if (!G_000E40_GUI_ACTIVE(rbbm_Status)) {
		RadeonRingLockupUpdate(rdev,ring);
		return false;
	}
    return RadeonRingTestLockup(rdev, ring);
}

void R100EnableBm(
    struct radeon_device* rdev
){
	uint32_t tmp;
	/* Enable bus mastering */
	tmp = RREG32(RADEON_BUS_CNTL) & ~RADEON_BUS_MASTER_DIS;
	WREG32(RADEON_BUS_CNTL, tmp);
}

void R100BmDisable(struct radeon_device* rdev){
    uint32_t tmp;
	/* disable bus mastering */
	tmp = RREG32(R_000030_BUS_CNTL);
	WREG32(R_000030_BUS_CNTL, (tmp & 0xFFFFFFFF) | 0x00000044);
	sleep(2);
	WREG32(R_000030_BUS_CNTL, (tmp & 0xFFFFFFFF) | 0x00000042);
	sleep(2);
	WREG32(R_000030_BUS_CNTL, (tmp & 0xFFFFFFFF) | 0x00000040);
	tmp = RREG32(RADEON_BUS_CNTL);
	sleep(2);
	LouKeHalPciClearMaster(rdev->pdev);
	sleep(2);
}

LOUSTATUS R100AsicReset(struct radeon_device *rdev, bool hard){

    struct r100_mc_save save;
	uint32_t status, tmp;
	LOUSTATUS LouStatus = 0;

	status = RREG32(R_000E40_RBBM_STATUS);
	if (!G_000E40_GUI_ACTIVE(status)) {
		return 0;
	}
	R100McStop(rdev, &save);
	status = RREG32(R_000E40_RBBM_STATUS);
	LouPrint("(%s:%d) RBBM_STATUS=%h\n", __func__, __LINE__, status);
	/* stop CP */
	WREG32(RADEON_CP_CSQ_CNTL, 0);
	tmp = RREG32(RADEON_CP_RB_CNTL);
	WREG32(RADEON_CP_RB_CNTL, tmp | RADEON_RB_RPTR_WR_ENA);
	WREG32(RADEON_CP_RB_RPTR_WR, 0);
	WREG32(RADEON_CP_RB_WPTR, 0);
	WREG32(RADEON_CP_RB_CNTL, tmp);
	/* save PCI state */
    LouKIRQL OldIrq;
	LouKeAcquireSpinLock(&rdev->PciLock, &OldIrq);
    PPCI_CONTEXT Context = LouKeHalPciSaveContext(rdev->pdev);
	/* disable bus mastering */
	R100BmDisable(rdev);
	WREG32(R_0000F0_RBBM_SOFT_RESET, S_0000F0_SOFT_RESET_SE(1) |
					S_0000F0_SOFT_RESET_RE(1) |
					S_0000F0_SOFT_RESET_PP(1) |
					S_0000F0_SOFT_RESET_RB(1));
	RREG32(R_0000F0_RBBM_SOFT_RESET);
	sleep(500);
	WREG32(R_0000F0_RBBM_SOFT_RESET, 0);
	sleep(2);
	status = RREG32(R_000E40_RBBM_STATUS);
	LouPrint("(%s:%d) RBBM_STATUS=%h\n", __func__, __LINE__, status);
	/* reset CP */
	WREG32(R_0000F0_RBBM_SOFT_RESET, S_0000F0_SOFT_RESET_CP(1));
	RREG32(R_0000F0_RBBM_SOFT_RESET);
	sleep(500);
	WREG32(R_0000F0_RBBM_SOFT_RESET, 0);
	sleep(2);
	status = RREG32(R_000E40_RBBM_STATUS);
	LouPrint("(%s:%d) RBBM_STATUS=%h\n", __func__, __LINE__, status);
	/* restore PCI & busmastering */
    LouKeHalPciRestoreContext(Context);
	LouKeReleaseSpinLock(&rdev->PciLock, &OldIrq);
	R100EnableBm(rdev);
	/* Check if GPU is idle */
	if (G_000E40_SE_BUSY(status) || G_000E40_RE_BUSY(status) ||
		G_000E40_TAM_BUSY(status) || G_000E40_PB_BUSY(status)) {
		LouPrint("failed to reset GPU\n");
		LouStatus = STATUS_UNSUCCESSFUL;
	} else{
		LouPrint("GPU reset succeed\n");
    }
	R100McResume(rdev, &save);

    return LouStatus;
}

void R100VgaSetState(struct radeon_device *rdev, bool state){
	uint32_t temp;
	temp = RREG32(RADEON_CONFIG_CNTL);
	if (!state) {
		temp &= ~RADEON_CFG_VGA_RAM_EN;
		temp |= RADEON_CFG_VGA_IO_DIS;
	} else {
		temp &= ~RADEON_CFG_VGA_IO_DIS;
	}
	WREG32(RADEON_CONFIG_CNTL, temp);	
}

void R100PllErrataAfterIndex(struct radeon_device *rdev){
    if (rdev->pll_errata & CHIP_ERRATA_PLL_DUMMYREADS) {
		(void)RREG32(RADEON_CLOCK_CNTL_DATA);
		(void)RREG32(RADEON_CRTC_GEN_CNTL);
	}

}

void R100PllErrataAfterData(struct radeon_device* rdev){
    /* This workarounds is necessary on RV100, RS100 and RS200 chips
	 * or the chip could hang on a subsequent access
	 */
	if (rdev->pll_errata & CHIP_ERRATA_PLL_DELAY) {
		sleep(5);
	}
	/* This function is required to workaround a hardware bug in some (all?)
	 * revisions of the R300.  This workaround should be called after every
	 * CLOCK_CNTL_INDEX register access.  If not, register reads afterward
	 * may not be correct.
	 */
	if (rdev->pll_errata & CHIP_ERRATA_R300_CG) {
		uint32_t save, tmp;

		save = RREG32(RADEON_CLOCK_CNTL_INDEX);
		tmp = save & ~(0x3f | RADEON_PLL_WR_EN);
		WREG32(RADEON_CLOCK_CNTL_INDEX, tmp);
		tmp = RREG32(RADEON_CLOCK_CNTL_DATA);
		WREG32(RADEON_CLOCK_CNTL_INDEX, save);
	}
}

uint32_t R100PllRReg(struct radeon_device *rdev, uint32_t reg){
    LouKIRQL CurrentIrql;
    uint32_t Data;
    LouKeAcquireSpinLock(&rdev->pll_idx_lock, &CurrentIrql);
    WREG8(RADEON_CLOCK_CNTL_INDEX, reg & 0x3f);
	R100PllErrataAfterIndex(rdev);
    Data = RREG32(RADEON_CLOCK_CNTL_DATA);
	R100PllErrataAfterData(rdev);
	LouKeReleaseSpinLock(&rdev->pll_idx_lock, &CurrentIrql);
    return Data;
}

void R100PllWReg(struct radeon_device *rdev, uint32_t reg, uint32_t v){
    LouKIRQL CurrentIrql;
    LouKeAcquireSpinLock(&rdev->pll_idx_lock, &CurrentIrql);
	WREG8(RADEON_CLOCK_CNTL_INDEX, ((reg & 0x3f) | RADEON_PLL_WR_EN));
	R100PllErrataAfterIndex(rdev);
	WREG32(RADEON_CLOCK_CNTL_DATA, v);
	R100PllErrataAfterData(rdev);
	LouKeReleaseSpinLock(&rdev->pll_idx_lock, &CurrentIrql);
}

LOUSTATUS R100SetSurfaceReg(struct radeon_device *rdev, int reg,
			 uint32_t tiling_flags, uint32_t pitch,
			 uint32_t offset, uint32_t obj_size
){

    int surf_index = reg * 16;
	int flags = 0;

	if (rdev->family <= CHIP_RS200) {
		if ((tiling_flags & (RADEON_TILING_MACRO | RADEON_TILING_MICRO))
				 == (RADEON_TILING_MACRO|RADEON_TILING_MICRO)){
			flags |= RADEON_SURF_TILE_COLOR_BOTH;
        }
		if (tiling_flags & RADEON_TILING_MACRO){
			flags |= RADEON_SURF_TILE_COLOR_MACRO;
        }
		/* setting pitch to 0 disables tiling */
		if ((tiling_flags & (RADEON_TILING_MACRO|RADEON_TILING_MICRO))
				== 0){
			pitch = 0;
        }
	} else if (rdev->family <= CHIP_RV280) {
		if (tiling_flags & (RADEON_TILING_MACRO)){
			flags |= R200_SURF_TILE_COLOR_MACRO;
        }
		if (tiling_flags & RADEON_TILING_MICRO){
			flags |= R200_SURF_TILE_COLOR_MICRO;
        }
	} else {
		if (tiling_flags & RADEON_TILING_MACRO){
			flags |= R300_SURF_TILE_MACRO;
        }
		if (tiling_flags & RADEON_TILING_MICRO){
			flags |= R300_SURF_TILE_MICRO;
        }
	}

	if (tiling_flags & RADEON_TILING_SWAP_16BIT){
		flags |= RADEON_SURF_AP0_SWP_16BPP | RADEON_SURF_AP1_SWP_16BPP;
    }
    if (tiling_flags & RADEON_TILING_SWAP_32BIT){
		flags |= RADEON_SURF_AP0_SWP_32BPP | RADEON_SURF_AP1_SWP_32BPP;
    }
	/* r100/r200 divide by 16 */
	if (rdev->family < CHIP_R300){
		flags |= pitch / 16;
    }
	else{
		flags |= pitch / 8;
    }

	LouPrint("Radeon: writing surface %d %d %h %h\n", reg, flags, offset, offset+obj_size-1);
	WREG32(RADEON_SURFACE0_INFO + surf_index, flags);
	WREG32(RADEON_SURFACE0_LOWER_BOUND + surf_index, offset);
	WREG32(RADEON_SURFACE0_UPPER_BOUND + surf_index, offset + obj_size - 1);
    
    return STATUS_SUCCESS;
}

void R100ClearSurfaceReg(struct radeon_device *rdev, int reg){
    int surf_index = reg * 16;
	WREG32(RADEON_SURFACE0_INFO + surf_index, 0);
}

void R100BandwidthUpdate(struct radeon_device *rdev){
	UNUSED Fixed20_12 trcd_ff, trp_ff, tras_ff, trbs_ff, tcas_ff;
	UNUSED Fixed20_12 sclk_ff, mclk_ff, sclk_eff_ff, sclk_delay_ff;
	UNUSED Fixed20_12 peak_disp_bw, mem_bw, pix_clk, pix_clk2, temp_ff;
	UNUSED Fixed20_12 crit_point_ff = {0};
	UNUSED uint32_t temp, data, mem_trcd, mem_trp, mem_tras;
	UNUSED Fixed20_12 memtcas_ff[8] = {
		DFixedInit(1),
		DFixedInit(2),
		DFixedInit(3),
		DFixedInit(0),
		DFixedInitHalf(1),
		DFixedInitHalf(2),
		DFixedInit(0),
	};
	UNUSED Fixed20_12 memtcas_rs480_ff[8] = {
		DFixedInit(0),
		DFixedInit(1),
		DFixedInit(2),
		DFixedInit(3),
		DFixedInit(0),
		DFixedInitHalf(1),
		DFixedInitHalf(2),
		DFixedInitHalf(3),
	};
	UNUSED Fixed20_12 memtcas2_ff[8] = {
		DFixedInit(0),
		DFixedInit(1),
		DFixedInit(2),
		DFixedInit(3),
		DFixedInit(4),
		DFixedInit(5),
		DFixedInit(6),
		DFixedInit(7),
	};
	UNUSED Fixed20_12 memtrbs[8] = {
		DFixedInit(1),
		DFixedInitHalf(1),
		DFixedInit(2),
		DFixedInitHalf(2),
		DFixedInit(3),
		DFixedInitHalf(3),
		DFixedInit(4),
		DFixedInitHalf(4)
	};
	UNUSED Fixed20_12 memtrbs_r4xx[8] = {
		DFixedInit(4),
		DFixedInit(5),
		DFixedInit(6),
		DFixedInit(7),
		DFixedInit(8),
		DFixedInit(9),
		DFixedInit(10),
		DFixedInit(11)
	};
    UNUSED Fixed20_12 min_mem_eff;
	UNUSED Fixed20_12 mc_latency_sclk, mc_latency_mclk, k1;
	UNUSED Fixed20_12 cur_latency_mclk, cur_latency_sclk;
	UNUSED Fixed20_12 disp_latency, disp_latency_overhead, disp_drain_rate = {0},
		disp_drain_rate2, read_return_rate;
	UNUSED Fixed20_12 time_disp1_drop_priority;

	UNUSED int c;
	UNUSED int cur_size = 16;       /* in octawords */
	UNUSED int critical_point = 0, critical_point2;
/* 	uint32_t read_return_rate, time_disp1_drop_priority; */
	UNUSED int stop_req, max_stop_req;
	UNUSED PDrsdDisplayMode mode1 = 0x00;
	UNUSED PDrsdDisplayMode mode2 = 0x00;
	UNUSED uint32_t pixel_bytes1 = 0;
	UNUSED uint32_t pixel_bytes2 = 0;

	/* Guess line buffer size to be 8192 pixels */
	UNUSED uint32_t lb_size = 8192;

    if(rdev->mode_info.mode_config_initialized){
        return;
    }

    RadeonUpdateDisplayPriority(rdev);

    if(rdev->mode_info.crtcs[0]->base.Enabled){
        UNUSED const PDrsdFramebuffer Framebuffer = rdev->mode_info.crtcs[0]->base.Framebuffer;
        mode1 = &rdev->mode_info.crtcs[0]->base.DisplayMode;
        pixel_bytes1 = Framebuffer->Format->Cpp[0];
    }
    if (!(rdev->flags & RADEON_SINGLE_CRTC)) {
        if(rdev->mode_info.crtcs[1]->base.Enabled){
            UNUSED const PDrsdFramebuffer Framebuffer = rdev->mode_info.crtcs[1]->base.Framebuffer;
            mode2 = &rdev->mode_info.crtcs[1]->base.DisplayMode;
            pixel_bytes2 = Framebuffer->Format->Cpp[0];
        }
    }
    
    min_mem_eff.FULL = DFixedConst8(0);

    if((rdev->disp_priority = 2) && (ASIC_IS_R300(rdev))){
        UNUSED uint32_t mc_init_misc_lat_timer = RREG32(R300_MC_INIT_MISC_LAT_TIMER);
		mc_init_misc_lat_timer &= ~(R300_MC_DISP1R_INIT_LAT_MASK << R300_MC_DISP1R_INIT_LAT_SHIFT);
		mc_init_misc_lat_timer &= ~(R300_MC_DISP0R_INIT_LAT_MASK << R300_MC_DISP0R_INIT_LAT_SHIFT);
        		/* check crtc enables */
		if (mode2)
			mc_init_misc_lat_timer |= (1 << R300_MC_DISP1R_INIT_LAT_SHIFT);
		if (mode1)
			mc_init_misc_lat_timer |= (1 << R300_MC_DISP0R_INIT_LAT_SHIFT);
		WREG32(R300_MC_INIT_MISC_LAT_TIMER, mc_init_misc_lat_timer);
    }
    /*
	 * determine is there is enough bw for current mode
	 */
	sclk_ff = rdev->pm.sclk;
	mclk_ff = rdev->pm.mclk;

	temp = (rdev->mc.vram_width / 8) * (rdev->mc.vram_is_ddr ? 2 : 1);
	temp_ff.FULL = DFixedConst(temp);
	mem_bw.FULL = DFixedMul(mclk_ff, temp_ff);

	pix_clk.FULL = 0;
	pix_clk2.FULL = 0;
	peak_disp_bw.FULL = 0;

	if (mode1) {
		temp_ff.FULL = DFixedConst(1000);
		pix_clk.FULL = DFixedConst(mode1->clock); /* convert to fixed point */
		pix_clk.FULL = DFixedDiv(pix_clk, temp_ff);
		temp_ff.FULL = DFixedConst(pixel_bytes1);
		peak_disp_bw.FULL += DFixedMul(pix_clk, temp_ff);
	}
	if (mode2) {
		temp_ff.FULL = DFixedConst(1000);
		pix_clk2.FULL = DFixedConst(mode2->clock); /* convert to fixed point */
		pix_clk2.FULL = DFixedDiv(pix_clk2, temp_ff);
		temp_ff.FULL = DFixedConst(pixel_bytes2);
		peak_disp_bw.FULL += DFixedMul(pix_clk2, temp_ff);
	}

    mem_bw.FULL = DFixedMul(mem_bw, min_mem_eff);
	if (peak_disp_bw.FULL >= mem_bw.FULL) {
        LouPrint("Radeon Error: You may not have enough display bandwidth for current mode\n"
			  "If you have flickering problem, try to lower resolution, refresh rate, or color depth\n");
    }

    temp = RREG32(RADEON_MEM_TIMING_CNTL);
	if ((rdev->family == CHIP_RV100) || (rdev->flags & RADEON_IS_IGP)) { /* RV100, M6, IGPs */
		mem_trcd = ((temp >> 2) & 0x3) + 1;
		mem_trp  = ((temp & 0x3)) + 1;
		mem_tras = ((temp & 0x70) >> 4) + 1;
	} else if (rdev->family == CHIP_R300 ||
		   rdev->family == CHIP_R350) { /* r300, r350 */
		mem_trcd = (temp & 0x7) + 1;
		mem_trp = ((temp >> 8) & 0x7) + 1;
		mem_tras = ((temp >> 11) & 0xf) + 4;
	} else if (rdev->family == CHIP_RV350 ||
		   rdev->family == CHIP_RV380) {
		/* rv3x0 */
		mem_trcd = (temp & 0x7) + 3;
		mem_trp = ((temp >> 8) & 0x7) + 3;
		mem_tras = ((temp >> 11) & 0xf) + 6;
	} else if (rdev->family == CHIP_R420 ||
		   rdev->family == CHIP_R423 ||
		   rdev->family == CHIP_RV410) {
		/* r4xx */
		mem_trcd = (temp & 0xf) + 3;
		if (mem_trcd > 15)
			mem_trcd = 15;
		mem_trp = ((temp >> 8) & 0xf) + 3;
		if (mem_trp > 15)
			mem_trp = 15;
		mem_tras = ((temp >> 12) & 0x1f) + 6;
		if (mem_tras > 31)
			mem_tras = 31;
	} else { /* RV200, R200 */
		mem_trcd = (temp & 0x7) + 1;
		mem_trp = ((temp >> 8) & 0x7) + 1;
		mem_tras = ((temp >> 12) & 0xf) + 4;
	}

    	/* convert to FF */
	trcd_ff.FULL =  DFixedConst(mem_trcd);
	trp_ff.FULL  =  DFixedConst(mem_trp);
	tras_ff.FULL =  DFixedConst(mem_tras);
	/* Get values from the MEM_SDRAM_MODE_REG register...converting its */
	temp = RREG32(RADEON_MEM_SDRAM_MODE_REG);
	data = (temp & (7 << 20)) >> 20;
	if ((rdev->family == CHIP_RV100) || rdev->flags & RADEON_IS_IGP) {
		if (rdev->family == CHIP_RS480){ /* don't think rs400 */
			tcas_ff = memtcas_rs480_ff[data];
        }
        else{
			tcas_ff = memtcas_ff[data];
        }
    } else{
		tcas_ff = memtcas2_ff[data];
    }

	if (rdev->family == CHIP_RS400 ||
	    rdev->family == CHIP_RS480) {
		/* extra cas latency stored in bits 23-25 0-4 clocks */
		data = (temp >> 23) & 0x7;
		if (data < 5){
			tcas_ff.FULL += DFixedConst(data);
        }
	}

    if (ASIC_IS_R300(rdev) && !(rdev->flags & RADEON_IS_IGP)) {
		/* on the R300, Tcas is included in Trbs.
		 */
		temp = RREG32(RADEON_MEM_CNTL);
		data = (R300_MEM_NUM_CHANNELS_MASK & temp);
		if (data == 1) {
			if (R300_MEM_USE_CD_CH_ONLY & temp) {
				temp = RREG32(R300_MC_IND_INDEX);
				temp &= ~R300_MC_IND_ADDR_MASK;
				temp |= R300_MC_READ_CNTL_CD_mcind;
				WREG32(R300_MC_IND_INDEX, temp);
				temp = RREG32(R300_MC_IND_DATA);
				data = (R300_MEM_RBS_POSITION_C_MASK & temp);
			} else {
				temp = RREG32(R300_MC_READ_CNTL_AB);
				data = (R300_MEM_RBS_POSITION_A_MASK & temp);
			}
		} else {
			temp = RREG32(R300_MC_READ_CNTL_AB);
			data = (R300_MEM_RBS_POSITION_A_MASK & temp);
		}
		if (rdev->family == CHIP_RV410 ||
		    rdev->family == CHIP_R420 ||
		    rdev->family == CHIP_R423)
			trbs_ff = memtrbs_r4xx[data];
		else
			trbs_ff = memtrbs[data];
		tcas_ff.FULL += trbs_ff.FULL;
	}

    sclk_eff_ff.FULL = sclk_ff.FULL;

	if (rdev->flags & RADEON_IS_AGP) {
		Fixed20_12 agpmode_ff;
		agpmode_ff.FULL = DFixedConst(radeon_agpmode);
		temp_ff.FULL = DFixedConst666(16);
		sclk_eff_ff.FULL -= DFixedMul(agpmode_ff, temp_ff);
	}
	/* TODO PCIE lanes may affect this - agpmode == 16?? */

	if (ASIC_IS_R300(rdev)) {
		sclk_delay_ff.FULL = DFixedConst(250);
	} else {
		if ((rdev->family == CHIP_RV100) ||
		    rdev->flags & RADEON_IS_IGP) {
			if (rdev->mc.vram_is_ddr)
				sclk_delay_ff.FULL = DFixedConst(41);
			else
				sclk_delay_ff.FULL = DFixedConst(33);
		} else {
			if (rdev->mc.vram_width == 128)
				sclk_delay_ff.FULL = DFixedConst(57);
			else
				sclk_delay_ff.FULL = DFixedConst(41);
		}
	}

	mc_latency_sclk.FULL = DFixedDiv(sclk_delay_ff, sclk_eff_ff);

	if (rdev->mc.vram_is_ddr) {
		if (rdev->mc.vram_width == 32) {
			k1.FULL = DFixedConst(40);
			c  = 3;
		} else {
			k1.FULL = DFixedConst(20);
			c  = 1;
		}
	} else {
		k1.FULL = DFixedConst(40);
		c  = 3;
	}

	temp_ff.FULL = DFixedConst(2);
	mc_latency_mclk.FULL = DFixedMul(trcd_ff, temp_ff);
	temp_ff.FULL = DFixedConst(c);
	mc_latency_mclk.FULL += DFixedMul(tcas_ff, temp_ff);
	temp_ff.FULL = DFixedConst(4);
	mc_latency_mclk.FULL += DFixedMul(tras_ff, temp_ff);
	mc_latency_mclk.FULL += DFixedMul(trp_ff, temp_ff);
	mc_latency_mclk.FULL += k1.FULL;

	mc_latency_mclk.FULL = DFixedDiv(mc_latency_mclk, mclk_ff);
	mc_latency_mclk.FULL += DFixedDiv(temp_ff, sclk_eff_ff);

	/*
	  HW cursor time assuming worst case of FULL size colour cursor.
	*/
	temp_ff.FULL = DFixedConst((2 * (cur_size - (rdev->mc.vram_is_ddr + 1))));
	temp_ff.FULL += trcd_ff.FULL;
	if (temp_ff.FULL < tras_ff.FULL)
		temp_ff.FULL = tras_ff.FULL;
	cur_latency_mclk.FULL = DFixedDiv(temp_ff, mclk_ff);

	temp_ff.FULL = DFixedConst(cur_size);
	cur_latency_sclk.FULL = DFixedDiv(temp_ff, sclk_eff_ff);
	/*
	  Find the total latency for the display data.
	*/
	disp_latency_overhead.FULL = DFixedConst(8);
	disp_latency_overhead.FULL = DFixedDiv(disp_latency_overhead, sclk_ff);
	mc_latency_mclk.FULL += disp_latency_overhead.FULL + cur_latency_mclk.FULL;
	mc_latency_sclk.FULL += disp_latency_overhead.FULL + cur_latency_sclk.FULL;

	if (mc_latency_mclk.FULL > mc_latency_sclk.FULL){
		disp_latency.FULL = mc_latency_mclk.FULL;
    }
	else{
		disp_latency.FULL = mc_latency_sclk.FULL;
    }
	/* setup Max GRPH_STOP_REQ default value */
	if (ASIC_IS_RV100(rdev)){
		max_stop_req = 0x5c;
    }
	else{
		max_stop_req = 0x7c;
    }
	if (mode1) {
		/*  CRTC1
		    Set GRPH_BUFFER_CNTL register using h/w defined optimal values.
		    GRPH_STOP_REQ <= MIN[ 0x7C, (CRTC_H_DISP + 1) * (bit depth) / 0x10 ]
		*/
		stop_req = mode1->hdisplay * pixel_bytes1 / 16;

		if (stop_req > max_stop_req)
			stop_req = max_stop_req;

		/*
		  Find the drain rate of the display buffer.
		*/
		temp_ff.FULL = DFixedConst((16/pixel_bytes1));
		disp_drain_rate.FULL = DFixedDiv(pix_clk, temp_ff);

		/*
		  Find the critical point of the display buffer.
		*/
		crit_point_ff.FULL = DFixedMul(disp_drain_rate, disp_latency);
		crit_point_ff.FULL += DFixedConstHalf(0);

		critical_point = DFixedTrunc(crit_point_ff);

		if (rdev->disp_priority == 2) {
			critical_point = 0;
		}

		/*
		  The critical point should never be above max_stop_req-4.  Setting
		  GRPH_CRITICAL_CNTL = 0 will thus force high priority all the time.
		*/
		if (max_stop_req - critical_point < 4){
			critical_point = 0;
        }
		if (critical_point == 0 && mode2 && rdev->family == CHIP_R300) {
			/* some R300 cards have problem with this set to 0, when CRTC2 is enabled.*/
			critical_point = 0x10;
		}

		temp = RREG32(RADEON_GRPH_BUFFER_CNTL);
		temp &= ~(RADEON_GRPH_STOP_REQ_MASK);
		temp |= (stop_req << RADEON_GRPH_STOP_REQ_SHIFT);
		temp &= ~(RADEON_GRPH_START_REQ_MASK);
		if ((rdev->family == CHIP_R350) &&
		    (stop_req > 0x15)) {
			stop_req -= 0x10;
		}
		temp |= (stop_req << RADEON_GRPH_START_REQ_SHIFT);
		temp |= RADEON_GRPH_BUFFER_SIZE;
		temp &= ~(RADEON_GRPH_CRITICAL_CNTL   |
			  RADEON_GRPH_CRITICAL_AT_SOF |
			  RADEON_GRPH_STOP_CNTL);
		/*
		  Write the result into the register.
		*/
		WREG32(RADEON_GRPH_BUFFER_CNTL, ((temp & ~RADEON_GRPH_CRITICAL_POINT_MASK) |
						       (critical_point << RADEON_GRPH_CRITICAL_POINT_SHIFT)));

#if 0
		if ((rdev->family == CHIP_RS400) ||
		    (rdev->family == CHIP_RS480)) {
			/* attempt to program RS400 disp regs correctly ??? */
			temp = RREG32(RS400_DISP1_REG_CNTL);
			temp &= ~(RS400_DISP1_START_REQ_LEVEL_MASK |
				  RS400_DISP1_STOP_REQ_LEVEL_MASK);
			WREG32(RS400_DISP1_REQ_CNTL1, (temp |
						       (critical_point << RS400_DISP1_START_REQ_LEVEL_SHIFT) |
						       (critical_point << RS400_DISP1_STOP_REQ_LEVEL_SHIFT)));
			temp = RREG32(RS400_DMIF_MEM_CNTL1);
			temp &= ~(RS400_DISP1_CRITICAL_POINT_START_MASK |
				  RS400_DISP1_CRITICAL_POINT_STOP_MASK);
			WREG32(RS400_DMIF_MEM_CNTL1, (temp |
						      (critical_point << RS400_DISP1_CRITICAL_POINT_START_SHIFT) |
						      (critical_point << RS400_DISP1_CRITICAL_POINT_STOP_SHIFT)));
		}
#endif

		LouPrint("GRPH_BUFFER_CNTL from to %h\n",
			  /* 	  (unsigned int)info->SavedReg->grph_buffer_cntl, */
			  (unsigned int)RREG32(RADEON_GRPH_BUFFER_CNTL));
	}

	if (mode2) {
		uint32_t grph2_cntl;
		stop_req = mode2->hdisplay * pixel_bytes2 / 16;

		if (stop_req > max_stop_req){
			stop_req = max_stop_req;
        }
		/*
		  Find the drain rate of the display buffer.
		*/
		temp_ff.FULL = DFixedConst((16/pixel_bytes2));
		disp_drain_rate2.FULL = DFixedDiv(pix_clk2, temp_ff);

		grph2_cntl = RREG32(RADEON_GRPH2_BUFFER_CNTL);
		grph2_cntl &= ~(RADEON_GRPH_STOP_REQ_MASK);
		grph2_cntl |= (stop_req << RADEON_GRPH_STOP_REQ_SHIFT);
		grph2_cntl &= ~(RADEON_GRPH_START_REQ_MASK);
		if ((rdev->family == CHIP_R350) &&
		    (stop_req > 0x15)) {
			stop_req -= 0x10;
		}
		grph2_cntl |= (stop_req << RADEON_GRPH_START_REQ_SHIFT);
		grph2_cntl |= RADEON_GRPH_BUFFER_SIZE;
		grph2_cntl &= ~(RADEON_GRPH_CRITICAL_CNTL   |
			  RADEON_GRPH_CRITICAL_AT_SOF |
			  RADEON_GRPH_STOP_CNTL);

		if ((rdev->family == CHIP_RS100) ||
		    (rdev->family == CHIP_RS200)){
			critical_point2 = 0;
        }
		else {
			temp = (rdev->mc.vram_width * rdev->mc.vram_is_ddr + 1)/128;
			temp_ff.FULL = DFixedConst(temp);
			temp_ff.FULL = DFixedMul(mclk_ff, temp_ff);
			if (sclk_ff.FULL < temp_ff.FULL)
				temp_ff.FULL = sclk_ff.FULL;

			read_return_rate.FULL = temp_ff.FULL;

			if (mode1) {
				temp_ff.FULL = read_return_rate.FULL - disp_drain_rate.FULL;
				time_disp1_drop_priority.FULL = DFixedDiv(crit_point_ff, temp_ff);
			} else {
				time_disp1_drop_priority.FULL = 0;
			}
			crit_point_ff.FULL = disp_latency.FULL + time_disp1_drop_priority.FULL + disp_latency.FULL;
			crit_point_ff.FULL = DFixedMul(crit_point_ff, disp_drain_rate2);
			crit_point_ff.FULL += DFixedConstHalf(0);

			critical_point2 = DFixedTrunc(crit_point_ff);

			if (rdev->disp_priority == 2) {
				critical_point2 = 0;
			}

			if (max_stop_req - critical_point2 < 4)
				critical_point2 = 0;

		}

		if (critical_point2 == 0 && rdev->family == CHIP_R300) {
			/* some R300 cards have problem with this set to 0 */
			critical_point2 = 0x10;
		}

		WREG32(RADEON_GRPH2_BUFFER_CNTL, ((grph2_cntl & ~RADEON_GRPH_CRITICAL_POINT_MASK) |
						  (critical_point2 << RADEON_GRPH_CRITICAL_POINT_SHIFT)));

		if ((rdev->family == CHIP_RS400) ||
		    (rdev->family == CHIP_RS480)) {
#if 0
			/* attempt to program RS400 disp2 regs correctly ??? */
			temp = RREG32(RS400_DISP2_REQ_CNTL1);
			temp &= ~(RS400_DISP2_START_REQ_LEVEL_MASK |
				  RS400_DISP2_STOP_REQ_LEVEL_MASK);
			WREG32(RS400_DISP2_REQ_CNTL1, (temp |
						       (critical_point2 << RS400_DISP1_START_REQ_LEVEL_SHIFT) |
						       (critical_point2 << RS400_DISP1_STOP_REQ_LEVEL_SHIFT)));
			temp = RREG32(RS400_DISP2_REQ_CNTL2);
			temp &= ~(RS400_DISP2_CRITICAL_POINT_START_MASK |
				  RS400_DISP2_CRITICAL_POINT_STOP_MASK);
			WREG32(RS400_DISP2_REQ_CNTL2, (temp |
						       (critical_point2 << RS400_DISP2_CRITICAL_POINT_START_SHIFT) |
						       (critical_point2 << RS400_DISP2_CRITICAL_POINT_STOP_SHIFT)));
#endif
			WREG32(RS400_DISP2_REQ_CNTL1, 0x105DC1CC);
			WREG32(RS400_DISP2_REQ_CNTL2, 0x2749D000);
			WREG32(RS400_DMIF_MEM_CNTL1,  0x29CA71DC);
			WREG32(RS400_DISP1_REQ_CNTL1, 0x28FBC3AC);
		}

		LouPrint("GRPH2_BUFFER_CNTL from to %h\n",
			  (unsigned int)RREG32(RADEON_GRPH2_BUFFER_CNTL));
	}

	/* Save number of lines the linebuffer leads before the scanout */
	if (mode1){
	    rdev->mode_info.crtcs[0]->lb_vblank_lead_lines = DIV_ROUND_UP(lb_size, mode1->crtc_hdisplay);
    }
	if (mode2){
	    rdev->mode_info.crtcs[1]->lb_vblank_lead_lines = DIV_ROUND_UP(lb_size, mode2->crtc_hdisplay);
    }

}

LOUSTATUS R100RingTest(struct radeon_device *rdev, struct radeon_ring *ring){
    uint32_t scratch;
    uint32_t tmp = 0;
    LONG i;
    LOUSTATUS Status = STATUS_SUCCESS;

    Status = RadeonScratchGet(rdev, &scratch);
    if(!NT_SUCCESS(Status)){
        LouPrint("RAdeon Error:%h : Cp Failed To Get Scratch\n", Status);
        return Status;
    }
    WREG32(scratch, 0xCAFEDEAD);
    Status = RadeonRingLock(rdev, ring, 2);
    if(!NT_SUCCESS(Status)){
        LouPrint("Radeon Error:%h Cp Failed To Lock Ring\n");
        RadeonScratchFree(rdev, scratch);
        return Status;
    }
    RadeonRingWrite(ring, PACKET0(scratch, 0));
    RadeonRingWrite(ring, 0xDEADBEEF);
    RadeonRingUnlockCommit(rdev, ring, false);

    for(i = 0; i < rdev->usec_timeout; i+=2){
        tmp = RREG32(scratch);
        if(tmp == 0xDEADBEEF){
            break;
        }
        sleep(2);
    }
    if(i < rdev->usec_timeout){
        LouPrint("Ring Test Succeded In %d Milliseconds\n", i);
    }else{
        LouPrint("Radeon Error:%h : Ring Test Failed\n",Status);
    }
    RadeonScratchFree(rdev, scratch);
    return STATUS_SUCCESS;
}

void R100RingIbExecute(struct radeon_device *rdev, struct radeon_ib *ib){
    struct radeon_ring* ring = (struct radeon_ring*)LouKeCastToUnalignedPointer(&rdev->ring[RADEON_RING_TYPE_GFX_INDEX]);
    	if (ring->rptr_save_reg) {
		uint32_t next_rptr = ring->wptr + 2 + 3;
		RadeonRingWrite(ring, PACKET0(ring->rptr_save_reg, 0));
		RadeonRingWrite(ring, next_rptr);
	}
	RadeonRingWrite(ring, PACKET0(RADEON_CP_IB_BASE, 1));
	RadeonRingWrite(ring, ib->gpu_addr);
	RadeonRingWrite(ring, ib->length_dw);
}

LOUSTATUS R100IbTest(struct radeon_device *rdev, struct radeon_ring *ring){

    struct radeon_ib ib;
    uint32_t scratch;
    uint32_t tmp = 0;
    LONG i;
    LOUSTATUS Status = STATUS_SUCCESS;

    Status = RadeonScratchGet(rdev, &scratch);
    if(!NT_SUCCESS(Status)){
        LouPrint("Radeon Error:%h : Failed To Get Scratch Register\n", Status);
        return Status;
    }
    WREG32(scratch, 0xCAFEDEAD);
	Status = RadeonIbGet(rdev, RADEON_RING_TYPE_GFX_INDEX, &ib, 0x00, 256);
    if(!NT_SUCCESS(Status)){
        LouPrint("Radeon Error:%h : Failed To Get Ib\n", Status);
        //im not using goto so fuck off
        RadeonScratchFree(rdev, scratch);
        return Status;
    }
	ib.ptr[0] = PACKET0(scratch, 0);
	ib.ptr[1] = 0xDEADBEEF;
	ib.ptr[2] = PACKET2(0);
	ib.ptr[3] = PACKET2(0);
	ib.ptr[4] = PACKET2(0);
	ib.ptr[5] = PACKET2(0);
	ib.ptr[6] = PACKET2(0);
	ib.ptr[7] = PACKET2(0);
    ib.length_dw = 8;

    Status = RadeonIbSchedule(rdev, &ib, 0x00, false);
    if(!NT_SUCCESS(Status)){
        LouPrint("Radeon Error:%h : Failed To Schedule ib\n", Status);
        //still not doing it
        RadeonIbFree(rdev, &ib);
        RadeonScratchFree(rdev, scratch);
        return Status;
    }
    Status = RadeonFenceWaitTimeout(ib.fence, false, (RADEON_USEC_IB_TEST_TIMEOUT / 1000));
    if(!NT_SUCCESS(Status)){
        //you wont break me...
        LouPrint("Radeon Error:%h : Fence Wait Failed\n", Status);
        RadeonIbFree(rdev, &ib);
        RadeonScratchFree(rdev, scratch);
        return Status;
    }else if(Status == STATUS_TIMEOUT){
        //uh uh not happening
        LouPrint("Radeon Error:%h : Fence Wait Failed\n", Status);
        RadeonIbFree(rdev, &ib);
        RadeonScratchFree(rdev, scratch);
        return Status;
    }
    Status = STATUS_SUCCESS;
    for(i = 0; i < rdev->usec_timeout; i+=2){
        tmp = RREG32(scratch);
        if(tmp == 0xDEADBEEF){
            break;
        }
        sleep(2);
    }
    if(i < rdev->usec_timeout){
        LouPrint("Ib Succeded In %d Milliseconds\n", i);
    }else{
        LouPrint("Radeon Test Failed\n");
        Status = STATUS_NO_SUCH_DEVICE;
    }
    //hahaha i surrvived
    RadeonIbFree(rdev, &ib);
    RadeonScratchFree(rdev, scratch);
    return Status;
}


LOUSTATUS R100CpInit(
    struct radeon_device* rdev
){
    LOUSTATUS Status = STATUS_SUCCESS;



    return Status;
}

void R100InterruptSet(
    struct radeon_device* rdev
){

}

LOUSTATUS R100PciGartEnable(
    struct radeon_device* rdev
){
    LOUSTATUS Status = STATUS_SUCCESS;



    return Status;
}

static void R100ClockStartup(
    struct radeon_device* rdev
){
    uint32_t tmp;

    if((radeon_dynclks != -1) && (radeon_dynclks)){
        //legacy clock
        RadeonLegacySetClockGating(rdev, 1);
    }
    tmp = RREG32_PLL(R_00000D_SCLK_CNTL);
	tmp |= S_00000D_FORCE_CP(1) | S_00000D_FORCE_VIP(1);
	if ((rdev->family == CHIP_RV250) || (rdev->family == CHIP_RV280))
		tmp |= S_00000D_FORCE_DISP1(1) | S_00000D_FORCE_DISP2(1);
	WREG32_PLL(R_00000D_SCLK_CNTL, tmp);
}

void R100McProgram(
    struct radeon_device* rdev
){
    
    struct r100_mc_save save;

    R100McStop(rdev, &save);
    if(rdev->flags & RADEON_IS_AGP){
		WREG32(R_00014C_MC_AGP_LOCATION,
			S_00014C_MC_AGP_START(rdev->mc.gtt_start >> 16) |
			S_00014C_MC_AGP_TOP(rdev->mc.gtt_end >> 16));
		WREG32(R_000170_AGP_BASE, (rdev->mc.agp_base & 0xFFFFFFFF)); //grab the lower 32 bits
		if (rdev->family > CHIP_RV200)
			WREG32(R_00015C_AGP_BASE_2,
				(rdev->mc.agp_base >> 32) & 0xff);//grab the upper 32 bits
    }else{//most likely Pci
		WREG32(R_00014C_MC_AGP_LOCATION, 0x0FFFFFFF);
		WREG32(R_000170_AGP_BASE, 0);
		if (rdev->family > CHIP_RV200)
			WREG32(R_00015C_AGP_BASE_2, 0);
    }

    if(R100McWaitForIdle(rdev)){
        LouPrint("Warning: Wait For Mc Idle TimeOut...\n" );
    }

    WREG32(R_000148_MC_FB_LOCATION,
		S_000148_MC_FB_START(rdev->mc.vram_start >> 16) |
		S_000148_MC_FB_TOP(rdev->mc.vram_end >> 16));
    
    R100McResume(rdev, &save);
}

void R100SetCommonRegs(
    struct radeon_device* rdev
){
    bool force_dac2 = false;
	uint32_t tmp;

    PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
    GetPciConfiguration(rdev->pdev->bus,rdev->pdev->slot, rdev->pdev->func, PciConfig);

	/* set these so they don't interfere with anything */
	WREG32(RADEON_OV0_SCALE_CNTL, 0);
	WREG32(RADEON_SUBPIC_CNTL, 0);
	WREG32(RADEON_VIPH_CONTROL, 0);
	WREG32(RADEON_I2C_CNTL_1, 0);
	WREG32(RADEON_DVI_I2C_CNTL_1, 0);
	WREG32(RADEON_CAP0_TRIG_CNTL, 0);
	WREG32(RADEON_CAP1_TRIG_CNTL, 0);

	/* always set up dac2 on rn50 and some rv100 as lots
	 * of servers seem to wire it up to a VGA port but
	 * don't report it in the bios connector
	 * table.
	 */
	switch (PciConfig->Header.DeviceID) {
		/* RN50 */
	case 0x515e:
	case 0x5969:
		force_dac2 = true;
		break;
		/* RV100*/
	case 0x5159:
	case 0x515a:
		/* DELL triple head servers */
		if ((PciConfig->Header.u.type0.SubVendorID == 0x1028 /* DELL */) &&
		    ((PciConfig->Header.u.type0.SubSystemID == 0x016c) ||
		     (PciConfig->Header.u.type0.SubSystemID == 0x016d) ||
		     (PciConfig->Header.u.type0.SubSystemID == 0x016e) ||
		     (PciConfig->Header.u.type0.SubSystemID == 0x016f) ||
		     (PciConfig->Header.u.type0.SubSystemID == 0x0170) ||
		     (PciConfig->Header.u.type0.SubSystemID == 0x017d) ||
		     (PciConfig->Header.u.type0.SubSystemID == 0x017e) ||
		     (PciConfig->Header.u.type0.SubSystemID == 0x0183) ||
		     (PciConfig->Header.u.type0.SubSystemID == 0x018a) ||
		     (PciConfig->Header.u.type0.SubSystemID == 0x019a)))
			force_dac2 = true;
		break;
	}

	if (force_dac2) {
		uint32_t disp_hw_debug = RREG32(RADEON_DISP_HW_DEBUG);
		uint32_t tv_dac_cntl = RREG32(RADEON_TV_DAC_CNTL);
		uint32_t dac2_cntl = RREG32(RADEON_DAC_CNTL2);

		/* For CRT on DAC2, don't turn it on if BIOS didn't
		   enable it, even it's detected.
		*/

		/* force it to crtc0 */
		dac2_cntl &= ~RADEON_DAC2_DAC_CLK_SEL;
		dac2_cntl |= RADEON_DAC2_DAC2_CLK_SEL;
		disp_hw_debug |= RADEON_CRT2_DISP1_SEL;

		/* set up the TV DAC */
		tv_dac_cntl &= ~(RADEON_TV_DAC_PEDESTAL |
				 RADEON_TV_DAC_STD_MASK |
				 RADEON_TV_DAC_RDACPD |
				 RADEON_TV_DAC_GDACPD |
				 RADEON_TV_DAC_BDACPD |
				 RADEON_TV_DAC_BGADJ_MASK |
				 RADEON_TV_DAC_DACADJ_MASK);
		tv_dac_cntl |= (RADEON_TV_DAC_NBLANK |
				RADEON_TV_DAC_NHOLD |
				RADEON_TV_DAC_STD_PS2 |
				(0x58 << 16));

		WREG32(RADEON_TV_DAC_CNTL, tv_dac_cntl);
		WREG32(RADEON_DISP_HW_DEBUG, disp_hw_debug);
		WREG32(RADEON_DAC_CNTL2, dac2_cntl);
	}

	/* switch PM block to ACPI mode */
	tmp = RREG32_PLL(RADEON_PLL_PWRMGT_CNTL);
	tmp &= ~RADEON_PM_MODE_SEL;
	WREG32_PLL(RADEON_PLL_PWRMGT_CNTL, tmp);
    LouFree((RAMADD)PciConfig);
}

void R100VgaRenderDisable(
    struct radeon_device* rdev
){
	uint32_t tmp;

	tmp = RREG8(R_0003C2_GENMO_WT);
	WREG8(R_0003C2_GENMO_WT, C_0003C2_VGA_RAM_EN & tmp);
}

void R100InitScratch(
    struct radeon_device* rdev
){

}

void R100SanityCheck(
    struct radeon_device* rdev
){
    uint32_t TMP;

    TMP = RREG32(RADEON_CP_CSQ_CNTL);
    if(TMP){
        WREG32(RADEON_CP_CSQ_CNTL, 0);
    }
    TMP = RREG32(RADEON_CP_RB_CNTL);
    if(TMP){
        WREG32(RADEON_CP_RB_CNTL, 0);
    }
    TMP = RREG32(RADEON_SCRATCH_UMSK);
    if(TMP){
        WREG32(RADEON_SCRATCH_UMSK, 0);
    }

}

void R100Errata(
    struct radeon_device* rdev
){
	rdev->pll_errata = 0;
	if (rdev->family == CHIP_RV200 || rdev->family == CHIP_RS200) {
		rdev->pll_errata |= CHIP_ERRATA_PLL_DUMMYREADS;
	}
	if (rdev->family == CHIP_RV100 ||
	    rdev->family == CHIP_RS100 ||
	    rdev->family == CHIP_RS200) {
		rdev->pll_errata |= CHIP_ERRATA_PLL_DELAY;
	}  
}

void R100VRamGetType(struct radeon_device* rdev){

}

uint64_t R100GetAccessibleVRam(struct radeon_device* rdev){

    uint64_t tmp;
    rdev->mc.vram_is_ddr = false;
	if (rdev->flags & RADEON_IS_IGP){
		rdev->mc.vram_is_ddr = true;
    }
	else if (RREG32(RADEON_MEM_SDRAM_MODE_REG) & RADEON_MEM_CFG_TYPE_DDR){
		rdev->mc.vram_is_ddr = true;
    }
    if ((rdev->family == CHIP_RV100) ||
	    (rdev->family == CHIP_RS100) ||
	    (rdev->family == CHIP_RS200)) {
		tmp = RREG32(RADEON_MEM_CNTL);
		if (tmp & RV100_HALF_MODE) {
			rdev->mc.vram_width = 32;
		} else {
			rdev->mc.vram_width = 64;
		}
		if (rdev->flags & RADEON_SINGLE_CRTC) {
			rdev->mc.vram_width /= 4;
			rdev->mc.vram_is_ddr = true;
		}
	} else if (rdev->family <= CHIP_RV280) {
		tmp = RREG32(RADEON_MEM_CNTL);
		if (tmp & RADEON_MEM_NUM_CHANNELS_MASK) {
			rdev->mc.vram_width = 128;
		} else {
			rdev->mc.vram_width = 64;
		}
	} else {
		/* newer IGPs */
		rdev->mc.vram_width = 128;
	}
    return 0;
}

void R100VRamInitSizes(struct radeon_device *rdev){
    UNUSED uint64_t config_aper_size;

    PPCI_COMMON_CONFIG PciConfig = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
    GetPciConfiguration(rdev->pdev->bus,rdev->pdev->slot,rdev->pdev->func,PciConfig);
	/* work out accessible VRAM */
	rdev->mc.aper_base = (uint64_t)LouKeHalGetPciVirtualBaseAddress(PciConfig, 0);
	rdev->mc.aper_size = LouKeVMemmoryGetSize(rdev->mc.aper_base);
	rdev->mc.visible_vram_size = R100GetAccessibleVRam(rdev);
	/* FIXME we don't use the second aperture yet when we could use it */
	if (rdev->mc.visible_vram_size > rdev->mc.aper_size){
		rdev->mc.visible_vram_size = rdev->mc.aper_size;
    }
	config_aper_size = RREG32(RADEON_CONFIG_APER_SIZE);
	if (rdev->flags & RADEON_IS_IGP) {
		uint32_t tom;
		/* read NB_TOM to get the amount of ram stolen for the GPU */
		tom = RREG32(RADEON_NB_TOM);
		rdev->mc.real_vram_size = (((tom >> 16) - (tom & 0xffff) + 1) << 16);
		WREG32(RADEON_CONFIG_MEMSIZE, rdev->mc.real_vram_size);
		rdev->mc.mc_vram_size = rdev->mc.real_vram_size;
	} else {
		rdev->mc.real_vram_size = RREG32(RADEON_CONFIG_MEMSIZE);
		/* Some production boards of m6 will report 0
		 * if it's 8 MB
		 */
		if (rdev->mc.real_vram_size == 0) {
			rdev->mc.real_vram_size = 8192 * 1024;
			WREG32(RADEON_CONFIG_MEMSIZE, rdev->mc.real_vram_size);
		}
		/* Fix for RN50, M6, M7 with 8/16/32(??) MBs of VRAM -
		 * Novell bug 204882 + along with lots of ubuntu ones
		 */
		if (rdev->mc.aper_size > config_aper_size){
			config_aper_size = rdev->mc.aper_size;
        }
		if (config_aper_size > rdev->mc.real_vram_size){
			rdev->mc.mc_vram_size = config_aper_size;
        }
		else{
			rdev->mc.mc_vram_size = rdev->mc.real_vram_size;
        }
	}
    LouFree((RAMADD)PciConfig);
}

void R100McInit(
    struct radeon_device* rdev
){  
    UNUSED uint64_t base;

    R100VRamGetType(rdev);
	R100VRamInitSizes(rdev);
	base = rdev->mc.aper_base;
	if (rdev->flags & RADEON_IS_IGP){
		base = (RREG32(RADEON_NB_TOM) & 0xffff) << 16;
    }
	RadeonVRamLocation(rdev, (struct radeon_mc*)LouKeCastToUnalignedPointer(&rdev->mc), base);
	rdev->mc.gtt_base_align = 0;
	if (!(rdev->flags & RADEON_IS_AGP)){
		RadeonGttLocation(rdev, (struct radeon_mc*)LouKeCastToUnalignedPointer(&rdev->mc));
    }
	RadeonUpdateBandwidthInfo(rdev);
}

static void R100SetSafeRegisters(
    struct radeon_device* rdev
){
	if (ASIC_IS_RN50(rdev)) {
		rdev->config.r100.reg_safe_bm = rn50_reg_safe_bm;
		rdev->config.r100.reg_safe_bm_size = ARRAY_SIZE(rn50_reg_safe_bm);
	} else if (rdev->family < CHIP_R200) {
		rdev->config.r100.reg_safe_bm = r100_reg_safe_bm;
		rdev->config.r100.reg_safe_bm_size = ARRAY_SIZE(r100_reg_safe_bm);
	} else {
		R200SetSafeRegisters(rdev);
	}
}

LOUSTATUS R100Startup(
    struct radeon_device* rdev
){
    LOUSTATUS Status = STATUS_SUCCESS;

    //set common Registers    
    R100SetCommonRegs(rdev);
    //Program Mc 
    R100McProgram(rdev);
    //resume clock
    R100ClockStartup(rdev);
    //enable bm
    R100EnableBm(rdev);
    //enable Gart
    if(rdev->flags & RADEON_IS_PCI){
        Status = R100PciGartEnable(rdev);
        if(!NT_SUCCESS(Status))return Status;
    }

    Status = RadeonWbInit(rdev);
    if(!NT_SUCCESS(Status))return Status;

    Status = RadeonFenceDriverStartRing(rdev, RADEON_RING_TYPE_GFX_INDEX);
    if(!NT_SUCCESS(Status)){
        LouPrint("Error:%h : Failed To Initialize CP Fences\n");    
        return Status;
    }

    //enable interrupts
    if(!rdev->irq.installed){
        Status = RadeonEnabelInterrupts(rdev);
        if(!NT_SUCCESS(Status))return Status;
    }

    R100InterruptSet(rdev);
    rdev->config.r100.hdp_cntl = RREG32(RADEON_HOST_PATH_CNTL);
    Status = R100CpInit(rdev);
    if(!NT_SUCCESS(Status)){
        LouPrint("Error:%h : Failed To Initialize CP\n", Status);
        return Status;
    }

    Status = RadeonIbPoolInit(rdev);    
    if(!NT_SUCCESS(Status)){
        LouPrint("Error:%h : Failed To Initialize IB\n", Status);
        return Status;
    }

    return STATUS_SUCCESS;
}

void R100CpDisable(
    struct radeon_device* rdev
){

}

void R100PciGartDisable(
    struct radeon_device* rdev
){

}

LOUSTATUS InitializeAmdR100Gpu(
    P_PCI_DEVICE_OBJECT PDEV
){
    LOUSTATUS Status = STATUS_SUCCESS;
    //allocate the data needed 
    PDEV->DeviceExtendedObject = (uintptr_t)LouMalloc(sizeof(struct radeon_device));
    
    struct radeon_device* rdev = (struct radeon_device*)PDEV->DeviceExtendedObject;
    rdev->pdev = PDEV;

    //Disable Vga
    R100VgaRenderDisable(rdev);
    //Init Scratch Registers
    R100InitScratch(rdev);
    //init surface registers
    RadeonSurfaceInit(rdev);
    //Sanity Check Registers to make sure nothig will break
    R100SanityCheck(rdev);

    if(!RadeonGetBios(rdev)){
        if(ASIC_IS_AVIVO(rdev)){
            return STATUS_NO_SUCH_DEVICE;
        }
    }
    //reset Gpu So ATOM Dosent Go Infinate
    if(rdev->is_atom_bios){
        LouPrint("Expecting combios for RS400/RS480 GPU: Devic Obect At : %h\n", PDEV);
        return STATUS_NO_SUCH_DEVICE;
    }
    //check cards are posted
    Status = RadeonComBiosInit(rdev);
    if(!NT_SUCCESS(Status))return Status;

    if(RadeonAsicReset(rdev)){
        LouPrint("Warning GPU Device Reset Failed\nDevice Status: %h : %h\n",
         RREG32(R_000E40_RBBM_STATUS), 
         RREG32(R_0007C0_CP_STAT));
    }

    if(RadeonBootTestPostCard(rdev) == false){
        return STATUS_NO_SUCH_DEVICE;
    }    
    //set asic errata
    R100Errata(rdev);
    //initialize clocks
    Status = RadeonGetClockInfo(rdev->ddev);
    if(!NT_SUCCESS(Status))return STATUS_UNSUCCESSFUL;
    //initialize agp
    if(rdev->flags & RADEON_IS_AGP){
        if(!NT_SUCCESS(RadeonAgpInit(rdev))){
            RadeonAgpDisable(rdev);
        }
    }
    //initialize VRAM
    R100McInit(rdev);
    //fence driver
    Status = RadeonFenceDriverInit(rdev);
    if(!NT_SUCCESS(Status))return STATUS_UNSUCCESSFUL;
    //MM Init
    Status = RadeonBoInit(rdev);
    if(!NT_SUCCESS(Status))return Status;
    
    if (rdev->flags & RADEON_IS_PCI){
        Status = R100PciGartInit(rdev);
        if(!NT_SUCCESS(Status))return Status;
    }
    R100SetSafeRegisters(rdev);

    Status = RadeonPmInit(rdev);
    if(!NT_SUCCESS(Status))return STATUS_UNSUCCESSFUL;
    
    rdev->accel_working = true;

    Status = R100Startup(rdev);
    if(!NT_SUCCESS(Status)){
        LouPrint("Disableing Gpu Acceleration For Device At Address:%h\n", PDEV);
        R100CpDisable(rdev);
        RadeonWbDisable(rdev);
        RadeonIbPoolDiable(rdev);
        RadeonInteruptDisable(rdev);
        if (rdev->flags & RADEON_IS_PCI){
            R100PciGartDisable(rdev);   
        }
        rdev->accel_working = false;
    }

    return STATUS_SUCCESS;
}


void R100IoRReg(struct radeon_device* rdev, uint32_t Reg, uint32_t Value){
    if(Reg < rdev->rio_mem_size){
        READ_REGISTER_ULONG((PULONG)((uintptr_t)rdev->rio_mem + Reg));
    }else{
        READ_REGISTER_ULONG((PULONG)((uintptr_t)rdev->rio_mem + RADEON_MM_INDEX));
        READ_REGISTER_ULONG((PULONG)((uintptr_t)rdev->rio_mem + RADEON_MM_DATA));
    }
}

void R100IoWReg(struct radeon_device* rdev, uint32_t Reg, uint32_t Value){
    if(Reg < rdev->rio_mem_size){
        WRITE_REGISTER_ULONG((PULONG)((uintptr_t)rdev->rio_mem + Reg), Value);
    }else{
        WRITE_REGISTER_ULONG((PULONG)((uintptr_t)rdev->rio_mem + RADEON_MM_INDEX), Value);
        WRITE_REGISTER_ULONG((PULONG)((uintptr_t)rdev->rio_mem + RADEON_MM_DATA), Value);
    }
}