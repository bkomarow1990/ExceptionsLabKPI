#include "Computer.hpp"

Computer::Computer()
{
	std::cout << "* Computer default constructor *" << std::endl;
	_proc = new Processor();
	_mark = new std::string("noname");
	_price = 0.0;
}

Computer::Computer(Processor* proc, std::string mark, float price)
{
	std::cout << "* Computer constructor with parameters *" << std::endl;
	if (proc)
		_proc = proc;
	else
		_proc = new Processor();
	_mark = new std::string(mark);
	_price = price;
}

Computer::~Computer()
{
	std::cout << "* Computer default destructor *" << std::endl;
	delete _mark;
}

