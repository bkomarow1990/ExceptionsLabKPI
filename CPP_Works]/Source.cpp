#include <iostream>
#include "Window.hpp"
#include "WindowMenu.hpp"

int main()
{
	try{
	Window win; // ����� ������������ � ���������� �����������
	WindowMenu winMenu(0, 0, 50, 50, "green", "special menu for windowMenu"); //����� ������������ � ������ �����������

	win.print();
	win.setBackgroundClr("blue"); //��������� ���� � ������� ������
	win.print();
	std::cout << "__________________________________" << std::endl;
	winMenu.print();
	winMenu.setBackgroundClr("orange"); //��������� ���� � ������ ����������
	winMenu.setMenu("menu for orange background");//��������� ���� � ������ ����������
	winMenu.print();
	}
	catch (AppException ex) {
		std::cout << ex.getError()<<std::endl;
	}
	return (0);
}
