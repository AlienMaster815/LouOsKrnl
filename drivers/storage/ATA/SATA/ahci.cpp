#define _KERNEL_MODULE_



#include <LouDDK.h>
#include <NtAPI.h>
#include <Hal.h>

#include "ahci.h"

#define AHCI_DEFAULT_BAR 5

#define DRIVER_NAME "Lousine Internal AHCI .SYS Driver"
#define DRIVER_VERSION "1.04"

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


enum{
    AHCI_PCI_BAR_STA2x11    = 0,
    AHCI_PCI_BAR_CAVIUM     = 0,
    AHCI_PCI_BAR_LOONGSON   = 0,
    AHCI_PCI_BAR_ENMOTUS    = 2,
    AHCI_PCI_BAR_CAVIUM_GEN5 = 4,
    AHCI_BAR_STANDARD       = 5,
};

enum BoarIds{
    BoardAhci = 1,
    BoardAhci43BitDma = 2,
    BoardAhciIgnIferr = 3,
    BoardAhciNoDebounceDelay = 4,
    BoardAhciNoMsi = 5,

    BoardAhciPcsQuirk = 6,
    BoardAhciPcsQuirkNoDevslp = 7,
    BoardAhciPcsQuirkNoSntf = 8,
    BoardAhciYesFbs = 9,

