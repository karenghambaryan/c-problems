//74: Ստեղծել class-ներով մեխանիզմ և ստուգել արդյոք եկած կլասը հանդիսանում է animal տիպի թե ոչ. Օգտագործել մեր կողմից գրված animal class-ների երարխիան
#include <iostream>
class Animal
{
    public:
        Animal() = default;
        virtual ~Animal() = default;
        virtual void Sound() const = 0;
};

class Dog : public Animal
{
    public:
        Dog() = default;
        ~Dog() override = default;
        void Sound() const override
        {
            std::cout << "Haf" << "\n";
        }
        
};

class Car 
{
    public:
        Car() = default;
        virtual ~Car() = default;
};

bool IsAnimal(Animal* x)
{
    if(dynamic_cast<Animal*>(x) != nullptr)
    {
        return true;
    }
    return false;
}

int main()
{
    Car* c = new Car();
    Animal* d = new Dog();
    
    std::cout << IsAnimal(d) << "\n"; 


    return 0;
}