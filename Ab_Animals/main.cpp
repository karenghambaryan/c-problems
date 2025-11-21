#include <iostream>
#include "Animals.h"

int main()
{
    Monkey m("herbivore", "wild", 2, 3, "Gorilla");
    Dog d("carnivore", "pet", 4, 5, "Husky", "White");
    Tiger t("carnivore", "wild", 4, 6, "Jungle");

    std::cout << m << "\n\n";
    std::cout << d << "\n\n";
    std::cout << t << "\n\n";

    m.Sound();
    d.Sound();
    t.Sound();

    return 0;
}