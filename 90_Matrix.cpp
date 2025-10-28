//50: Matrix class-ի վրա ավելացնել մեթոդ որը որ շրջում է մեր մատրցը 90 աստիճանով
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
        for(int i = 0; i < m_rows; i++)
        {
            m_matrix[i] = new int[col];
        }
        std::cout << "Constructor" << std::endl;
    }
    ~Matrix()
    {
        std::cout << "Destructor" << std::endl;
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
    void Print()
    {
        
        for (int i = 0; i < m_rows; i++)
        {
            for (int j = 0; j < m_col; j++)
            {
                std::cout << m_matrix[i][j] << " " ;
            }
            std::cout << std::endl;
        }
        
    }
    void Reverse()
    {
        int* arr = new int[m_rows * m_col];
        int k = 0;
        for(int i = 0; i < m_rows; i++ )
        {
            for(int j = 0;j < m_col; j++)
            {
                arr[k] = m_matrix[i][j];
                k++;
            }
        }
        for(int i = 0; i < m_rows; i++ )
        {
            for(int j = 0;j < m_col; j++)
            {
                m_matrix[i][j] = arr[--k];
            }
        }
        delete[] arr;
    }

};



int main()
{
    Matrix m1(4,4);
    m1.Init();
    m1.Print();
    std::cout << std::endl;
    std::cout << std::endl;
    m1.Reverse();
    m1.Print();




    return 0;
}