#include "lcd1602.h"



void LCD1602_PinsInit4bits(void){
	//-------- GPIO ports ckock enable --------
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOEEN;

	//------ pins output mode enable ------------
	RS_PORT -> MODER |= (1 << RS_PIN_NUM*2);
	RW_PORT -> MODER |= (1 << RW_PIN_NUM*2);
	E_PORT -> MODER |= (1 << E_PIN_NUM*2);
	DB7_PORT -> MODER |= (1 << DB7_PIN_NUM*2);
	DB6_PORT -> MODER |= (1 << DB6_PIN_NUM*2);
	DB5_PORT -> MODER |= (1 << DB5_PIN_NUM*2);
	DB4_PORT -> MODER |= (1 << DB4_PIN_NUM*2);
	
	RS_CLR();
	RW_CLR();
}


void LCD1602_ScreenInit4bits(void){
	



}