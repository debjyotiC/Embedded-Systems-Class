
#include <avr/io.h>
#include <util/delay.h>
#include "pinDefines.h"
#include "USART.h"

int main(void) {
	char serialCharacter;

	// -------- Inits --------- //
	DDRB = 0xff;                            /* set up LEDs for output */
	initUSART();
	                         /* to test */

	// ------ Event loop ------ //
	while (1) {
		printString("Hello World!\r\n"); 
		_delay_ms(100);
		}                                                  /* End event loop */
		return 0;
	}