#include "Chess.h"
Matrix::Matrix()
{
    m_rows = 0;
    m_cols = 0;
    m_matrix = nullptr;
}
Matrix::Matrix(int rows,int cols)
{
    m_rows = rows;
    m_cols = cols;
    m_matrix = new std::string*[m_rows];
    for(int i = 0; i < m_rows; i++)
    {
        m_matrix[i] = new std::string[m_cols];
    }
}
Matrix::~Matrix()
{
    if(m_matrix != nullptr){
        for(int i = 0; i < m_rows; i++)
        {
            delete[] m_matrix[i];
        }
        delete[] m_matrix;
    }
}
Matrix::Matrix(const Matrix& other)
{
    m_rows = other.m_rows;
    m_cols = other.m_cols;
    m_matrix = new std::string*[m_rows];
    for(int i = 0; i < m_rows; i++)
    {
        m_matrix[i] = new std::string[m_cols];
    }
    for(int i = 0; i < m_rows; i++)
    {
        for(int j = 0; j < m_cols; j++)
        {
            m_matrix[i][j] = other.m_matrix[i][j];
        }
    }
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
        m_matrix = new std::string*[m_rows];
        for(int i = 0; i < m_rows; i++)
        {
            m_matrix[i] = new std::string[m_cols];
        }
        for(int i = 0; i < m_rows; i++)
        {
            for(int j = 0; j < m_cols; j++)
            {   
                m_matrix[i][j] = other.m_matrix[i][j];
            }
        }   
    }
    return *this;
}
std::ostream& operator<<(std::ostream& os,const Matrix& m)
{
    for(int i = 0; i < m.m_rows; i++)
    {
        for(int j = 0; j < m.m_cols; j++)
        {
            os << m.m_matrix[i][j] << " ";
        }
        os << std::endl;
    }
    os << std::endl;
    return os;
}


Chess::~Chess()
{
    
}
Chess::Chess(int rows, int cols)
{
    if(rows == 8 && cols == 8)
    {
        m_rows = rows;
        m_cols = cols;
        m_matrix = new std::string*[m_rows];
        for(int i = 0; i < m_rows; i++)
        {
            m_matrix[i] = new std::string[m_cols];
        }
        for(int i = 0; i < m_rows; i++)
        {
            m_matrix[1][i] = "♟️";
            m_matrix[6][i] = "♟️";
        }
        for(int i = 2; i < m_rows - 2; i++)
        {
            for (int j = 0; j < m_cols; j++)
            {
                m_matrix[i][j] = "_";
            }
        }
        m_matrix[0][0] = "♜";
        m_matrix[0][7] = "♜";
        m_matrix[7][0] = "♜";
        m_matrix[7][7] = "♜";
        m_matrix[0][2] = "♝";
        m_matrix[0][5] = "♝";
        m_matrix[7][2] = "♝";
        m_matrix[7][5] = "♝";
        m_matrix[0][1] = "♞";
        m_matrix[0][6] = "♞";
        m_matrix[7][1] = "♞";
        m_matrix[7][6] = "♞";
        m_matrix[0][4] = "♛";
        m_matrix[7][4] = "♛";
        m_matrix[0][3] = "♚";
        m_matrix[7][3] = "♚";
    }
    else
    {
        std::cout << "I cant do it\n";
    }
}
std::ostream& operator<<(std::ostream& os,const Chess& c)
{
    for(int i = 0; i < c.m_rows; i++)
    {
        for(int j = 0; j < c.m_cols; j++)
        {
            os << c.m_matrix[i][j] << " ";
        }
        os << std::endl;
    }
    os << std::endl;
    return os;
}