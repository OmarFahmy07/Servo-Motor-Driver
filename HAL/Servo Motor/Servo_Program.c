/*
 * Servo_Program.c
 *
 *  Created on: Oct 4, 2020
 *      Author: Omar Fahmy
 */

/* LIB LAYER */
#include "../../LIB/COMMON_MACROS.h"
#include "../../LIB/STD_TYPES.h"
/* HAL LAYER */
#include "../Servo Motor/Servo_Configure.h"
#include "../Servo Motor/Servo_Private.h"
/* MCAL LAYER */
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/Timer1/Timer1_Interface.h"

u8 Servo_U8Init(void)
{
	Timer1_U8Init();
#if PIN == OC1A
	DIO_U8SetPinDirection(DIO_PORTD, DIO_PIN5, DIO_PIN_OUTPUT);
#elif PIN == OC1B
	DIO_U8SetPinDirection(DIO_PORTD, DIO_PIN4, DIO_PIN_OUTPUT);
#else
#error "Invalid servo motor's pin configuration"
#endif
	Timer1_U8Start();
	return NO_ERROR;
}

u8 Servo_U8Rotate(f32 LOC_F32Angle)
{

	if (LOC_F32Angle >= MINIMUM_ANGLE && LOC_F32Angle <= MAXIMUM_ANGLE)
	{
		u32 LOC_U32Top;
#if TIMER1_MODE == FAST_PWM_ICR1 || TIMER1_MODE == FAST_PWM_OCR1A
#if TIMER1_PRESCALER == PRESCALER_8
		LOC_U32Top = 19999;
#elif TIMER1_PRESCALER == PRESCALER_64
		LOC_U32Top = 2499;
#elif TIMER1_PRESCALER == PRESCALER_256
		LOC_U32Top = 624;
#elif TIMER1_PRESCALER == PRESCALER_1024
		LOC_U32Top = 155;
#else
#error "Invalid timer1 prescaler for servo motor"
#endif
#elif TIMER1_MODE == PHASE_AND_FREQUENCY_CORRECT_ICR1 || TIMER1_MODE == PHASE_CORRECT_ICR1 \
 || TIMER1_MODE == PHASE_AND_FREQUENCY_CORRECT_OCR1A || TIMER1_MODE == PHASE_CORRECT_OCR1A
#if TIMER1_PRESCALER == PRESCALER_8
		LOC_U32Top = 10000;
#elif TIMER1_PRESCALER == PRESCALER_64
		LOC_U32Top = 1250;
#elif TIMER1_PRESCALER == PRESCALER_256
		LOC_U32Top = 312;
#elif TIMER1_PRESCALER == PRESCALER_1024
		LOC_U32Top = 78;
#else
#error "Invalid timer1 prescaler for servo motor"
#endif
#else
#error "Invalid timer1 mode for servo motor"
#endif
#if PIN == OC1A
		Timer1_U8OC1ASetDutyCycle( ANGLE_TO_DUTYCYCLE,  LOC_U32Top);
#elif PIN == OC1B
		Timer1_U8OC1BSetDutyCycle( ANGLE_TO_DUTYCYCLE,  LOC_U32Top);
#else
#error "Invalid servo motor's pin configuration"
#endif
		return NO_ERROR;
	}
	else
	{
		return ERROR;
	}
}
