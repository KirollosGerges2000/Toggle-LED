/*
 * Toggle LED.c
 *
 * Created: 7/19/2023 6:17:12 PM
 * Author : Kirollos Gerges 
 */ 

#include <avr/io.h>
#include "MACROS.h"
#include "DIO.h"
int main(void)
{
	 INPUT_MODULE(DDRA,0);  // declaration of input   "Button"
	 OUTPUT_MODULE(DDRC,7);  // declaration of output "LED"
	 OUTPUT_MODULE_OFF(PORTC,7);  // initialization that LED is oFF.
	 
   /*  super loop to read code each cycle*/
   while (1) 
    {
		if(INPUT_BIT(PINA,0))    //in condition user push this button 
		{
			TOGGLe_BIT(PORTC,7);    // ON, OFF LED according to the state
			while(INPUT_BIT(PINA,0));  // prevent escape this loop until user release push button
    }
}
}

