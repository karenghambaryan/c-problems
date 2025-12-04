#include "matrix.h"
#include <iostream>


int main() 
{


matrix<int> m1(3, 3);
m1.init(5);
std::cout << m1 << "\n";
matrix<double> m2(2, 2);
m2.init(3.14);
std::cout << m2 << "\n";

matrix<std::string> m3(2,78 );
m3.init("Hi");
std::cout << m3 << "\n";





    return 0;
}