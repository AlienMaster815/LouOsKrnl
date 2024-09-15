#ifndef _AMD_GPU_H
#define _AMD_GPU_H

#define _LOUSINE_KERNEL_INTERNAL //change to false and add your internal headers section for stint.h

#ifdef _LOUSINE_KERNEL_INTERNAL
#include <LouDDK.h>
#include <NtAPI.h>
#endif

#ifndef _SEA_ISLAND
#define _SEA_ISLAND

#ifndef _VERTEX_TESSELLATORS
#define _VERTEX_TESSELLATORS
    #define IA_CONTROL_STATUS   (PULONG)(BAR[0] + 0x88DC) //Read Only
    //IA Control Status MAsks
    #define IA_BUSY                         (1)
    #define IA_DMA_BUSY                     (1 << 1)
    #define IA_DMA_REQ_BUSY                 (1 << 2)
    #define IA_GRP_BUSY                     (1 << 3)
    #define IA_ADC_BUSY                     (1 << 4)
    //QuicRead
    #define IS_IA_BUSY                      ( READ_REGISTER_ULONG(IA_CONTROL_STATUS) & IA_BUSY              )
    #define IS_IA_DMA_BUSY                  ((READ_REGISTER_ULONG(IA_CONTROL_STATUS) & IA_DMA_BUSY)     >> 1)
    #define IS_IA_DMA_REQ_BUSY              ((READ_REGISTER_ULONG(IA_CONTROL_STATUS) & IA_DMA_REQ_BUSY) >> 2)
    #define IA_GRP_IS_BUSY                  ((READ_REGISTER_ULONG(IA_CONTROL_STATUS) & IA_GRP_BUSY)     >> 3)
    #define IS_IA_ADC_BUSY                  ((READ_REGISTER_ULONG(IA_CONTROL_STATUS) & IA_ADC_BUSY)     >> 4)
    //ENDOF QuickRead       
    //Endof IA Control Status Masks         
    #define IA_ENHANCE                      (PULONG)(BAR[0] + 0x28A70) //Read/Write
    #define IA_MULTI_VGT_PARAM              (PULONG)(BAR[0] + 0x28AA8) //Read/Write
    //IA_MULTI_VGT_PARAM Masks
    #define PRIMGROUP_SIZE_MASK             (0xFFFF)
    #define PARTIAL_VS_WAVE_ON              (1 << 16)
    #define SWITCH_ON_EOP                   (1 << 17)
    #define PARTIAL_ES_WAVE_ON              (1 << 18)
    #define SWITCH_ON_EOI                   (1 << 19)
    #define WD_SWITCH_ON_EOP                (1 << 20)
    //QuickRead
    #define PRIMGROUP_SIZE                  ( READ_REGISTER_ULONG(IA_MULTI_VGT_PARAM) & PRIMGROUP_SIZE_MASK)
    #define IS_PARTIAL_VS_WAVE_ON           ((READ_REGISTER_ULONG(IA_MULTI_VGT_PARAM) & PARTIAL_VS_WAVE_ON) >> 16)
    #define IS_SWITCH_ON_EOP                ((READ_REGISTER_ULONG(IA_MULTI_VGT_PARAM) & SWITCH_ON_EOP)      >> 17)
    #define IS_PARTIAL_ES_WAVE_ON           ((READ_REGISTER_ULONG(IA_MULTI_VGT_PARAM) & PARTIAL_ES_WAVE_ON) >> 18)
    #define IS_SWITCH_ON_EOI                ((READ_REGISTER_ULONG(IA_MULTI_VGT_PARAM) & SWITCH_ON_EOI)      >> 19)
    #define IS_WD_SWITCH_ON_EOP             ((READ_REGISTER_ULONG(IA_MULTI_VGT_PARAM) & WD_SWITCH_ON_EOP)   >> 20)
    //ENDOF QuickRead
    //Endof IA_MULTI_VGT_PARAM
    #define VGT_CACHE_INVALIDATION          (PULONG)(BAR[0] + 0x88C4) //read/write
    //VGT_CACHE_INVALIDATION Masks
    #define VS_NO_EXTRA_BUFFER              (1 << 5)
    #define STREAMOUT_FULL_FLUSH            (1 << 13)
    #define ES_LIMIT_MASK                   (1f << 16)
    //QuickRead
    #define IS_VS_NO_EXTRA_BUFFER           ((READ_REGISTER_ULONG(VGT_CACHE_INVALIDATION) & VS_NO_EXTRA_BUFFER)     >> 5)
    #define IS_STREAMOUT_FULL_FLUSH         ((READ_REGISTER_ULONG(VGT_CACHE_INVALIDATION) & STREAMOUT_FULL_FLUSH)   >> 13)
    #define ES_LIMIT                        ((READ_REGISTER_ULONG(VGT_CACHE_INVALIDATION) & ES_LIMIT_MASK)          >> 16)
    //ENDOF QuickRead 
    //ENDOF VGT_CACHE_INVALIDATION Masks
    #define VGT_CNTL_STATUS                 (PULONG)(BAR[0] + 0x88f0)
    //VGT_CNTL_STATUS MASKS
    #define VGT_BUSY                        (1)
    #define VGT_OUT_INDX_BUSY               (1 << 1)
    #define VGT_OUT_BUSY                    (1 << 2)
    #define VGT_PT_BUSY                     (1 << 3)
    #define VGT_TE_BUSY                     (1 << 4)
    #define VGT_VR_BUSY                     (1 << 5)
    #define VGT_PI_BUSY                     (1 << 6)
    #define VGT_GS_BUSY                     (1 << 7)
    #define VGT_HS_BUSY                     (1 << 8)
    #define VGT_TE11_BUSY                   (1 << 9)
    //QuickRead
    #define IS_VGT_BUSY                      (READ_REGISTER_ULONG(VGT_CNTL_STATUS) & VGT_BUSY)
    #define IS_VGT_OUT_INDX_BUSY            ((READ_REGISTER_ULONG(VGT_CNTL_STATUS) & VGT_OUT_INDX_BUSY) >> 1)
    #define IS_VGT_OUT_BUSY                 ((READ_REGISTER_ULONG(VGT_CNTL_STATUS) & VGT_OUT_BUSY)      >> 2)
    #define IS_VGT_PT_BUSY                  ((READ_REGISTER_ULONG(VGT_CNTL_STATUS) & VGT_PT_BUSY)       >> 3)
    #define IS_VGT_TE_BUSY                  ((READ_REGISTER_ULONG(VGT_CNTL_STATUS) & VGT_TE_BUSY)       >> 4)
    #define IS_VGT_VR_BUSY                  ((READ_REGISTER_ULONG(VGT_CNTL_STATUS) & VGT_VR_BUSY)       >> 5)
    #define IS_VGT_PI_BUSY                  ((READ_REGISTER_ULONG(VGT_CNTL_STATUS) & VGT_PI_BUSY)       >> 6)
    #define IS_VGT_GS_BUSY                  ((READ_REGISTER_ULONG(VGT_CNTL_STATUS) & VGT_GS_BUSY)       >> 7)
    #define IS_VGT_HS_BUSY                  ((READ_REGISTER_ULONG(VGT_CNTL_STATUS) & VGT_HS_BUSY)       >> 8)
    #define IS_VGT_TE11_BUSY                ((READ_REGISTER_ULONG(VGT_CNTL_STATUS) & VGT_TE11_BUSY)     >> 9)
    //ENDOF QuickRead
    //ENDOF VGT_CNTL_STATUS MASKS
    #define VGT_DISPATCH_DRAW_INDEX         (PULONG)(BAR[0] + 0x28B74)
    #define VGT_DMA_BASE                    (PULONG)(BAR[0] + 0x287E8)
    #define VGT_DMA_BASE_HI                 (PULONG)(BAR[0] + 0x287E4)
    #define VGT_DMA_INDEX_TYPE              (PULONG)(BAR[0] + 0x28A7C)
    //VGT_DMA_INDEX_TYPE MASK
    #define INDEX_TYPE                      (3)
    #define SWAP_MODE                       (3 << 2)
    #define BUF_TYPE                        (3 << 4)
    #define RDREQ_POLICY                    (3 << 6)
    #define ATC                             (1 << 8)
    #define DMA_INDEX_NOT_EOP                         (1 << 9)
    #define REQ_PATH                        (1 << 10)
    //ENDOF VGT_DMA_INDEX_TYPE MASK
    #define VGT_DMA_MAX_SIZE                (PULONG)(BAR[0] + 0x28A78)
    #define VGT_DMA_NUM_INSTANCES           (PULONG)(BAR[0] + 0x28A88)
    #define VGT_DMA_SIZE                    (PULONG)(BAR[0] + 0x28A74)
    #define VGT_DRAW_INITIATOR              (PULONG)(BAR[0] + 0x287F0)
    //VGT_DRAW_INITIATOR MASKS
    #define SOURCE_SELECT                   (3)
    #define MAJOR_MODE                      (3 << 2)
    #define DRAW_NOT_EOP                    (1 << 5)
    #define USE_OPAQUE                      (1 << 6)
    //QuickRead
    #define READ_SOURCE_SELECT              ( READ_REGISTER_ULONG(VGT_DRAW_INITIATOR) & SOURCE_SELECT)
    #define READ_MAJOR_MODE                 ((READ_REGISTER_ULONG(VGT_DRAW_INITIATOR) & MAJOR_MODE)     >> 2)
    #define READ_NOT_EOP                    ((READ_REGISTER_ULONG(VGT_DRAW_INITIATOR) & NOT_EOP)        >> 5)
    #define READ_OPAQUE                     ((READ_REGISTER_ULONG(VGT_DRAW_INITIATOR) & USE_OPAQUE)     >> 6)
    //ENDOF QuickRead
    //ENDOF VGT_DRAW_INITIATOR MASKS
    #define VGT_ENHANCE                     (PULONG)(BAR[0] + 0x28A50)
    #define VGT_ESGS_RING_ITEMSIZE          (PULONG)(BAR[0] + 0x28AAC)
#endif //_VERTEX_TESSELLATORS


#endif //_SEA_ISLAND


#endif //_AMD_GPU_H