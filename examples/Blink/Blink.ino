#include <Output.hpp>


Output led(LED_BUILTIN);

void setup() 
{
	
}

void loop() {
	led.toggle();
	delay(1000);
}
