#define _KERNEL_MODULE_



#include <LouDDK.h>
#include <NtAPI.h>
#include <Hal.h>

#include "ahci.h"



#define DRIVER_NAME "Lousine Internal AHCI .SYS Driver"
#define DRIVER_VERSION "1.01"

// SPDX-License-Identifier: GPL-2.0-or-later
/*
 *  ahci.c - AHCI SATA support
 *
 *  Maintained by:  Tejun Heo <tj@kernel.org>
 *    		    Please ALWAYS copy linux-ide@vger.kernel.org
 *		    on emails.
 *
 *  Copyright 2004-2005 Red Hat, Inc.
 *
 * libata documentation is available via 'make {ps|pdf}docs',
 * as Documentation/driver-api/libata.rst
 *
 * AHCI hardware documentation:
 * http://www.intel.com/technology/serialata/pdf/rev1_0.pdf
 * http://www.intel.com/technology/serialata/pdf/rev1_1.pdf
 */

//Porting Done By Tyler Grenier
#pragma pack(push, 1)
typedef struct _AHCI_DRIVER_EXTENDED_OBJECT{
    uint64_t DeviceNumber;
}AHCI_DRIVER_EXTENDED_OBJECT, * PAHCI_DRIVER_EXTENDED_OBJECT;
#pragma pack(pop)

enum{
    AHCI_PCI_BAR_STA2x11    = 0,
    AHCI_PCI_BAR_VAVIUM     = 0,
    AHCI_PCI_BAR_LOONGSON   = 0,
    AHCI_PCI_BAR_ENMOTUS    = 2,
    AHCI_BAR_STANDARD       = 5,
};

enum BoarIds{
    BoardAhci,
    BoardAhci43BitDma,
    BoardAhciIgnIferr,
    BoardAhciNoDebounceDelay,
    BoardAhciNoMsi,

    BoardAhciPcsQuirk,
    BoardAhciPcsQuirkNoDevslp,
    BoardAhciPcsQuirkNoSntf,
    BoardAhciYesFbs,

    BoardAhciAl,
    BoardAhciAvn,
    BoardAhciMcp65,
    BoardAhciMcp77,
    BoardAhciMcp89,
    BoardAhciMv,
    BoardAhciSb600,
    BoardAhciSb700,
    BoardAhciVt8251,

    BoardAhciMcpLinux = BoardAhciMcp65,
    BoardAhciMcp67 = BoardAhciMcp65,    
    BoardAhciMcp79 = BoardAhciMcp77,    
    BoardAhciMcp73 = BoardAhciMcp65,    
};

#define SUPPORTED_AHCI_DEVICES 220
#define PCI_CLASS_STORAGE_SATA_AHCI	0x010601
#define PCI_CLASS_STORAGE_RAID		0x0104

