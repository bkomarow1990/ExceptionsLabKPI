#pragma once
#include <iostream>
using namespace std;

class Vector
{
public:
	const float& getElement(const size_t& index)const;
	Vector();
	Vector(const int& size, float init);
	Vector(const size_t& size);
	void fill(float value);
	virtual ~Vector();
	void print()const;
	Vector add(const Vector& two)const; // Повертає новий екземпляр Vector
	Vector substr(const Vector& two)const; // Повертає новий екземпляр Vector
	Vector mult(const Vector& two)const; // Повертає новий екземпляр Vector
	Vector div(const Vector& two)const; // Повертає новий екземпляр Vector
	const int& getSize() const;
	bool operator==(const Vector& two); // Перевірка відбувається за розміром
	bool operator<(const Vector& two); // Перевірка відбувається за розміром
	bool operator>(const Vector& two); // Перевірка відбувається за розміром
	bool operator!=(const Vector& two); // Перевірка відбувається за розміром
	Vector operator+(const Vector& two); 
	Vector operator-(const Vector& two); 
	Vector operator*(const Vector& two); 
	Vector operator/(const Vector& two); 
	Vector(const Vector& two);

protected:
	float* elem;
	int size; // Кількість елементів
};

