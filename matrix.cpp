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
    m_matrix = new int*[m_rows];
    for(int i = 0; i < m_rows; i++)
    {
        m_matrix[i] = new int[m_cols];
    }
    //std::cout << "Parametrized Constructor" << std::endl;
}
Matrix::Matrix(const Matrix& other)
{
    m_rows = other.m_rows;
    m_cols = other.m_cols;
    m_matrix = new int*[m_rows];
    for(int i = 0; i < m_rows; i++)
    {
        m_matrix[i] = new int[m_cols];
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
        m_matrix = new int*[m_rows];
        for(int i = 0; i < m_rows; i++)
        {
            m_matrix[i] = new int[m_cols];
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
void Matrix::Init()
{
    for(int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j < m_cols; j++)
        {
            m_matrix[i][j] = (i + j) % 10;
        }
    }
}
Matrix Matrix::operator++(int)
{
    for(int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j < m_cols; j++)
        {
            this->m_matrix[i][j]++;
        }
    }
    return *this;
}
Matrix& Matrix::operator++()
{
    for(int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j < m_cols; j++)
        {
            ++m_matrix[i][j];
        }
    }
    return *this;
}
Matrix Matrix::operator*(int k) const
{
    Matrix result(m_rows,m_cols);
    for(int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j < m_cols; j++)
        {
            result.m_matrix[i][j] = m_matrix[i][j] * k;
        }
    }
    return result;
}
Matrix Matrix::operator*(const Matrix& other) const
{
    if(this->m_cols != other.m_rows)
    {
        std::cout << "I can't do it" << std::endl;
        return *this;
    }
    Matrix result(m_rows,other.m_cols);
    for(int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j < m_cols; j++)
        {
            result.m_matrix[i][j] = 0;
            for(int k = 0; k < m_cols; k++)
            {
                result.m_matrix[i][j] += m_matrix[i][k] * other.m_matrix[k][j];
            }
        }
    }
    return result;
}
Matrix Matrix::operator+(const Matrix& other) const
{
    if(this->m_rows != other.m_rows || this->m_cols != other.m_cols)
    {
        std::cout << "I can't do this" << std::endl;
        return *this;
    }
    Matrix result(m_rows,m_cols);
    for(int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j < m_cols; j++)
        {
            result.m_matrix[i][j] = m_matrix[i][j] + other.m_matrix[i][j];    
        }
    }
    return result;
}
Matrix Matrix::operator-(const Matrix& other) const
{
    if(this->m_rows != other.m_rows || this->m_cols != other.m_cols)
    {
        std::cout << "I can't do this" << std::endl;
        return *this;
    }
    Matrix result(m_rows,m_cols);
    for(int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j < m_cols; j++)
        {
            result.m_matrix[i][j] = m_matrix[i][j] - other.m_matrix[i][j];    
        }
    }
    return result;
}
int Matrix::Max()
{
    int max = m_matrix[0][0];
    for(int i = 0; i < m_rows; i++)
    {for(int j = 0; j < m_cols; j++)
        {
            if(m_matrix[i][j] > max)
            {
                max = m_matrix[i][j];
            }
        }
    }
    return max;
}
void Matrix::Reverse()
{
    int* arr = new int[m_rows * m_cols];
    int k = 0;
    for(int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j < m_cols; j++)
        {
            arr[k++] = m_matrix[i][j];
        }
    }
    for(int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j < m_cols; j++)
        {
            m_matrix[i][j] = arr[--k];
        }
    }
    delete[] arr;
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