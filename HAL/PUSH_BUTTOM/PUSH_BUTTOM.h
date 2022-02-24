/*
 * PUSH_BUTTOM.h
 *
 * Created: 2/10/2022 9:40:56 AM
 *  Author: Ahmed Salah
 */ 


#ifndef PUSH_BUTTOM_H_
#define PUSH_BUTTOM_H_
#include "STD_TYPES.h"
#include "DIO.h"
#include "CFG_PUSH_BUTTOM.h"
void PB_INIT(u8);
u8 PB_READ(u8);
#define P_B1 1
#define P_B2 2
#define P_B3 3
#define P_B4 4
#define PRESSED 0
#define RELASED 1
#endif /* PUSH_BUTTOM_H_ */