#include <iostream>
#include <vector>

template<typename T>
T x_16(T& x)
{
    return x*16;
}
template <typename It,typename func>
func for_each(It begin, It end, func f)
{
    for(;begin != end; begin++)
    {
        f(*begin);
    }
    return f;
}


int main()
{
    std::vector V1 = {1, 2, 3, 4, 5, 6, 7};
    for_each(V1.begin() + 2,V1.end(), [](int& x)
    {
        x = x_16(x);
    }

    );

    for(auto it : V1)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    return 0;
}