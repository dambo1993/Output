#include <Output.hpp>

Output led(LED_BUILTIN);
Output led2(12, true); // set second led as inverse logic

void setup() 
{
	
}

void loop() {
	led.toggle();
  led2.toggle();
	delay(1000);
}