UNUSED static LINUX_PCI_DEVICE_ID AhciPciTable[] = {
    //Intel Devices
    {0x8086, 0x06D6, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //0
    {0x8086, 0x2652, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //1
    {0x8086, 0x2653, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //2
    {0x8086, 0x27C1, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //3
    {0x8086, 0x27C5, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //4
    {0x8086, 0x27C3, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //5
    {0x10B9, 0x5288, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciIgnIferr}, //6
    {0x8086, 0x2681, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //7
    {0x8086, 0x2682, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //8
    {0x8086, 0x2683, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //9
    {0x8086, 0x27c6, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //10
    {0x8086, 0x2821, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //11
    {0x8086, 0x2822, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirkNoSntf}, //12
    {0x8086, 0x2824, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //13
    {0x8086, 0x2829, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //14
    {0x8086, 0x282a, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //15
    {0x8086, 0x2922, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //16
    {0x8086, 0x2922, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //17
    {0x8086, 0x2924, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //18
    {0x8086, 0x2925, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //19
    {0x8086, 0x2927, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //20
    {0x8086, 0x2929, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //21
    {0x8086, 0x292A, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //22
    {0x8086, 0x292C, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //23
    {0x8086, 0x292F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //24
    {0x8086, 0x294D, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //25
    {0x8086, 0x294E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //26
    {0x8086, 0x502A, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //27
    {0x8086, 0x502B, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //28
    {0x8086, 0x3A05, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //29
    {0x8086, 0x3A22, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //30
    {0x8086, 0x3A25, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //31
    {0x8086, 0x3B22, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //32
    {0x8086, 0x3B23, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //33
    {0x8086, 0x3B24, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //34
    {0x8086, 0x3B25, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //35
    {0x8086, 0x3B29, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //36
    {0x8086, 0x3B2B, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //37
    {0x8086, 0x3B2C, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //38
    {0x8086, 0x3B2F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //39
    {0x8086, 0x19B0, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //40
    {0x8086, 0x19B1, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //41
    {0x8086, 0x19B2, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //42
    {0x8086, 0x19B3, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //43
    {0x8086, 0x19B4, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //44
    {0x8086, 0x19B5, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //45
    {0x8086, 0x19B6, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //46
    {0x8086, 0x19B7, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //47
    {0x8086, 0x19BE, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //48
    {0x8086, 0x19C1, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //49
    {0x8086, 0x19C2, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //50
    {0x8086, 0x19C3, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //51
    {0x8086, 0x19C4, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //52
    {0x8086, 0x19C5, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //53
    {0x8086, 0x19C6, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //54
    {0x8086, 0x19C7, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //55
    {0x8086, 0x19CE, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //56
    {0x8086, 0x19CF, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //57
    {0x8086, 0x1C02, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //58
    {0x8086, 0x1C03, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //59
    {0x8086, 0x1C04, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //60
    {0x8086, 0x1C05, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //61
    {0x8086, 0x1C06, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //62
    {0x8086, 0x1C07, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //63
    {0x8086, 0x1D02, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //64
    {0x8086, 0x1D04, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //65
    {0x8086, 0x1D06, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //66
    {0x8086, 0x2323, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //67
    {0x8086, 0x1E02, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //68
    {0x8086, 0x1E03, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //69
    {0x8086, 0x1E04, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //70
    {0x8086, 0x1E05, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //71
    {0x8086, 0x1E0E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //72
    {0x8086, 0x8C02, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //73
    {0x8086, 0x8C03, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //74
    {0x8086, 0x8C04, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //75
    {0x8086, 0x8C05, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //76
    {0x8086, 0x8C06, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //77
    {0x8086, 0x8C07, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //78
    {0x8086, 0x8C0E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //79
    {0x8086, 0x8C0F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //80
    {0x8086, 0x8C02, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //81
    {0x8086, 0x8C03, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //82
    {0x8086, 0x8C04, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //83
    {0x8086, 0x8C05, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //84
    {0x8086, 0x8C06, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //85
    {0x8086, 0x8C07, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //86
    {0x8086, 0x8C0E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //87
    {0x8086, 0x8C0F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //88
    {0x8086, 0x9DD3, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //89
    {0x8086, 0x1F22, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //90
    {0x8086, 0x1F23, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //91
    {0x8086, 0x1F24, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //92
    {0x8086, 0x1F25, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //93
    {0x8086, 0x1F26, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //94
    {0x8086, 0x1F27, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //95
    {0x8086, 0x1F2E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //97
    {0x8086, 0x1F2F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //98
    {0x8086, 0x1F32, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciAvn}, //99
    {0x8086, 0x1F33, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciAvn}, //100
    {0x8086, 0x1F34, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciAvn}, //101
    {0x8086, 0x1F35, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciAvn}, //102
    {0x8086, 0x1F36, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciAvn}, //103
    {0x8086, 0x1F37, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciAvn}, //104
    {0x8086, 0x1F3E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciAvn}, //105
    {0x8086, 0x1F3F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciAvn}, //106
    {0x8086, 0x2823, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //107
    {0x8086, 0x2826, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //108
    {0x8086, 0x2827, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //109
    {0x8086, 0x282F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //110
    {0x8086, 0x43D4, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //111
    {0x8086, 0x43D5, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //112
    {0x8086, 0x43D6, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //113
    {0x8086, 0x43D7, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //114
    {0x8086, 0x8D02, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //115
    {0x8086, 0x8D04, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //116
    {0x8086, 0x8D06, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //117
    {0x8086, 0x8D0E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //118
    {0x8086, 0x8D62, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //119
    {0x8086, 0x8D64, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //120
    {0x8086, 0x8D66, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //121
    {0x8086, 0x8D6E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //122
    {0x8086, 0x23A3, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //123
    {0x8086, 0x9C83, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //124
    {0x8086, 0x9C85, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //125
    {0x8086, 0x9C87, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //126
    {0x8086, 0x9C8F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //127
    {0x8086, 0x8C82, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //128
    {0x8086, 0x8C83, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //129
    {0x8086, 0x8C84, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //130
    {0x8086, 0x8C85, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //131
    {0x8086, 0x8C86, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //132
    {0x8086, 0x8C87, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //133
    {0x8086, 0x8C8E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //134
    {0x8086, 0x8C8F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //135
    {0x8086, 0x9D03, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //136
    {0x8086, 0x9D05, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //137
    {0x8086, 0x9D07, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //138
    {0x8086, 0xA102, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //139
    {0x8086, 0xA103, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //140
    {0x8086, 0xA105, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //140
    {0x8086, 0xA106, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //141
    {0x8086, 0xA107, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //142
    {0x8086, 0xA10F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //143
    {0x8086, 0xA182, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //144
    {0x8086, 0xA186, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //145
    {0x8086, 0xA1D2, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //146
    {0x8086, 0xA1D6, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //147
    {0x8086, 0xA202, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //148
    {0x8086, 0xA206, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //149
    {0x8086, 0xA252, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //150
    {0x8086, 0xA256, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //151
    {0x8086, 0xA356, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //152
    {0x8086, 0x06D7, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //153
    {0x8086, 0x06D7, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //154
    {0x8086, 0xA386, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //155
    {0x8086, 0x0F22, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //156
    {0x8086, 0x0F23, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirkNoDevslp}, //157
    {0x8086, 0x22A3, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //158
    {0x8086, 0x5AE3, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //159
    {0x8086, 0x34D3, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //160
    {0x8086, 0x02D3, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //161
    {0x8086, 0x02D7, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //162
    {0x8086, 0x4B63, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciPcsQuirk}, //163
    
    //JMMicron Devices
    {0x197B, ANY_PCI_ID, ANY_PCI_ID, ANY_PCI_ID, PCI_CLASS_STORAGE_SATA_AHCI, 0xFFFFFF, BoardAhciIgnIferr}, //164
    {0x197B, 0x2362, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciIgnIferr}, //165
    {0x197B, 0x236F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciIgnIferr}, //166


    //ATI Devices
    {0x1002, 0x4380, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciSb600}, //167
    {0x1002, 0x4390, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciSb700}, //168
    {0x1002, 0x4391, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciSb700}, //169
    {0x1002, 0x4392, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciSb700}, //170
    {0x1002, 0x4393, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciSb700}, //171
    {0x1002, 0x4394, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciSb700}, //172
    {0x1002, 0x4395, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciSb700}, //173

    //Amazon Devices
    {0xC0A9, 0x0031, ANY_PCI_ID, ANY_PCI_ID, PCI_CLASS_STORAGE_SATA_AHCI, 0xFFFFFF, BoardAhciAl},//174

    //Amd Devices
    {0x1002, 0x7800, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //175
    {0x1002, 0x7801, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciNoDebounceDelay}, //176
    {0x1002, 0x7900, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //177
    {0x1002, 0x7901, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhci}, //178
	{0x1002, ANY_PCI_ID, ANY_PCI_ID, ANY_PCI_ID, PCI_CLASS_STORAGE_RAID << 8, 0xFFFFFF, BoardAhci}, //179

    //Dell S Devices
    {0x8086, ANY_PCI_ID, 0x1028, ANY_PCI_ID, PCI_CLASS_STORAGE_RAID << 8, 0xFFFFFF, BoardAhciPcsQuirk}, //180
    
    //VIA
    {0x1106, 0x3349, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciVt8251}, //181
    {0x1106, 0x6287, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciVt8251}, //182
    
    //NVIDIA
    {0x10DE, 0x044C, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp65}, //183
    {0x10DE, 0x044D, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp65}, //184
    {0x10DE, 0x044E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp65}, //185
    {0x10DE, 0x045C, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp65}, //186
    {0x10DE, 0x045D, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp65}, //187
    {0x10DE, 0x045E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp65}, //188
    {0x10DE, 0x045F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp65}, //189
    {0x10DE, 0x0550, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp65}, //190
    {0x10DE, 0x0551, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp67}, //191
    {0x10DE, 0x0552, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp67}, //192
    {0x10DE, 0x0553, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp67}, //193
    {0x10DE, 0x0554, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp67}, //194
    {0x10DE, 0x0555, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp67}, //195
    {0x10DE, 0x0556, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp67}, //196
    {0x10DE, 0x0557, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp67}, //197
    {0x10DE, 0x0558, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp67}, //198
    {0x10DE, 0x0559, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp67}, //199
    {0x10DE, 0x055A, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp67}, //200
    {0x10DE, 0x055B, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp67}, //201
    {0x10DE, 0x0580, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //202
    {0x10DE, 0x0581, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //203
    {0x10DE, 0x0582, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //204
    {0x10DE, 0x0583, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //205
    {0x10DE, 0x0584, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //206
    {0x10DE, 0x0585, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //207
    {0x10DE, 0x0586, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //208
    {0x10DE, 0x0587, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //209
    {0x10DE, 0x0588, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //210
    {0x10DE, 0x0589, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //211
    {0x10DE, 0x058A, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //212
    {0x10DE, 0x058B, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //213
    {0x10DE, 0x058C, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //214
    {0x10DE, 0x058D, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //215
    {0x10DE, 0x058E, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //216
    {0x10DE, 0x058F, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcpLinux}, //217
    {0x10DE, 0x07F0, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp73}, //218
    {0x10DE, 0x07F1, ANY_PCI_ID, ANY_PCI_ID, 0,0, BoardAhciMcp73}, //219
	
    
    /* Generic, PCI class code for AHCI */
	{ ANY_PCI_ID, ANY_PCI_ID, ANY_PCI_ID, ANY_PCI_ID,
	  PCI_CLASS_STORAGE_SATA_AHCI, 0xffffff, BoardAhci}, //220
    {0,0,0,0,0,0,0} // null terminator
};

LOUSTATUS AhciInitOne(    
    P_PCI_DEVICE_OBJECT PDEV, 
    PDRIVER_OBJECT DriverObject, 
    PUNICODE_STRING RegistryEntry
);
void AhciRemoveOne(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config);
void AhciShutdownOne(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config);
void AhciIntelPcsQuirk(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);
LOUSTATUS AhciVt8251HardReset(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);
LOUSTATUS AhciAvnHardReset(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba); 
LOUSTATUS AhciMcp89Apple(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);
LOUSTATUS AhciP5WdhHardReset(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);
LOUSTATUS AhciPciDeviceRuntimeSuspend(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);
LOUSTATUS AhciPciDeviceRuntimeResume(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);


LOUSTATUS AhciInitOne(
    P_PCI_DEVICE_OBJECT PDEV, 
    PDRIVER_OBJECT DriverObject, 
    PUNICODE_STRING RegistryEntry
){

    //LouPrint("Initializing AHCI Device\n");


    while(1);
    return STATUS_SUCCESS;
}
void AhciRemoveOne(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config){

}
void AhciShutdownOne(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config){

}
void AhciIntelPcsQuirk(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba){

}
LOUSTATUS AhciVt8251HardReset(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba){


    return STATUS_SUCCESS;
}
LOUSTATUS AhciAvnHardReset(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba){


    return STATUS_SUCCESS;
}
LOUSTATUS AhciMcp89Apple(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba){


    return STATUS_SUCCESS;
}
LOUSTATUS AhciP5WdhHardReset(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba){


    return STATUS_SUCCESS;
}
LOUSTATUS AhciPciDeviceRuntimeSuspend(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba){


    return STATUS_SUCCESS;
}
LOUSTATUS AhciPciDeviceRuntimeResume(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba){


    return STATUS_SUCCESS;
}



bool AhciPciScan(P_PCI_DEVICE_OBJECT PDEV,  PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryEntry){

    //PCI_COMMON_CONFIG PciConfig;
    //GetPciConfiguration(PDEV->bus ,PDEV->slot, PDEV->func, &PciConfig);

    //uint64_t DeviceDetected = LouKeHalLinuxPciCheckForCompatibleConfiguration(&PciConfig, AhciPciTable);

    //if(DeviceDetected < SUPPORTED_AHCI_DEVICES){
        //PAHCI_DRIVER_EXTENDED_OBJECT DevExtObj = (PAHCI_DRIVER_EXTENDED_OBJECT)LouMalloc(sizeof(AHCI_DRIVER_EXTENDED_OBJECT));
        //DevExtObj->DeviceNumber = DeviceDetected;
        //PDEV->DeviceExtendedObject = (uintptr_t)DevExtObj;
        DriverObject->InitializePciDevice = AhciInitOne;
        return true;
    //}
    //return false;
}

LOUDDK_API_ENTRY
LOUSTATUS
DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryEntry) {

    LouPrint("Driver Has Executed\n");

    return STATUS_SUCCESS;
}

