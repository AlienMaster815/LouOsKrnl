#include "vbox_drv.h"
#include "vboxvideo_guest.h"
#include "vboxvideo_vbe.h"
#include "../VBoxVGA.h"

#include <Hal.h>

LOUSTATUS VBoxAccelInit(struct vbox_private* vbox){
	P_PCI_DEVICE_OBJECT pdev = (P_PCI_DEVICE_OBJECT)(vbox->ddev.dev);
	struct vbva_buffer *vbva;
	unsigned int i;

    vbox->vbva_info = (struct vbva_buf_ctx*)LouMalloc(sizeof(vbox->vbva_info));

    if(!vbox->vbva_info){
        return STATUS_INSUFFICIENT_RESOURCES;
    }

    vbox->available_vram_size -= vbox->num_crtcs * VBVA_MIN_BUFFER_SIZE;
    //get vbva buffer
    PPCI_COMMON_CONFIG Config = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
    GetPciConfiguration(pdev->bus, pdev->slot, pdev->func, Config);
    vbox->vbva_buffers = (uint8_t*)LouKeHalGetPciVirtualBaseAddress(Config, 0);

    if(vbox->vbva_buffers == 0x00){
        return STATUS_NO_SUCH_DEVICE;
    }
    for (i = 0; i < vbox->num_crtcs; ++i) {
        VbvaSetupBufferContext(&vbox->vbva_info[i],
					  vbox->available_vram_size +
					  i * VBVA_MIN_BUFFER_SIZE,
					  VBVA_MIN_BUFFER_SIZE);
    	vbva = (struct vbva_buffer*)vbox->vbva_buffers + i * VBVA_MIN_BUFFER_SIZE;

        if(!VbvaEnable(&vbox->vbva_info[i],
				 vbox->guest_pool, vbva, i)){
                LouPrint("Error: VBoxVideo : VbvaEnable Failed\n");
        }
    }

    return STATUS_SUCCESS;
}

//#define VINF_SUCCESS                        0


bool HaveHgsmiModeHints(struct vbox_private* vbox){

	uint32_t have_hints, have_cursor;
	int ret;

	ret = HgsmiQueryConf(vbox->guest_pool,
			       VBOX_VBVA_CONF32_MODE_HINT_REPORTING,
			       &have_hints);
	
    if (ret){
        //LouPrint("Error Getting Hints");
    	return false;
    }

	ret = HgsmiQueryConf(vbox->guest_pool,
			       VBOX_VBVA_CONF32_GUEST_CURSOR_REPORTING,
			       &have_cursor);
	
    if (ret){
        //LouPrint("Error Getting Cursor\n");
		return false;
    }

    LouPrint("HaveHints:%d\n", have_hints);
    LouPrint("HaveCursor:%d\n", have_cursor);

	return ((have_hints == STATUS_SUCCESS) && (have_cursor == STATUS_SUCCESS));
}

bool VboxCheckSupported(uint16_t id){
	uint16_t dispi_id;

	VboxWriteIoport(VBE_DISPI_INDEX_ID, id);
	dispi_id = inw(VBE_DISPI_IOPORT_DATA);

	return dispi_id == id;
}

LOUSTATUS VboxHwInit(struct vbox_private *vbox){

    PDrsdDevice Dev = &vbox->ddev;
    UNUSED int foo;
    UNUSED P_PCI_DEVICE_OBJECT pdev = (P_PCI_DEVICE_OBJECT)Dev->dev;

    vbox->full_vram_size = inl(VBE_DISPI_IOPORT_DATA);
    vbox->any_pitch = VboxCheckSupported(VBE_DISPI_ID_ANYX);

    PPCI_COMMON_CONFIG Config = (PPCI_COMMON_CONFIG)LouMalloc(sizeof(PCI_COMMON_CONFIG));
    GetPciConfiguration(pdev->bus, pdev->slot, pdev->func, Config);

    vbox->guest_heap = (uint8_t*)((uint64_t)LouKeHalGetPciVirtualBaseAddress(Config, 0) + GUEST_HEAP_OFFSET(vbox));

    vbox->guest_pool = LouKeMapPool((uint64_t)vbox->guest_heap, (uint64_t)vbox->guest_heap, GUEST_HEAP_USABLE_SIZE, 16, "VBOX_HEAP", 0);    

    if(!vbox->guest_pool){
        return STATUS_INSUFFICIENT_RESOURCES;
    }

    foo = HgsmiTestQueryConf(vbox->guest_pool);

    if(foo){
        LouPrint("VBoxVideo: Error HgsmiTestQueryConf Failed\n");
        return STATUS_UNSUCCESSFUL;
    }

    vbox->available_vram_size = GUEST_HEAP_OFFSET(vbox);
    HgsmiQueryConf(vbox->guest_pool, VBOX_VBVA_CONF32_MONITOR_COUNT, &vbox->num_crtcs);

    vbox->num_crtcs = LouClamp_t(uint32_t, vbox->num_crtcs, 1, VBOX_MAX_SCREENS);

    if(!HaveHgsmiModeHints(vbox)){
        return STATUS_NO_SUCH_DEVICE;
    }

    LouPrint("Success!!!\n");

    return STATUS_SUCCESS;
}

void VboxHwFini(struct vbox_private *vbox){

}

int VboxModeInit(struct vbox_private *vbox){

    return 0;
}

void VboxModeFini(struct vbox_private *vbox){

}



void VboxReportCaps(struct vbox_private *vbox){

    uint32_t  Caps = VBVACAPS_DISABLE_CURSOR_INTEGRATION |
		   VBVACAPS_IRQ | VBVACAPS_USE_VBVA_ONLY;

    HgsmiSendCapsInfo(vbox->guest_pool, Caps);
	Caps |= VBVACAPS_VIDEO_MODE_HINTS;
	HgsmiSendCapsInfo(vbox->guest_pool, Caps);

}

int VboxMmInit(struct vbox_private *vbox){

    return 0;
}