#include "ComputerMonitor.hpp"

ComputerMonitor::ComputerMonitor() : Computer(), _sizeMonitor(0)
{
	std::cout << "* ComputerMonitor default constructor *" << std::endl;
}

ComputerMonitor::ComputerMonitor(Processor* proc, std::string mark, float price, int sizeMonitor) : Computer(proc, mark, price), _sizeMonitor(sizeMonitor)
{

	std::cout << "* ComputerMonitor constructor with parameters *" << std::endl;
}

ComputerMonitor::~ComputerMonitor()
{
	std::cout << "* ComputerMonitor default destructor *" << std::endl;
}

void ComputerMonitor::print()
{
	std::cout << "Computer with monitor and parameters : " << std::endl;
	std::cout << "Processor power: " << _proc->getPower() << "MHz" << std::endl;
	std::cout << "Mark: " << *_mark << std::endl;
	std::cout << "Price: " << _price << std::endl;
	std::cout << "Monitor size: " << _sizeMonitor << std::endl;
}

void ComputerMonitor::setMonitorSize(const int& size)
{
	if (size <= 0 )
	{
		throw AppException("Size is incorrect");
	}
	this->_sizeMonitor = size;
}
