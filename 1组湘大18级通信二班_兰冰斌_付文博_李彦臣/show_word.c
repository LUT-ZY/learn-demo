#include"show_word.h"
#include"bmp.h"
/*大小为16*16*/
unsigned char chinese[1][32] = {{0x20,0x00,0x3E,0x7C,0x48,0x44,0x08,0x44,0xFF,0x44,0x14,0x44,0x22,0x7C,0x40,0x00,
0x1F,0xF0,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10}};
/*大小为8*16*/
unsigned char num[10][16] = {{0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x24,0x18,0x00,0x00},
	{0x00,0x00,0x00,0x08,0x38,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x3E,0x00,0x00},
	{0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x02,0x04,0x08,0x10,0x20,0x42,0x7E,0x00,0x00},
	{0x00,0x00,0x00,0x3C,0x42,0x42,0x02,0x04,0x18,0x04,0x02,0x42,0x42,0x3C,0x00,0x00},
	{0x00,0x00,0x00,0x04,0x0C,0x0C,0x14,0x24,0x24,0x44,0x7F,0x04,0x04,0x1F,0x00,0x00},
	{0x00,0x00,0x00,0x7E,0x40,0x40,0x40,0x78,0x44,0x02,0x02,0x42,0x44,0x38,0x00,0x00},
	{0x00,0x00,0x00,0x18,0x24,0x40,0x40,0x5C,0x62,0x42,0x42,0x42,0x22,0x1C,0x00,0x00},
	{0x00,0x00,0x00,0x7E,0x42,0x04,0x04,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x00,0x00},
	{0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x24,0x18,0x24,0x42,0x42,0x42,0x3C,0x00,0x00},
	{0x00,0x00,0x00,0x38,0x44,0x42,0x42,0x42,0x46,0x3A,0x02,0x02,0x24,0x18,0x00,0x00},
		};


	
