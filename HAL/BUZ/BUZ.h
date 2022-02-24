/*
 * BUZ.h
 *
 * Created: 2/8/2022 1:29:05 PM
 *  Author: Ahmed Salah
 */ 


#ifndef BUZ_H_
#define BUZ_H_

#include "STD_TYPES.h"
#include "BUZ_CFG.h"
#include "DIO.h"
#define  F_CPU 16000000UL
#include <util/delay.h>
void BUZ_INIT(void);
void BUZ_ON(void);
void BUZ_OFF(void);
void BUZ_TOG(void);
void BUZ_ONCE(void);
void BUZ_TWICE(void);
void BUZ_THRICE(void);
void BUZ_LONG(void);

//#define BUZ 1
#endif /* BUZ_H_ */