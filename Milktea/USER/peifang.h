#ifndef _PEIFANG_H
#define _PEIFANG_H

#include "stm32f4xx.h"


//********�̲�һ*********//
#define Milk1_value    150
#define sugar1_value 	 7
#define tea1_value		 10

//*********�̲��********//
#define Milk2_value			200
#define sugar2_value		7
#define tea2_value			10

//*********�̲���*********//
#define Milk3_value			250
#define sugar3_value		7
#define tea3_value			10

//********�̲���*********//
#define Milk4_value			254
  #define sugar4_value		7
#define tea4_value			10

//******��Ʒ���ڴ���Ӻ�*****//



typedef struct{
	
	uint8_t milk_value;
	
	uint8_t sugar_value;
	
	uint8_t tea_value;
	
}	MilkTea_Typedef;





#endif

