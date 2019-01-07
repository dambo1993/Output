#include <Output.hpp>

Output led(LED_BUILTIN);
Output led2(12, true); // set second led as inverse logic

void setup() 
{
	led.start();
	led2.start();
}

void loop() {
	led.toggle();
	led2.toggle();
	delay(1000);
}