#include <iostream>
#include "animals.h"

int main()
{
    Dog dog("carnivore", "pet", 4, 5, "Bulldog", "Brown");
    Tiger tiger("carnivore", "wild", 4, 7, "Jungle");
    Monkey monkey("herbivore", "wild", 2, 3, "Capuchin");
    Donkey donkey("herbivore", "pet", 4, 10, 100);
    Horse horse("herbivore", "pet", 4, 8, 60);
    Puppy puppy("carnivore", "pet", 4, 1, "Bulldog", "Light Brown", "Male");

    std::cout << dog << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << tiger << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << monkey << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << donkey << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << horse << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << puppy << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    dog.Sound();
    tiger.Sound();
    monkey.Sound();
    donkey.Sound();
    horse.Sound();
    puppy.Sound();

    return 0;
}