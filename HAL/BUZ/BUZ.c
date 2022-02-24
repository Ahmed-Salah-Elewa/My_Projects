/*
 * BUZ.c
 *
 * Created: 2/8/2022 1:30:04 PM
 *  Author: Ahmed Salah
 */ 

#include "BUZ.h"
void BUZ_INIT(void)
{
	PIN_MODE(BUZ_PIN,OUTPUT);
	
}
void BUZ_ON(void )
{
	PIN_WRITE(BUZ_PIN,HIGH);
	
}

void BUZ_OFF(void)
{
	PIN_WRITE(BUZ_PIN,LOW);

}

void BUZ_TOG(void)
{
	PIN_TOG(BUZ_PIN);
	
}

void BUZ_ONCE(void){
	 BUZ_ON();
	 _delay_ms(100);
	 BUZ_OFF();
	
	}
void BUZ_TWICE(void){
	
	BUZ_ON();
	_delay_ms(100);
	BUZ_OFF();
	_delay_ms(100);
	BUZ_ON();
	_delay_ms(100);
	BUZ_OFF();
	
}
void BUZ_THRICE(void){
	BUZ_ON();
	_delay_ms(100);
	BUZ_OFF();
	_delay_ms(100);
	BUZ_ON();
	_delay_ms(100);
	BUZ_OFF();
	_delay_ms(100);
	BUZ_ON();
	_delay_ms(100);
	BUZ_OFF();
	
}

void BUZ_LONG(void){
 BUZ_ON();
 _delay_ms(2000);
 BUZ_OFF();	
}