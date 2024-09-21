#include <LouDDK.h>
#include <NtAPI.h>
#include <Hal.h>

#include "vbox_drv.h"
#include "vboxvideo_guest.h"
#include "hgsmi_channels.h"

// SPDX-License-Identifier: MIT
/* Copyright (C) 2006-2017 Oracle Corporation */

uint32_t VbaBufferAvailable(const struct vbva_buffer* vbva){
    int32_t Diff = vbva->data_offset - vbva->free_offset;

    return Diff > 0 ? Diff : vbva->data_len + Diff;
}

void VbvaBufferPlaceDataAt(
    struct vbva_buf_ctx* vbva_ctx,
    const void* p, 
    uint32_t len, uint32_t offset
){

    struct vbva_buffer *vbva = vbva_ctx->vbva;
    uint32_t bytes_till_boundary = vbva->data_len - offset;
	uint8_t *dst = &vbva->data[offset];
	int32_t diff = len - bytes_till_boundary;

	if (diff <= 0) {
		/* Chunk will not cross buffer boundary. */
		memcpy(dst, p, len);
	} else {
		/* Chunk crosses buffer boundary. */
		memcpy(dst, p, bytes_till_boundary);
		memcpy(&vbva->data[0], (uint8_t *)p + bytes_till_boundary, diff);
	}

}

void VbvaBufferFlush(struct gen_pool *ctx)
{
	struct vbva_flush *p;

	p = (struct vbva_flush*)HgsmiBufferAlloc(ctx, sizeof(*p), HGSMI_CH_VBVA, VBVA_FLUSH);
	if (!p)
		return;

	p->reserved = 0;

	HgsmiBufferSubmit(ctx, p);
	HgsmiBufferFree(ctx, p);
}

bool VbvaWrite(struct vbva_buf_ctx *vbva_ctx, struct gen_pool *ctx,
		const void *p, uint32_t len)
{
	struct vbva_record *record;
	struct vbva_buffer *vbva;
	uint32_t available;

	vbva = vbva_ctx->vbva;
	record = vbva_ctx->record;

	if (!vbva || vbva_ctx->buffer_overflow ||
	    !record || !(record->len_and_flags & VBVA_F_RECORD_PARTIAL))
		return false;

	available = VbaBufferAvailable(vbva);

	while (len > 0) {
		uint32_t chunk = len;

		if (chunk >= available) {
			VbvaBufferFlush(ctx);
			available = VbaBufferAvailable(vbva);
		}

		//if (chunk >= available) {
		//	if (WARN_ON(available <= vbva->partial_write_tresh)) {
		//		vbva_ctx->buffer_overflow = true;
		//		return false;
		//	}
		//	chunk = available - vbva->partial_write_tresh;
		//}

		VbvaBufferPlaceDataAt(vbva_ctx, p, chunk,
					  vbva->free_offset);

		vbva->free_offset = (vbva->free_offset + chunk) %
				    vbva->data_len;
		record->len_and_flags += chunk;
		available -= chunk;
		len -= chunk;
		p = (void*)((uint64_t)p + (uint64_t)chunk);
	}

	return true;
}

bool VbvaInformHost(struct vbva_buf_ctx *vbva_ctx,
			     struct gen_pool *ctx, int32_t screen, bool enable)
{
	struct vbva_enable_ex *p;
	bool ret;

	p = (struct vbva_enable_ex*)HgsmiBufferAlloc(ctx, sizeof(*p), HGSMI_CH_VBVA, VBVA_ENABLE);
	if (!p)
		return false;

	p->base.flags = enable ? VBVA_F_ENABLE : VBVA_F_DISABLE;
	p->base.offset = vbva_ctx->buffer_offset;
	p->base.result = STATUS_NOT_SUPPORTED;
	if (screen >= 0) {
		p->base.flags |= VBVA_F_EXTENDED | VBVA_F_ABSOFFSET;
		p->screen_id = screen;
	}

	HgsmiBufferSubmit(ctx, p);

	if (enable)
		ret = p->base.result >= 0;
	else
		ret = true;

	HgsmiBufferFree(ctx, p);

	return ret;
}

void VbvaDisable(struct vbva_buf_ctx *vbva_ctx, struct gen_pool *ctx,
		  int32_t screen
){
	vbva_ctx->buffer_overflow = false;
	vbva_ctx->record = 0x00;
	vbva_ctx->vbva = 0x00;

	VbvaInformHost(vbva_ctx, ctx, screen, false);
}

bool VbvaEnable(struct vbva_buf_ctx *vbva_ctx, struct gen_pool *ctx,
		 struct vbva_buffer *vbva, int32_t screen
){
	bool ret = false;

	memset(vbva, 0, sizeof(*vbva));
	vbva->partial_write_tresh = 256;
	vbva->data_len = vbva_ctx->buffer_length - sizeof(struct vbva_buffer);
	vbva_ctx->vbva = vbva;

	ret = VbvaInformHost(vbva_ctx, ctx, screen, true);
	if (!ret)
		VbvaDisable(vbva_ctx, ctx, screen);

	return ret;
}

bool vbva_buffer_begin_update(struct vbva_buf_ctx *vbva_ctx,
			      struct gen_pool *ctx)
{
	struct vbva_record *record;
	uint32_t next;

	if (!vbva_ctx->vbva ||
	    !(vbva_ctx->vbva->host_flags.host_events & VBVA_F_MODE_ENABLED))
		return false;

	//WARN_ON(vbva_ctx->buffer_overflow || vbva_ctx->record);

	next = (vbva_ctx->vbva->record_free_index + 1) % VBVA_MAX_RECORDS;


	if (next == vbva_ctx->vbva->record_first_index)
		VbvaBufferFlush(ctx);

	if (next == vbva_ctx->vbva->record_first_index)
		return false;

	record = &vbva_ctx->vbva->records[vbva_ctx->vbva->record_free_index];
	record->len_and_flags = VBVA_F_RECORD_PARTIAL;
	vbva_ctx->vbva->record_free_index = next;

	vbva_ctx->record = record;

	return true;
}

void  VbvaBufferEndUpdate(struct vbva_buf_ctx *vbva_ctx)
{
	struct vbva_record *record = vbva_ctx->record;

	//WARN_ON(!vbva_ctx->vbva || !record ||
	//	!(record->len_and_flags & VBVA_F_RECORD_PARTIAL));

	record->len_and_flags &= ~VBVA_F_RECORD_PARTIAL;

	vbva_ctx->buffer_overflow = false;
	vbva_ctx->record = 0x00;
}



void VbvaSetupBufferContext(struct vbva_buf_ctx *vbva_ctx,
			       uint32_t buffer_offset, uint32_t buffer_length){
	vbva_ctx->buffer_offset = buffer_offset;
	vbva_ctx->buffer_length = buffer_length;
}
