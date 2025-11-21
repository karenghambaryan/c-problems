#include "console.h"
#include <iostream>

void Tv_Console::Button_On() const 
{
    std::cout << "TV  On\n";
}
void Tv_Console::Button_Off() const 
{
    std::cout << "TV  Off\n";
}
void Tv_Console::Button_Exit() const 
{
    std::cout << "TV Exit\n";
}
void Tv_Console::Button_More() const 
{
    std::cout << "TV Volume Up\n";
}
void Tv_Console::Button_Less() const 
{
    std::cout << "TV Volume Down\n";
}
void Tv_Console::Button_Youtube() const 
{
   std::cout << "TV Opening YouTube\n";
}
void Tv_Console::Button_Netflix() const 
{
    std::cout << "TV Opening Netflix\n";
}
void Tv_Console::Button_Radio() const 
{
    std::cout << "TV Opening Radio\n";
}

void Tv_Console::CallFuncs() const 
{
    Button_On();
    Button_Off();
    Button_More();
    Button_Less();
    Button_Exit();
    Button_Netflix();
    Button_Radio();
    Button_Youtube();
}





void Ventilator_Console::Button_On() const 
{
    std::cout << "Ventilator Turn On\n";
}
void Ventilator_Console::Button_Off() const 
{
    std::cout << "Ventilator Turn Off\n";
}
void Ventilator_Console::Button_Exit() const 
{
    std::cout << "Ventilator Exit\n";
}
void Ventilator_Console::Button_More() const 
{
    std::cout << "Ventilator Speed Up\n";
}
void Ventilator_Console::Button_Less() const 
{
    std::cout << "Ventilator Speed Down\n";
}
void Ventilator_Console::Button_Hot() const 
{
    std::cout << "Ventilator: Hot Mode\n";
}
void Ventilator_Console::Button_Cold() const 
{
    std::cout << "Ventilator: Cold Mode\n";
}
void Ventilator_Console::CallFuncs() const
{
    Button_On();
    Button_Off();
    Button_More();
    Button_Less();
    Button_Exit();
    Button_Cold();
    Button_Hot();
}