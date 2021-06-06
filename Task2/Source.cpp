#include "Processor.hpp"
#include "ComputerMonitor.hpp"

int main()
{
	Processor proc(1.2);
	ComputerMonitor comp(&proc, "axux", 1000.0, 22);

	comp.print();
	return (0);
}
