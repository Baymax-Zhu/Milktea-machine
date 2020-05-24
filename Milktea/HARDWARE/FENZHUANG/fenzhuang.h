  #ifndef _FENZHUANG_H
#define _FENZHUANG_H

#include "stm32f4xx.h"
#include "systick.h"

#define FenZhuang_GPIO GPIOE
#define FenZhuang_GPIO_CLK RCC_AHB1Periph_GPIOE
#define FenZhuang_GPIO_CLK_Cmd RCC_AHB1PeriphClockCmd

#define BUTTEN_ALL_Pin GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8




#define tFenZhuang_GPIO GPIOC
#define tFenZhuang_GPIO_CLK RCC_AHB1Periph_GPIOC
#define tFenZhuang_GPIO_CLK_Cmd RCC_AHB1PeriphClockCmd

#define t1_Pin GPIO_Pin_0
#define t2_Pin GPIO_Pin_1



#define BUTTEN_Addvalue_Pin 	GPIO_Pin_0  //�����趨�� 0.1gÿ�� 
#define BUTTEN_Resetvalue_Pin GPIO_Pin_1		//����
#define BUTTEN_Subtract_Pin 	GPIO_Pin_2		//��С
#define BUTTEN_Fast_Pin 			GPIO_Pin_3					//����
#define BUTTEN_Medium_Pin 		GPIO_Pin_4				//���ٶ�
#define BUTTEN_Slow_Pin 			GPIO_Pin_5					//����
#define BUTTEN_Start_Pin 			GPIO_Pin_6					//��ʼ����
#define BUTTEN_Output_Pin 		GPIO_Pin_7				//����
#define BUTTEN_Stop_Pin 			GPIO_Pin_8					//ֹͣ



#define BUTTEN_Addvalue 		0  //�����趨�� 0.1gÿ�� 
#define BUTTEN_Resetvalue 	1		//����
#define BUTTEN_Subtract 		2		//��С
#define BUTTEN_Fast 				3					//����
#define BUTTEN_Medium 			4				//���ٶ�
#define BUTTEN_Slow 				5					//����
#define BUTTEN_Start 				6					//��ʼ����
#define BUTTEN_Output 			7				//����
#define BUTTEN_Stop 				8					//ֹͣ

void FenZhuang_Initianization(void);
void FenZhuang_SetValue(unsigned int value);  //�趨���ϵ���
void FenZhuang_Output(unsigned int weight);					//�����Լ�����
void FenZhunag_Push_Butten(unsigned int butten);
void FenZhuang_addMilk(unsigned int weight);


#endif

