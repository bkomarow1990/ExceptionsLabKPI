#include "Processor.hpp"

Processor::Processor() : _power(0.0)
{
	std::cout << "* Processor default constructor *" << std::endl;
}

Processor::Processor(float power) : _power(power)
{
	std::cout << "* Processor constructor with parameters *" << std::endl;
}

Processor::~Processor()
{
	std::cout << "* Processor default destructor *" << std::endl;
}

float Processor::getPower()
{
	return _power;
}


