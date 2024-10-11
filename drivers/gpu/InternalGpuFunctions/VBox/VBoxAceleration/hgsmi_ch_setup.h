/* SPDX-License-Identifier: MIT */
/* Copyright (C) 2006-2017 Oracle Corporation */

#ifndef __HGSMI_CH_SETUP_H__
#define __HGSMI_CH_SETUP_H__

/*
 * Tell the host the location of hgsmi_host_flags structure, where the host
 * can write information about pending buffers, etc, and which can be quickly
 * polled by the guest without a need to port IO.
 */
#define HGSMI_CC_HOST_FLAGS_LOCATION 0
#pragma pack(push, 1)
struct hgsmi_buffer_location {
	uint32_t buf_location;
	uint32_t buf_len;
};

/* HGSMI setup and configuration data structures. */

#define HGSMIHOSTFLAGS_COMMANDS_PENDING    0x01u
#define HGSMIHOSTFLAGS_IRQ                 0x02u
#define HGSMIHOSTFLAGS_VSYNC               0x10u
#define HGSMIHOSTFLAGS_HOTPLUG             0x20u
#define HGSMIHOSTFLAGS_CURSOR_CAPABILITIES 0x40u

struct hgsmi_host_flags {
	uint32_t host_flags;
	uint32_t reserved[3];
};
#pragma pack(pop)

#endif