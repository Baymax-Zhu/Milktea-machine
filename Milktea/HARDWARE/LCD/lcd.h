#ifndef _LCD_H_
#define _LCD_H_

#include "lcdsupplement.h"

#ifndef uchar
#define uchar unsigned char
#endif

#ifndef uint 
#define uint unsigned int
#endif
 
//#define LCD_D0 P0

//sbit LCD_RS=P2^6;			//����/����ѡ���
//sbit LCD_RW=P2^5;			//��/дѡ���
//sbit LCD_E=P2^7;			//ʹ���ź�



void LCDshowstr(uchar x, uchar y,uchar *str);
void LCDsetcoord(uchar x,uchar y);
void LCDwritedate(uchar date);
//void LCDwaiteReady();
void LCDwriteCmd(uchar cmd);
void LCDinit(void);
//void LCD_Delay1ms(uint c);
void LCDAreaClear(uchar x, uchar y, uchar len);
void LCDFullClear(void);

#endif
