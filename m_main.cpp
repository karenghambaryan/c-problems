#include "matrix.h"
#include <iostream>

int main()
{
    Matrix m1(3,5);
    m1.Init();
    Matrix m2(3,5);
    m2.Init();
    Matrix m3(5,3);
    m3.Init();
    std::cout << m1;
    m1.Reverse();
    std::cout << m1;
    std::cout << m1.Max() << std::endl;
    std::cout << m1 + m2;
    std::cout << m1 - m2;
    std::cout << m3 * 7;
    std::cout << m1 * m3;

    return 0;
}