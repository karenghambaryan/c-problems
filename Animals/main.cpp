#include <iostream>
#include "animals.h"
#include "Zoo.h"

int main()
{
    Zoo zoo(5);

    zoo.AddAnimal(new Dog("carnivore", "pet", 4, 5, "Bulldog", "Brown"));
    zoo.AddAnimal(new Tiger("carnivore", "wild", 4, 7, "Africa"));
    zoo.AddAnimal(new Monkey("herbivore", "wild", 2, 3, "Capuchin"));
    zoo.AddAnimal(new Donkey("herbivore", "pet", 4, 6, 120));
    zoo.AddAnimal(new Horse("herbivore", "pet", 4, 4, 75));
    std::cout << std::endl;
    zoo.Sounds();
    std::cout << std::endl;

    return 0;
}