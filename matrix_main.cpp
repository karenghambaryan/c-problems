#include "matrix.h"
#include "car.h"
#include <iostream>

int main()
{
    Matrix m1(2,3);
    m1[0][0] = Car("BMW", "E60", "Black",2012);
    m1[0][1] = Car("Toyota", "Camry", "Red",2014);
    m1[0][2] = Car("Ford", "Focus", "Blue",2020);
    m1[1][0] = Car("Lada", "Niva", "white",2020);
    m1[1][1] = Car("Lexus", "Gx", "Blue",2020);
    m1[1][2] = Car("Tesla", "X", "gray",2024);
    
    std::cout << m1;


    return 0;
}