unsigned char num1[392] ={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x80,0x00,
0x00,0x00,0x00,0x00,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,
0x80,0x00,0x0F,0x00,0x00,0x00,0x01,0xC0,0x00,0x0F,0x00,0x00,0x00,0x03,0xE0,0x00,
0x0F,0x03,0xFF,0xFF,0xFF,0xF0,0x00,0x0F,0x03,0xFF,0xFF,0xFF,0xF8,0x00,0x0F,0x01,
0xE0,0x1F,0x00,0x00,0x00,0x0F,0x0C,0x00,0x1F,0x00,0x00,0x00,0x0F,0x0E,0x00,0x1F,
0x00,0x00,0x00,0x0F,0x1F,0x80,0x1F,0x00,0x00,0x00,0x0F,0x1F,0x80,0x1F,0x00,0x00,
0x03,0x0F,0x3E,0x00,0x1F,0x00,0x00,0x03,0x8F,0x7C,0x00,0x1F,0x00,0x00,0x03,0x8F,
0xF8,0x00,0x1F,0x00,0x00,0x07,0x8F,0xE0,0x00,0x1F,0x00,0x00,0x07,0x8F,0xC0,0x00,
0x1F,0x00,0x00,0x0F,0x8F,0x80,0x00,0x1F,0x00,0x00,0x0F,0x0F,0x00,0x00,0x1F,0x00,
0x00,0x1F,0x0F,0x00,0x00,0x1F,0x00,0x00,0x3F,0x0F,0x00,0x00,0x1F,0x00,0x00,0x3E,
0x0F,0x00,0x00,0x1F,0x00,0x00,0x3C,0x0F,0x00,0x00,0x1F,0x00,0x00,0x00,0x0F,0x00,
0x00,0x1F,0x00,0x00,0x00,0x0F,0x00,0x00,0x1F,0x00,0x00,0x00,0x0F,0x00,0x00,0x1F,
0x00,0x00,0x00,0x0F,0x00,0x00,0x1F,0x00,0x00,0x00,0x1F,0x00,0x00,0x1F,0x00,0x00,
0x00,0x1F,0x00,0x00,0x1F,0x00,0x00,0x00,0x1F,0x00,0x00,0x1F,0x00,0x00,0x00,0x1F,
0x00,0x00,0x1F,0x00,0x00,0x00,0x1F,0xC0,0x00,0x1F,0x00,0x00,0x00,0x1F,0xE0,0x00,
0x1F,0x00,0x00,0x00,0x3E,0xF8,0x00,0x1F,0x00,0x00,0x00,0x3C,0x7C,0x00,0x1F,0x00,
0x00,0x00,0x3C,0x3E,0x00,0x1F,0x00,0x00,0x00,0x7C,0x3E,0x00,0x1F,0x00,0x00,0x00,
0x78,0x1F,0x00,0x1F,0x00,0x00,0x00,0x78,0x1F,0x00,0x1F,0x00,0x00,0x00,0xF0,0x0F,
0x00,0x1F,0x00,0x00,0x00,0xE0,0x0E,0x00,0x1F,0x00,0x00,0x01,0xE0,0x00,0x00,0x1F,
0x00,0x00,0x03,0xC0,0x00,0x00,0x1F,0x00,0x00,0x03,0x80,0x00,0x3F,0xFF,0x00,0x00,
0x07,0x00,0x00,0x1F,0xFF,0x00,0x00,0x0E,0x00,0x00,0x03,0xFF,0x00,0x00,0x1C,0x00,
0x00,0x01,0xFE,0x00,0x00,0x18,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,
0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	};	
unsigned char num2[392] ={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,
0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,
0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,
0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,
0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,
0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,
0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,
0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,
0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x80,
0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x00,0x00,
0x00,0x00,0x00,0x3F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	};	
unsigned char num3[392] ={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,
0x80,0x00,0x00,0x00,0x00,0x00,0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0x00,
0x00,0x00,0x00,0x00,0x03,0xE0,0x04,0x00,0x01,0x80,0x00,0x03,0xC0,0x0F,0x00,0x03,
0xC0,0x00,0x03,0xC0,0x0F,0xFF,0xFF,0xE0,0x00,0x03,0xC0,0x0F,0xFF,0xFF,0xF0,0x00,
0x03,0xC0,0x0F,0x80,0x03,0xE0,0x00,0x03,0xC0,0x0F,0x80,0x03,0xC0,0x00,0x03,0xC0,
0x0F,0x80,0x03,0xC0,0x00,0x03,0xC0,0x0F,0x80,0x03,0xC0,0x00,0x03,0xC0,0x07,0x80,
0x03,0xC0,0x00,0x03,0xC1,0xC7,0x80,0x03,0xC0,0x00,0x03,0xC3,0xE7,0x80,0x03,0xC0,
0x1F,0xFF,0xFF,0xE7,0x80,0x03,0xC0,0x1F,0xFF,0xFF,0xF7,0x80,0x03,0xC0,0x0F,0x87,
0xC0,0x07,0x80,0x03,0xC0,0x00,0x07,0xC0,0x07,0x80,0x03,0xC0,0x00,0x07,0xC0,0x07,
0xFF,0xFF,0xC0,0x00,0x0F,0xC0,0x07,0xFF,0xFF,0xC0,0x00,0x0F,0xC0,0x07,0x80,0x03,
0xC0,0x00,0x0F,0xE0,0x07,0x80,0x03,0xC0,0x00,0x1F,0xFC,0x07,0x80,0x03,0xC0,0x00,
0x1F,0xFF,0x07,0x80,0x03,0xC0,0x00,0x1F,0xDF,0x87,0x80,0x03,0xC0,0x00,0x3F,0xCF,
0x87,0x80,0x03,0xC0,0x00,0x3F,0xCF,0xC7,0x80,0x03,0xC0,0x00,0x7F,0xC7,0xC7,0x80,
0x03,0xC0,0x00,0x7F,0xC3,0x87,0x80,0x03,0xC0,0x00,0x7B,0xC3,0x87,0x80,0x03,0xC0,
0x00,0xF3,0xC1,0x07,0xFF,0xFF,0xC0,0x00,0xF3,0xC0,0x07,0xFF,0xFF,0xC0,0x01,0xE3,
0xC0,0x07,0x80,0x03,0xC0,0x01,0xE3,0xC0,0x07,0x80,0x03,0xC0,0x03,0xC3,0xC0,0x07,
0x80,0x03,0xC0,0x03,0x83,0xC0,0x07,0x80,0x03,0xC0,0x07,0x83,0xC0,0x07,0x80,0x03,
0xC0,0x0F,0x03,0xC0,0x07,0x80,0x03,0xC0,0x0E,0x03,0xC0,0x07,0x80,0x03,0xC0,0x1C,
0x03,0xC0,0x07,0x80,0x03,0xC0,0x1C,0x03,0xC0,0x07,0x80,0x03,0xC0,0x38,0x03,0xC0,
0x07,0x80,0x03,0xC0,0x30,0x03,0xC0,0x07,0x80,0x03,0xC0,0x00,0x03,0xC0,0x0F,0xFF,
0xFF,0xC0,0x00,0x03,0xC0,0x0F,0xFF,0xFF,0xC0,0x00,0x03,0xC0,0x0F,0x80,0x03,0xC0,
0x00,0x03,0xC0,0x0F,0x80,0x03,0xC0,0x00,0x03,0xC0,0x0F,0x80,0x03,0xC0,0x00,0x03,
0xC0,0x0F,0x80,0x03,0xC0,0x00,0x07,0xC0,0x0F,0x80,0x03,0x80,0x00,0x07,0x00,0x0E,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	};	
unsigned char num4[392] ={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x38,0x03,0x03,0x80,0x18,0x00,0x00,0x3F,0xFF,0x83,0xFF,0xFC,
0x00,0x00,0x3F,0xFF,0xC3,0xFF,0xFE,0x00,0x00,0x3C,0x0F,0x83,0xE0,0x7E,0x00,0x00,
0x3C,0x0F,0x83,0xE0,0x7C,0x00,0x00,0x3C,0x0F,0x83,0xE0,0x7C,0x00,0x00,0x3C,0x0F,
0x83,0xE0,0x7C,0x00,0x00,0x3C,0x0F,0x83,0xE0,0x7C,0x00,0x00,0x3C,0x0F,0x83,0xE0,
0x7C,0x00,0x00,0x3C,0x0F,0x83,0xE0,0x7C,0x00,0x00,0x3C,0x0F,0x83,0xE0,0x7C,0x00,
0x00,0x3C,0x0F,0x83,0xE0,0x7C,0x00,0x00,0x3C,0x0F,0x83,0xE0,0x7C,0x00,0x00,0x3C,
0x0F,0x83,0xE0,0x7C,0x00,0x00,0x3C,0x0F,0x83,0xE0,0x7C,0x00,0x00,0x3C,0x0F,0x83,
0xE0,0x7C,0x00,0x00,0x3C,0x0F,0x83,0xE0,0x7C,0x80,0x00,0x3C,0x0F,0x83,0xE0,0x7D,
0xC0,0x00,0x3C,0x0F,0x83,0xE0,0x7F,0xE0,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x1F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x0E,0x3C,0x0F,0x83,0xE0,0x7C,0x00,0x00,0x3C,0x0F,
0x83,0xE0,0x7C,0x00,0x00,0x3C,0x0F,0x83,0xE0,0x7C,0x00,0x00,0x3C,0x0F,0x83,0xE0,
0x7C,0x00,0x00,0x3C,0x0F,0x83,0xC0,0x7C,0x00,0x00,0x3C,0x0F,0x83,0xC0,0x7C,0x00,
0x00,0x3C,0x0F,0x83,0xC0,0x7C,0x00,0x00,0x3C,0x0F,0x83,0xC0,0x7C,0x00,0x00,0x7C,
0x0F,0x83,0xC0,0x7C,0x00,0x00,0x7C,0x0F,0x83,0xC0,0x7C,0x00,0x00,0x78,0x0F,0x87,
0xC0,0x7C,0x00,0x00,0x78,0x0F,0x87,0x80,0x7C,0x00,0x00,0x78,0x0F,0x87,0x80,0x7C,
0x00,0x00,0xF8,0x0F,0x87,0x80,0x7C,0x00,0x00,0xF0,0x0F,0x87,0x80,0x7C,0x00,0x00,
0xF0,0x0F,0x8F,0x80,0x7C,0x00,0x01,0xE0,0x0F,0x8F,0x00,0x7C,0x00,0x01,0xE0,0x0F,
0x8F,0x00,0x7C,0x00,0x03,0xC0,0x0F,0x9E,0x00,0x7C,0x00,0x03,0xC0,0x0F,0x9E,0x00,
0x7C,0x00,0x07,0x83,0xFF,0x9C,0x00,0x7C,0x00,0x07,0x01,0xFF,0xBC,0x7C,0x7C,0x00,
0x0E,0x00,0x7F,0x78,0x7F,0xFC,0x00,0x1C,0x00,0x3F,0x70,0x0F,0xFC,0x00,0x18,0x00,
0x1E,0xE0,0x03,0xF8,0x00,0x38,0x00,0x09,0xC0,0x01,0xF0,0x00,0x30,0x00,0x03,0x80,
0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	};	
unsigned char num5[392] ={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,
0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,
0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,
0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,
0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,
0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,
0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,
0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,
0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,
0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x80,
0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x00,0x00,
0x00,0x00,0x00,0x3F,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	};	
unsigned char num6[392] ={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,
0x00,0x18,0x06,0x00,0x00,0x00,0x3E,0x00,0x1F,0x07,0xC0,0x00,0x00,0x3F,0x00,0x1F,
0x87,0xE0,0x00,0x00,0x3E,0x00,0x1F,0x07,0xC1,0x80,0x00,0x3C,0x00,0x1E,0x07,0x83,
0xC0,0x00,0x3C,0x7F,0xFF,0xFF,0xFF,0xE0,0x00,0x3C,0x3F,0xFF,0xFF,0xFF,0xF0,0x00,
0x3C,0x18,0x1E,0x07,0x80,0x00,0x00,0x3C,0x00,0x1E,0x07,0x80,0x00,0x00,0x3C,0x00,
0x1E,0x07,0xC0,0x00,0x00,0x3F,0x00,0x1E,0x07,0x78,0x00,0x03,0x3F,0x80,0x18,0x03,
0xFC,0x00,0x07,0x3F,0xE0,0x00,0x7F,0xFE,0x00,0x07,0x3D,0xF0,0x3F,0xFF,0xFE,0x00,
0x07,0x3D,0xFF,0xFF,0xFF,0x00,0x00,0x0F,0x3C,0xFF,0xF0,0xF0,0x00,0x00,0x0F,0x3C,
0xF0,0x00,0xF0,0x03,0x80,0x0F,0x3C,0x70,0x00,0xF0,0x07,0xC0,0x1F,0x3C,0x7F,0xFF,
0xFF,0xFF,0xE0,0x3F,0x3C,0x3F,0xFF,0xFF,0xFF,0xF0,0x3E,0x3C,0x1E,0x00,0xF0,0x00,
0x00,0x7E,0x3C,0x00,0x00,0xF0,0x00,0x00,0x3C,0x3C,0x00,0x00,0xF0,0x00,0x00,0x00,
0x3C,0x06,0x00,0xF0,0x07,0x00,0x00,0x3C,0x07,0xFF,0xFF,0xFF,0x80,0x00,0x3C,0x07,
0xFF,0xFF,0xFF,0xC0,0x00,0x3C,0x07,0x80,0xF0,0x0F,0x80,0x00,0x3C,0x07,0x80,0xF0,
0x0F,0x00,0x00,0x3C,0x07,0x80,0xF0,0x0F,0x00,0x00,0x3C,0x07,0x80,0xF0,0x0F,0x00,
0x00,0x3C,0x07,0xFF,0xFF,0xFF,0x00,0x00,0x3C,0x07,0xFF,0xFF,0xFF,0x00,0x00,0x3C,
0x07,0x80,0xF0,0x0F,0x00,0x00,0x3C,0x07,0x80,0xF0,0x0F,0x00,0x00,0x3C,0x07,0x80,
0xF0,0x0F,0x00,0x00,0x3C,0x07,0x80,0xF0,0x0F,0x00,0x00,0x3C,0x07,0xFF,0xFF,0xFF,
0x00,0x00,0x3C,0x07,0xFF,0xFF,0xFF,0x00,0x00,0x3C,0x07,0x80,0xF0,0x0F,0x00,0x00,
0x3C,0x07,0x00,0xF0,0x0C,0x00,0x00,0x3C,0x00,0x00,0xF0,0x06,0x00,0x00,0x3C,0x00,
0x00,0xF0,0x0F,0x00,0x00,0x3C,0x1F,0xFF,0xFF,0xFF,0x80,0x00,0x3C,0x0F,0xFF,0xFF,
0xFF,0xC0,0x00,0x3C,0x07,0x80,0xF0,0x00,0x00,0x00,0x3C,0x00,0x00,0xF0,0x00,0x00,
0x00,0x3C,0x00,0x00,0xF0,0x01,0xC0,0x00,0x3C,0x00,0x00,0xF0,0x03,0xE0,0x00,0x3C,
0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x3C,0x7F,0xFF,0xFF,0xFF,0xF8,0x00,0x3C,0x3C,0x00,
0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	};	
unsigned char num7[392] ={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFC,0x00,0x00,0x00,0x00,0x00,
0x1F,0xFE,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x80,0x00,0x00,0x00,0x00,0x7C,0x0F,
0xC0,0x00,0x00,0x00,0x00,0xF0,0x07,0xC0,0x00,0x00,0x00,0x00,0xF0,0x07,0xE0,0x00,
0x00,0x00,0x01,0xF0,0x03,0xE0,0x00,0x00,0x00,0x01,0xF8,0x03,0xE0,0x00,0x00,0x00,
0x01,0xF8,0x03,0xE0,0x00,0x00,0x00,0x01,0xF8,0x03,0xE0,0x00,0x00,0x00,0x00,0xF8,
0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,
0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,
0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,
0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x01,0xF0,
0x00,0x00,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,
0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,0x00,0x00,
0x00,0x01,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x00,0x00,0x07,0xF8,0x00,0x00,0x00,
0x00,0x00,0x07,0xF8,0x00,0x00,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x00,0x00,0x00,
0x0F,0xF8,0x00,0x00,0x00,0x00,0x00,0x07,0xF8,0x00,0x00,0x00,0x00,0x00,0x07,0xF8,
0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};	
unsigned char num8[63] ={
0x00,0x00,0x00,0x03,0x00,0x70,0x03,0x00,0x60,0x3B,0x00,0x60,0x3B,0x67,0x60,0x3F,
0xF7,0x60,0x73,0x07,0x60,0x63,0x37,0x60,0xFF,0xFF,0x60,0x63,0x07,0x60,0x3F,0xF7,
0x60,0x33,0x77,0x60,0x33,0x77,0x60,0x33,0x77,0x60,0x33,0x77,0x60,0x33,0xF0,0x60,
0x33,0xF0,0x60,0x23,0x00,0x60,0x03,0x03,0xE0,0x07,0x00,0xE0,0x00,0x00,0x00
	};	
