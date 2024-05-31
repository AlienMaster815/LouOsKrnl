#include <LouDDK.h>
#include <NtAPI.h>

#include "processors.h"



KERNEL_IMPORT void InitializeFloatPointUnit();



LOUSTATUS EnableAdvancedBspFeatures(){
    LOUSTATUS Status = LOUSTATUS_GOOD;

    LouPrint("Enableing Advanced Processor Features For Bootstrap Processor\n");

    CPU::CPUID cpu;

    if((cpu.IsProcessorBrand(CPU::INTEL)) && (cpu.IsProcessorId(CPU::INTEL_CORE))){
        //Initialize FPU
        if(cpu.IsFeatureSupported(CPU::FPU)){
            LouPrint("Setting Up FPU\n");
            InitializeFloatPointUnit();
            // Perform a simple floating-point addition
            float value1 = 10.5;
            float value2 = 5.5;
            float result = value1 + value2;
            if(result == 16)LouPrint("FPU Set Up\n");
        }

        if(cpu.IsFeatureSupported(CPU::SMP)){
            LouPrint("Setting SMP\n");
        }

        //Initialize Hypertheading
        if(cpu.IsFeatureSupported(CPU::HYPERTHREAD)){
            LouPrint("Setting Up Hyperthreading\n");
        }
    }
    else{
        LouPrint("Unkown Processor");
        while(1);
        //we hang the system for debug here and programming because if we continue from here
        //we risk damaging the system if things arent set up
    }


    cpu.~CPUID();

    return Status;
}

