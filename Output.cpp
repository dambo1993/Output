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
	_inverse = inverse;
	_state = state;
}

void Output::begin(void)
{
	init();
}

void Output::init(void)
{
	set(_state);
	pinMode(_pin, OUTPUT);
}

void Output::on(void)
{
	_state = true;
	digitalWrite(_pin, !_inverse);
}

void Output::off(void)
{
	_state = false;
	digitalWrite(_pin, _inverse);
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
