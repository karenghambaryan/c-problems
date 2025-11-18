#ifndef CHESS_H
#define CHESS_H
#include <iostream>
#include <fstream>
#include <string>

class Matrix
{
    protected:
        std::string** m_matrix;
        int m_cols;
        int m_rows;
    public:
        Matrix();
        Matrix(int rows,int cols);
        ~Matrix();
        Matrix(const Matrix& other);
        Matrix& operator= (const Matrix& other);
        friend std::ostream& operator<<(std::ostream& os,const Matrix& other);
};

class Chess : public Matrix
{
    public:
        Chess() = delete;
        ~Chess();
        Chess(int rows,int cols);
        friend std::ostream& operator<<(std::ostream& os,const Chess& other);
};
#endif