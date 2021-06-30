/*
 * Servo_Interface.h
 *
 *  Created on: Oct 4, 2020
 *      Author: Omar Fahmy
 */

#ifndef HAL_SERVO_MOTOR_SERVO_INTERFACE_H_
#define HAL_SERVO_MOTOR_SERVO_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"

/************************************************************************************/
/* 								FUNCTIONS PROTOTYPE					 				*/
/************************************************************************************/

/************************************************************************************/
/* Description: initializes servo motor's configurations	  						*/
/* Input      : nothing	 		                                                    */
/* Output     : error checking                                                      */
/************************************************************************************/
extern u8 Servo_U8Init(void);
/************************************************************************************/

/************************************************************************************/
/* Description: rotates the motor with the given angle (0 - 180 degrees)			*/
/* Input      : angle in degrees	                                                */
/* Output     : error checking                                                      */
/************************************************************************************/
extern u8 Servo_U8Rotate(f32 LOC_F32Angle);
/************************************************************************************/


#endif /* HAL_SERVO_MOTOR_SERVO_INTERFACE_H_ */
