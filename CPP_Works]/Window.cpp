#include "Window.hpp"

Window::Window() : _xStart(0), _yStart(0), _xEnd(100), _yEnd(100)
{
	_backgroundClr = new std::string("white"); //динамически выделяем память
	std::cout << "* Window default constructor *" << std::endl;
}

Window::Window(int xStart, int yStart, int xEnd, int yEnd, std::string backgroundClr) : _xStart(xStart), _yStart(yStart), _xEnd(xEnd), _yEnd(yEnd)
{
	if (xStart == 0 && yStart==0 || xEnd==0 && yEnd==0)
	{
		throw AppException("Incorect coords");
	}
	_backgroundClr = new std::string(backgroundClr); //динамически выделяем память
	std::cout << "* Window constructor with parameters *" << std::endl;
}

Window::~Window()
{
	delete _backgroundClr; //очищаем динамически выделенную память
	std::cout << "* Window default destructor *" << std::endl;
}

void Window::print()
{
	std::cout << "Parameters for this window: xStart - " << _xStart << ", yStart - " << _yStart << ", xEnd - " << _xEnd << ", yEnd - " << _yEnd << ", background color - " << *_backgroundClr << std::endl;
}

void Window::setBackgroundClr(std::string backgroundClr)
{
	if (_backgroundClr)
		delete _backgroundClr;
	_backgroundClr = new std::string(backgroundClr); //динамически выделяем память
}
