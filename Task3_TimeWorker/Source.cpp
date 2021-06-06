#include <iostream>
#include "TimeWorker.h"
#include <locale>;
#include "windows.h";
using namespace std;
int main() {
	SetConsoleCP(1251); // Підключаємо українську мову
	SetConsoleOutputCP(1251);
	TimeWorker tw;
	try{
	tw.printStandart();
	tw.setHours(24);
	}
	catch (exception ex) {
		cout << ex.what() << endl;
	}
	tw.printAdvanced();
	return 0;
}