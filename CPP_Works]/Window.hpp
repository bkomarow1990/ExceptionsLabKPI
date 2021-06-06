#ifndef WINDOW_HPP
#define WINDOW_HPP
#include "AppException.h"
#include <iostream>

class Window
{
public:
	Window();
	Window(int xStart, int yStart, int xEnd, int yEnd, std::string backgroundClr);
	virtual ~Window();

	virtual void print(); // ������ ����������� ��� ��������������� � ������ ����������
	void setBackgroundClr(std::string backgroundClr);

protected: //��� ������� �� ������� �����������
	int			_xStart;
	int			_yStart;
	int			_xEnd;
	int			_yEnd;
	std::string* _backgroundClr;
};


#endif //WINDOW_HPP