    BoardAhciAl = 10,
    BoardAhciAvn = 11,
    BoardAhciMcp65 = 12,
    BoardAhciMcp77 = 13,
    BoardAhciMcp89 = 14,
    BoardAhciMv = 15,
    BoardAhciSb600 = 16,
    BoardAhciSb700 = 17,
    BoardAhciVt8251 = 18,

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

bool AhciSb600Enable64Bit(P_PCI_DEVICE_OBJECT PDEV) {


    return false;
}

void GetAhciDevicePortInfo(uint64_t BoardId, PATA_PORT PPortInfo) {
    
    if (!PPortInfo)return;

    switch (BoardId) {
    case BoardAhci:
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhci43BitDma:
        PPortInfo->HFlags = AHCI_HFLAG_43BIT_ONLY;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciIgnIferr:
        PPortInfo->HFlags = AHCI_HFLAG_IGN_IRQ_IF_ERR;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciNoDebounceDelay:
        //PPortInfo->HFlags = AHCI_HFLAG_IGN_IRQ_IF_ERR;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciNoMsi:
        PPortInfo->HFlags = AHCI_HFLAG_MULTI_MSI;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciPcsQuirk:
        PPortInfo->HFlags = AHCI_HFLAG_INTEL_PCS_QUIRK;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciPcsQuirkNoDevslp:
        PPortInfo->HFlags = AHCI_HFLAG_INTEL_PCS_QUIRK | AHCI_HFLAG_NO_SNTF;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciYesFbs:
        PPortInfo->HFlags = AHCI_HFLAG_YES_FBS;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciAl:
        PPortInfo->HFlags = AHCI_HFLAG_NO_PMP | AHCI_HFLAG_NO_MSI;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciAvn:
        PPortInfo->HFlags = AHCI_HFLAG_INTEL_PCS_QUIRK;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciMcp65:
        PPortInfo->HFlags = AHCI_HFLAG_NO_FPDMA_AA | AHCI_HFLAG_NO_PMP | AHCI_HFLAG_YES_NCQ;
        PPortInfo->Flags = AHCI_FLAG_COMMON | ATA_FLAG_NO_DIPM;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciMcp77:
        PPortInfo->HFlags = AHCI_HFLAG_NO_FPDMA_AA | AHCI_HFLAG_NO_PMP;
        PPortInfo->Flags = AHCI_FLAG_COMMON | ATA_FLAG_NO_DIPM;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciMcp89:
        PPortInfo->HFlags = AHCI_HFLAG_NO_FPDMA_AA;
        PPortInfo->Flags = AHCI_FLAG_COMMON | ATA_FLAG_NO_DIPM;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciMv:
        PPortInfo->HFlags = AHCI_HFLAG_NO_NCQ | AHCI_HFLAG_NO_MSI | AHCI_HFLAG_MV_PATA | AHCI_HFLAG_NO_PMP;
        PPortInfo->Flags = ATA_FLAG_SATA | ATA_FLAG_SATA;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciSb600:
        PPortInfo->HFlags = AHCI_HFLAG_IGN_SERR_INTERNAL | AHCI_HFLAG_NO_MSI | AHCI_HFLAG_SECT255 | AHCI_HFLAG_32BIT_ONLY;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciSb700:
        PPortInfo->HFlags = AHCI_HFLAG_IGN_SERR_INTERNAL;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    case BoardAhciVt8251:
        PPortInfo->HFlags = AHCI_HFLAG_NO_NCQ | AHCI_HFLAG_NO_PMP;
        PPortInfo->Flags = AHCI_FLAG_COMMON;
        PPortInfo->PIoMask = ATA_PIO4;
        PPortInfo->UDmaMask = ATA_UDMA6;
        //PPortInfo->JITFlags = ATA_LFLAG_NO_DEBOUNCE_DELAY;
        //PPortInfo->AhciOperations = &AhciOperations;
        return;
    }
}

LOUSTATUS AhciInitOne(
    P_PCI_DEVICE_OBJECT PDEV,
    PDRIVER_OBJECT DriverObject,
    PUNICODE_STRING RegistryEntry
);
void AhciRemoveOne(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config);
void AhciShutdownOne(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config);
void AhciIntelPcsQuirk(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);
LOUSTATUS AhciVt8251HardReset(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);
LOUSTATUS AhciAvnHardReset(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);
void AhciMcp89Apple(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config);
LOUSTATUS AhciP5WdhHardReset(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);
LOUSTATUS AhciPciDeviceRuntimeSuspend(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);
LOUSTATUS AhciPciDeviceRuntimeResume(P_PCI_DEVICE_OBJECT PDEV, PPCI_COMMON_CONFIG Config, PAHCI_MEMORY_REGISTERS Hba);
int AhciInitializeMsi(P_PCI_DEVICE_OBJECT PDEV, int NPorts, PAHCI_DRIVER_EXTENDED_OBJECT ExtendedObject);

LOUSTATUS AhciInitOne(
    P_PCI_DEVICE_OBJECT PDEV,
    PDRIVER_OBJECT DriverObject,
    PUNICODE_STRING RegistryEntry
) {
    LouPrint("AhciInitOne()\n");
    PAHCI_DRIVER_EXTENDED_OBJECT ExtendedObject = (PAHCI_DRIVER_EXTENDED_OBJECT)PDEV->DeviceExtendedObject;
    uint64_t DeviceFlags = AhciPciTable[ExtendedObject->DeviceNumber].Flags;
    LOUSTATUS Status = STATUS_SUCCESS;
    int nports;// , i;
    uint8_t AhciBar = AHCI_DEFAULT_BAR;
    PCI_COMMON_CONFIG Config;
    LouPrint("Initializing AHCI Device\n");
    GetPciConfiguration(PDEV->bus, PDEV->slot, PDEV->func, &Config);
    PATA_HOST AtaHost;

    if (Config.Header.VendorID == 0x11AB) {//let ahci out of the way for pata
        return (LOUSTATUS)STATUS_NO_SUCH_DEVICE;
    }

    if (DeviceFlags == BoardAhciMcp89) {
        AhciMcp89Apple(PDEV, &Config);
    }
    if (Config.Header.VendorID == 0x105A) {
        LouPrint("AHCI DEVICE : PDC42819 can only drive SATA devices with this driver\n");
    }

    if ((Config.Header.VendorID == 0x104A) && (Config.Header.DeviceID == 0xCC06)) {
        AhciBar = AHCI_PCI_BAR_STA2x11;
    }
    else if ((Config.Header.VendorID == 0x1C44) && (Config.Header.DeviceID == 0x8000)) {
        AhciBar = AHCI_PCI_BAR_ENMOTUS;
    }
    else if (Config.Header.VendorID == 0x177D) {
        if (Config.Header.DeviceID == 0xA01C) {
            AhciBar = AHCI_PCI_BAR_CAVIUM;
        }
        if (Config.Header.DeviceID == 0xA084) {
            AhciBar = AHCI_PCI_BAR_CAVIUM_GEN5;
        }
    }
    else if ((Config.Header.VendorID == 0x0014) && (Config.Header.DeviceID == 0x7A08)) {
        AhciBar = AHCI_PCI_BAR_LOONGSON;
    }

    Status = LouKeHalEnablePciDevice(PDEV);
    if (Status != STATUS_SUCCESS) {
        return Status;
    }

    if ((Config.Header.VendorID == 0x8086) &&
        (Config.Header.DeviceID == 0x2652 ||
            Config.Header.DeviceID == 0x2653)) {
        uint8_t Map;

        Map = LouKeReadPciUint8(PDEV, ICH_MAP);
        if (Map & 0x03) {
            LouPrint("Controller Is In Combined Mode, Cant Enable AHCI Mode\n");
            return STATUS_NO_SUCH_DEVICE;
        }
    }
    //next step would to get all the bars but they are already stored in our PCI Config Header
    //acording to the linux Implementation MCP65 A1 And A2 Cannot Do MSI So We Are Going To
    //skip to flags

    GetAhciDevicePortInfo(DeviceFlags, &ExtendedObject->DevicePortInfo);

    if ((DeviceFlags == BoardAhciMcp65) && ((Config.Header.RevisionID == 0xA1) || (Config.Header.RevisionID == 0xA2))) {
        ExtendedObject->DevicePortInfo.HFlags |= AHCI_HFLAG_NO_MSI;
    }

    if ((DeviceFlags == BoardAhciSb700) && (Config.Header.RevisionID > 0x40)) {
        ExtendedObject->DevicePortInfo.HFlags &= ~(AHCI_HFLAG_IGN_SERR_INTERNAL);
    }

    if (DeviceFlags == BoardAhciSb600) {
        if(AhciSb600Enable64Bit(PDEV)){
            ExtendedObject->DevicePortInfo.HFlags &= ~(AHCI_HFLAG_32BIT_ONLY);
        }
    }

    ExtendedObject->Host = (PAHCI_MEMORY_REGISTERS)LouKeHalGetPciVirtualBaseAddress(&Config, AhciBar);

    LouPrint("Host Is:%h\n", ExtendedObject->Host);

    ExtendedObject->HandOffPciContext = LouKeHalPciSaveContext(PDEV);
    PAHCI_MEMORY_REGISTERS Host = ExtendedObject->Host;
    //lets rock and roll
    if (Host->Capabilities & HOST_CAP_NCQ) {
        ExtendedObject->DevicePortInfo.Flags |= ATA_FLAG_NCQ;
        if (ExtendedObject->DevicePortInfo.HFlags & AHCI_HFLAG_NO_FPDMA_AA) {
            ExtendedObject->DevicePortInfo.Flags |= ATA_FLAG_FPDMA_AA;
        }

        ExtendedObject->DevicePortInfo.Flags |= ATA_FLAG_FPDMA_AUX;
    }

    if (Host->Capabilities & HOST_CAP_PMP) {
        ExtendedObject->DevicePortInfo.Flags |= ATA_FLAG_PMP;
    }

    AhciSetEmMessage(ExtendedObject, &ExtendedObject->DevicePortInfo);

    nports = ((Host->Capabilities >> 8) & 0x1F) + 1;

    AtaHost = LouMallocAtaHost(PDEV, &ExtendedObject->DevicePortInfo, nports);
    if (!AtaHost) {
        return STATUS_INSUFFICIENT_RESOURCES;
    }
    AtaHost->PrivateData = ExtendedObject;
    AtaHost->IoMap = Host;
    
    //if (AhciInitializeMsi(PDEV, nports, ExtendedObject)) {
    //    LouPrint("Msi Initialization Failed Using PCI Interrupt Pin\n");
    //}

    if (!(Host->Capabilities & HOST_CAP_SSS)) {
        ExtendedObject->DevicePortInfo.Flags |= ATA_HOST_PARALLEL_SCAN;
    }
    else {
        LouPrint("SSS Flag Is Set But Parallel Bus Scan Disabled\n");
    }

    if (!(Host->Capabilities & HOST_CAP_PART)) {
        ExtendedObject->DevicePortInfo.Flags |= ATA_NO_HOST_PART;
    }

    if (!(Host->Capabilities & HOST_CAP_SSC))
        ExtendedObject->DevicePortInfo.Flags |= ATA_HOST_NO_SSC;

    if (!(Host->ExtendedCapabilities & HOST_CAP2_SDS)) {
        ExtendedObject->DevicePortInfo.Flags |= ATA_HOST_NO_DEVSLP;
    }
    if (ExtendedObject->DevicePortInfo.Flags & ATA_FLAG_EM) {
        AhciResetEm(AtaHost);
    }

    LouPrint("AhciInitOne() STATUS_SUCCESS\n");
    return Status;
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
//AhciMcp89Apple Initialization
void AhciMcp89Apple(P_PCI_DEVICE_OBJECT PDEV,PPCI_COMMON_CONFIG Config){
    uint32_t Tmp;
    LouPrint("Ahci: Enableing MCP89 AHCI Mode\n");

    Tmp = LouKeReadPciUint32(PDEV, 0xF8);
    Tmp |= (1 << 0x1b);
    LouKeWritePciUint32(PDEV, 0xF8, Tmp);

    Tmp = LouKeReadPciUint32(PDEV, 0x54C);
    Tmp |= (1 << 0x0C);
    LouKeWritePciUint32(PDEV, 0x54C, Tmp);

    Tmp = LouKeReadPciUint32(PDEV, 0x4A4);
    Tmp &= 0xFF;
    Tmp |= 0x01060100;
    LouKeWritePciUint32(PDEV, 0x4A4, Tmp);

    Tmp = LouKeReadPciUint32(PDEV, 0x54C);
    Tmp |= ~(1 << 0x0C);
    LouKeWritePciUint32(PDEV, 0x54C, Tmp);

    Tmp = LouKeReadPciUint32(PDEV, 0xF8);
    Tmp |= ~(1 << 0x1b);
    LouKeWritePciUint32(PDEV, 0xF8, Tmp);
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

    PCI_COMMON_CONFIG PciConfig;
    GetPciConfiguration(PDEV->bus ,PDEV->slot, PDEV->func, &PciConfig);

    uint64_t DeviceDetected = LouKeHalLinuxPciCheckForCompatibleConfiguration(&PciConfig, AhciPciTable);

    if(DeviceDetected < SUPPORTED_AHCI_DEVICES){
        LouPrint("Found A Compatible Device\n");
        PAHCI_DRIVER_EXTENDED_OBJECT DevExtObj = (PAHCI_DRIVER_EXTENDED_OBJECT)LouMalloc(sizeof(AHCI_DRIVER_EXTENDED_OBJECT));
        DevExtObj->DeviceNumber = DeviceDetected;
        PDEV->DeviceExtendedObject = (uintptr_t)DevExtObj;
        DriverObject->InitializePciDevice = AhciInitOne;
        return true;
    }
    return false;
}

LOUDDK_API_ENTRY
LOUSTATUS
DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryEntry) {
    LouPrint("Ahci Driver Entry()\n");
    LouPrint("%s : %s\n",DRIVER_NAME, DRIVER_VERSION);

    DriverObject->PciScanBus = AhciPciScan;
    LouPrint("Ahci Driver Entry() STATUS_SUCCESS\n");
    return STATUS_SUCCESS;
}

int AhciInitializeMsi(
    P_PCI_DEVICE_OBJECT PDEV, 
    int NPorts, 
    PAHCI_DRIVER_EXTENDED_OBJECT ExtendedObject
) {
    LouPrint("AhciInitializeMsi()\n");
    int NumVectors = 0;

    if (ExtendedObject->DevicePortInfo.HFlags & AHCI_HFLAG_NO_MSI) {
        return STATUS_NO_SUCH_DEVICE;
    }

    //Issues with virtualbox are making it hard to work on this No interrupts for now

    //if (NPorts > 1) {
    //   NumVectors = LouKeHalMallocPciIrqVectors(PDEV, NPorts, INT_MAX | PCI_IRQ_MSI | PCI_IRQ_MSIX);
    //}

    //NumVectors = LouKeHalMallocPciIrqVectors(PDEV, 1, PCI_IRQ_MSI | PCI_IRQ_MSIX);
   

    return NumVectors;
}