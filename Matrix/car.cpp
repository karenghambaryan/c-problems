#include <iostream>
#include <string>
#include "car.h"

Car::Car()
{
    m_color = " ";
    m_make = " ";
    m_name = " ";
    m_year = 0;
    //std::cout << "Constructor" << std::endl;
}
Car::Car(std::string name,std::string make,std::string color,int year)
{
    m_color = color;
    m_name = name;
    m_make = make;
    m_year = year;
    //std::cout << "Parametrized Constructor" << std::endl;
}
Car::~Car()
{
    //std::cout << "Destructor" << std::endl;
}
Car::Car(const Car& other)
{
    m_color = other.m_color;
    m_name = other.m_name;
    m_make = other.m_make;
    m_year = other.m_year;
    //std::cout << "Copy constructor" << std::endl;
}
Car& Car::operator=(const Car& other)
{
    if(this != &other)
    {
        m_color = other.m_color;
        m_name = other.m_name;
        m_make = other.m_make;
        m_year = other.m_year;
    }
    //std::cout << "Operator Assigmant" << std::endl;
    return *this;
}
std::ostream& operator<<(std::ostream& out,const Car& car)
{
    out << car.m_name << "  " << car.m_make << "  " << car.m_color << "  " << car.m_year << ":";
    return out;
}
std::string Car::toString()
{
    return m_name + " " + m_make + " " + m_color + " " + std::to_string(m_year);
}