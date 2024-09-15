#ifndef _INTEL_GPU_H
#define _INTEL_GPU_H

#include <LouDDK.h>
#include <NtAPI.h>

//Westmere 2009 - 2010
#define WESTMERE_DISPLAY_CONTROL_OFFSET     0x70008
#define WESTMERE_PIPEA_DISPLAY_SIZE_OFFSET  0x6001C
#define WESTMERE_PIPEB_DISPLAY_SIZE_OFFSET  0x6101C
#define WESTMERE_PIPEA_CONFIGURATION_OFFSET 0x60000
#define WESTMERE_PIPEB_CONFIGURATION_OFFSET 0x61000
#define WESTMERE_PRIMARY_FBA_OFFSET         0x70184
#define WESTMERE_SECONDARY_FBA_OFFSET       0x71184
#define WESTMERE_PSA_OFFSET                 0x7019C
#define WESTMERE_SSA_OFFSET                 0x7119C
#define WESTMERE_PIPEA_PLL_OFFSET           0x60040
#define WESTMERE_PIPEB_PLL_OFFSET           0x61040
#define WESTMERE_VSYNC_CONTROL_OFFSET       0x60014
#define WESTMERE_PIPEA_VSYNC_OFFSET         0x60004
#define WESTMERE_PIPEB_VSYNC_OFFSET         0x61004
#define WESTMERE_DPC_PLANEA_OFFSET          0x70180
#define WESTMERE_DPC_PLANEB_OFFSET          0x71180
#define WESTMERE_IER_OFFSET                 0x70000
#define WESTMERE_ISR_OFFSET                 0x70024
#define WESTMERE_DPMC_OFFSET                0x61200
#define WESTMERE_GPUPM_OFFSET               0xA248
#define WESTMERE_PIPE_CONTROLA_OFFSET       0x70008
#define WESTMERE_PIPE_CONTROLB_OFFSET       0x71008

#define WESTMERE_DISPLAY_CONTROL            (PULONG)(BAR[0] + 0x70008)
#define WESTMERE_PIPEA_DISPLAY_SIZE         (PULONG)(BAR[0] + 0x6001C)
#define WESTMERE_PIPEB_DISPLAY_SIZE         (PULONG)(BAR[0] + 0x6101C)
#define WESTMERE_PIPEA_CONFIGURATION        (PULONG)(BAR[0] + 0x60000)
#define WESTMERE_PIPEB_CONFIGURATION        (PULONG)(BAR[0] + 0x61000)
#define WESTMERE_PRIMARY_FBA                (PULONGLONG)(BAR[0] + 0x70184)
#define WESTMERE_SECONDARY_FBA              (PULONGLONG)(BAR[0] + 0x71184)
#define WESTMERE_PSA                        (PULONGLONG)(BAR[0] + 0x7019C)
#define WESTMERE_SSA                        (PULONGLONG)(BAR[0] + 0x7119C)
#define WESTMERE_PIPEA_PLL                  (PULONG)(BAR[0] + 0x60040)
#define WESTMERE_PIPEB_PLL                  (PULONG)(BAR[0] + 0x61040)
#define WESTMERE_VSYNC_CONTROL              (PULONG)(BAR[0] + 0x60014)
#define WESTMERE_PIPEA_VSYNC                (PULONG)(BAR[0] + 0x60004)
#define WESTMERE_PIPEB_VSYNC                (PULONG)(BAR[0] + 0x61004)
#define WESTMERE_DPC_PLANEA                 (PULONG)(BAR[0] + 0x70180)
#define WESTMERE_DPC_PLANEB                 (PULONG)(BAR[0] + 0x71180)
#define WESTMERE_IER                        (PULONG)(BAR[0] + 0x70000)
#define WESTMERE_ISR                        (PULONG)(BAR[0] + 0x70024)
#define WESTMERE_DPMC                       (PULONG)(BAR[0] + 0x61200)
#define WESTMERE_GPUPM                      (PULONG)(BAR[0] + 0xA248)
#define WESTMERE_PIPE_CONTROLA              (PULONG)(BAR[0] + 0x70008)
#define WESTMERE_PIPE_CONTROLB              (PULONG)(BAR[0] + 0x71008)

void InitializeWestmere(P_PCI_DEVICE_OBJECT PDEV);
static inline bool IsWESTMERE(uint16_t DeviceId){
    if((DeviceId == 0x0042) || (DeviceId == 0x0046))return true;
    else return false;
}
//Gen 2 : Sandy Bridge : 2011
//Intel 2000/3000

