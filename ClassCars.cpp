//44: Աբստրակցիայի ենթարկել Car class-ը գրել նվազագույն 5 մեթող և պահել նվազագույնը 5 member
#include <iostream>
#include <string>
class Car{
  private:
    int m_year;
    std::string m_name;
    std::string m_make;
    int m_speed;
    std::string m_color;
  public:
    Car()
    {
        m_year = 0;
        m_name = "Unknown";
        m_make = "Unknown";
        m_speed = 0;
        m_color = "Unknown";
    }
    Car(int year,int speed, const std::string& name, const std::string& make,const std::string& color){
        m_year = year;
        m_name = name;
        m_make = make;
        m_speed = speed;
        m_color = color;
    }
    ~Car()
    {
        std::cout << "Destructor" << std::endl;
    }
    void Print()
    {
        std::cout << "name: " << m_name << std::endl;
        std::cout << "make: " << m_make << std::endl;
        std::cout << "year: " << m_year << std::endl;
        std::cout << "speed: " << m_speed << " km/h" << std::endl;
        std::cout << "color: " << m_color << std::endl;

    }
    int Distance(int time)
    {
        return time * m_speed;    
    }
    double Time(double distance)
    {
        return distance / m_speed;    
    }
    double A_B(double S_1, double S_2)
    {
        if(S_1 < S_2)
        {
            return (S_2 - S_1) / m_speed;    
        }
        return (S_1 - S_2) / m_speed;
    }
    void ChangeSpeed(int speed)
    {
      m_speed = speed;
    }
    void PrintSpeed()
    {
        std::cout << "Its Speed after repair:  "<< m_speed << " km/h" << std::endl;
    }
};

int main()
{
    const int n = 3;
    Car* Cars = new Car[n];
    Cars[0] = Car(2010, 100, "BMW", "E60", "Black");
    Cars[1] = Car(2020, 120, "Toyota", "Camry", "Red");
    Cars[2] = Car(2018, 90, "Ford", "Focus", "Blue");
    for(int i = 0; i < n; i++){
         Cars[i].Print();
        std::cout << std::endl;
        std::cout << "Distance: " << Cars[i].Distance(10) << " km " << std::endl;
        std::cout << "Time: " << Cars[i].Time(10) << " hour" << std::endl;
        std::cout << "Time from A to B: " << Cars[i].A_B(10,500) << " hour" << std::endl;
        Cars[i].ChangeSpeed(100 + 10 * i + 1);
        Cars[i].PrintSpeed() ;
        std::cout << "Distance: " << Cars[i].Distance(10) << " km " << std::endl;
        std::cout << "Time: " << Cars[i].Time(10) << " hour" << std::endl;
        std::cout << "Time from A to B: " << Cars[i].A_B(10,500) << " hour" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
      }
    delete[] Cars;
    return 0;
}