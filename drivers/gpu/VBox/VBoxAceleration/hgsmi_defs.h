/* SPDX-License-Identifier: MIT */
/* Copyright (C) 2006-2017 Oracle Corporation */

#ifndef __HGSMI_DEFS_H__
#define __HGSMI_DEFS_H__

/* Buffer sequence type mask. */
#define HGSMI_BUFFER_HEADER_F_SEQ_MASK     0x03
/* Single buffer, not a part of a sequence. */
#define HGSMI_BUFFER_HEADER_F_SEQ_SINGLE   0x00
/* The first buffer in a sequence. */
#define HGSMI_BUFFER_HEADER_F_SEQ_START    0x01
/* A middle buffer in a sequence. */
#define HGSMI_BUFFER_HEADER_F_SEQ_CONTINUE 0x02
/* The last buffer in a sequence. */
#define HGSMI_BUFFER_HEADER_F_SEQ_END      0x03

/* 16 bytes buffer header. */
struct hgsmi_buffer_header {
	uint32_t data_size;		/* Size of data that follows the header. */
	uint8_t flags;		/* HGSMI_BUFFER_HEADER_F_* */
	uint8_t channel;		/* The channel the data must be routed to. */
	uint16_t channel_info;	/* Opaque to the HGSMI, used by the channel. */

	union {
		/* Opaque placeholder to make the union 8 bytes. */
		uint8_t header_data[8];

		/* HGSMI_BUFFER_HEADER_F_SEQ_SINGLE */
		struct {
			uint32_t reserved1;	/* A reserved field, initialize to 0. */
			uint32_t reserved2;	/* A reserved field, initialize to 0. */
		} buffer;

		/* HGSMI_BUFFER_HEADER_F_SEQ_START */
		struct {
			/* Must be the same for all buffers in the sequence. */
			uint32_t sequence_number;
			/* The total size of the sequence. */
			uint32_t sequence_size;
		} sequence_start;

		/*
		 * HGSMI_BUFFER_HEADER_F_SEQ_CONTINUE and
		 * HGSMI_BUFFER_HEADER_F_SEQ_END
		 */
		struct {
			/* Must be the same for all buffers in the sequence. */
			uint32_t sequence_number;
			/* Data offset in the entire sequence. */
			uint32_t sequence_offset;
		} sequence_continue;
	} u;
} __attribute__((packed));

/* 8 bytes buffer tail. */
struct hgsmi_buffer_tail {
	/* Reserved, must be initialized to 0. */
	uint32_t reserved;
	/*
	 * One-at-a-Time Hash: https://www.burtleburtle.net/bob/hash/doobs.html
	 * Over the header, offset and for first 4 bytes of the tail.
	 */
	uint32_t checksum;
} __attribute__((packed));

/*
 * The size of the array of channels. Array indexes are uint8_t.
 * Note: the value must not be changed.
 */
#define HGSMI_NUMBER_OF_CHANNELS 0x100

#endif