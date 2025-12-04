#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

template <typename type>
class matrix
{
private:
    int m_rows;
    int m_cols;
    type** m_matrix;

public:
    matrix(): m_rows(0), m_cols(0), m_matrix(nullptr)
    {}

    matrix(int rows, int cols): m_rows(rows), m_cols(cols)
    {
        m_matrix = new type*[m_rows];
        for (int i = 0; i < m_rows; i++) 
        {
            m_matrix[i] = new type[m_cols]();
        }
    }

    matrix(const matrix& other): m_rows(other.m_rows), m_cols(other.m_cols)
    {
        m_matrix = new type*[m_rows];
        for (int i = 0; i < m_rows; i++) 
        {
            m_matrix[i] = new type[m_cols];
            for (int j = 0; j < m_cols; j++) 
            {
                m_matrix[i][j] = other.m_matrix[i][j];
            }
        }
    }

    matrix& operator=(const matrix& other)
    {
        if (this != &other)
        {
        if (m_matrix) 
        {
            for (int i = 0; i < m_rows; i++)
            {
                delete[] m_matrix[i];
            }
            delete[] m_matrix;
        }

        m_rows = other.m_rows;
        m_cols = other.m_cols;

        m_matrix = new type*[m_rows];
        for (int i = 0; i < m_rows; i++) 
        {
            m_matrix[i] = new type[m_cols];
            for (int j = 0; j < m_cols; j++) 
            {
                m_matrix[i][j] = other.m_matrix[i][j];
            }
        }
        }

        return *this;
    }

    matrix(matrix&& other): m_rows(other.m_rows),m_cols(other.m_cols),m_matrix(other.m_matrix)
    {
        other.m_rows = 0;
        other.m_cols = 0;
        other.m_matrix = nullptr;
    }

    matrix& operator=(matrix&& other)
    {
        if (this != &other)
        {
        if (m_matrix) 
        {
            for (int i = 0; i < m_rows; i++)
                delete[] m_matrix[i];
            delete[] m_matrix;
        }

        m_rows = other.m_rows;
        m_cols = other.m_cols;
        m_matrix = other.m_matrix;

        other.m_rows = 0;
        other.m_cols = 0;
        other.m_matrix = nullptr;

        return *this;
        }
    }

    ~matrix()
    {
        if (m_matrix) 
        {
            for (int i = 0; i < m_rows; i++)
            {
                delete[] m_matrix[i];
            }
            delete[] m_matrix;
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const matrix& m)
    {
        for (int i = 0; i < m.m_rows; i++) {
            for (int j = 0; j < m.m_cols; j++) {
                os << m.m_matrix[i][j] << " ";
            }
            os << "\n";
        }
        return os;
    }
    void init(const type& value)
    {
        for (int i = 0; i < m_rows; i++)
        {
            for (int j = 0; j < m_cols; j++)
            {
                m_matrix[i][j] = value;
            }
        }
    }

};

#endif
