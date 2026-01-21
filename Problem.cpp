//91: ֆունկցիան ստանում է std::list և պետք է ջնջել նրա այն անդամները որոնք որ կենտ են
#include <iostream>
#include<list>
template <typename T>
void Remove_odds(std::list<T>& l){
    for(auto it = l.begin(); it != l.end(); )
    {
        if((*it) % 2 != 0)
        {
            it = l.erase(it);
        }
        else
        {
            ++it;
        }
    }

}

int main()
{
    std::list<int> l{1, 2, 3, 4, 5, 6};

    Remove_odds(l);

    for (int x : l)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}