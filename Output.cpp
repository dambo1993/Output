/*
 * output.cpp
 *
 *  Created on: 7 sty 2018
 *      Author: Przemek
 */

#include <Arduino.h>
#include "Output.hpp"

Output::Output(int pin, bool inverse, bool state)
{
	_pin = pin;
	_inverse = false;
	_state = false;
}

void Output::start(void)
{
	set(_state);
	pinMode(_pin, OUTPUT);
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
		digitalWrite(_pin, LOW);
	}
	else
	{
		digitalWrite(_pin, HIGH);
	}
}

void Output::set(bool state)
{
	if(state)
	{
		on();
	}
	else
	{
		off();
	}
}

void Output::toggle(void)
{
	if(_state)
	{
		off();
	}
	else
	{
		on();
	}
}

bool Output::getState(void)
{
	return _state;
}
