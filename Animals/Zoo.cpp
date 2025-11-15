#include <iostream>
#include "Zoo.h"

#include "Zoo.h"
#include <iostream>

Zoo::Zoo() {
    m_size = 5;          
    m_quantity = 0;      
    m_animals = new Animals*[m_size];

    for (int i = 0; i < m_size; i++)
    {
        m_animals[i] = nullptr;
    }
}

Zoo::Zoo(int size) {
    m_size = size;
    m_quantity = 0;
    m_animals = new Animals*[m_size];

    for (int i = 0; i < m_size; i++)
    {
        m_animals[i] = nullptr;
    }
}


Zoo::~Zoo() {
    for (int i = 0; i < m_quantity; i++) 
    {
        delete m_animals[i];
    }
    delete[] m_animals;
}

Zoo::Zoo(const Zoo& other) {
    m_size = other.m_size;
    m_quantity = other.m_quantity;

    m_animals = new Animals*[m_size];

    for (int i = 0; i < m_size; i++) 
    {
        m_animals[i] = other.m_animals[i];   
    }
}

Zoo& Zoo::operator=(const Zoo& other) {
    if (this != &other) 
    {
        for (int i = 0; i < m_quantity; i++)
        {
            delete m_animals[i];
        }
        delete[] m_animals;
        m_size = other.m_size;
        m_quantity = other.m_quantity;
        m_animals = new Animals*[m_size];
        for (int i = 0; i < m_size; i++)
        {
            m_animals[i] = other.m_animals[i];
        }
    }

    return *this;
}

void Zoo::AddAnimal(Animals* animal) {
    if (m_quantity >= m_size)
    {
        std::cout << "Zoo is full" << std::endl;
        return;
    }

    m_animals[m_quantity++] = animal;
}

void Zoo::Sounds() {
    for (int i = 0; i < m_quantity; i++) 
    {
        m_animals[i]->Sound();
    }
}
