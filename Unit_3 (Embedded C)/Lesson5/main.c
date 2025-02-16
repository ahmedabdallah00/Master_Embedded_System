/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdio.h>
#include <stdlib.h>
#include "Platform_Type.h"


#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

/*Register address*/

#define SYSCTL_RCGC2        (*(volatile unsigned long*)(0x400FE108))
#define GPIO_PORTF_DER_R    (*(volatile unsigned long*)(0x40025400))
#define GPIO_PORTF_DEN_R    (*(volatile unsigned long*)(0x4002551C))
#define GPIO_PORTF_DATA_R   (*(volatile unsigned long*)(0x400253FC))

int main(void)
{
	volatile unsigned long delay_count;
    SYSCTL_RCGC2 = 0x20;
	for(delay_count=0;delay_count<200;delay_count++);
	GPIO_PORTF_DER_R |= 1<<3;
	GPIO_PORTF_DEN_R |= 1<<3;
	
	while(1)
	{
		GPIO_PORTF_DATA_R |= 1<<3;
		for(delay_count=0;delay_count<20000;delay_count++);
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for(delay_count=0;delay_count<20000;delay_count++);
	}
	/* Loop forever */
	for(;;);
}
