// SPDX-License-Identifier: MIT
/*
 * Copyright (C) 2017 Oracle Corporation
 * Authors: Hans de Goede <hdegoede@redhat.com>
 */

#include "vbox_drv.h"
#include "vboxvideo_vbe.h"
#include "hgsmi_defs.h"


int HgsmiSendCapsInfo(PLMPOOL_DIRECTORY ctx, uint32_t caps){


	return 0;
}

/* One-at-a-Time Hash from https://www.burtleburtle.net/bob/hash/doobs.html */
uint32_t HgsmiHashProcess(uint32_t hash, const uint8_t *data, int size)
{
	while (size--) {
		hash += *data++;
		hash += (hash << 10);
		hash ^= (hash >> 6);
	}

	return hash;
}

uint32_t HgsmiHashEnd(uint32_t hash)
{
	hash += (hash << 3);
	hash ^= (hash >> 11);
	hash += (hash << 15);

	return hash;
}

/* Not really a checksum but that is the naming used in all vbox code */
uint32_t HgsmiChecksum(uint32_t offset,
			  const struct hgsmi_buffer_header *header,
			  const struct hgsmi_buffer_tail *tail)
{
	uint32_t checksum;

	checksum = HgsmiHashProcess(0, (uint8_t*)&offset, sizeof(offset));
	checksum = HgsmiHashProcess(checksum, (uint8_t*)header, sizeof(*header));
	/* 4 -> Do not checksum the checksum itself */
	checksum = HgsmiHashProcess(checksum, (uint8_t*)tail, 4);

	return HgsmiHashEnd(checksum);
}



void *HgsmiBufferAlloc(PLMPOOL_DIRECTORY guest_pool, size_t size,
uint8_t channel, uint16_t channel_info
){
	struct hgsmi_buffer_header *h;
	struct hgsmi_buffer_tail *t;
	size_t total_size;
	UNUSED uint64_t Offset;

	total_size = size + sizeof(*h) + sizeof(*t);
	h = (struct hgsmi_buffer_header*)LouKeMallocFromPool(guest_pool, total_size, &Offset);
	if (!h)
		return 0x00;

    // Calculate the tail position after the data section
    t = (struct hgsmi_buffer_tail *)((uint8_t*)h + sizeof(*h) + size);

    // Initialize the header fields
    h->flags = HGSMI_BUFFER_HEADER_F_SEQ_SINGLE;
    h->data_size = size;
    h->channel = channel;
    h->channel_info = channel_info;
    memset(&h->u.header_data, 0, sizeof(h->u.header_data));

    // Initialize the tail fields
    t->reserved = 0;
    t->checksum = HgsmiChecksum(Offset, h, t);

    // Return the pointer to the data section
    return (uint8_t *)h + sizeof(*h);
}

void HgsmiBufferFree(
    PLMPOOL_DIRECTORY guest_pool, 
    void *buf
){
	struct hgsmi_buffer_header *h =
		(struct hgsmi_buffer_header *)((uint8_t*)buf - sizeof(*h));
	size_t total_size = h->data_size + sizeof(*h) +
					     sizeof(struct hgsmi_buffer_tail);

	LouKeFreeFromPool(guest_pool, h, total_size);
}


int HgsmiBufferSubmit(PLMPOOL_DIRECTORY guest_pool, void *buf) {
    uint64_t offset;

    // Adjust the buffer pointer by subtracting the size of the header
    uintptr_t adjusted_buf = (uintptr_t)buf - sizeof(struct hgsmi_buffer_header);

    // Use RequestPhysicalAddress to get the physical address of the buffer
    if(!NT_SUCCESS(RequestPhysicalAddress((uint64_t)adjusted_buf, &offset))){
		return STATUS_UNSUCCESSFUL;
	}
	LouPrint("Offset:%d\n", offset);
    // Output the physical address to the hardware (VGA_PORT_HGSMI_GUEST)
    outl(offset, VGA_PORT_HGSMI_GUEST);

    return STATUS_SUCCESS;
}