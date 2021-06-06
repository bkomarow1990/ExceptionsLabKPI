#include <iostream>
#include "Vector.h"
using namespace std;
int main() {
	Vector first(5,2.2);
	Vector second(5,3.3);
	Vector third(first+second);
	third.print();
	return 0;
}