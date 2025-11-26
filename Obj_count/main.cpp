#include <iostream>
#include "class.h"



int main()
{
    A a;
    A a_1(2,598);
    A a_2 = a;
    A a_3;
    a_3 = a_2;
    A a_4;
    A a_5(2,598);
    A a_6 = a;
    A a_7;
    a_7 = a_2;
    std::cout << "Its count of objects  " << A::GetCount() << "\n";
    return 0;
}