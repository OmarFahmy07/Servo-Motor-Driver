/*
 * Servo_Configure.h
 *
 *  Created on: Oct 4, 2020
 *      Author: Omar Fahmy
 */

#ifndef HAL_SERVO_MOTOR_SERVO_CONFIGURE_H_
#define HAL_SERVO_MOTOR_SERVO_CONFIGURE_H_


/*****************************************************************************/
/*      					OPTIONS FOR MOTOR'S PIN:		                 */
/*       		   				 OC1A - OC1B 			     				 */
/*****************************************************************************/
#define PIN 				OC1A
/*****************************************************************************/


/*****************************************************************************/
/* Timer1's PWM mode (either fast PWM, phase correct PWM, or phase and		 */
/* frequency correct PWM) should be provided for accurate determination of	 */
/* the output frequency. Calculations are based on an 8 MHz frequency        */
/* crystal as a clock source for the microcontroller, as well as a servo	 */
/* motor that operates on 50 Hz frequency. Notice that using any mode ending */
/* with OCR1A will force PWM output on OC1B only (i.e. only OC1B will be	 */
/* available for use since OCR1A register will be used as a TOP value)		 */
/* 							 						 					     */
/* 							OPTIONS FOR TIMER1 MODE 					     */
/*    PHASE_AND_FREQUENCY_CORRECT_ICR1 - PHASE_AND_FREQUENCY_CORRECT_OCR1A   */
/* PHASE_CORRECT_ICR1 - PHASE_CORRECT_OCR1A - FAST_PWM_ICR1 - FAST_PWM_OCR1A */
/*****************************************************************************/
#define TIMER1_MODE			PHASE_CORRECT_ICR1
/*****************************************************************************/


/*****************************************************************************/
/* Timer1's prescaler should be provided for accurate motor's calculations.	 */
/* Calculations are based on an 8 MHz frequency crystal as a clock source	 */
/* for the microcontroller. 			 									 */
/*																			 */
/* 							OPTIONS FOR TIMER1 PRESCALER 					 */
/*        PRESCALER_8 - PRESCALER_64 - PRESCALER_256 - PRESCALER_1024	     */
/*****************************************************************************/
#define TIMER1_PRESCALER	PRESCALER_8
/*****************************************************************************/



#endif /* HAL_SERVO_MOTOR_SERVO_CONFIGURE_H_ */
