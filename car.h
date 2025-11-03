#ifndef CAR_H
#define CAR_H

class Car
{
    private:
        std::string m_name;
        std::string m_make;
        std::string m_color;
        int m_year;
    public:
        Car();
        ~Car();
        Car(std::string name,std::string make,std::string color,int year);
        Car(const Car& other);
        Car& operator=(const Car& other);
        friend std::ostream& operator<<(std::ostream& out, const Car& car);

};
#endif