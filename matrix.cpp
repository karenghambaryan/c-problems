#include <iostream>
#include "car.h"
#include "matrix.h"


Matrix::Matrix()
{
    m_rows = 0;
    m_cols = 0;
    m_matrix = nullptr;
    //std::cout << "Constructor" << std::endl;
}
Matrix::Matrix(int rows, int cols)
{
    m_rows = rows;
    m_cols = cols;
    m_matrix = new Car*[m_rows];
    for(int i = 0; i < m_rows; i++)
    {
        m_matrix[i] = new Car[m_cols];
    }
    //std::cout << "Parametrized Constructor" << std::endl;
}
Matrix::Matrix(const Matrix& other)
{
    m_rows = other.m_rows;
    m_cols = other.m_cols;
    m_matrix = new Car*[m_rows];
    for(int i = 0; i < m_rows; i++)
    {
        m_matrix[i] = new Car[m_cols];
    }
    for(int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j < m_cols; j++)
        {
            m_matrix[i][j] = other.m_matrix[i][j];
        }
    }
    //std::cout << "Copy Constructor" << std::endl;
}
Matrix::~Matrix()
{
    if(m_matrix != nullptr){
        for(int i = 0; i < m_rows; i++)
        {
            delete[] m_matrix[i];
        }
        delete[] m_matrix;
        m_matrix = nullptr;
    }
    //std::cout << "Destructor" << std::endl;
}
Matrix& Matrix::operator=(const Matrix& other)
{
    if(this != &other)
    {
        if(m_matrix != nullptr)
        {
            for(int i = 0; i < m_rows; i++)
            {
                delete[] m_matrix[i];
            }
            delete[] m_matrix;
        }
        m_rows = other.m_rows;
        m_cols = other.m_cols;
        m_matrix = new Car*[m_rows];
        for(int i = 0; i < m_rows; i++)
        {
            m_matrix[i] = new Car[m_cols];
        }
        for(int i = 0; i < m_rows; i++)
        {
            for(int j = 0; j < m_cols; j++)
            {
                m_matrix[i][j] = other.m_matrix[i][j];
            }
        }
    }
    //std::cout << "Operator assigmant" << std::endl;
    return *this;
    
}
Car* Matrix::operator[](int i)
    {
        return m_matrix[i];
    }
    const Car* Matrix::operator[](int i) const {
    return m_matrix[i];
    }
std::ostream& operator<<(std::ostream& os, const Matrix& matrix)
{
    for(int i = 0; i < matrix.m_rows; i++)
    {
        for(int j = 0; j < matrix.m_cols; j++)
        {
            os << matrix.m_matrix[i][j] << " ";
        }
        os << std::endl;
    }
    os << std::endl;
    return os;
}