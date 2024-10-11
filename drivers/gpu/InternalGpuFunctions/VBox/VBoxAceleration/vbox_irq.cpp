// SPDX-License-Identifier: MIT
/*
 * Copyright (C) 2016-2017 Oracle Corporation
 * This file is based on qxl_irq.c
 * Copyright 2013 Red Hat Inc.
 * Authors: Dave Airlie
 *          Alon Levy
 *          Michael Thayer <michael.thayer@oracle.com,
 *          Hans de Goede <hdegoede@redhat.com>
 */

#include "vbox_drv.h"
#include "vboxvideo.h"
#include <Hal.h>

void VboxClearIrq(void){
	outl((uint32_t)~0, VGA_PORT_HGSMI_HOST);
}

uint32_t VboxGetFlags(struct vbox_private *vbox){
	return READ_REGISTER_ULONG((PULONG)(vbox->guest_heap + HOST_FLAGS_OFFSET));
}

void VBoxReportHotplug(struct vbox_private *vbox){
    LouKeCreateThread((void(*)())vbox->hotplug_work, (PVOID)vbox, 16 * KILOBYTE);
}


void VboxIrqHandler(){

    LouPrint("Virtualbox Gpu Might Have Made An Interrupt\n");
//	uint32_t host_flags = VboxGetFlags(vbox);

//	if (!(host_flags & HGSMIHOSTFLAGS_IRQ)){
		//return IRQ_NONE;
//        LouPrint("Device Did Not Make The Call\n");
//    }

//    LouPrint("It Did Make An Interrupt\n");

//	if (host_flags &
//	    (HGSMIHOSTFLAGS_HOTPLUG | HGSMIHOSTFLAGS_CURSOR_CAPABILITIES) &&
//	    !(host_flags & HGSMIHOSTFLAGS_VSYNC)){
		    //VBoxReportHotplug(vbox);
//       }

//	VboxClearIrq();
    LouPrint("IRQ Successfully Handled\n");
    while(1);
}

void ValidateOrSetPositionHints(struct vbox_private *vbox){
	struct vbva_modehint *hintsi, *hintsj;
	bool valid = true;
	uint16_t currentx = 0;
	uint32_t i, j;

	for (i = 0; i < vbox->num_crtcs; ++i) {
		for (j = 0; j < i; ++j) {
			hintsi = &vbox->last_mode_hints[i];
			hintsj = &vbox->last_mode_hints[j];

			if (hintsi->enabled && hintsj->enabled) {
				if (hintsi->dx >= 0xffff ||
				    hintsi->dy >= 0xffff ||
				    hintsj->dx >= 0xffff ||
				    hintsj->dy >= 0xffff ||
				    (hintsi->dx <
					hintsj->dx + (hintsj->cx & 0x8fff) &&
				     hintsi->dx + (hintsi->cx & 0x8fff) >
					hintsj->dx) ||
				    (hintsi->dy <
					hintsj->dy + (hintsj->cy & 0x8fff) &&
				     hintsi->dy + (hintsi->cy & 0x8fff) >
					hintsj->dy))
					valid = false;
			}
		}
	}
	if (!valid)
		for (i = 0; i < vbox->num_crtcs; ++i) {
			if (vbox->last_mode_hints[i].enabled) {
				vbox->last_mode_hints[i].dx = currentx;
				vbox->last_mode_hints[i].dy = 0;
				currentx +=
				    vbox->last_mode_hints[i].cx & 0x8fff;
			}
		}
}

void VboxUpdateModeHints(struct vbox_private *vbox){
	LouPrint("VboxUpdateModeHints()\n");
	//struct drm_connector_list_iter conn_iter;
	//struct drm_device *dev = &vbox->ddev;
	//struct drm_connector *connector;
	//struct vbox_connector *vbox_conn;
	//struct vbva_modehint *hints;
	//uint16_t flags;
	//bool disconnected;
	//unsigned int crtc_id;
	//int ret;

	//ret = hgsmi_get_mode_hints(vbox->guest_pool, vbox->num_crtcs,
	//			   vbox->last_mode_hints);
	//if (ret) {
	//	DRM_ERROR("vboxvideo: hgsmi_get_mode_hints failed: %d\n", ret);
	//	return;
	//}

	//validate_or_set_position_hints(vbox);

	//drm_modeset_lock(&dev->mode_config.connection_mutex, NULL);
	//drm_connector_list_iter_begin(dev, &conn_iter);
	//drm_for_each_connector_iter(connector, &conn_iter) {
	//	vbox_conn = to_vbox_connector(connector);

	//	hints = &vbox->last_mode_hints[vbox_conn->vbox_crtc->crtc_id];
	//	if (hints->magic != VBVAMODEHINT_MAGIC)
	//		continue;

	//	disconnected = !(hints->enabled);
	//	crtc_id = vbox_conn->vbox_crtc->crtc_id;
	//	vbox_conn->mode_hint.width = hints->cx;
	//	vbox_conn->mode_hint.height = hints->cy;
	//	vbox_conn->vbox_crtc->x_hint = hints->dx;
	//	vbox_conn->vbox_crtc->y_hint = hints->dy;
    //	vbox_conn->mode_hint.disconnected = disconnected;

	//	if (vbox_conn->vbox_crtc->disconnected == disconnected)
	//		continue;

	//	if (disconnected)
	//		flags = VBVA_SCREEN_F_ACTIVE | VBVA_SCREEN_F_DISABLED;
	//	else
	//		flags = VBVA_SCREEN_F_ACTIVE | VBVA_SCREEN_F_BLANK;

	//	hgsmi_process_display_info(vbox->guest_pool, crtc_id, 0, 0, 0,
	//				   hints->cx * 4, hints->cx,
	//				   hints->cy, 0, flags);

	//	vbox_conn->vbox_crtc->disconnected = disconnected;
	//}
	//drm_connector_list_iter_end(&conn_iter);
	//drm_modeset_unlock(&dev->mode_config.connection_mutex);
	LouPrint("VboxUpdateModeHints() STATUS_SUCCESS\n");
}

void VboxHotplugWorker(void* work){
	struct vbox_private* vbox = (struct vbox_private*)work;

	VboxUpdateModeHints(vbox);
	DirectAccessDrsdHotplugEvent(&vbox->ddev);
}

int VboxIrqInit(struct vbox_private *vbox)
{
	PDrsdDevice dev = &vbox->ddev;
	P_PCI_DEVICE_OBJECT pdev = (P_PCI_DEVICE_OBJECT)(dev->dev);
	
    vbox->hotplug_work = VboxHotplugWorker;

	VboxUpdateModeHints(vbox);

    uint8_t pin = LouKeGetPciInterruptPin(pdev);

    RegisterInterruptHandler(VboxIrqHandler, pin);
    return STATUS_SUCCESS;
}

void VboxIrqFini(struct vbox_private *vbox)
{
	UNUSED PDrsdDevice dev = &vbox->ddev;
	UNUSED P_PCI_DEVICE_OBJECT pdev = (P_PCI_DEVICE_OBJECT)(dev->dev);
	//free_irq(pdev->irq, dev);
	//flush_work(&vbox->hotplug_work);
}