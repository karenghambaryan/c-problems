//43: Ստեղծել մատրց class-ը
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
        
        for (int i = 0; i < m_rows; i++)
        {
            for (int j = 0; j < m_col; j++)
            {
                m_matrix[i][j] = (i + j) % 10;
            }
            
        }
   }
   ~Matrix()
   {
        std::cout << "Destructor" << std::endl;
        for(int i = 0;i < m_rows; i++)
        {
            delete[] m_matrix[i];
        }
        delete[] m_matrix;
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
   int Max()
   {
    int max = m_matrix[0][0];
     
        for (int i = 0; i < m_rows; i++)
        {
            for (int j = 0; j < m_col; j++)
            {
                if(max < m_matrix[i][j])
                {
                    max = m_matrix[i][j];
                }
            }
        }
        return max;
   }
   int SizeDio()
   {
      if(m_rows <= m_col)
    {
        return m_rows;
    }
        return m_col;
   }
   int* Dio(){
    int size = SizeDio();
    int* arr = new int[size] ;
    int k = 0;
        for (int i = 0; i < m_rows; i++)
        {
            for (int j = 0; j < m_col; j++)
            {
                if(i == j)
                {
                    arr[k] = m_matrix[i][j];
                    k++;
                }
            }
            
        }
        return arr;
   }
    void Reverse()
    {
        int* arr = new int[m_rows * m_col];
        int k = 0;
        for(int i = 0; i < m_rows; i++)
        {
            for(int j = 0; j < m_col; j++)
            {
                arr[k] = m_matrix[i][j];
                k++;
            }
        }
        k--;
        for(int i = 0;i < m_rows; i++)
        {
            for(int j = 0;j < m_col; j++)
            {
                m_matrix[i][j] = arr[k];
                k--;
            }
        }
       delete[] arr;
    } 
};

int main()
{
    Matrix matrix(5,5);
    matrix.Print();
    std::cout << "Maximum of matrix = " << matrix.Max() << std::endl;
    int* arr = matrix.Dio();
    std::cout << "Its Dioganal: ";
    for(int i = 0; i < matrix.SizeDio(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    matrix.Reverse();
    matrix.Print();
    delete[] arr;
    return 0;
}