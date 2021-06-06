#include "WindowMenu.hpp"

WindowMenu::WindowMenu() : Window()
{
	_menu = new std::string("default menu"); //����������� �������� ������
	std::cout << "* WindowMenu default constructor *" << std::endl;
}

WindowMenu::WindowMenu(int xStart, int yStart, int xEnd, int yEnd, std::string backgroundClr, std::string menu) : Window(xStart, yStart, xEnd, yEnd, backgroundClr)
{
	_menu = new std::string(menu); //����������� �������� ������
	std::cout << "* WindowMenu constructor with parameters *" << std::endl;
}

WindowMenu::~WindowMenu()
{
	delete _menu; //������� ����������� ���������� ������
	std::cout << "* WindowMenu default destructor *" << std::endl;
}

void WindowMenu::print()
{
	Window::print(); //�������� �� �������� ������
	std::cout << "Menu: " << *_menu << std::endl;
}

void WindowMenu::setMenu(std::string menu)
{
	if (_menu)
		delete _menu;
	_menu = new std::string(menu); //����������� �������� ������
}