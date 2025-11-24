#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
class Engine
{
    private:
        int m_PlugCount;
        int m_Displacement;
        std::string m_Gaspet;
    public:
        Engine() = default;
        ~Engine() = default;
        Engine(int PlugCount, int Displacement, std::string Gaspet);
        Engine(const Engine& other);
        Engine& operator=(const Engine& other);
        friend std::ostream& operator<< (std::ostream& out, const Engine& engine);

};




#endif