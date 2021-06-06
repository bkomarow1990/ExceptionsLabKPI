#include <iostream>
#include "Window.hpp"
#include "WindowMenu.hpp"

int main()
{
	try{
	Window win; // вызов конструктора с заводскими параметрами
	WindowMenu winMenu(0, 0, 50, 50, "green", "special menu for windowMenu"); //вызов конструктора с нашими параметрами

	win.print();
	win.setBackgroundClr("blue"); //изменение фона в базовом классе
	win.print();
	std::cout << "__________________________________" << std::endl;
	winMenu.print();
	winMenu.setBackgroundClr("orange"); //изменение фона в классе наследнике
	winMenu.setMenu("menu for orange background");//изменение меню в классе наследнике
	winMenu.print();
	}
	catch (AppException ex) {
		std::cout << ex.getError()<<std::endl;
	}
	return (0);
}
