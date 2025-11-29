#include <iostream>
#include <string>
#include "Animals.h"

Animals::Animals(int Weight,std::string EatingType,std::string Type,int LegCount,int Age)
{
    m_Weight = Weight;
    m_EatingType = EatingType;
    m_Type = Type;
    m_LegCount = LegCount;
    m_Age = Age;
}
bool Animals::IsCarnivore() const
{
    if(m_EatingType == "carnivore")
    {
        return true;
    }
    return false;
}
bool Animals::IsPet() const
{
    if(m_Type == "pet")
    {
        return true;
    }
    return false;
}
bool Animals::HasOwner() const
{
    if(m_Type == "pet")
    {
        return true;
    }
    return false;
}
bool Animals::operator< (const Animals& other) const
{
    return this->m_Weight < other.m_Weight;
}
bool Animals::operator== (const Animals& other) const
{
    return this->m_Weight == other.m_Weight;
}
bool Animals::operator> (const Animals& other) const
{
    return this->m_Weight > other.m_Weight;
}


Dog::Dog(int Weight,std::string EatingType,std::string Type,int LegCount,int Age,std::string DogType,std::string Color) : Animals(Weight,EatingType, Type, LegCount, Age)
{
    m_DogType = DogType;
    m_Color = Color;
}
void Dog::Sound() const 
{
    std::cout << "Hafffffffffff" << std::endl;
}
std::ostream& operator<<(std::ostream& os,const Dog& other)
{
    os << "I'm Dog:" << std::endl;
    os << "I'm " << other.m_DogType << ":" << std::endl;
    os << "I'm " << other.m_Age << " years old:" << std::endl;
    os << "My Color is " << other.m_Color << ":" << std::endl;
    os << "I have " << other.m_LegCount << " Legs:" << std::endl;
    if(other.IsCarnivore())
    {
        os << "I'm carnivore  " ;
    }
    else
    {
        os << "I'm herbivore  ";
    }
    if(other.IsPet())
    {
        os << "I'm Pet  " ;
    }
    else
    {
        os << "I'm Wild  " ;
    }
    if(other.HasOwner())
    {
        os << "I have Owner  " ;
    }
    else
    {
        os << "I haven't Owner ";
    }
    return os;
}
Tiger::Tiger(int Weight,std::string EatingType,std::string Type,int LegCount,int Age,std::string Location) : Animals(Weight,EatingType, Type, LegCount, Age)
{
    m_Location = Location;
}
void Tiger::Sound() const 
{
    std::cout << "Brrrrrr" << std::endl;
}
std::ostream& operator<<(std::ostream& os,const Tiger& other)
{
    os << "I'm Tiger:" << std::endl;
    os << "I'm " << other.m_Age << " years old:" << std::endl;
    os << "I live in " << other.m_Location <<":" << std::endl; 
    os << "I have " << other.m_LegCount << " Legs:" << std::endl;
    if(other.IsCarnivore())
    {
        os << "I'm carnivore  " ;
    }
    else
    {
        os << "I'm herbivore  ";
    }
    if(other.IsPet())
    {
        os << "I'm Pet  " ;
    }
    else
    {
        os << "I'm Wild  " ;
    }
    if(other.HasOwner())
    {
        os << "I have Owner  " ;
    }
    else
    {
        os << "I haven't Owner ";
    }
    return os;
}



Monkey::Monkey(int Weight,std::string EatingType,std::string Type,int LegCount,int Age,std::string MonkeyType) : Animals(Weight,EatingType, Type, LegCount, Age)
{
    m_MonkeyType = MonkeyType;
}
void Monkey::Sound() const 
{
    std::cout << "Auauauaiua" << std::endl;
}
std::ostream& operator<<(std::ostream& os,const Monkey& other)
{
    os << "I'm Monkey:" << std::endl;
    os << "I'm " << other.m_Age << " years old:" << std::endl;
    os << "My type is " << other.m_MonkeyType <<":" << std::endl; 
    os << "I have " << other.m_LegCount << " Legs:" << std::endl;
    
    if(other.IsCarnivore())
    {
        os << "I'm carnivore  " ;
    }
    else
    {
        os << "I'm herbivore  ";
    }
    if(other.IsPet())
    {
        os << "I'm Pet  " ;
    }
    else
    {
        os << "I'm Wild  " ;
    }
    if(other.HasOwner())
    {
        os << "I have Owner  " ;
    }
    else
    {
        os << "I haven't Owner ";
    }
    return os;
}