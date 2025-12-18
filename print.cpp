//72: Գրել print function օգտագործել variadic templates:
#include <iostream>
#include <string>
void print()
{
    std::cout << "End" << "\n";
}

template <typename T,typename... x_s>

void print(T x,x_s... y)
{
    std::cout << x << "\n";
    print(y...);
}



int main()
{

    print(7,5,9,std::string("isdfbhsd"),9.5);
    return 0;
}