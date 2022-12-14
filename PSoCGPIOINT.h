/******************************************************************************
*  Generated by PSoC Designer 5.4.3191
******************************************************************************/
#include <m8c.h>
// SwitchIn address and mask defines
#pragma	ioport	SwitchIn_Data_ADDR:	0x4
BYTE			SwitchIn_Data_ADDR;
#pragma	ioport	SwitchIn_DriveMode_0_ADDR:	0x104
BYTE			SwitchIn_DriveMode_0_ADDR;
#pragma	ioport	SwitchIn_DriveMode_1_ADDR:	0x105
BYTE			SwitchIn_DriveMode_1_ADDR;
#pragma	ioport	SwitchIn_DriveMode_2_ADDR:	0x7
BYTE			SwitchIn_DriveMode_2_ADDR;
#pragma	ioport	SwitchIn_GlobalSelect_ADDR:	0x6
BYTE			SwitchIn_GlobalSelect_ADDR;
#pragma	ioport	SwitchIn_IntCtrl_0_ADDR:	0x106
BYTE			SwitchIn_IntCtrl_0_ADDR;
#pragma	ioport	SwitchIn_IntCtrl_1_ADDR:	0x107
BYTE			SwitchIn_IntCtrl_1_ADDR;
#pragma	ioport	SwitchIn_IntEn_ADDR:	0x5
BYTE			SwitchIn_IntEn_ADDR;
#define SwitchIn_MASK 0x1
// TachIn address and mask defines
#pragma	ioport	TachIn_Data_ADDR:	0x4
BYTE			TachIn_Data_ADDR;
#pragma	ioport	TachIn_DriveMode_0_ADDR:	0x104
BYTE			TachIn_DriveMode_0_ADDR;
#pragma	ioport	TachIn_DriveMode_1_ADDR:	0x105
BYTE			TachIn_DriveMode_1_ADDR;
#pragma	ioport	TachIn_DriveMode_2_ADDR:	0x7
BYTE			TachIn_DriveMode_2_ADDR;
#pragma	ioport	TachIn_GlobalSelect_ADDR:	0x6
BYTE			TachIn_GlobalSelect_ADDR;
#pragma	ioport	TachIn_IntCtrl_0_ADDR:	0x106
BYTE			TachIn_IntCtrl_0_ADDR;
#pragma	ioport	TachIn_IntCtrl_1_ADDR:	0x107
BYTE			TachIn_IntCtrl_1_ADDR;
#pragma	ioport	TachIn_IntEn_ADDR:	0x5
BYTE			TachIn_IntEn_ADDR;
#define TachIn_MASK 0x4
// FanPWMOut address and mask defines
#pragma	ioport	FanPWMOut_Data_ADDR:	0x4
BYTE			FanPWMOut_Data_ADDR;
#pragma	ioport	FanPWMOut_DriveMode_0_ADDR:	0x104
BYTE			FanPWMOut_DriveMode_0_ADDR;
#pragma	ioport	FanPWMOut_DriveMode_1_ADDR:	0x105
BYTE			FanPWMOut_DriveMode_1_ADDR;
#pragma	ioport	FanPWMOut_DriveMode_2_ADDR:	0x7
BYTE			FanPWMOut_DriveMode_2_ADDR;
#pragma	ioport	FanPWMOut_GlobalSelect_ADDR:	0x6
BYTE			FanPWMOut_GlobalSelect_ADDR;
#pragma	ioport	FanPWMOut_IntCtrl_0_ADDR:	0x106
BYTE			FanPWMOut_IntCtrl_0_ADDR;
#pragma	ioport	FanPWMOut_IntCtrl_1_ADDR:	0x107
BYTE			FanPWMOut_IntCtrl_1_ADDR;
#pragma	ioport	FanPWMOut_IntEn_ADDR:	0x5
BYTE			FanPWMOut_IntEn_ADDR;
#define FanPWMOut_MASK 0x10
// TachOverrideOut address and mask defines
#pragma	ioport	TachOverrideOut_Data_ADDR:	0x4
BYTE			TachOverrideOut_Data_ADDR;
#pragma	ioport	TachOverrideOut_DriveMode_0_ADDR:	0x104
BYTE			TachOverrideOut_DriveMode_0_ADDR;
#pragma	ioport	TachOverrideOut_DriveMode_1_ADDR:	0x105
BYTE			TachOverrideOut_DriveMode_1_ADDR;
#pragma	ioport	TachOverrideOut_DriveMode_2_ADDR:	0x7
BYTE			TachOverrideOut_DriveMode_2_ADDR;
#pragma	ioport	TachOverrideOut_GlobalSelect_ADDR:	0x6
BYTE			TachOverrideOut_GlobalSelect_ADDR;
#pragma	ioport	TachOverrideOut_IntCtrl_0_ADDR:	0x106
BYTE			TachOverrideOut_IntCtrl_0_ADDR;
#pragma	ioport	TachOverrideOut_IntCtrl_1_ADDR:	0x107
BYTE			TachOverrideOut_IntCtrl_1_ADDR;
#pragma	ioport	TachOverrideOut_IntEn_ADDR:	0x5
BYTE			TachOverrideOut_IntEn_ADDR;
#define TachOverrideOut_MASK 0x40
// LCDD4 address and mask defines
#pragma	ioport	LCDD4_Data_ADDR:	0x8
BYTE			LCDD4_Data_ADDR;
#pragma	ioport	LCDD4_DriveMode_0_ADDR:	0x108
BYTE			LCDD4_DriveMode_0_ADDR;
#pragma	ioport	LCDD4_DriveMode_1_ADDR:	0x109
BYTE			LCDD4_DriveMode_1_ADDR;
#pragma	ioport	LCDD4_DriveMode_2_ADDR:	0xb
BYTE			LCDD4_DriveMode_2_ADDR;
#pragma	ioport	LCDD4_GlobalSelect_ADDR:	0xa
BYTE			LCDD4_GlobalSelect_ADDR;
#pragma	ioport	LCDD4_IntCtrl_0_ADDR:	0x10a
BYTE			LCDD4_IntCtrl_0_ADDR;
#pragma	ioport	LCDD4_IntCtrl_1_ADDR:	0x10b
BYTE			LCDD4_IntCtrl_1_ADDR;
#pragma	ioport	LCDD4_IntEn_ADDR:	0x9
BYTE			LCDD4_IntEn_ADDR;
#define LCDD4_MASK 0x1
// LCDD4 Shadow defines
//   LCDD4_DataShadow define
extern BYTE Port_2_Data_SHADE;
#define LCDD4_DataShadow (*(unsigned char*)&Port_2_Data_SHADE)
//   LCDD4_DriveMode_0Shadow define
extern BYTE Port_2_DriveMode_0_SHADE;
#define LCDD4_DriveMode_0Shadow (*(unsigned char*)&Port_2_DriveMode_0_SHADE)
//   LCDD4_DriveMode_1Shadow define
extern BYTE Port_2_DriveMode_1_SHADE;
#define LCDD4_DriveMode_1Shadow (*(unsigned char*)&Port_2_DriveMode_1_SHADE)
// LCDD5 address and mask defines
#pragma	ioport	LCDD5_Data_ADDR:	0x8
BYTE			LCDD5_Data_ADDR;
#pragma	ioport	LCDD5_DriveMode_0_ADDR:	0x108
BYTE			LCDD5_DriveMode_0_ADDR;
#pragma	ioport	LCDD5_DriveMode_1_ADDR:	0x109
BYTE			LCDD5_DriveMode_1_ADDR;
#pragma	ioport	LCDD5_DriveMode_2_ADDR:	0xb
BYTE			LCDD5_DriveMode_2_ADDR;
#pragma	ioport	LCDD5_GlobalSelect_ADDR:	0xa
BYTE			LCDD5_GlobalSelect_ADDR;
#pragma	ioport	LCDD5_IntCtrl_0_ADDR:	0x10a
BYTE			LCDD5_IntCtrl_0_ADDR;
#pragma	ioport	LCDD5_IntCtrl_1_ADDR:	0x10b
BYTE			LCDD5_IntCtrl_1_ADDR;
#pragma	ioport	LCDD5_IntEn_ADDR:	0x9
BYTE			LCDD5_IntEn_ADDR;
#define LCDD5_MASK 0x2
// LCDD5 Shadow defines
//   LCDD5_DataShadow define
extern BYTE Port_2_Data_SHADE;
#define LCDD5_DataShadow (*(unsigned char*)&Port_2_Data_SHADE)
//   LCDD5_DriveMode_0Shadow define
extern BYTE Port_2_DriveMode_0_SHADE;
#define LCDD5_DriveMode_0Shadow (*(unsigned char*)&Port_2_DriveMode_0_SHADE)
//   LCDD5_DriveMode_1Shadow define
extern BYTE Port_2_DriveMode_1_SHADE;
#define LCDD5_DriveMode_1Shadow (*(unsigned char*)&Port_2_DriveMode_1_SHADE)
// LCDD6 address and mask defines
#pragma	ioport	LCDD6_Data_ADDR:	0x8
BYTE			LCDD6_Data_ADDR;
#pragma	ioport	LCDD6_DriveMode_0_ADDR:	0x108
BYTE			LCDD6_DriveMode_0_ADDR;
#pragma	ioport	LCDD6_DriveMode_1_ADDR:	0x109
BYTE			LCDD6_DriveMode_1_ADDR;
#pragma	ioport	LCDD6_DriveMode_2_ADDR:	0xb
BYTE			LCDD6_DriveMode_2_ADDR;
#pragma	ioport	LCDD6_GlobalSelect_ADDR:	0xa
BYTE			LCDD6_GlobalSelect_ADDR;
#pragma	ioport	LCDD6_IntCtrl_0_ADDR:	0x10a
BYTE			LCDD6_IntCtrl_0_ADDR;
#pragma	ioport	LCDD6_IntCtrl_1_ADDR:	0x10b
BYTE			LCDD6_IntCtrl_1_ADDR;
#pragma	ioport	LCDD6_IntEn_ADDR:	0x9
BYTE			LCDD6_IntEn_ADDR;
#define LCDD6_MASK 0x4
// LCDD6 Shadow defines
//   LCDD6_DataShadow define
extern BYTE Port_2_Data_SHADE;
#define LCDD6_DataShadow (*(unsigned char*)&Port_2_Data_SHADE)
//   LCDD6_DriveMode_0Shadow define
extern BYTE Port_2_DriveMode_0_SHADE;
#define LCDD6_DriveMode_0Shadow (*(unsigned char*)&Port_2_DriveMode_0_SHADE)
//   LCDD6_DriveMode_1Shadow define
extern BYTE Port_2_DriveMode_1_SHADE;
#define LCDD6_DriveMode_1Shadow (*(unsigned char*)&Port_2_DriveMode_1_SHADE)
// LCDD7 address and mask defines
#pragma	ioport	LCDD7_Data_ADDR:	0x8
BYTE			LCDD7_Data_ADDR;
#pragma	ioport	LCDD7_DriveMode_0_ADDR:	0x108
BYTE			LCDD7_DriveMode_0_ADDR;
#pragma	ioport	LCDD7_DriveMode_1_ADDR:	0x109
BYTE			LCDD7_DriveMode_1_ADDR;
#pragma	ioport	LCDD7_DriveMode_2_ADDR:	0xb
BYTE			LCDD7_DriveMode_2_ADDR;
#pragma	ioport	LCDD7_GlobalSelect_ADDR:	0xa
BYTE			LCDD7_GlobalSelect_ADDR;
#pragma	ioport	LCDD7_IntCtrl_0_ADDR:	0x10a
BYTE			LCDD7_IntCtrl_0_ADDR;
#pragma	ioport	LCDD7_IntCtrl_1_ADDR:	0x10b
BYTE			LCDD7_IntCtrl_1_ADDR;
#pragma	ioport	LCDD7_IntEn_ADDR:	0x9
BYTE			LCDD7_IntEn_ADDR;
#define LCDD7_MASK 0x8
// LCDD7 Shadow defines
//   LCDD7_DataShadow define
extern BYTE Port_2_Data_SHADE;
#define LCDD7_DataShadow (*(unsigned char*)&Port_2_Data_SHADE)
//   LCDD7_DriveMode_0Shadow define
extern BYTE Port_2_DriveMode_0_SHADE;
#define LCDD7_DriveMode_0Shadow (*(unsigned char*)&Port_2_DriveMode_0_SHADE)
//   LCDD7_DriveMode_1Shadow define
extern BYTE Port_2_DriveMode_1_SHADE;
#define LCDD7_DriveMode_1Shadow (*(unsigned char*)&Port_2_DriveMode_1_SHADE)
// LCDE address and mask defines
#pragma	ioport	LCDE_Data_ADDR:	0x8
BYTE			LCDE_Data_ADDR;
#pragma	ioport	LCDE_DriveMode_0_ADDR:	0x108
BYTE			LCDE_DriveMode_0_ADDR;
#pragma	ioport	LCDE_DriveMode_1_ADDR:	0x109
BYTE			LCDE_DriveMode_1_ADDR;
#pragma	ioport	LCDE_DriveMode_2_ADDR:	0xb
BYTE			LCDE_DriveMode_2_ADDR;
#pragma	ioport	LCDE_GlobalSelect_ADDR:	0xa
BYTE			LCDE_GlobalSelect_ADDR;
#pragma	ioport	LCDE_IntCtrl_0_ADDR:	0x10a
BYTE			LCDE_IntCtrl_0_ADDR;
#pragma	ioport	LCDE_IntCtrl_1_ADDR:	0x10b
BYTE			LCDE_IntCtrl_1_ADDR;
#pragma	ioport	LCDE_IntEn_ADDR:	0x9
BYTE			LCDE_IntEn_ADDR;
#define LCDE_MASK 0x10
// LCDE Shadow defines
//   LCDE_DataShadow define
extern BYTE Port_2_Data_SHADE;
#define LCDE_DataShadow (*(unsigned char*)&Port_2_Data_SHADE)
//   LCDE_DriveMode_0Shadow define
extern BYTE Port_2_DriveMode_0_SHADE;
#define LCDE_DriveMode_0Shadow (*(unsigned char*)&Port_2_DriveMode_0_SHADE)
//   LCDE_DriveMode_1Shadow define
extern BYTE Port_2_DriveMode_1_SHADE;
#define LCDE_DriveMode_1Shadow (*(unsigned char*)&Port_2_DriveMode_1_SHADE)
// LCDRS address and mask defines
#pragma	ioport	LCDRS_Data_ADDR:	0x8
BYTE			LCDRS_Data_ADDR;
#pragma	ioport	LCDRS_DriveMode_0_ADDR:	0x108
BYTE			LCDRS_DriveMode_0_ADDR;
#pragma	ioport	LCDRS_DriveMode_1_ADDR:	0x109
BYTE			LCDRS_DriveMode_1_ADDR;
#pragma	ioport	LCDRS_DriveMode_2_ADDR:	0xb
BYTE			LCDRS_DriveMode_2_ADDR;
#pragma	ioport	LCDRS_GlobalSelect_ADDR:	0xa
BYTE			LCDRS_GlobalSelect_ADDR;
#pragma	ioport	LCDRS_IntCtrl_0_ADDR:	0x10a
BYTE			LCDRS_IntCtrl_0_ADDR;
#pragma	ioport	LCDRS_IntCtrl_1_ADDR:	0x10b
BYTE			LCDRS_IntCtrl_1_ADDR;
#pragma	ioport	LCDRS_IntEn_ADDR:	0x9
BYTE			LCDRS_IntEn_ADDR;
#define LCDRS_MASK 0x20
// LCDRS Shadow defines
//   LCDRS_DataShadow define
extern BYTE Port_2_Data_SHADE;
#define LCDRS_DataShadow (*(unsigned char*)&Port_2_Data_SHADE)
//   LCDRS_DriveMode_0Shadow define
extern BYTE Port_2_DriveMode_0_SHADE;
#define LCDRS_DriveMode_0Shadow (*(unsigned char*)&Port_2_DriveMode_0_SHADE)
//   LCDRS_DriveMode_1Shadow define
extern BYTE Port_2_DriveMode_1_SHADE;
#define LCDRS_DriveMode_1Shadow (*(unsigned char*)&Port_2_DriveMode_1_SHADE)
// LCDRW address and mask defines
#pragma	ioport	LCDRW_Data_ADDR:	0x8
BYTE			LCDRW_Data_ADDR;
#pragma	ioport	LCDRW_DriveMode_0_ADDR:	0x108
BYTE			LCDRW_DriveMode_0_ADDR;
#pragma	ioport	LCDRW_DriveMode_1_ADDR:	0x109
BYTE			LCDRW_DriveMode_1_ADDR;
#pragma	ioport	LCDRW_DriveMode_2_ADDR:	0xb
BYTE			LCDRW_DriveMode_2_ADDR;
#pragma	ioport	LCDRW_GlobalSelect_ADDR:	0xa
BYTE			LCDRW_GlobalSelect_ADDR;
#pragma	ioport	LCDRW_IntCtrl_0_ADDR:	0x10a
BYTE			LCDRW_IntCtrl_0_ADDR;
#pragma	ioport	LCDRW_IntCtrl_1_ADDR:	0x10b
BYTE			LCDRW_IntCtrl_1_ADDR;
#pragma	ioport	LCDRW_IntEn_ADDR:	0x9
BYTE			LCDRW_IntEn_ADDR;
#define LCDRW_MASK 0x40
// LCDRW Shadow defines
//   LCDRW_DataShadow define
extern BYTE Port_2_Data_SHADE;
#define LCDRW_DataShadow (*(unsigned char*)&Port_2_Data_SHADE)
//   LCDRW_DriveMode_0Shadow define
extern BYTE Port_2_DriveMode_0_SHADE;
#define LCDRW_DriveMode_0Shadow (*(unsigned char*)&Port_2_DriveMode_0_SHADE)
//   LCDRW_DriveMode_1Shadow define
extern BYTE Port_2_DriveMode_1_SHADE;
#define LCDRW_DriveMode_1Shadow (*(unsigned char*)&Port_2_DriveMode_1_SHADE)
