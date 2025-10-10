#include <iostream>
#include <cstdlib>

void InitArr(int* arr, int n){
    for(int i = 0; i < n; i++){
        arr[i] = (i * 3) + 4;
    }
}
void PrintArr(int* arr,int n){
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
}
void* operator new(size_t m){
    std::cout << "It's my memory " << std::endl;
   return malloc(m);

}
void* operator new[](size_t m){
    std::cout << "It's my memory with [] " << std::endl;
   return malloc(m);

}
void operator delete(void* ptr){
    std::cout << "There isn't memory" << std::endl;
  free(ptr);

}
void operator delete[](void* ptr){
    std::cout << "There isn't memory with []" << std::endl;
    free(ptr);

}

int main() {
 int* m = new int(8);
 std::cout << *m << std::endl;
 delete m;
 int n;
 std::cout << "Enter the number" << std::endl;
 std::cin >> n;
 int* arr = new int[n];
 InitArr(arr, n);
 PrintArr(arr, n);
 delete[] arr;

    return 0;
}