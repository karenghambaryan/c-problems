#include "car.h"
#include "engine.h"
#include <iostream>


Car::Car(std::string name, std::string make, std::string color, int year, Engine engine): m_name(name),m_make(make),m_color(color),m_year(year),m_engine(engine)
{
}


Bmw::Bmw(std::string name, std::string make, std::string color, int year, int speed, Engine engine): Car(name, make, color, year, engine),m_speed(speed)
{
}

std::ostream& operator<<(std::ostream& out, const Bmw& b)
{
    out << "Name: " << b.m_name << "\n";
    out << "Make: " << b.m_make << "\n";
    out << "Color: " << b.m_color << "\n";
    out << "Year: " << b.m_year << "\n";
    out << "Speed: " << b.m_speed << "\n";
    out << "Engine: " << b.m_engine << "\n";
    return out;
}


Porshe::Porshe(std::string name, std::string make, std::string color, int year, int HorsePower, Engine engine): Car(name, make, color, year, engine),m_HorsePower(HorsePower)
{
}

std::ostream& operator<<(std::ostream& out, const Porshe& p)
{
    out << "Name: " << p.m_name << "\n";
    out << "Make: " << p.m_make << "\n";
    out << "Color: " << p.m_color << "\n";
    out << "Year: " << p.m_year << "\n";
    out << "HorsePower: " << p.m_HorsePower << "\n";
    out << "Engine: " << p.m_engine << "\n";
    return out;
}



Niva::Niva(std::string name, std::string make, std::string color, int year, int Vehicle_count, Engine engine): Car(name, make, color, year, engine),m_Vehicle_count(Vehicle_count)
{
}

std::ostream& operator<<(std::ostream& out, const Niva& n)
{
    out << "Name: " << n.m_name << "\n";
    out << "Make: " << n.m_make << "\n";
    out << "Color: " << n.m_color << "\n";
    out << "Year: " << n.m_year << "\n";
    out << "Vehicle Count: " << n.m_Vehicle_count << "\n";
    out << "Engine: " << n.m_engine << "\n";
    return out;
}
