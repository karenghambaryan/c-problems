#include <iostream>
#include "Animals.h"



int main() {
    Aquatic_animals fish(20, "Pacific Ocean", "Shark", 5);
    Land_animals lion(25, "Africa", "Lion", 2);
    Amphibian frog(20, "Amazon", "Frog", 4, 2);

    std::cout << fish << std::endl;
    std::cout << lion << std::endl;
    std::cout << frog << std::endl;

    return 0;
}