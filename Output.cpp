/*
 * output.cpp
 *
 *  Created on: 7 sty 2018
 *      Author: Przemek
 */

#include <Arduino.h>
#include "Output.hpp"


Output::Output(int pin)
{
	_pin = pin;
	_inverse = false;
	_state = false;
	
	Output::off();
	pinMode(pin, OUTPUT);
}

Output::Output(int pin, bool inverse)
{
	_pin = pin;
	_inverse = inverse;
	_state = false;
	
	Output::off();
	pinMode(pin, OUTPUT);
}

Output::Output(int pin, bool inverse, bool state)
{
	_pin = pin;
	_inverse = inverse;
	_state = false;
	
	Output::set(state);
	pinMode(pin, OUTPUT);
}

void Output::on(void)
{
	_state = true;
	if(!_inverse)
	{
		digitalWrite(_pin, HIGH);
	}
	else
	{
		digitalWrite(_pin, LOW);
	}
}

void Output::off(void)
{
	_state = false;
	if(!_inverse)
	{
		digitalWrite(_pin, HIGH);
	}
	else
	{
		digitalWrite(_pin, LOW);
	}
}

void Output::set(bool state)
{
	if(state)
	{
		Output::on();
	}
	else
	{
		Output::off();
	}
}

void Output::toggle(void)
{
	if(_state)
	{
		Output::off();
	}
	else
	{
		Output::on();
	}
}

bool Output::getState(void)
{
	return _state;
}