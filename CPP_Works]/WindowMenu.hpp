#ifndef WINDOWMENU_HPP
#define WINDOWMENU_HPP

#include <iostream>
#include "Window.hpp"

class WindowMenu : public Window
{
public:
	WindowMenu();
	WindowMenu(int xStart, int yStart, int xEnd, int yEnd, std::string backgroundClr, std::string menu);
	~WindowMenu();

	void print();
	void setMenu(std::string menu);

private:
	std::string* _menu;
};


#endif
