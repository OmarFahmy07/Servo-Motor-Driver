/*
 * main.c
 *
 *  Created on: Oct 1, 2020
 *      Author: Omar Fahmy
 */

#include "../HAL/Servo Motor/Servo_Interface.h"
#include <util/delay.h>

int main (void)
{
	Servo_U8Init();

	while (1)
	{
		for (f32 angle = 0; angle <= 180; angle++)
		{
			Servo_U8Rotate(angle);
			_delay_ms(20);
		}

		for (f32 angle = 180; angle >= 0; angle--)
		{
			Servo_U8Rotate(angle);
			_delay_ms(20);
		}
	}

	return 0;
}

