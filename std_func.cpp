#include <iostream>
#include <functional>

template<typename T>
std::function<T(T)> func(T x)
{
    return [x](T y)
    {
        return x * y;
    };
}

int main()
{
    std::cout << func<int>(7)(9) << std::endl;
    std::cout << func<double>(4.5)(2.0) << std::endl;

    return 0;
}