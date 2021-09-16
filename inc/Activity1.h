#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__

/**
 * @file Activity1.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#define F_CPU 16000000UL 	
#define LED_PORT (PORTD)    
#define LED_PIN  (PORTD2)   
#define BUTTON_SENSOR  (PORTD0)   
#define TEMP_SENSOR  (PORTD1)   

/**
 * Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>


/**
 * Function Definitions
 */

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void);

/**
 * @brief Function to turn LED on
 * 
 */
void TurnLED_ON();

/**
 * @brief Function to turn LED off
 * 
 */
void TurnLED_OFF();

/**
 * @brief Activity 1 to Turn ON LED if switches for Button sensor and Heator sensor are pressed 
 * 
 */
int activity1_LED(void);

#endif /* __ACTIVITY_1_H__ */