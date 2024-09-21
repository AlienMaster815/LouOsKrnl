/* SPDX-License-Identifier: MIT */
/* Copyright (C) 2006-2016 Oracle Corporation */

#ifndef __VBOXVIDEO_GUEST_H__
#define __VBOXVIDEO_GUEST_H__

#include <LouDDK.h>
#include <NtAPI.h>

#include "vboxvideo.h"

/*
 * Structure grouping the context needed for sending graphics acceleration
 * information to the host via VBVA.  Each screen has its own VBVA buffer.
 */
struct vbva_buf_ctx {
	/* Offset of the buffer in the VRAM section for the screen */
	uint32_t buffer_offset;
	/* Length of the buffer in bytes */
	uint32_t buffer_length;
	/* Set if we wrote to the buffer faster than the host could read it */
	bool buffer_overflow;
	/* VBVA record that we are currently preparing for the host, or NULL */
	struct vbva_record *record;
	/*
	 * Pointer to the VBVA buffer mapped into the current address space.
	 * Will be NULL if VBVA is not enabled.
	 */
	struct vbva_buffer *vbva;
};

int HgsmiReportFlagsLocation(struct gen_pool *ctx, uint32_t location);
int HgsmiSendCapsInfo(struct gen_pool *ctx, uint32_t caps);
int HgsmiTestQueryConf(struct gen_pool *ctx);
int HgsmiQueryConf(struct gen_pool *ctx, uint32_t index, uint32_t *value_ret);
int HgsmiUpdatePointerShape(struct gen_pool *ctx, uint32_t flags,
			       uint32_t hot_x, uint32_t hot_y, uint32_t width, uint32_t height,
			       uint8_t *pixels, uint32_t len);
int HgsmiCursorPosition(struct gen_pool *ctx, bool report_position,
			  uint32_t x, uint32_t y, uint32_t *x_host, uint32_t *y_host);

bool VbvaEnable(struct vbva_buf_ctx *vbva_ctx, struct gen_pool *ctx,
		 struct vbva_buffer *vbva, int32_t screen);
void VbvaDisable(struct vbva_buf_ctx *vbva_ctx, struct gen_pool *ctx,
		  int32_t screen);
bool VbvaBufferBeginUpdate(struct vbva_buf_ctx *vbva_ctx,
			      struct gen_pool *ctx);
void VbvaBufferEndUpdate(struct vbva_buf_ctx *vbva_ctx);
bool VbvaWrite(struct vbva_buf_ctx *vbva_ctx, struct gen_pool *ctx,
		const void *p, uint32_t len);
void VbvaSetupBufferContext(struct vbva_buf_ctx *vbva_ctx,
			       uint32_t buffer_offset, uint32_t buffer_length);

void HgsmiProcessDisplayInfo(struct gen_pool *ctx, uint32_t display,
				int32_t origin_x, int32_t origin_y, uint32_t start_offset,
				uint32_t pitch, uint32_t width, uint32_t height,
				uint16_t bpp, uint16_t flags);
int HgsmiUpdateInputMapping(struct gen_pool *ctx, int32_t origin_x, int32_t origin_y,
			       uint32_t width, uint32_t height);
int HgsmiGetModeHints(struct gen_pool *ctx, unsigned int screens,
			 struct vbva_modehint *hints);

#endif