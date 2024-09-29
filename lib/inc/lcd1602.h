#ifndef LCD1602_H
#define LCD1602_H

#include "stm32f407xx.h"

#define RS_PORT		PORTB
#define RW_PORT		PORTD
#define E_PORT		PORTE
#define DB7_PORT	PORTC
#define DB6_PORT	PORTE
#define DB5_PORT	PORTE
#define DB4_PORT	PORTE


#define RS_PIN_NUM	7
#define RW_PIN_NUM	7
#define E_PIN_NUM	1
#define DB7_PIN_NUM	13
#define DB6_PIN_NUM	6
#define DB5_PIN_NUM	5
#define DB4_PIN_NUM	4


#endif
