#ifndef COMPUTERMONITOR_HPP
#define COMPUTERMONITOR_HPP

#include "Computer.hpp"

class ComputerMonitor : private Computer
{
public:
	ComputerMonitor();
	ComputerMonitor(Processor* proc, std::string mark, float price, int sizeMonitor);
	~ComputerMonitor();

	void	print();

private:
	int _sizeMonitor;
	void setMonitorSize(const int& size);

};
#endif
