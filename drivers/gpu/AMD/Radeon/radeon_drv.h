/* radeon_drv.h -- Private header for radeon driver -*- linux-c -*-
 *
 * Copyright 1999 Precision Insight, Inc., Cedar Park, Texas.
 * Copyright 2000 VA Linux Systems, Inc., Fremont, California.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * Authors:
 *    Kevin E. Martin <martin@valinux.com>
 *    Gareth Hughes <gareth@valinux.com>
 */

#ifndef __RADEON_DRV_H__
#define __RADEON_DRV_H__

//#include <linux/firmware.h>
//#include <linux/platform_device.h>

#include "radeon_family.h"

/* General customization:
 */

#define DRIVER_AUTHOR		"Tyler Grenier"

#define DRIVER_NAME		"radeon"
#define DRIVER_DESC		"ATI Radeon"
#define DRIVER_DATE		"20240924"


#define DRIVER_MAJOR		1
#define DRIVER_MINOR		34
#define DRIVER_PATCHLEVEL	0

long radeon_drm_ioctl(struct file *filp,
		      unsigned int cmd, unsigned long arg);

int radeon_driver_load_kms(struct drm_device *dev, unsigned long flags);
void radeon_driver_unload_kms(struct drm_device *dev);
int radeon_driver_open_kms(struct drm_device *dev, struct drm_file *file_priv);
void radeon_driver_postclose_kms(struct drm_device *dev,
				 struct drm_file *file_priv);

/* atpx handler */
#if defined(CONFIG_VGA_SWITCHEROO)
void radeon_register_atpx_handler(void);
void radeon_unregister_atpx_handler(void);
bool radeon_has_atpx_dgpu_power_cntl(void);
bool radeon_is_atpx_hybrid(void);
#else
static inline void radeon_register_atpx_handler(void) {}
static inline void radeon_unregister_atpx_handler(void) {}
static inline bool radeon_has_atpx_dgpu_power_cntl(void) { return false; }
static inline bool radeon_is_atpx_hybrid(void) { return false; }
#endif

#endif				/* __RADEON_DRV_H__ */