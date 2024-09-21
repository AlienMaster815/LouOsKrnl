/* SPDX-License-Identifier: MIT */
/*
 * Copyright (C) 2013-2017 Oracle Corporation
 * This file is based on ast_drv.h
 * Copyright 2012 Red Hat Inc.
 * Authors: Dave Airlie <airlied@redhat.com>
 *          Michael Thayer <michael.thayer@oracle.com,
 *          Hans de Goede <hdegoede@redhat.com>
 */
#ifndef __VBOX_DRV_H__
#define __VBOX_DRV_H__

#include <LouDDK.h>
#include <NtAPI.h>

#include "vboxvideo_guest.h"
#include "vboxvideo_vbe.h"
#include "hgsmi_ch_setup.h"

#define DRIVER_NAME         "vboxvideo"
#define DRIVER_DESC         "Oracle VM VirtualBox Graphics Card"
#define DRIVER_DATE         "20130823"

#define DRIVER_MAJOR        1
#define DRIVER_MINOR        0
#define DRIVER_PATCHLEVEL   0

#define VBOX_MAX_CURSOR_WIDTH  64
#define VBOX_MAX_CURSOR_HEIGHT 64
#define CURSOR_PIXEL_COUNT (VBOX_MAX_CURSOR_WIDTH * VBOX_MAX_CURSOR_HEIGHT)
#define CURSOR_DATA_SIZE (CURSOR_PIXEL_COUNT * 4 + CURSOR_PIXEL_COUNT / 8)

#define VBOX_MAX_SCREENS  32

#define GUEST_HEAP_OFFSET(vbox) ((vbox)->full_vram_size - \
				 VBVA_ADAPTER_INFORMATION_SIZE)
#define GUEST_HEAP_SIZE   VBVA_ADAPTER_INFORMATION_SIZE
#define GUEST_HEAP_USABLE_SIZE (VBVA_ADAPTER_INFORMATION_SIZE - \
				sizeof(struct hgsmi_host_flags))
#define HOST_FLAGS_OFFSET GUEST_HEAP_USABLE_SIZE

struct vbox_private {
	/* Must be first; or we must define our own release callback */
	DrsdDevice ddev;

	uint8_t *guest_heap;
	uint8_t *vbva_buffers;
	struct gen_pool *guest_pool;
	struct vbva_buf_ctx *vbva_info;
	bool any_pitch;
	uint32_t num_crtcs;
	/* Amount of available VRAM, including space used for buffers. */
	uint32_t full_vram_size;
	/* Amount of available VRAM, not including space used for buffers. */
	uint32_t available_vram_size;
	/* Array of structures for receiving mode hints. */
	struct vbva_modehint *last_mode_hints;


	int fb_mtrr;

	mutex_t hw_mutex; /* protects modeset and accel/vbva accesses */
	void (*hotplug_work)(void*);
	uint32_t input_mapping_width;
	uint32_t input_mapping_height;
	/*
	 * Is user-space using an X.Org-style layout of one large frame-buffer
	 * encompassing all screen ones or is the fbdev console active?
	 */
	bool single_framebuffer;
	uint8_t cursor_data[CURSOR_DATA_SIZE];
};

#undef CURSOR_PIXEL_COUNT
#undef CURSOR_DATA_SIZE

struct vbox_connector {
	DrsdConnector base;
	char name[32];
	struct vbox_crtc *vbox_crtc;
	struct {
		uint32_t width;
		uint32_t height;
		bool disconnected;
	} mode_hint;
};

struct vbox_crtc {
	DrsdCrtc base;
	bool disconnected;
	unsigned int crtc_id;
	uint32_t fb_offset;
	bool cursor_enabled;
	uint32_t x_hint;
	uint32_t y_hint;
	/*
	 * When setting a mode we not only pass the mode to the hypervisor,
	 * but also information on how to map / translate input coordinates
	 * for the emulated USB tablet.  This input-mapping may change when
	 * the mode on *another* crtc changes.
	 *
	 * This means that sometimes we must do a modeset on other crtc-s then
	 * the one being changed to update the input-mapping. Including crtc-s
	 * which may be disabled inside the guest (shown as a black window
	 * on the host unless closed by the user).
	 *
	 * With atomic modesetting the mode-info of disabled crtcs gets zeroed
	 * yet we need it when updating the input-map to avoid resizing the
	 * window as a side effect of a mode_set on another crtc. Therefor we
	 * cache the info of the last mode below.
	 */
	uint32_t width;
	uint32_t height;
	uint32_t x;
	uint32_t y;
};

struct vbox_encoder {
	DrsdEncoder base;
};

#define to_vbox_crtc(x) container_of(x, struct vbox_crtc, base)
#define to_vbox_connector(x) container_of(x, struct vbox_connector, base)
#define to_vbox_encoder(x) container_of(x, struct vbox_encoder, base)
#define to_vbox_dev(x) container_of(x, struct vbox_private, ddev)

bool VboxCheckSupported(uint16_t id);
int VboxHwInit(struct vbox_private *vbox);
void VboxHwFini(struct vbox_private *vbox);

int VboxModeInit(struct vbox_private *vbox);
void VboxModeFini(struct vbox_private *vbox);

void VboxReportCaps(struct vbox_private *vbox);

int VboxMmInit(struct vbox_private *vbox);

/* vbox_irq.c */
int VboxIrqInit(struct vbox_private *vbox);
void VboxIrqFini(struct vbox_private *vbox);
void VboxReportHotplug(struct vbox_private *vbox);

/* vbox_hgsmi.c */
void *HgsmiBufferAlloc(struct gen_pool *guest_pool, size_t size,
			 uint8_t channel, uint16_t channel_info);
void HgsmiBufferFree(struct gen_pool *guest_pool, void *buf);
int HgsmiBufferSubmit(struct gen_pool *guest_pool, void *buf);

static inline void VboxWriteIoport(uint16_t index, uint16_t data)
{
	outw(index, VBE_DISPI_IOPORT_INDEX);
	outw(data, VBE_DISPI_IOPORT_DATA);
}

#endif