unsigned char num9[63] ={
0x00,0x00,0x00,0x07,0x38,0x00,0x07,0x38,0x00,0x0E,0x70,0x00,0x0E,0x70,0x60,0x0C,
0x7F,0xF0,0x1C,0xF8,0x00,0x1E,0xD8,0x00,0x3D,0x98,0xC0,0x3F,0x9F,0xE0,0x6F,0x18,
0x00,0xCC,0x18,0x00,0x0C,0x18,0x00,0x0C,0x18,0x60,0x0C,0x1F,0xF0,0x0C,0x18,0x00,
0x0C,0x18,0x00,0x1C,0x18,0x00,0x1C,0x18,0x00,0x1C,0x18,0x00,0x00,0x00,0x00
	};	
unsigned char num10[63] ={
0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0xF0,0x00,0x00,0xF0,0x00,0x00,0xF0,0x00,0x00,
0xF0,0x00,0x00,0xF0,0x00,0x00,0xF0,0x00,0x00,0xF8,0x00,0x00,0xF8,0x00,0x01,0xD8,
0x00,0x01,0xDC,0x00,0x01,0xDC,0x00,0x03,0x8E,0x00,0x03,0x8F,0x00,0x07,0x07,0x00,
0x0E,0x03,0xC0,0x1C,0x01,0xF0,0x38,0x00,0xF8,0xE0,0x00,0x60,0x00,0x00,0x00
	};
