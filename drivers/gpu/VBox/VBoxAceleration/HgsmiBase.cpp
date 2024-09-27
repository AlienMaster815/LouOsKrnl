#include "vbox_drv.h"
#include "hgsmi_defs.h"
#include "hgsmi_channels.h"

#include <LouDDK.h>
#include <NtAPI.h>

int HgsmiQueryConf(PLMPOOL_DIRECTORY ctx, uint32_t index, uint32_t *value_ret)
{
	struct vbva_conf32 *p;

	p = (struct vbva_conf32 *)HgsmiBufferAlloc(ctx, sizeof(*p), HGSMI_CH_VBVA,
			       VBVA_QUERY_CONF32);
	if (!p)
		return STATUS_INSUFFICIENT_RESOURCES;

	p->index = index;
	p->value = 0xFFFFFFFF;

	HgsmiBufferSubmit(ctx, p);

	*value_ret = p->value;

	HgsmiBufferFree(ctx, p);

	return STATUS_SUCCESS;
}