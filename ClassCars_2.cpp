//47: Մեր կողմից գրված car class-ի համար վերասահմանել copy constructor և operatoe assgiment
#include <iostream>
#include <string>
class Car
{
  private:
    std::string m_name;
    std::string m_make;
    int m_year;
    std::string m_color;
  public:
    Car(const std::string& name,const std::string& make,const std::string& color,int year)
    {
        m_color = color;
        m_year = year;
        m_make = make;
        m_name = name;
        std::cout << "Constructor" << std::endl;
    } 
    Car(const Car &other)
    {
        m_name = other.m_name;
        m_make = other.m_make;
        m_color = other.m_color;
        m_year = other.m_year;
        std::cout << "copy Constructor" << std::endl;

    }
    Car& operator=(const Car &other)
    {
        if(this != &other)
        {
        m_name = other.m_name;
        m_make = other.m_make;
        m_color = other.m_color;
        m_year = other.m_year;
        std::cout << "operator assgiment" << std::endl;
        }
        return *this;
    }
    ~Car()
    {
        std::cout << "Destructor" << std::endl;    
    }
    void Print()
    {
        std::cout << "name:" << m_name << ", make:" << m_make << ", color:" << m_color <<", year:" << m_year << ":" << std::endl;
    }
  
};

int main()
{
    Car BMW("Bmw","E60","white",2015);
    BMW.Print();
    Car Opel = BMW;
    Opel.Print();
    Car Merc("Mercedes","AMG","blue",2023);
    Merc.Print();
    Merc = Opel;
    Merc.Print();
    Car BMW1("Bmw","E60","white",2015);
    BMW1 = BMW;
    BMW1.Print();
    
    
    return 0;
}