unsigned char num11[63] ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,
0x00,0x3C,0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x00,
0x3C,0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	};	
unsigned char num12[63] ={0x00,0x00,0x00,0x06,0x07,0x00,0x07,0x07,0x00,0x03,0x8E,0x00,0x03,0x8C,0x00,0x01,
0x98,0xC0,0x3F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x80,0x0F,0xFF,0xC0,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x60,0xFF,0xFF,0xF0,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
	};
unsigned char num13[63] ={0x00,0x00,0x00,0x00,0x1C,0x00,0x70,0x1C,0x00,0x3B,0x1C,0x00,0x3E,0x1C,0x60,0x1E,
0x1C,0xF0,0x07,0xFD,0xC0,0x0C,0xFF,0x80,0x0C,0xFF,0x00,0x1C,0xFE,0x00,0x18,0xDF,
0x00,0x39,0xDF,0x00,0xF9,0xDF,0x80,0x31,0x9D,0xC0,0x33,0x1D,0xE0,0x37,0x1C,0xF0,
0x7E,0x1C,0x70,0x7C,0x1C,0x00,0x00,0xFC,0x00,0x00,0x38,0x00,0x00,0x00,0x00};
unsigned char num14[63] ={0x00,0x00,0x00,0x38,0x03,0x80,0x1C,0x03,0xC0,0x1C,0xFF,0x60,0x0C,0x03,0x70,0x0D,
0x03,0x70,0xFF,0x83,0x20,0x07,0xFF,0xF0,0x07,0x1F,0x80,0x36,0x1F,0x80,0x3E,0xDB,
0x80,0x1E,0xFF,0x80,0x0E,0xFF,0x80,0x0E,0xF9,0x80,0x1F,0xF9,0x80,0x1B,0xF9,0xD0,
0x33,0xFF,0xF0,0x70,0xF8,0xF0,0x61,0xE0,0x70,0xC0,0x00,0x38,0x00,0x00,0x00};
unsigned char num15[63] ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x00,0x3E,0x00,0x00,0x3C,0x00,0x00,
0x0C,0x00,0x00,0x1C,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char num16[63] ={0x00,0x00,0x00,0x07,0x03,0x80,0x07,0x03,0xC0,0x07,0x03,0x80,0x0E,0x01,0x80,0x0E,
0x01,0xA0,0x0D,0xFF,0xF8,0x1E,0x01,0x80,0x1E,0x01,0x80,0x3E,0xC1,0x80,0x7E,0x61,
0x80,0x6E,0x71,0x80,0xCE,0x39,0x80,0x0E,0x39,0x80,0x0E,0x01,0x80,0x0E,0x01,0x80,
0x0E,0x01,0x80,0x0E,0x03,0x80,0x0E,0x0F,0x80,0x0C,0x03,0x80,0x00,0x00,0x00};
unsigned char num17[63] ={0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x70,0x00,0x00,0x70,0x00,0x00,0x30,0x60,0x7F,
0xFF,0xF0,0x03,0x06,0x00,0x03,0x0E,0x00,0x03,0x0E,0x00,0x01,0x8E,0x00,0x01,0x9C,
0x00,0x01,0xDC,0x00,0x00,0xD8,0x00,0x00,0xF8,0x00,0x00,0x70,0x00,0x00,0xF8,0x00,
0x01,0xDE,0x00,0x07,0x8F,0xC0,0x1E,0x03,0xF0,0x70,0x00,0xE0,0x00,0x00,0x00};
unsigned char num18[63] ={0x00,0x00,0x00,0x18,0x1F,0x80,0x1C,0x1D,0xE0,0x1B,0xFF,0xF0,0x18,0x1C,0x00,0x18,
0x1C,0x00,0xFF,0xFF,0xE0,0x19,0xDC,0xC0,0x19,0xFF,0xC0,0x19,0xDC,0xC0,0x19,0xFF,
0xC0,0x19,0xDC,0xC0,0x19,0x89,0x80,0x18,0x01,0xE0,0x1F,0xFF,0xF8,0x19,0xC1,0x80,
0x18,0xE1,0x80,0x18,0x71,0x80,0x18,0x0F,0x80,0x18,0x03,0x80,0x00,0x00,0x00};
unsigned char num19[63] ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x00,0x3E,0x00,0x00,0x3C,0x00,0x00,
0x0C,0x00,0x00,0x1C,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char num20[63] ={
0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x70,0x60,0x7F,0xFF,0xF0,0x01,0xF8,0x00,0x01,
0xFC,0x00,0x03,0xFE,0x00,0x07,0xF7,0x80,0x1E,0x73,0xF0,0x3F,0xFF,0xF0,0xF0,0x0F,
0x00,0x00,0x78,0x00,0x00,0x78,0x60,0x7F,0xFF,0xF0,0x20,0x70,0x00,0x00,0x70,0x00,
0x00,0x70,0x00,0x03,0xF0,0x00,0x01,0xF0,0x00,0x00,0x60,0x00,0x00,0x00,0x00};
unsigned char num21[63] ={0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x70,0xC0,0x1F,0xFF,0xE0,0x0B,0x06,0x00,0x01,
0xCE,0x00,0x01,0xCC,0x60,0x3F,0xFF,0xF0,0x18,0x02,0x00,0x18,0x0F,0x00,0x18,0x3E,
0x00,0x38,0xF9,0x00,0x3F,0xC7,0x80,0x38,0x1F,0x80,0x38,0x7C,0xC0,0x33,0xE1,0xE0,
0x3E,0x07,0xE0,0x70,0x3E,0x00,0x67,0xF0,0x00,0xDE,0x00,0x00,0x00,0x00,0x00};
unsigned char num22[63] ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x3F,0xFF,0xE0,0x38,0x70,0x00,0x38,
0x70,0x00,0x38,0x70,0x00,0x3F,0xFF,0xC0,0x38,0x01,0xC0,0x38,0x01,0xC0,0x38,0x01,
0xC0,0x38,0x01,0xC0,0x3F,0xFF,0xC0,0x38,0x71,0xC0,0x38,0x70,0x00,0x38,0x70,0x00,
0x38,0x70,0x00,0x38,0x70,0x60,0x3F,0xFF,0xF0,0x38,0x00,0x00,0x00,0x00,0x00};
		
		
		
		
		
		
		
		
		
		
		
		

