#include "lcd.h"

//void LCD_Delay1ms(uint c)   //��� 0us
//{
//    uchar a,b;
//	for (; c>0; c--)
//	{
//		 for (b=199;b>0;b--)
//		  	for(a=1;a>0;a--);    
//	}	
//}

void LCDsetcoord(uchar x,uchar y)
{
	uchar adress=0;
	if(y==0)
		adress=0x00+x;
	else
		adress=0x40+x;			  //����xy��ֵ����ָ��λ��
	LCDwriteCmd(adress | 0x80);  //д����ָ��ָ��
}

/*void LCDwaiteReady()    //��/д���
{
	uchar sta;
	LCD_D0=0xFF;
	LCD_RS=0;
	LCD_RW=1;
	do{
		LCD_E=1;
		sta=LCD_D0;
		LCD_E=0;
	}while(sta&0x80);
}*/

void LCDwriteCmd(uchar cmd)
{
//	LCDwaiteReady(); //����LCD�Ķ�д���
	LCD_E0;
	LCD_RS0;
	LCD_RW0;

	LCD_D0(cmd);
	LCD_Delay1ms(1);

	LCD_E1;
	LCD_Delay1ms(5);
	LCD_E0;
}

void LCDwritedate(uchar date)
{
//	LCDwaiteReady();
	LCD_E0;
	LCD_RS1;
	LCD_RW0;
	LCD_D0(date);

	LCD_Delay1ms(1);

	LCD_E1;
	LCD_Delay1ms(5);
	LCD_E0;
}

void LCDshowstr(uchar x, uchar y,uchar *str)
{
	LCDsetcoord(x,y);
	while(*str!='\0')
	{
		LCDwritedate(*str);
		str++;
	}
}

void LCDAreaClear(uchar x, uchar y, uchar len)
{
    LCDsetcoord(x, y);   //������ʼ��ַ
    while (len--)         //����д��ո�
    {
        LCDwritedate(' ');
    }
}

void LCDFullClear(void)
{
    LCDwriteCmd(0x01);
}



void LCDinit(void)
{
	LCDwriteCmd(0x38);  //0x38����16x2��ʾ 5*7����
	LCDwriteCmd(0x0C);  //0x0c ����ʾ
	LCDwriteCmd(0x06); 	//������дһ���ַ����ַָ���1
	LCDwriteCmd(0x01);
}
