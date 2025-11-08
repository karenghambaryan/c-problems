#include <iostream>
#include "matrix.h"
#include "logger.h"
#include "reader.h"

int main()
{
    Matrix m(2,3);
    m[0][0] = Car("BMW", "E60", "Black",2012);
    m[0][1] = Car("Toyota", "Camry", "Red",2014);
    m[0][2] = Car("Ferrari", "A50", "Blue",2020);
    m[1][0] = Car("Lada", "Niva", "White",2020);
    m[1][1] = Car("Lexus", "GX", "Blue",2020);
    m[1][2] = Car("Tesla", "X", "Gray",2024);

    std::cout << "Matrix:\n" << m << std::endl;

    Logger log("cars.txt");
    if (log.isOpen())
    {
        log.log("---- Matrix of Cars ----");
        for (int i = 0; i < 2; i++)
        {
            std::string row;
            for (int j = 0; j < 3; j++)
                row += m[i][j].toString() + " | ";
            log.log(row);
        }
    }
    return 0;
}