/*
	参数列表：、
		@word ： 字模的方阵数据
		@x ：开始显示的坐标X值
		@y ：开始显示的坐标Y值
		@wordsieze ： 总共字节大小
		@width : 宽度 字模软件可以看到
		@color : 颜色
*/


void show_word(char *word, int x, int y, int wordsieze, int width, int color)
{
	int perbyte = width / 8;  //每行字节数
	int i,j;
	int x0,y0;
	for(i = 0; i < wordsieze; i++)
	{	
		for(j = 7; j >= 0; j-- )
		{
			if(word[i] & (1 << j))	//判断位是否为1
			{
				x0 = (i % perbyte) * 8 + (7 - j); //确定横坐标
				y0 = i / perbyte;				  //确定纵坐标
				draw_point(x0 + x, y0 + y, color);
			}
		}
		
	}
}
void show_num(int num1, int x0, int y0, int numsize, int color)
{	
	if(num1 / 100)	//显示只有百 十 个位的数字
	{
		//显示百位 假如 250
		show_word(num[num1 / 100], x0, y0, sizeof(num[num1 / 100]), numsize, color);
		//显示十位
		show_word(num[num1 % 100 / 10],x0 + numsize + 2, y0, sizeof(num[num1 % 100 / 10]), numsize, color);
		//显示个位
		show_word(num[num1 % 10], x0 + 2 *(numsize + 2), y0, sizeof(num[num1 % 10]),numsize, color);
	}
	
}

