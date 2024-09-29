#ifndef LCD1602_H
#define LCD1602_H

#include "stm32f407xx.h"

//-------- LCD1602 pinout ---------------
//WARNING: Function LCD1602_PinsInit() must be edited, if pinout was changed.

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
//----------------------------------------

#define CHAR_NUM_MAX	16
#define STRING_NUM_MAX	2


void LCD1602_PinsInit(void);
void LCD1602_WriteChar(uint8_t CharAsciiCode);
void LCD1602_WriteString(uint8_t String[], uint8_t StringLen);


#endif
