#include "Animals.h"
#include <iostream>
#include <string>
#include <fstream>

std::ostream& operator<< (std::ostream& out, const Land_animals& a)
{
    out << "I am Land animal" << "\n";
    out << "My name is: " << a.getName() << "\n";
    out << "I live in: " << a.getLocation() << "\n";
    out << "I can live: " << a.getYear() << " years\n";
    out << "I have: " << a.m_lungs_count << " lungs\n";

    return out;
}

std::ostream& operator<< (std::ostream& out, const Aquatic_animals& a)
{
    out << "I am Aquatic animal" << "\n";
    out << "My name is: " << a.getName() << "\n";
    out << "I live in: " << a.getLocation() << "\n";
    out << "I can live: " << a.getYear() << " years\n";
    out << "I have: " << a.m_gills_count << " gills\n";

    return out;
}

std::ostream& operator<< (std::ostream& out, const Amphibian& a)
{
    out << "I am Amphibian" << "\n";
    out << "My name is: " << a.getName() << "\n";
    out << "I live in: " << a.getLocation() << "\n";
    out << "I can live: " << a.getYear() << " years\n";
    out << "I have: " << a.getLungs() << " lungs\n";
    out << "I have: " << a.getGills() << " gills\n";

    return out;
}