#define SANDY_BRIDGE_DISPLAY_CONTROL_OFFSET         0x70008
#define SANDY_BRIDGE_PIPEA_DISPLAY_SIZE_OFFSET      0x6001C
#define SANDY_BRIDGE_PIPEB_DISPLAY_SIZE_OFFSET      0x6101C
#define SANDY_BRIDGE_PIPEA_CONFIGURATION_OFFSET     0x60000
#define SANDY_BRIDGE_PIPEB_CONFIGURATION_OFFSET     0x61000
#define SANDY_BRIDGE_PFA_OFFSET                     0x70184
#define SANDY_BRIDGE_SFA_OFFSET                     0x71184
#define SANDY_BRIDGE_PSA_OFFSET                     0x7019C
#define SANDY_BRIDGE_SSA_OFFSET                     0x7119C
#define SANDY_BRIDGE_PIPEA_PLL_OFFSET               0x60040
#define SANDY_BRIDGE_PIPEB_PLL_OFFSET               0x61040
#define SANDY_BRIDGE_VSYNC_CONTROL_OFFSET           0x60014
#define SANDY_BRIDGE_PIPEA_VSYNC_OFFSET             0x60004
#define SANDY_BRIDGE_PIPEB_VSYNC_OFFSET             0x61004
#define SANDY_BRIDGE_DPC_PLANEA_OFFSET              0x70180
#define SANDY_BRIDGE_DPC_PLANEB_OFFSET              0x71180
#define SANDY_BRIDGE_IER_OFFSET                     0x70000
#define SANDY_BRIDGE_ISR_OFFSET                     0x70024
#define SANDY_BRIDGE_DPMC_OFFSET                    0x61200
#define SANDY_BRIDGE_GPUPM_OFFSET                   0xA248
#define SANDY_BRIDGE_PIPEA_PCR_OFFSET               0x70008
#define SANDY_BRIDGE_PIPEB_PCR_OFFSET               0x71008

#define SANDY_BRIDGE_DISPLAY_CONTROL                (PULONG)(BAR[0] + 0x70008)
#define SANDY_BRIDGE_PIPEA_DISPLAY_SIZE             (PULONG)(BAR[0] + 0x6001C)
#define SANDY_BRIDGE_PIPEB_DISPLAY_SIZE             (PULONG)(BAR[0] + 0x6101C)
#define SANDY_BRIDGE_PIPEA_CONFIGURATION            (PULONG)(BAR[0] + 0x60000)
#define SANDY_BRIDGE_PIPEB_CONFIGURATION            (PULONG)(BAR[0] + 0x61000)
#define SANDY_BRIDGE_PFA                            (PULONGLONG)(BAR[0] + 0x70184)
#define SANDY_BRIDGE_SFA                            (PULONGLONG)(BAR[0] + 0x71184)
#define SANDY_BRIDGE_PSA                            (PULONGLONG)(BAR[0] + 0x7019C)
#define SANDY_BRIDGE_SSA                            (PULONGLONG)(BAR[0] + 0x7119C)
#define SANDY_BRIDGE_PIPEA_PLL                      (PULONG)(BAR[0] + 0x60040)
#define SANDY_BRIDGE_PIPEB_PLL                      (PULONG)(BAR[0] + 0x61040)
#define SANDY_BRIDGE_VSYNC_CONTROL                  (PULONG)(BAR[0] + 0x60014)
#define SANDY_BRIDGE_PIPEA_VSYNC                    (PULONG)(BAR[0] + 0x60004)
#define SANDY_BRIDGE_PIPEB_VSYNC                    (PULONG)(BAR[0] + 0x61004)
#define SANDY_BRIDGE_DPC_PLANEA                     (PULONG)(BAR[0] + 0x70180)
#define SANDY_BRIDGE_DPC_PLANEB                     (PULONG)(BAR[0] + 0x71180)
#define SANDY_BRIDGE_IER                            (PULONG)(BAR[0] + 0x70000)
#define SANDY_BRIDGE_ISR                            (PULONG)(BAR[0] + 0x70024)
#define SANDY_BRIDGE_DPMC                           (PULONG)(BAR[0] + 0x61200)
#define SANDY_BRIDGE_GPUPM                          (PULONG)(BAR[0] + 0xA248)
#define SANDY_BRIDGE_PIPEA_PCR                      (PULONG)(BAR[0] + 0x70008)
#define SANDY_BRIDGE_PIPEB_PCR                      (PULONG)(BAR[0] + 0x71008)

void InitializeSandyBridgeGt1(P_PCI_DEVICE_OBJECT PDEV);
void InitializeSandyBridgeGt2(P_PCI_DEVICE_OBJECT PDEV);
static inline bool IsSANDYBRIDGEGT2(uint16_t DeviceID){
    if((DeviceID == 0x0112) || (DeviceID == 0x0116) || (DeviceID == 0x0122) || (DeviceID == 0x0126))return true;
    else return false;
}
static inline bool IsSANDYBRIDGEGT1(uint16_t DeviceID){
    if((DeviceID == 0x0102) || (DeviceID == 0x0106) || (DeviceID == 0x010A))return true;
    else return false;
}
//Gen 3 : Ivy Bridge : 2012
//Intel 4000/2500



//Gen 4 : Haswell : 2013
//Iris Iris Pro



//Gen 5 : Broadwell : 2014
//6000 6100



//Gen 6 : Skylake : 2015
//4K Support 530 



//Gen 7 : Kaby Lake : 2016
//630



//Gen 8 : Coffee Lake : 2017
//UHD



//Gen 9 : Coffee Lake : 2018
//Refresh



//Gen 10 : Ice Lake : Commet Lake : 2019



//Gen 11 : Tiger Lake : 2020 //also Fuck 2020
//Iris Xe



//Gen 12 : Alder Lake : 2021 



//Gen 13 : Raptor Lake : 2022 - 2023
//770



//Gen 14 : Meteor Lake : 2024
//Intel Arch

#endif