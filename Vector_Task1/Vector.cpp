#include "Vector.h"

const float& Vector::getElement(const size_t& index) const
{
	return elem[index];
}

Vector::Vector()
{
	elem = new float[1];
	elem[0] = 0;
	size = 1;
}

Vector::Vector(const int& size, float init)
{
	this->size = size;
	elem = new float[size];
	fill(init);
}

Vector::Vector(const size_t& size)
	: size(size), elem(new float[size])
{
	for (size_t i = 0; i < size; ++i) {
		elem[i] = i;
	}
}

void Vector::fill(float value)
{
	for (size_t i = 0; i < size; i++)
	{
		elem[i] = value;
	}
}

Vector::~Vector()
{
	delete[] elem;
}

void Vector::print() const
{
	for (size_t i = 0; i < size; i++)
	{
		cout << elem[i] << " ";
	}
	cout << endl;
}

Vector Vector::add(const Vector& two)const
{
	Vector tmp(*this);
	int size;
	if (this->size < two.size)
	{
		size = this->size;
	}
	else {
		size = two.size;
	}
	for (size_t i = 0; i < size; i++)
	{
		tmp.elem[i] += two.elem[i];
	}
	return tmp;
}

Vector Vector::substr(const Vector& two) const
{
	Vector tmp = *this;
	int size;
	if (this->size < two.size)
	{
		size = this->size;
	}
	else {
		size = two.size;
	}
	for (size_t i = 0; i < size; i++)
	{
		tmp.elem[i] -= two.elem[i];
	}
	return tmp;
}

Vector Vector::mult(const Vector& two) const
{
	Vector tmp = *this;
	int size;
	if (this->size < two.size)
	{
		size = this->size;
	}
	else {
		size = two.size;
	}
	for (size_t i = 0; i < size; i++)
	{
		tmp.elem[i] *= two.elem[i];
	}
	return tmp;
}

Vector Vector::div(const Vector& two) const
{
	Vector tmp = *this;
	int size;
	if (this->size < two.size)
	{
		size = this->size;
	}
	else {
		size = two.size;
	}
	for (size_t i = 0; i < size; i++)
	{
		if (two.elem == 0)
		{
			throw exception("Can`t divide by zero"); // При діленні на нуль - кидаємо виняток
		}
		tmp.elem[i] /= two.elem[i];
	}
	return tmp;
}

const int& Vector::getSize() const
{
	return size;
}

bool Vector::operator==(const Vector& two)
{
	return this->size == two.size;
}

bool Vector::operator<(const Vector& two)
{
	return this->size < two.size;
}

bool Vector::operator>(const Vector& two)
{
	return this->size>two.size;
}

bool Vector::operator!=(const Vector& two)
{
	return this->size != two.size;
}

Vector Vector::operator+(const Vector& two)
{
	return add(two);
}

Vector Vector::operator-(const Vector& two)
{
	return Vector();
}

Vector Vector::operator*(const Vector& two)
{
	return mult(two);
}

Vector Vector::operator/(const Vector& two)
{
	return div(two);
}

Vector::Vector(const Vector& two)

{
	elem = new float[two.size];
	size = two.size;
	for (size_t i = 0; i < size; i++)
	{
		elem[i] = two.elem[i];
	}
}