void front_cover()
{	
	//1.打开显示屏
	int fd_lcd = open("/dev/fb0",O_RDWR);
	if(fd_lcd < 0)
	{
		perror("open fd_lcd error\n");
	}
	//2.映射
	p = mmap(NULL,800*480*4,PROT_READ | PROT_WRITE,MAP_SHARED,fd_lcd,0);
	if(p == MAP_FAILED)
	{
		perror("mmap error\n");
	}
	//3.刷屏
	brush_lcd(0x00FFFFFF);
	//4.将取模的数据存到二维数组里面去
	
	//5.按照数组里面的数据显示到开发板屏幕上
	show_word(num1, 200, 120, 392, 56, 0x00FF0000);
	show_word(num2, 256,120, 392, 56, 0x00FF0000);
	show_word(num3, 312,120, 392, 56, 0x00FF0000);
	show_word(num4, 368, 120, 392, 56, 0x00FF0000);
	show_word(num5, 424, 120, 392, 56, 0x00FF0000);
	show_word(num6, 480, 120, 392, 56, 0x00FF0000);
	show_word(num7, 536, 120, 392, 56, 0x00FF0000);
	show_word(num8, 376, 240, 63, 24, 0x00FF0000);
	show_word(num9, 400, 240, 63, 24, 0x00FF0000);
	show_word(num10, 424, 240, 63, 24, 0x00FF0000);
	show_word(num11, 448, 240, 63, 24, 0x00FF0000);
	show_word(num12, 472, 240, 63, 24, 0x00FF0000);
        show_word(num13, 496, 240, 63, 24, 0x00FF0000);
        show_word(num14, 520, 240, 63, 24, 0x00FF0000);
        show_word(num15, 544, 240, 63, 24, 0x00FF0000);
        show_word(num16, 568, 240, 63, 24, 0x00FF0000);
        show_word(num17, 592, 240, 63, 24, 0x00FF0000);
        show_word(num18, 616, 240, 63, 24, 0x00FF0000);
        show_word(num19, 640, 240, 63, 24, 0x00FF0000);
        show_word(num20, 664, 240, 63, 24, 0x00FF0000);
        show_word(num21, 688, 240, 63, 24, 0x00FF0000);
        show_word(num22, 712, 240, 63, 24, 0x00FF0000);
	//6.显示数字`
	//int a = 0;
	//scanf("%d",&a);
	
	//show_num(a, 50, 0, 8, 0x00FF0000);
	
//	//7.收尾工作
//	munmap(p, 800*480*4);
//	close(fd_lcd);
	
}
