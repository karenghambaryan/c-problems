#ifndef ZOO_H
#define ZOO_H
#include "Animals.h"
class Zoo
{
    private:
        Animals** m_animals;
        int m_size;
        int m_quantity;
    public:
        Zoo();
        Zoo(int size);
        ~Zoo();
        Zoo(const Zoo& other);
        Zoo& operator= (const Zoo& other);
        void ChangeQuantity();
        void AddAnimal(Animals* animal);
        void Sounds();

};








#endif