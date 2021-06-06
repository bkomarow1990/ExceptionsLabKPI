#include <iostream>
#include "Matrix.h"
using namespace std;
int main() {
	try{
	Matrix matrix(6,10);
	matrix.fill(22);
	matrix.insert(0, 0,22.2);
	matrix.print();
	}
	catch(exception ex){
		cerr << ex.what();
	}
	
	return 0;
}