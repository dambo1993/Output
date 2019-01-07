/*
 * output.cpp
 *
 *  Created on: 7 sty 2018
 *      Author: Przemek
 */

#include <Arduino.h>
#include "Output.hpp"


Output::Output(int pin, bool inverse = false, bool state=false)
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