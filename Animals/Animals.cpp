#include <iostream>
#include <string>
#include "animals.h"

Animals::Animals(std::string EatingType,std::string Type,int LegCount,int Age)
{
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


Dog::Dog(std::string EatingType,std::string Type,int LegCount,int Age,std::string DogType,std::string Color) : Animals(EatingType, Type, LegCount, Age)
{
    m_DogType = DogType;
    m_Color = Color;
}
void Dog::Sound()
{
    std::cout << "Dg make sound" << std::endl;
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
Tiger::Tiger(std::string EatingType,std::string Type,int LegCount,int Age,std::string Location) : Animals(EatingType, Type, LegCount, Age)
{
    m_Location = Location;
}

void Tiger::Sound()
{
    std::cout << "Tiger mske sound" << std::endl;
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

void Monkey::Sound()
{
    std::cout << "Monkey make sound" << std::endl;
}

Monkey::Monkey(std::string EatingType,std::string Type,int LegCount,int Age,std::string MonkeyType) : Animals(EatingType, Type, LegCount, Age)
{
    m_MonkeyType = MonkeyType;
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


Donkey::Donkey(std::string EatingType,std::string Type,int LegCount,int Age,int DonkeyLoad) : Animals(EatingType, Type, LegCount, Age)
{
    m_DonkeyLoad = DonkeyLoad;
}
void Donkey::Sound()
{
    std::cout << "Donkey make sound" << std::endl;
}
std::ostream& operator<<(std::ostream& os,const Donkey& other)
{
    os << "I'm Donkey:" << std::endl;
    os << "I'm " << other.m_Age << " years old:" << std::endl;
    os << "I can carry " << other.m_DonkeyLoad <<" Load:" << std::endl; 
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


Horse::Horse(std::string EatingType,std::string Type,int LegCount,int Age,int HorseSpeed) : Animals(EatingType, Type, LegCount, Age)
{
    m_HorseSpeed = HorseSpeed;
}
void Horse::Sound()
{
    std::cout << "Horse make sound" << std::endl;
}
std::ostream& operator<<(std::ostream& os,const Horse& other)
{
    os << "I'm Horse:" << std::endl;
    os << "I'm " << other.m_Age << " years old:" << std::endl;
    os << "It's my Speed  " << other.m_HorseSpeed << std::endl; 
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


Puppy:: Puppy(std::string EatingType,std::string Type,int LegCount,int Age,std::string DogType,std::string Color,std::string PuppyGender) : Dog(EatingType, Type, LegCount, Age, DogType, Color)
{
    m_PuppyGender = PuppyGender;
}
void Puppy::Sound()
{
    std::cout << "Puppy can't make sound" << std::endl;
}
std::ostream& operator<<(std::ostream& os,const Puppy& other)
{
    os << "I'm Dog's Puppy:" << std::endl;
    os << "I'm " << other.m_DogType << ":" << std::endl;
    os << "I'm " << other.m_Age << " years old:" << std::endl;
    os << "My Color is " << other.m_Color << ":" << std::endl;
    os << "It's my Gender " << other.m_PuppyGender << ":" << std::endl; 
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