#pragma once
#include <iostream>
using namespace std;
class Matrix {
private:
	float** matrix;
	int m;
	int n;
	void initMatrix();
public:
	Matrix();
	Matrix(const int& i, const int& j);
	Matrix(const int& i);
	~Matrix();
	void insert(const int& i, const int& j, const float& elem);
	const float& getElementByIndex(const int& i, const int& j) const;
	void mult(const float& x);
	void print()const;
	void fill(const float& value);
};