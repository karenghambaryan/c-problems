#ifndef CHESS_H
#define CHESS_H
#include <iostream>


class Matrix
{
    protected:
        std::string** m_matrix;
        int m_cols;
        int m_rows;
    public:
        Matrix();
        Matrix(int rows,int cols);
        virtual ~Matrix();
        Matrix(const Matrix& other);
        Matrix(Matrix && other);
        Matrix& operator= (const Matrix& other);
        Matrix& operator= (Matrix&& other);
        friend std::ostream& operator<<(std::ostream& os,const Matrix& other);
};

class Chess : public Matrix
{
    public:
        Chess() = delete;
        ~Chess() override;
        Chess(int rows,int cols);
        Chess(const Chess& other);
        Chess& operator=(const Chess& other);
        Chess(Chess&& other);
        Chess& operator=(Chess&& other);
        friend std::ostream& operator<<(std::ostream& os,const Chess& other);
};
#endif