#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP

#include <iostream>

class Processor
{
public:
	Processor();
	Processor(float power);
	~Processor();

	float getPower(); //метод доступа к _power
private:
	float _power;

};


#endif


