//28։ Գրել ֆունկցիա որը ստանում է մուտքի 2 դինամկ զանգված և տպում է այն զանգվածը որի տարրերի գումարը ամենամեծն է: (edited) 

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
void printArr(int* arr,int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
 }
 int* MaxArr(int* arr1,int l1,int* arr2,int l2){
      int g1 = 0;
      int g2 = 0;
      for (int i = 0; i < l1; i++)
      {
        g1 += arr1[i];
      }
       for (int i = 0; i < l2; i++)
      {
        g2 += arr2[i];
      }
      if(g1 == g2)
      {
        return nullptr;
      }
      else if(g1 > g2)
      {
        return arr1;
      }
      else
      {
        return arr2;
      }
 }
 int main(){
    int* arr1 = inputArr(7);
    int* arr2 = inputArr(8);
    int* arr3 = MaxArr(arr1,7,arr2,8);
    printArr(arr3,8);

    delete[] arr1;
    delete[] arr2;
    return 0;

 }