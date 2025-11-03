#ifndef MATRIX_H
#define MATRIX_H
#include "car.h"
class Matrix
{
    private:
    int m_rows;
    int m_cols;
    Car** m_matrix;
    public:
    Matrix();
    Matrix(int rows, int cols);
    Matrix(const Matrix& other);
    ~Matrix();
    Matrix& operator=(const Matrix& other);
    friend std::ostream& operator<<(std::ostream& out, const Matrix& matrix);
    Car* operator[](int i);    
    const Car* operator[](int i) const;
};
#endif