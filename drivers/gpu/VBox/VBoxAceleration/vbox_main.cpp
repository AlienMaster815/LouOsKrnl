#include "vbox_drv.h"

bool VboxCheckSupported(uint16_t id){

    return true;
}

int VboxHwInit(struct vbox_private *vbox){

    return 0;
}

void VboxHwFini(struct vbox_private *vbox){

}

int VboxModeInit(struct vbox_private *vbox){

    return 0;
}

void VboxModeFini(struct vbox_private *vbox){

}

void VboxReportCaps(struct vbox_private *vbox){

}

int VboxMmInit(struct vbox_private *vbox){

    return 0;
}