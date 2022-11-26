#include "led.h"
#include "gpio.h"
void Init_OnBoard_LEDs(void)
{
	GPIO_Clock_Enable(GPIOD);
        GPIO_Config(GPIOD,PIN12||PIN13||PIN14|| PIN15,OUTPUT,OUTPUT_OPEN_DRAIN, LOW_SPEED);
	HAL_GPIO_Init(GPIOD);
}

void configure_Button(void)
{
	GPIO_Clock_Enable(GPIOA);
        GPIO_Config(GPIOA,PIN0,INPUT,INPUT_PUSH_PULL, LOW_SPEED);
	HAL_GPIO_Init(GPIOA); // 
}


