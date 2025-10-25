#include <iostream>

class Matrix
{
    private:
      int m_rows;
      int m_col;
      int** m_matrix;   
    public:
        Matrix(int rows, int col)
        {
            m_rows = rows;
            m_col = col;
            m_matrix = new int*[rows];
            for (int i = 0; i < rows; i++)
            {
                m_matrix[i] = new int[col];
            }
          std::cout << "Constructor" << std::endl;

        }
        Matrix(const Matrix &other)
        {
            m_rows = other.m_rows;
            m_col = other.m_col;
            m_matrix = other.m_matrix;
            m_matrix[0][0] = 455;
            std::cout << "Copy Constructor" << std::endl;
        }
        Matrix& operator=(const Matrix &other)
        {
            if(this != &other)
            {
            m_rows = other.m_rows;
            m_col = other.m_col + 2;
            m_matrix = other.m_matrix;
            for (int i = 0; i < m_rows; i++)
            {
                for (int j = other.m_col; j < m_col; j++)
                {
                    m_matrix[i][j] = 44;
                }
                
            }
            
            }
            std::cout << "operator assigment" << std::endl;
            return *this;
        }
        ~Matrix()
        {
            std::cout << "Destructor" << std::endl;
        }
       void Print()
       {
           for (int i = 0; i < m_rows; i++)
           {
                 for (int j = 0; j < m_col; j++)
                {
                std::cout << m_matrix[i][j] << " ";
                }
           std::cout << std::endl;
            }
        
        }
        void Init()
        {
            for (int i = 0; i < m_rows; i++)
            {
                for (int j = 0; j < m_col; j++)
                {
                    m_matrix[i][j] = (i + j) % 10;
                }
                
            }
            
        }
};
int main()
{
    Matrix matrix(3,5);
    matrix.Init();
    matrix.Print();
    Matrix m1 = matrix;
    m1.Print();
    Matrix m2(4,4);
    m2.Init();
    m1 = m2;
    m2.Print();
    m1.Print();


    return 0;
}