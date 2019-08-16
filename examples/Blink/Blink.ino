#include <Output.hpp>

Output led(LED_BUILTIN);

void setup() 
{
	led.init();
}

void loop() 
{
	led.toggle();
	delay(1000);
}
