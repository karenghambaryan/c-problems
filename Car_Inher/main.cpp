//60: Մեր car class-ից ժառանգել և ավելացնել ևս 3 class ինչպես նաև օգտագործել engine class-ը
#include <iostream>
#include "car.h"

int main()
{
    Engine Porshe_engine(4, 2000, "Petrol");
    Engine Niva_engine(6, 3200, "Diesel");
    Engine Bmw_engine(8, 4500, "Petrol");

    Bmw Bmw("M3", "BMW", "Black", 2020, 280, Bmw_engine);
    Porshe Porshe("911 Turbo", "Porshe", "Red", 2022, 650, Porshe_engine);
    Niva Niva("Niva 4x4", "Lada", "White", 2018, 4, Niva_engine);

    std::cout << Bmw << "\n\n";
    std::cout << Porshe << "\n\n";
    std::cout << Niva << "\n";

    return 0;
}