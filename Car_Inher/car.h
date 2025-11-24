#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include <iostream>
class Car
{
    protected:
        Engine m_engine;
        std::string m_name;
        std::string m_make;
        int m_year;
        std::string m_color;
    public:
        Car() = default;
        virtual ~Car() = default;
        Car(std::string name,std::string make,std::string color,int year,Engine engine);


};

class Bmw : public Car
{
    private:
        int m_speed;
    public:
        Bmw() = default;
        ~Bmw() override = default;
        Bmw(std::string name,std::string make,std::string color,int year,int speed,Engine engine);
    public:
        friend std::ostream& operator<< (std::ostream& out,const Bmw& b);
};

class Porshe : public Car
{
    private:
        int m_HorsePower;
    public:
        Porshe() = default;
        ~Porshe() override = default;
        Porshe(std::string name,std::string make,std::string color,int year,int HorsePower,Engine engine);
    public:
        friend std::ostream& operator<< (std::ostream& out,const Porshe& p);
};

class Niva : public Car
{
    private:
        int m_Vehicle_count;
    public:
        Niva() = default;
        ~Niva() override = default;
        Niva(std::string name,std::string make,std::string color,int year,int Vehicle_count,Engine engine);
    public:
        friend std::ostream& operator<< (std::ostream& out,const Niva& n);
};






#endif