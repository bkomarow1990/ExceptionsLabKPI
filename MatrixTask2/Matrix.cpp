#include "Matrix.h"

Matrix::Matrix()
{
    this->m = 10;
    this->n = 10;
    initMatrix();
}

Matrix::Matrix(const int& i, const int& j)
{
    this->m = i;
    this->n = j;
    initMatrix();
}

Matrix::Matrix(const int& i)
{
    this->m = i;
    this->n = i;
    initMatrix();
}

Matrix::~Matrix()
{
    for (int i = 0; i < m; i++){
        delete[] matrix[i];
    }
    delete[] matrix;
}

void Matrix::insert(const int& i, const int& j, const float& elem)
{
    matrix[i][j] = elem ;
}

const float& Matrix::getElementByIndex(const int& i, const int& j) const
{
    if (i < m && j < n) {
        return matrix[i][j];
    }
    throw exception("Incorrect element");
}

void Matrix::mult(const float& x)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] *= x;
}

void Matrix::print()const
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout.width(4);
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

void Matrix::fill(const float& value)
{
    for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)matrix[i][j] = value;
}

void Matrix::initMatrix()
{
    matrix = new float* [m];
    for (int i = 0; i < m; i++){
        matrix[i] = new float[n];
    }
}
