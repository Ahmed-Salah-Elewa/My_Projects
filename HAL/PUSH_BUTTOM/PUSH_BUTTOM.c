/*
 * PUSH_BUTTOM.c
 *
 * Created: 2/10/2022 9:40:25 AM
 *  Author: Ahmed Salah
 */ 
#include "PUSH_BUTTOM.h"
void PB_INIT(u8 P_B)
{
	PIN_MODE(P_B1_COMMENT_PIN,OUTPUT);
	PIN_WRITE(P_B1_COMMENT_PIN,LOW);
	switch(P_B)
	{
		case P_B1:
		PIN_MODE(P_B1_PIN,INPUT);
		PIN_PULL_UP(PD2,ENABLE);
		break;
		case P_B2:
		PIN_MODE(P_B2_PIN,INPUT);
		PIN_PULL_UP(PD2,ENABLE);
		break;
		case P_B3:
		PIN_MODE(P_B3_PIN,INPUT);
		PIN_PULL_UP(PD2,ENABLE);
		break;
		case P_B4:
		PIN_MODE(P_B4_PIN,INPUT);
		PIN_PULL_UP(PD2,ENABLE);
		break;
		
	}
	
}

u8 PB_READ(u8 Port){
	
	u8 result=0;
	switch(Port){
		case P_B1:
		result=PIN_READ(P_B1_PIN);
		break;
		case P_B2:
		result=PIN_READ(P_B2_PIN);
		break;
		case P_B3:
		result=PIN_READ(P_B3_PIN);
		break;
		case P_B4:
		result=PIN_READ(P_B4_PIN);
		break;
	}
	return result;
	
}