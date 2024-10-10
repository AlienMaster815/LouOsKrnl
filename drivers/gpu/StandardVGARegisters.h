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
#define CLOCK_SELECT        (0x03 << 2)
#define ENABLE_RAM          (1 << 1)
#define IO_ADDRESS_SELECT   1
//Sync Polarity data
#define VERTICAL_RESERVED 0
#define VERTICAL_400 1
#define VERTICAL_350 2
#define VERTICAL_480 3
//Clock Select Data
#define HORIZONTAL_PEL_640_320_25_175_MHZ 0 
#define HORIZONTAL_PEL_720_360_28_322_MHZ 1 
#define EXTERNEL_CLOCK 2
#define CLOCK_RESERVED 3
//INPUT STATUS REGISTER MASKS
//ISR0
#define CRT_INTERRUPT           (1 << 7)
#define SWITCH_SENCE            (1 << 4)
//ISR1
#define VERTICAL_RETRACE        (1 << 3)
#define DISPLAY_ENABLE          1
//SEQUENCER REGISTER OFFSETS
#define SEQUENCER_ADDRESS_MASK 0x7
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
#define CHARECTER_MAP_A_SELECT_LSB (0x03 << 2)
#define CHARECTER_MAP_B_SELECT_LSB 0x03
//MAL Maps
#define MAL_1ST_8KB_MAP_2 0
#define MAL_3RD_8KB_MAP_2 1
#define MAL_5TH_8KB_MAP_2 2
#define MAL_7TH_8KB_MAP_2 3
#define MAL_2ND_8KB_MAP_2 4
#define MAL_4TH_8KB_MAP_2 5
#define MAL_6TH_8KB_MAP_2 6
#define MAL_8TH_8KB_MAP_2 7
//MBL Maps
#define MBL_1ST_8KB_MAP_2 0
#define MBL_3RD_8KB_MAP_2 1
#define MBL_5TH_8KB_MAP_2 2
#define MBL_7TH_8KB_MAP_2 3
#define MBL_2ND_8KB_MAP_2 4
#define MBL_4TH_8KB_MAP_2 5
#define MBL_6TH_8KB_MAP_2 6
#define MBL_8TH_8KB_MAP_2 7
//Memory Mode Register Maske
#define CHAIN_4         (1 << 3)
#define ODD_EVEN        (1 << 2)
#define EXTENDED_MEMORY (1 << 1)
//Map Select bitfield combo for A1 A0
#define MAP_0_SELECTED 0
#define MAP_1_SELECTED 1
#define MAP_2_SELECTED 2
#define MAP_3_SELECTED 3
//CRTC REGISTERS
#define CRTC_ADDRESS_REGISTER_1 0x03D4
#define CRTC_ADDRESS_REGISTER_2 0x03B4
#define CRTC_DATA_REGISTER_1    0x03D5
#define CRTC_DATA_REGISTER_2    0x03B5
//CRTC OFFSETS
#define CRTC_HORIZONTAL_TOTAL                   0x00
#define CRTC_HORIZONTAL_DISPLAY_ENGINE          0x01
#define CRTC_START_HORIZONTAL_BLANKING          0x02
#define CRTC_END_HORIZONTAL_BLANKING            0x03
#define CRTC_START_HORIZONTAL_RETRACE           0x04
#define CRTC_END_HORIZONTAL_RETRACE             0x05
#define CRTC_VERTICAL_TOTAL                     0x06
#define CRTC_OVERFLOW                           0x07
#define CRTC_PRESET_ROW_SCAN                    0x08
#define CRTC_MAXIMUM_SCAN_LINE                  0x09
#define CRTC_CURSOR_START                       0x0A
#define CRTC_CURSOR_END                         0x0B
#define CRTC_START_ADDRESS_HIGH                 0x0C
#define CRTC_START_ADDRESS_LOW                  0x0D
#define CRTC_CURSOR_LOCATION_HIGH               0x0E
#define CRTC_CURSOR_LOCATION_LOW                0x0F
#define CRTC_VERTICAL_RETRACE_START             0x10
#define CRTC_VERTICAL_RETRACE_END               0x11
#define CRTC_VERTICAL_DISPLAY_ENABLE_END        0x12
#define CRTC_OFFSET                             0x13
#define CRTC_UNDERLINE_LOCATION                 0x14
#define CRTC_START_VERTICAL_BLANKING            0x15
#define CRTC_END_VERTICAL_BLANKING              0x16
#define CRTC_MODE_CONTROL                       0x17
#define CRTC_LINE_COMPARE                       0x17
//CRTC Address Register Mask
#define CRTC_ADDRESS 0x1F
//End Horizontal Register Data
#define DISPLAY_ENABLE_SKEW (0x03 << 5)
#define END_BLANKING_MASK 0x1F
//DES Data Combo
#define NO_CHARECTER_CLOCK_SKEW 0
#define ONE_CHARECTER_CLOCK_SKEW 1
#define TWO_CHARECTER_CLOCK_SKEW 2
#define THREE_CHARECTER_CLOCK_SKEW 3
//NOTCE : Charecter Skew is not adjustable on XGA/Type 2
//End Horizontal Retrace Data
#define END_HORIZONTAL_BLANKING  (1 << 7)
#define HORIZONTAL_RETRACE_DELAY (0x03 << 5)
#define END_HORIZONTAL_RETRACE   0x1F
//OverFlow Data
#define VERTICAL_RETRACE_START_9 (1 << 7)
#define VERTICAL_DISPLAY_ENABLE_9 (1 << 6)
#define VERTICAL_TOTAL_9 (1 << 5)
#define LINE_COMPARE_8  (1 << 4)
#define VERTICAL_BLANKING_START_8 (1 << 3)
#define VERTICAL_RETRACE_START_8 (1 << 2)
#define VERTICAL_DISPLAY_ENABLE_7 (1 << 1)
#define VERTICAL_TOTAL_8    (1 << 0)
//Preset Row Scan Data
#define BYTE_PANNING (0x03 << 5)
#define STARTING_ROW_SCAN_COUNT 0x1F
//Maximum Scan Line Data
#define DOUBLE_SCANNING (1 << 7)
#define LINE_COMPARE_9  (1 << 6)
#define START_VERTICAL_BLANKING (1 << 5)
#define MAXIMUM_SCAN_LNE 0x1F
//Cursor Start Data
#define CURSOR_OFF (1 << 5)
#define ROW_SCAN_CURSOR_BEGINS 0x1F
//Cursor End Data
#define CURSOR_SKEW_CONTROL (0x03 << 5)
#define ROW_SCAN_CURSOR_ENDS 0x1F
//Vertical Retrace End
#define PROTECT_REGISTER            (1 << 7)
#define SELECT_5_REFRESH_CYCLES     (1 << 6)
#define ENABLE_VERTICAL_INTERRUPT   (1 << 5)
#define CLEAR_VERTICAL_INTERRUPT    (1 << 4)
#define VERTICAL_RETRACE_END        0xF
//Underline Location Data
#define DOUBLE_WORD_MODE (1 << 6)
#define COUNT_BY_4       (1 << 5)
#define START_UNDERLINE  0x1F
//CRTC Mode Controll Data
#define HARDWARE_RESET (1 << 7)
#define WORD_BYTE_MODE (1 << 6)
#define ADDRESS_WRAP   (1 << 5)
#define COUNT_BY_2     (1 << 3)
#define HORIZONTAL_RETRACE_SELECT (1 << 2)
#define SELECT_ROW_SCAN_COUNTER (1 << 1)
#define CMS_0 1
//GRAPHICS CONTROLER REGISTERS

//Stoping at page 2 - 78 for the night