# Output
Make Arduino even easier - wraper class for outputs.

# Usage - Blink application

```cpp
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
```

You can change output mode by one parameter :)
```cpp
#include <Output.hpp>

Output led(LED_BUILTIN);
Output led2(12, true); // set second led as inverse logic

void setup() 
{
	led.init();
	led2.init();
}

void loop() 
{
	led.toggle();
	led2.toggle();
	delay(1000);
}
```

# Functions:
```cpp
#include <Output.hpp>

Output led(LED_BUILTIN);
...
led.init();
...
led.on();
led.off();
led.toggle();

```
