#include <iostream>
class Matrix
{
    private:
    int m_col;
    int m_rows;
    int** m_matrix;
    public:
    Matrix()
    {
        m_col = 0;
        m_rows = 0;
        m_matrix = nullptr;
        std::cout << "Constructor:" << std::endl;
    }
    ~Matrix()
    {
        if(m_matrix != nullptr)
        {
            for(int i = 0; i < m_rows;i++)
            {
                delete[] m_matrix[i];
            }
            delete[] m_matrix;
            m_matrix = nullptr;
        }
        std::cout << "Destructor:" << std::endl;
    }
    Matrix(int col , int rows)
    {
        m_rows = rows;
        m_col = col;
        m_matrix = new int*[m_rows];
        for(int i = 0; i < m_rows; i++)
        {
            m_matrix[i] = new int[col];
        }
        std::cout << "Parametrized Constructor:" << std::endl;
    }
    Matrix(const Matrix& other)
    {
        m_rows = other.m_rows;
        m_col = other.m_col;
        m_matrix = new int*[m_rows];
        for (int i = 0; i < m_rows; i++)
        {
            m_matrix[i] = new int[m_col];
        }
        for (int i = 0; i < m_rows; i++)
        {
            for (int j = 0; j < m_col; j++)
            {
                m_matrix[i][j] = other.m_matrix[i][j];
            }
            
        }
        
        
        std::cout << "Copy Constructor:" << std::endl;
    }
    Matrix& operator=(const Matrix& other)
    {
        if(this != &other)
        {
            for (int i = 0; i < m_rows; i++)
            {
                delete[] m_matrix[i];
            }
            delete[] m_matrix;
            m_rows = other.m_rows;
            m_col = other.m_col;
            m_matrix = new int*[m_rows];
            for (int i = 0; i < m_rows; i++)
            {
                m_matrix[i] = new int[m_col];
            }
            for (int i = 0; i < m_rows; i++)
            {
                for (int j = 0; j < m_col; j++)
                {
                    m_matrix[i][j] = other.m_matrix[i][j];
                }
                
            }
            
        }
        std::cout << "Operator assigmant:" << std::endl;
        return *this;
    }
    Matrix& operator++(int)
    {
        for(int i = 0;i < m_rows; i++)
        {
            for(int j = 0;j < m_col; j++)
            {
                this->m_matrix[i][j]++;
            }
        }
        return *this;
    }
    Matrix operator*(int k)
    {
        Matrix result(m_col, m_rows);
        for(int i = 0;i < m_rows; i++)
        {
            for(int j = 0;j < m_col; j++)
            {
                result.m_matrix[i][j] = m_matrix[i][j] * k;
            }
        }
        return result;
    }
    void Init()
    {
        for(int i = 0;i < m_rows; i++)
        {
            for(int j = 0;j < m_col; j++)
            {
                m_matrix[i][j] = (i + j) % 10;
            }
        }
    }
    void Print()
    {
        for(int i = 0;i < m_rows; i++)
        {
            for(int j = 0;j < m_col; j++)
            {
                std::cout << m_matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};
int main() {
    Matrix m1(4,4);
    m1.Init();
    m1.Print();
    std::cout << std::endl;
    
    m1++;
    m1.Print();
    std::cout << std::endl;
    Matrix m2 = m1*19;
    Matrix m3;
    m3 = m2*4;
    std::cout << std::endl;
    m2.Print();
    std::cout << std::endl;
    m3.Print();
    return 0;
}