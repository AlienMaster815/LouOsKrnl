#ifndef _IORNLAKE_H
#define _IORNLAKE_H
#include <LouDDK.h>
#include <NtAPI.h>

//data for CommandStreamer.cpp

typedef enum{
    //Generic Architectures
    DevBW,
    DevCL,
    DevCTGPlus,
    //In Depth Architectures
    
}IornlakeGPUArchitecture;

typedef enum{
    //Pipeline Options
    Pipeline3D,
    PipelineMedia,
    PipelineGPGPU,
    PipelineNULL,
}Pipeline;

typedef uint32_t GenxPipelineSwitchCommand;

#endif