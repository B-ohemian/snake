#include "stm32f10x.h"
#include "key.h"
#include "sys.h" 
#include "delay.h"

void KEY_Init(void) //IO��ʼ��
{ 
 	GPIO_InitTypeDef GPIO_InitStructure;
 
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOG,ENABLE);//ʹ��PORTA,PORTEʱ��
	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_3|GPIO_Pin_4;//KEY0-KEY1
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //���ó���������
 	GPIO_Init(GPIOG, &GPIO_InitStructure);//��ʼ��GPIOG4,3
}

int Key_Scan(int flag)
{
  int num;
  switch(flag)
  {
	  case 1 :num= 1;break;
	  case 2 :num= 2;break;
	  case 3 :num= 3;break;
	  case 4 :num= 4;break;
	  default:num= 0;break;
  }
  return num;
}

