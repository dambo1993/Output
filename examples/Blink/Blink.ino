#include <Output.hpp>


Output led(LED_BUILTIN);

void setup() 
{
	led.start();
}

void loop() {
	led.toggle();
	delay(1000);
}
