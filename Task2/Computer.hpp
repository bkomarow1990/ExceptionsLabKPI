#ifndef COMPUTER_HPP
#define COMPUTER_HPP
#include "AppException.h"
#include "Processor.hpp"

class Computer
{
public:
	Computer();
	Computer(Processor* proc, std::string mark, float price);
	~Computer();

protected:

	Processor* _proc;
	std::string* _mark;
	float 		_price;
};


#endif
