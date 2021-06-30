/*
 * Servo_Private.h
 *
 *  Created on: Oct 4, 2020
 *      Author: Omar Fahmy
 */

#ifndef HAL_SERVO_MOTOR_SERVO_PRIVATE_H_
#define HAL_SERVO_MOTOR_SERVO_PRIVATE_H_

/*******************************************************************************/
/*							  SERVO MOTOR ANGLES RANGE						   */
/*******************************************************************************/
#define MINIMUM_ANGLE								0
#define MAXIMUM_ANGLE								180
/*******************************************************************************/


/*******************************************************************************/
/*							  	  SERVO MOTOR PIN							   */
/*******************************************************************************/
#define OC1A										0
#define OC1B										1
/*******************************************************************************/


/*******************************************************************************/
/*						ANGLE TO DUTYCYCLE CONVERSION EQUATION				   */
/*																			   */
/* Equation is based on a servo motor that rotates to its minimum (0 degree)   */
/* at 2% duty cycle and to its maximum (180 degrees) at 12.5% duty cycle.	   */
/*******************************************************************************/
#define ANGLE_TO_DUTYCYCLE 							((LOC_F32Angle * 7) / 120) + 2
/*******************************************************************************/


/*******************************************************************************/
/*							    TIMER1 PRESCALERS							   */
/*******************************************************************************/
#define PRESCALER_8									0
#define PRESCALER_64								1
#define PRESCALER_256								2
#define PRESCALER_1024								3
/*******************************************************************************/


/*******************************************************************************/
/*							    TIMER1 MODES								   */
/*******************************************************************************/
#define PHASE_AND_FREQUENCY_CORRECT_ICR1			0
#define PHASE_AND_FREQUENCY_CORRECT_OCR1A			1
#define PHASE_CORRECT_ICR1							2
#define PHASE_CORRECT_OCR1A							3
#define FAST_PWM_ICR1								4
#define FAST_PWM_OCR1A								5
/*******************************************************************************/


#endif /* HAL_SERVO_MOTOR_SERVO_PRIVATE_H_ */
