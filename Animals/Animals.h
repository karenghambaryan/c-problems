#ifndef ANIMALS_H
#define ANIMALS_H

#include <iostream>
#include <string>

class Animals
{
protected:
    std::string m_EatingType;
    std::string m_Type;
    int m_LegCount;
    int m_Age;

public:
    Animals(std::string EatingType, std::string Type, int LegCount, int Age);

    bool IsCarnivore() const;
    bool IsPet() const;
    bool HasOwner() const;
};

class Dog : public Animals
{
protected:
    std::string m_DogType;
    std::string m_Color;

public:
    Dog(std::string EatingType, std::string Type, int LegCount, int Age,
        std::string DogType, std::string Color);

    void Sound();

    friend std::ostream& operator<<(std::ostream& os, const Dog& other);
};

class Tiger : public Animals
{
private:
    std::string m_Location;

public:
    Tiger(std::string EatingType, std::string Type, int LegCount, int Age,
        std::string Location);
        
    void Sound();

    friend std::ostream& operator<<(std::ostream& os, const Tiger& other);
};

class Monkey : public Animals
{
private:
    std::string m_MonkeyType;

public:
    Monkey(std::string EatingType, std::string Type, int LegCount, int Age,
        std::string MonkeyType);

    void Sound();

    friend std::ostream& operator<<(std::ostream& os, const Monkey& other);
};

class Donkey : public Animals
{
private:
    int m_DonkeyLoad;

public:
    Donkey(std::string EatingType, std::string Type, int LegCount, int Age,
        int DonkeyLoad);

    void Sound();

    friend std::ostream& operator<<(std::ostream& os, const Donkey& other);
};

class Horse : public Animals
{
private:
    int m_HorseSpeed;

public:
    Horse(std::string EatingType, std::string Type, int LegCount, int Age,
        int HorseSpeed);

    void Sound();

    friend std::ostream& operator<<(std::ostream& os, const Horse& other);
};

class Puppy : public Dog
{
private:
    std::string m_PuppyGender;

public:
    Puppy(std::string EatingType, std::string Type, int LegCount, int Age,
        std::string DogType, std::string Color, std::string PuppyGender);

        void Sound();

    friend std::ostream& operator<<(std::ostream& os, const Puppy& other);
};

#endif 
