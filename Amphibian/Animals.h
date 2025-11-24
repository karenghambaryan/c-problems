#ifndef ANIMALS_H
#define ANIMALS_H
#include <iostream>
class Animals
{
    protected:
        int m_year;
        std::string m_location;
        std::string m_name;
    public:
        Animals() = default;
        Animals(int year, std::string location,std::string name) : m_year(year),m_location(location),m_name(name){}
        virtual ~Animals() = default;
    public:
        int getYear() const { return m_year; }
        std::string getLocation() const { return m_location; }
        std::string getName() const { return m_name; }
};

class Aquatic_animals : virtual public Animals
{
    protected:
        int m_gills_count;
    public:
        Aquatic_animals() = default;
        Aquatic_animals(int year,std::string location,std::string name,int gills_count) : Animals(year,location,name),m_gills_count(gills_count){}
        ~Aquatic_animals() override = default;
    public:
        friend std::ostream& operator<< (std::ostream& out,const Aquatic_animals& a);
    public:
    int getGills() const { return m_gills_count; }

};

class Land_animals : virtual public Animals
{
    protected:
        int m_lungs_count;
    public:
        Land_animals() = default;
        Land_animals(int year,std::string location,std::string name,int lungs_count) : Animals(year,location,name),m_lungs_count(lungs_count){}
        ~Land_animals() override = default;
    public:
        friend std::ostream& operator<< (std::ostream& out,const Land_animals& a);
    public:
    int getLungs() const { return m_lungs_count; }


};

class Amphibian : public Aquatic_animals,public Land_animals
{
    public:
        Amphibian() = default;
        Amphibian(int year,std::string location,std::string name,int gills_count, int lungs_count) : Animals(year,location,name),Land_animals(year, location,name, lungs_count),Aquatic_animals(year, location,name, gills_count){}
        ~Amphibian() override = default;
    public:
        friend std::ostream& operator<< (std::ostream& out,const Amphibian& a);
};


#endif