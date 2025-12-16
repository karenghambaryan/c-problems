#include <iostream>

template<int N>

class Fib
{
    public:
    static const int fib = Fib<N-1>::fib + Fib<N-2>::fib;
};

template<>

class Fib<1>
{
    public:
    static const int fib = 1;
};

template<>

class Fib<2>
{
    public:
    static const int fib = 1;
};

int main()
{
    int x = Fib<7>::fib;
    std::cout << x << "\n" ;
    return 0;
}