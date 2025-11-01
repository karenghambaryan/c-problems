#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>

class Matrix
{
    private:
    int m_rows;
    int m_cols;
    int** m_matrix;
    public:
    Matrix();
    Matrix(int rows, int cols);
    Matrix(const Matrix& other);
    ~Matrix();
    Matrix& operator=(const Matrix& other);
    void Init();
    Matrix operator++(int);
    Matrix& operator++();
    Matrix operator*(int k) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;
    int Max();
    void Reverse();
    friend std::ostream& operator<<(std::ostream& out, const Matrix& matrix);
};
#endif