#ifndef _APIC_LOCAL_HEADER
#define _APIC_LOCAL_HEADER

//I appologise if this is messy but at this point i just need this to work
// I WILL FIX IT LATER BEFORE 1.0

//Delivery Modes
#define NORMAL_DELIVERY_MODE 0
#define LOW_PRIORITY_MODE    1
#define SMI_MODE             2
#define NMI_MODE             4
#define INIT_MODE            5
#define SIPI_MODE            6
//Define Delivery Methods
#define PHYSICAL_DESTINATION 0
#define LOGICAL_DESTINATION  1
//define Delivery Statuses
#define INTERRUPT_CLEARED    0
#define INTERRUPT_PENDING    1
//Define DeAssert Tags
#define IS_DE_ASSERTED       true
#define IS_NOT_DE_ASSERTED   false
//Define DT
#define DEFATULT_DT                        0
#define DT_TO_ITSELF                       1
#define DT_SEND_ALL_PROCESSORS             2
#define DT_SEND_ALL_PROCESSORS_BUT_ITSELF  3


#define MASKINGBIT 16
#define INTRPENDINGBIT 12

#define HARDWARE_SPACE 32

#define TIMER HARDWARE_SPACE
#define KEYBOARD HARDWARE_SPACE + 1

#define CALCULATEVECTORTABLEOFFSET (ULONG*)((uintptr_t)CMCI_REGISTER + (uintptr_t)(Offset * 16))
//NOTE: So According to the documentation all ports are 32 bit however they are
// alligned by 16 bits wich defies all logic and reasonable sence but whatever
// Registers are define below
#define LAPICID_REGISTER                             (ULONG*)(ApicBase + 0x20)   //RW
#define LAPICVER_REGISTER                            (ULONG*)(ApicBase + 0x30)   //RO
#define TPR_REGISTER                                 (ULONG*)(ApicBase + 0x80)   //RW
#define APR_REGISTER                                 (ULONG*)(ApicBase + 0x90)   //RO
#define PPR_REGISTER                                 (ULONG*)(ApicBase + 0xA0)   //RW
#define EOI_REGISTER                                 (ULONG*)(ApicBase + 0xB0)   //WO //Its Using the Chewbacka defence but whatever
#define RRD_REGISTER                                 (ULONG*)(ApicBase + 0xC0)   //RO
#define LOGICAL_DESTINATION_REGISTER                 (ULONG*)(ApicBase + 0xD0)   //RW
#define DESTINATION_FORMAT_REGISTER                  (ULONG*)(ApicBase + 0xE0)   //RW
#define SPURRIOUS_INTERRUPT_REGISTER                 (ULONG*)(ApicBase + 0xF0)   //RW
#define IN_SERVICE_REGISTER                          (ULONG*)(ApicBase + 0x100)  //RO //70h / 16 bit wide buffer
#define TMR_REGISTER                                 (ULONG*)(ApicBase + 0x180)  //RO Same As Above
#define IRR_REGISTER                                 (ULONG*)(ApicBase + 0x200)  //RO Same As Above
#define ERR_STATUS_REGISTER                          (ULONG*)(ApicBase + 0x280)  //RO
#define CMCI_REGISTER                                (ULONG*)(ApicBase + 0x2F0)  //RW
#define ICR_REGISTER_LOW                             (ULONG*)(ApicBase + 0x300)  //RW //2 * 16 bit Wide buffer
#define ICR_REGISTER_HI                              (ULONG*)(ApicBase + 0x310)  //RW //2 * 16 bit Wide buffer
#define LVT_TIMER_REGISTER                           (ULONG*)(ApicBase + 0x320)  //RW
#define LVT_THERMAL_SENSOR_REGISTER                  (ULONG*)(ApicBase + 0x330)  //RW
#define LVT_PERFORMANCE_MONITORING_COUNTERS_REGISTER (ULONG*)(ApicBase + 0x340)  //RW
#define LVT_INT0_REGISTER                            (ULONG*)(ApicBase + 0x350)  //RW
#define LVT_INT1_REGISTER                            (ULONG*)(ApicBase + 0x360)  //RW
#define LVT_ERROR_REGISTER                           (ULONG*)(ApicBase + 0x370)  //RW
#define LVT_INITIAL_COUNT_REGISTER                   (ULONG*)(ApicBase + 0x380)  //RW
#define LVT_CURRENT_COUNT_REGISTER                   (ULONG*)(ApicBase + 0x390)  //RO
#define LVT_DIVIDE_CONFIGURATION_REGISTER            (ULONG*)(ApicBase + 0x3E0)  //RW

