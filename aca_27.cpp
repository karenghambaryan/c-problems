//27։ Գրել ծրագիրը որը որը վերադաձնում է դինամիկ զանգվածներով ստեղծված մատրիցա։

#include <iostream>


int* inputArr(int n)
{
    int* arr = new int[n];
        for(int i = 0;i < n; i++)
        {
            arr[i] = i * 11;
        }
        return arr;
 }
 int** inputMatrix(int* arr1,int* arr2,int n)
 {
        int** matrix = new int* [n];
        for(int i = 0; i < n; i++)
        {
            matrix[i] = new int[n];
        }
            for (int  i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                     matrix[i][j] = (arr1[i] + arr2[j]) % 10;
                }
                
            }
     return matrix;  
 }
 void printMatrix(int** matrix, int n , int m)
 {
 for (int  i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                     std::cout << matrix[i][j] << " ";
                }
                std::cout << std::endl;
            }
 }
 int main()
 {
  int* arr1 = inputArr(9);
  int* arr2 = inputArr(9);
  int** matrix = inputMatrix(arr1,arr2,9);
  printMatrix(matrix,9,9);
  delete[] arr1;
  delete[] arr2;
  for (int i = 0; i < 9; i++)
  {
    delete[] matrix[i];
  }
  delete[] matrix;
  return 0;
  
 }