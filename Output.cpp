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
	pinMode(pin, OUTPUT);
	_pin = pin;
	_inverse = false;
	_state = false;
}

Output::Output(int pin, bool inverse)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
	_inverse = true;
	_state = false;
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

void Output::toggle(void)
{
	if(_state)
	{
		this->off();
	}
	else
	{
		this->on();
	}
}
