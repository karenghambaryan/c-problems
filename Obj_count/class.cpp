#include <iostream>
#include "class.h"

int A::count = 0;

A::A()
{
    count ++;
    std::cout << "default " << __func__ << "\n";
}
A::A(int x , int y)
{
    a_x = x;
    a_y = y;
    count ++;
    std::cout << "param " << __func__ << "\n";
}
A::A(const A& other)
{
    a_x = other.a_x;
    a_y = other.a_y;
    count ++;
    std::cout << "copy " << __func__ << "\n";
}
A& A::operator=(const A& other)
{
    if(this != &other)
    {
    a_x = other.a_x;
    a_y = other.a_y;
    }
    std::cout << __func__ << "\n";
    return *this;
}
A::~A()
{
    std::cout <<__func__ << "\n";
}

int A::GetCount()
{
    return count;
}
