//75: Գրել parking singltone class-ը

#include <iostream>


class Parking
{
    private:
        int cars;
        Parking() : cars(0){}
        ~Parking(){}
        
        Parking(const Parking& other) = delete;
        Parking& operator=(const Parking& other) = delete;
    public:
        static Parking& Get()
        {
            static Parking only;
            return only;
        }
        void add_car()
        {
            cars++;
        }
        int GetCountCars()
        {
            return cars;
        }
        void removeCar() 
        {
            if(cars > 0) 
            {
                cars--;
            }
        }
};




int main()
{
    Parking& p1 = Parking::Get();
    Parking& p2 = Parking::Get();
    
    if(&p1 == &p2)
    {
        std::cout << "Good" << "\n";
    }
    else
    {
        std::cout << "Bad" << "\n";
    }
    
    p1.add_car();
    p2.add_car();
    std::cout << p2.GetCountCars() << "\n";
    
    return 0;
}