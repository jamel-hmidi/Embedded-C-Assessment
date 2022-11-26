/**
  ******************************************************************************
  * @file    main.c
  * @author  Jamel HMIDI
  * @brief   Embedded C Assessment
  * @version V1.0.0
  * @date    26-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "gpio.h"
#include "led.h"
/*----------------Private Functions Prototype---------------------------------*/


/* Private define ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/


int main()
{
GPIO_Clock_Enable(GPIOD);

//Turning on LED Blue
GPIO_Config(GPIOD,PIN15,OUTPUT,OUTPUT_OPEN_DRAIN,VERY_HIGH_SPEED);
GPIO_Write_Pin(GPIOD, PIN15, SET); 

GPIO_Config(GPIOD,PIN13,OUTPUT,OUTPUT_OPEN_DRAIN, LOW_SPEED);

//Turning on Orange LED when Button Pressed
if (GPIO_Read_Pin(GPIOA,PIN0)== 1 && GPIO_Read_Pin(GPIOD,PIN13)== 0)
  GPIO_Write_Pin(GPIOD, PIN13, SET);

//Turning off Orange LED when Button Pressed
if (GPIO_Read_Pin(GPIOA,PIN0)== 1 && GPIO_Read_Pin(GPIOD,PIN13)== 1)
GPIO_Write_Pin(GPIOD, PIN13,RESET);
  while(1)
  {
  
  }
}

/**************************************END OF FILE**************************************/
