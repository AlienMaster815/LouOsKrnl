#include <LouDDK.h>

//Registers Defined as in the IBM Vga Specication

//GENERAL_REGISTERS
//SEQUENCERS
#define VGA_SEQUECER_ADDRESS_REGISTER                   0x03C4 //R/W
#define VGA_SEQUECER_DATA_REGISTER                      0x03C5 //R/W
//CRTC
//#define CRTC_ADDRESS_REGISTER                           0x03?4
//#define CRTC_DATA_REGISTER                              0x03?5
//Graphics Controller Registers
#define GRAPHICS_CONTROLLER_ADDRESS_REGISTER            0x03CE //R/W
#define GRAPHICS_CONTROLLER_DATA_REGISTER               0x03CF //R/W
//Attribute Controller Registers
#define ATTRIBUTE_CONTROLLER_ADDRESS_REGISTER           0x03C0 //R/W
#define ATTRIBUTE_CONTROLLER_DATA_REGISTER_WRITE        0x03C0 //W
#define ATTRIBUTE_CONTROLLER_DATA_REGISTER_READ         0x03C1
//DAC Pallete Registers
#define DAC_PALLETE_WRITE_ADDRESS                       0x03C8
#define DAC_PALLETE_READ_ADDRESS                        0x03C7
#define DAC_PALLETE_DATA                                0x03C9
#define DAC_PALLETE_PEL_MASK                            0x03C6
#define DAC_PALLETE_MISC_OUTPUT_REGISTER_WRITE          0x03C2                
#define DAC_PALLETE_MISC_OUTPUT_REGISTER_READ           0x03CC 
#define DAC_PALLETE_INPUT_STATUS_REGISTER_0_READ        0x03C2
#define DAC_PALLETE_INPUT_STATUS_REGISTER_1_READ_1      0x03DA             
#define DAC_PALLETE_INPUT_STATUS_REGISTER_1_READ_2      0x03DA             
#define DAC_PALLETE_FEATURE_CONTROL_REGISTER_READ       0x03BA
#define DAC_PALLETE_FEATURE_CONTROL_REGISTER_WRITE_1    0x03DA
#define DAC_PALLETE_FEATURE_CONTROL_REGISTER_WRITE_2    0x03BA
#define DAC_PALLETE_VIDEO_SUBSYSTEM_ENABLE_REGISTER     0x03C3
//MSIC_OUTPUT_REGISTER_MASKS
#define VSYNC_POLARITY      (1 << 7)
#define HSYNC_POLARITY      (1 << 6)
#define CLOCK_SELECT        (1 << 2)
#define CLOCK_SELECT_MASK   0x03
#define ENABLE_RAM          (1 << 1)
#define IO_ADDRESS_SELECT   1
//INPUT STATUS REGISTER MASKS
//ISR0
#define CRT_INTERRUPT           (1 << 7)
#define SWITCH_SENCE            (1 << 4)
//ISR1
#define VERTICAL_RETRACE        (1 << 3)
#define DISPLAY_ENABLE          1
//SEQUENCER REGISTER OFFSETS
#define RESET_REGISTER_REGISTER 0
#define CLOCKING_MODE_REGISTER 1
#define MAP_MASK_REGISTER    2
#define CHARECTER_MAP_SELECT_REGISTER 3
#define MEMORY_MODE_REGISTER 4
//SEQUENCER MASK
#define SYNCRONUS_RESET (1 << 1)
#define ASYNCRONUS_RESET 1
//Clocking mode Masks
#define SCREEN_OFF  (1 << 5)
#define SHIFT4      (1 << 4)
#define DOT_CLOCK   (1 << 3)
#define SHIFT_LOAD  (1 << 2)
#define DOT_CLOCK89  1 
//Map Masks Register Masks
#define MAP_3_ENABLE (1 << 3)
#define MAP_2_ENABLE (1 << 2)
#define MAP_1_ENABLE (1 << 1)
#define MAP_0_ENABLE 1
//Charecter map Select Register Masks
#define CHARECTER_MAP_A_SELECT_MSB (1 << 5)
#define CHARECTER_MAP_B_SELECT_MSB (1 << 4)
#define CHARECTER_MAP_A_SELECT_LSB (1 << 2)
#define CHARECTER_MAP_B_SELECT_LSB 1
#define CHARECTER_MAP_A_SELECT_LSB_MASK 0x03
#define CHARECTER_MAP_B_SELECT_LSB_MASK 0x03
//Memory Mode Register Maske
#define CHAIN_4         (1 << 3)
#define ODD_EVEN        (1 << 2)
#define EXTENDED_MEMORY (1 << 1)

//stoping on page 2-55 for tonight
