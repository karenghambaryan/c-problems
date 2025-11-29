#include <iostream>
#include "Animals.h"

int main()
{
    Monkey m(50,"herbivore", "wild", 2, 3, "Gorilla");
    Dog d(14,"carnivore", "pet", 4, 5, "Husky", "White");
    Tiger t(35,"carnivore", "wild", 4, 6, "Jungle");

    std::cout << m << "\n\n";
    std::cout << d << "\n\n";
    std::cout << t << "\n\n";
    std::cout << (d == m) << "\n";
    std::cout << (d < m) << "\n";
    std::cout << (m > d) << "\n";

    m.Sound();
    d.Sound();
    t.Sound();

    return 0;
}