#define CMCI_OFFSET                               0
#define ICR_OFFSET                                1
#define TIMER_OFFSET                              3
#define THERMAL_SENSOR_OFFSET                     4
#define PERFORMANCE_MONITORING_COUNTERS_OFFSET    5
#define INT0_OFFSET                               6
#define INT1_OFFSET                               7
#define ERROR_OFFSET                              8
#define INITIAL_OFFSET                            9
#define CURRENT_OFFSET                            10
#define DIVIDE_CFG_OFFSET                         11

//Now Define Commands
#define ENDOFINTERRUPT 0x00
#define APIC_DISABLE 0x10000
#define FIXED (0 << 8)
#define SMI (2 << 8)
#define NMI (4 << 8)
#define INIT (5 << 8)
#define ExtINIT (7 << 8)

#define IDLE (0 << 12)
#define SEND_PENDING (1 << 12)

// PIN bit 13

// IRR bit 14

// TRIGGER MODE bit 15

#define EDGE (0 << 15)
#define LEVEL (1 << 15)

//MASK
#define MASKED (1 << 16)
#define UnMASKED (0 << 16)

//TIMER MODE Bit 17
#define ONESHOT (0 << 17)
#define PERIODIC (1 << 17)
#define TSCDeadline (2 << 17)

#define REGISTER_RESET 0
#define SPURIOUS 0x0F0

#define APIC_ENABLE 0x100
#define SPURRIOUS_VECTOR 39
#define APIC_SW_ENABLE 0x100

#define IlegalRegisterAddress (1 << 7)
#define RecievedIlegalVector  (1 << 6)
#define SendIlegalVector  (1 << 5)
#define RedirectableIPI  (1 << 4)
#define RecieveAccept  (1 << 3)
#define SendAccept  (1 << 2)
#define RecieveChecksum  (1 << 1)
#define SendChecksum  (1)

#define IA32_APIC_BASE_MSR_ENABLE 0x800
#define LVTdisabled 0xFFFFFFFF


typedef enum {
	PeriodicMode,
	OneShotMode,
	TSC_Deadline, //Not All Systems Have This
}TimerMode;

#ifdef __cplusplus
#include <LouDDK.h>
#include <NtAPI.h>
KERNEL_IMPORT double GetProcessorSpeed();
KERNEL_IMPORT void PIC_remap(int offset1, int offset2);
KERNEL_IMPORT uint32_t GetProcessorBusSpeed();

LOUDDK_API_ENTRY void UnMaskLocalInterruptVector(uint8_t Offset);

LOUDDK_API_ENTRY void MaskLocalInterruptVector(uint8_t Offset);

LOUDDK_API_ENTRY LOUSTATUS SetTimerMode(
	TimerMode SelectedMode,
	uint32_t MiS
);
KERNEL_IMPORT void SetInterruptFlags();
KERNEL_IMPORT void UnSetInterruptFlags();

KERNEL_IMPORT void local_apic_send_eoi();

int IsX2ApicSupported();

void AssignInterruptVector(uint8_t VectorNumber, uint8_t Offset);

uint64_t GetLocaApicBase();







#elif
//C World
long double GetProcessorSpeed();

uint32_t GetProcessorBusSpeed();

void UnMaskLocalInterruptVector(uint8_t Offset);
void MaskLocalInterruptVector(uint8_t Offset);

LOUSTATUS SetTimerMode(
	TimerMode SelectedMode,
	uint32_t MiS
);

#endif

#endif