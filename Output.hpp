/*
 * output.hpp
 *
 *  Created on: 7 sty 2018
 *      Author: Przemek
 */

#ifndef SRC_OUTPUT_OUTPUT_HPP_
#define SRC_OUTPUT_OUTPUT_HPP_

#include "Arduino.h"

class Output
{
public:
	Output(int pin, bool inverse=false, bool state=false);
	
	void on(void);
	void off(void);
	void set(bool state);
	void toggle(void);
	bool getState(void);
private:
	int _pin;
	bool _inverse;
	bool _state;

	inline void setOn(void);
	inline void setOff(void);
};

#endif /* SRC_OUTPUT_OUTPUT_HPP_ */
