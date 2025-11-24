#include <iostream>
#include "engine.h"

Engine::Engine(int PlugCount, int Displacement, std::string Gaspet)
{
    m_PlugCount = PlugCount;
    m_Displacement = Displacement;
    m_Gaspet = Gaspet;
}

Engine::Engine(const Engine& other)
{
    m_PlugCount = other.m_PlugCount;
    m_Displacement = other.m_Displacement;
    m_Gaspet = other.m_Gaspet;
}

std::ostream& operator<< (std::ostream& out, const Engine& engine)
{
    out << "There are " << engine.m_PlugCount << " Plugs\n";
    out << "Its my displacement  " << engine.m_Displacement << "\n";
    out << engine.m_Gaspet << "\n";

    return out;
}
Engine& Engine::operator=(const Engine& other)
{
    if (this != &other)
    {
        m_PlugCount = other.m_PlugCount;
        m_Displacement = other.m_Displacement;
        m_Gaspet = other.m_Gaspet;
    }
    return *this;
}