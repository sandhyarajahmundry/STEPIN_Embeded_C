/**
 * @file Activity1.c
 * @author sandhya (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"


void peripheral_init(void)
{	
	DDRD |= (1<<PD2); 
    DDRD &= ~(1<<PD0); 
    PORTD |= (1<<PD0); 
    DDRD &= ~(1<<PD1); 
    PORTD |= (1<<PD1); 
}

void TurnLED_ON(){
    LED_PORT |= (1<<LED_PIN); 
}

void TurnLED_OFF(){
    LED_PORT &= ~(1<<LED_PIN);
}

int act1=0;
int activity1_LED(void)
{
       peripheral_init();
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<TEMP_SENSOR)))
        { 
            act1=1;
        }
        else  
        {
            act1=0;
        }
    return act1;
}