#include "main.h"

/*

Пример проекта с написанием строк на индикаторе (только латинские буквы):
показывает состояние нажатых кнопок

"BTN3 BTN2 BTN1"	-  постоянная строка. подписывает кнопки
" 1    1    0  "	- в нужном месте появляются "1" если кнопки нажата, и "0" если кнопка отпущена.

*/


void SysTick_Handler(void){		// прервание от Systick таймера, выполняющееся с периодом 1 мкс

	timer_counter();

}


int main(void) {
	uint8_t SymbolCode = 0x30;

	RCC_Init();

	SysTick_Config( SYSTICK_TIMER_CONST );

	GPIO_Init();

	LED1_OFF();
	LED2_OFF();
	LED3_OFF();

	LCD1602_PinsInit4bits();

	LCD1602_ScreenInit4bits();

	

	
	while (1){
		LCD1602_WriteChar4bits(SymbolCode); // show >
		LED1_TOGGLE();
		Delay_ms(100);

		if(SymbolCode < 0xFF) SymbolCode++;
		else SymbolCode = 0x30;
		

	}
}

/*************************** End of file ****************************/
