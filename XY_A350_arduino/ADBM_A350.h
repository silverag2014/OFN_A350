/*
    ADBMA350.h
	DECEMBER 4, 2010
	by: SILVER
*/

#ifndef _ADBM_A350_h_
#define _ADBM_A350_h_



// A350 Register Defines
#define	Product_ID	0x00
#define	Revision_ID	0x01
#define	EVENT   	0x02

#define	Delta_X		0x03
#define	Delta_Y		0x04
#define	SQUAL		0x05
#define	Shutter_Upper	0x06
#define	Shutter_Lower	0x07
#define	Maximum_Pixel	0x08
#define	Pixel_Sum	0x09
#define	Minimum_Pixel	0x0a
#define	Pixel_Grab	0x0b
#define	CRC0		0x0c
#define	CRC1		0x0d
#define	CRC2		0x0e
#define	CRC3		0x0f
#define	Self_Test	0x10

#define	BUTTON_STATUS		0x12
#define	Run_Downshift		0x13
#define	Rest1_Period    	0x14
#define	Rest1_Downshift		0x15
#define	Rest2_Period    	0x16
#define	Rest2_Downshift		0x17
#define	Rest3_Period    	0x18

#define	LED_CTRL		0x1a
#define	IO_Mode			0x1c
#define	EVENT_CTRL		0x1d
#define	Fast_Video_Dump		0x28
#define	Observation		0x2e
#define	Pad_Status		0x31
#define	Pad_Test_Out		0x33
#define	Pad_Function		0x34
#define	SOFT_RESET		0x3a
#define	Shutter_Max_Hi		0x3b
#define	Shutter_Max_Lo		0x3c
#define	Inverse_Revision_ID	0x3e
#define	Inverse_Product_ID	0x3f
#define	OFN_Engine1		0x60
#define	OFN_Engine2		0x61
#define	Resolution		0x62
#define	Speed_Ctrl      	0x63
#define	Speed_ST12		0x64
#define	Speed_ST21		0x65
#define	Speed_ST23		0x66
#define	Speed_ST32		0x67
#define	Speed_ST34		0x68
#define	Speed_ST43		0x69
#define	Speed_ST45		0x6a
#define	Speed_ST54		0x6b
#define	GPIO_CTRL		0x6c
#define	AD_CTRL	 	        0x6d
#define	AD_ATH_HIGH		0x6e
#define	AD_DTH_HIGH		0x6f
#define	AD_ATH_LOW		0x70
#define	AD_DTH_LOW		0x71
#define	QUANTIZE_CTRL    	0x72
#define	XYQ_THRESH		0x73
#define	MOTION_CTRL      	0x74
#define	FPD_CTRL		0x75
#define	FPD_THRESH		0x76
#define	ORIENT_CTRL      	0x77
#define	FPD_SQUAL_THRESH	0x78
#define	FPD_VALUE		0x79
#define	FPD_STATUS		0x7a
#define	SC_CTRL 		0x7b
#define	SC_T_TAPNHOLD		0x7c
#define	SC_T_DOUBLE		0x7d
#define	SC_DELTA_THRESH		0x7e
#define	SC_STATUS		0x7F

#endif


