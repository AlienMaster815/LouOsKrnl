#include <LouDDK.h>
#include <NtAPI.h>
//include Local Headers
#include "../../../iornlake.h"

LOUSTATUS 
GenxMIFlush(
Pipeline Pipe
){

    //TODO: Flush the MI System

    return STATUS_SUCCESS;
}

Pipeline
GenxGetCurrentPipeline(){

    //TODO: Get the actual pipeline

    return PipelineNULL;
}

GenxPipelineSwitchCommand 
GenxCreatePipelineSwitchCommandPacket(
Pipeline Pipe,
IornlakeGPUArchitecture DevArch
){

    GenxPipelineSwitchCommand Command = (0x03 << 29);
    if(DevArch == (DevBW || DevCL)){
        Command |= (0x01 << 24);
        Command |= (0x04 << 16);
    }
    else if(DevArch == DevCTGPlus){
        Command |= (0x01 << 27);
        Command |= (0x01 << 24);
        Command |= (0x04 << 16);
    }

    if(Pipe == Pipeline3D){
        //Do Nothing
    }
    else if(Pipe == PipelineMedia){
        Command |= 1;
    }
    else if(Pipe == PipelineGPGPU){
        Command |= 2;
    }
    else{
        LouPrint("Pipeline Not Recognized\n");
        return 0x00;
    }

    return Command;

}

//function 1 manage pipeline switching
LOUSTATUS
GenxPipelineSwitch(
Pipeline Pipe
){
    LOUSTATUS Status = STATUS_SUCCESS;
    if(Pipe == Pipeline3D){
        LouPrint("Switching to 3D Pipeline");
        Status = GenxMIFlush(GenxGetCurrentPipeline());
        if(Status != STATUS_SUCCESS)return Status;

    }
    else if (Pipe == PipelineMedia){
        LouPrint("Switching to Media Pipeline\n");
        Status = GenxMIFlush(GenxGetCurrentPipeline());
        if(Status != STATUS_SUCCESS)return Status;

    }
    else if(Pipe == PipelineGPGPU){
        LouPrint("Switching to GPGPU Pipeline\n");
        Status = GenxMIFlush(GenxGetCurrentPipeline());
        if(Status != STATUS_SUCCESS)return Status;

    }
    else{
        LouPrint("Pipeline does not exist\n");
        return (LOUSTATUS)STATUS_UNSUCCESSFUL;
    }

    return Status;

}


//function 2 forward command streams


//function 3 manage URB allocation and


//function 4 Manage CURBE functions

