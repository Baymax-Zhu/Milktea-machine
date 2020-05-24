#include "milktea_make.h"


//�����л������г�ʼ��

void MilkTea_Init(void)
{
	SysTick_Initialization();
	
	FollingCup_Init();
	
	MOTOR_Init();
	
	FenZhuang_Initianization();
	
	GTANG_Init();
	
	TEA_Initialization();
	
	Blender_Init();
	
	Burd_Initialization();
	
	Packge_Init();
}

void MilkTea_Make(MilkTea_Typedef *Milk_Tea_Structure)  //	�䱭->��װ�����̷�->���ǻ��ӹ���->����Ͱ�Ӳ�->��С��->����->���
{
	//���ʹ��ƶ���  �䱭   ��
	Motor_Moveto(Loc_Cupdown);
	
	//�䱭
	
	FolingCup_DrowCup();
	Delay_Ms(1000);
	
	//���ʹ��ƶ���  ��װ��   �� ��
		
	Motor_Moveto(Loc_Fenzhaung);
	
	//�趨��װ��ֵ����̷�
	
	FenZhuang_addMilk(Milk_Tea_Structure->milk_value);
	
	 
	//���ʹ��ƶ���  ���ǻ�   ��
	
	Motor_Moveto(Loc_Guotang);
	
	
	//�ӹ���
	
	GTANG_Add_Suger(Milk_Tea_Structure->sugar_value);
	
	
	//���ʹ��ƶ���  ����Ͱ   ��
	
	Motor_Moveto(Loc_Tea);
	
	//�Ӳ�
	TEA_OUT();
	Delay_Ms(1000);
	
	//���ʹ��ƶ���  ����� ��
	Motor_Moveto(Loc_Mix);
	
	//����
	
	Blender_Mix();
	
	//���ʹ��ƶ���  ©��  �� 
	
	Motor_Moveto(Loc_Funnel);
	
	//��С��
	Burd_OUT();
	
	Delay_Ms(2000);
	//���ʹ��ƶ���  ��ڻ�  ��
	
	Motor_Moveto(Loc_Fengkou);
	
	Packge_Seal();
	//���55
	
	Motor_Moveto(Loc_Out);
	
	
}


