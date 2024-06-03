#ifndef _SMP_H
#define _SMP_H

#include <LouDDK.h>
#include <NtAPI.h>


class SMP{

    public:
    SMP();
    ~SMP();
    void InitializeSMP();

    CPU::CPUID cpu;

};

#endif