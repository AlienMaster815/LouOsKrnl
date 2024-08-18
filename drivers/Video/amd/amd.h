#ifndef _AMD_H
#define _AMD_H
#include <LouDDK.h>
#include <NtAPI.h>

bool InitializeTeraScaleGpu(P_PCI_DEVICE_OBJECT PDEV);
void InitializeCGNGpu(P_PCI_DEVICE_OBJECT PDEV);
void InitializeRDNAGpu(P_PCI_DEVICE_OBJECT PDEV);
void InitializeRDNA2Gpu(P_PCI_DEVICE_OBJECT PDEV);
void InitializeRDNA3Gpu(P_PCI_DEVICE_OBJECT PDEV);

#endif