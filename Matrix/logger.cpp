#include <iostream>
#include <fstream>
#include <string>
#include "logger.h"

Logger::Logger(const std::string& file)
{
    m_out.open(file,std::ios::app);
    if(!m_out.is_open())
    {
        std::cout << "Cant open file" << std::endl;
    }
}
Logger::~Logger()
{
    if(m_out.is_open())
    {
        m_out.close();
    }
}
bool Logger::isOpen()
{
    return m_out.is_open();
}
void Logger::log(const std::string& str)
{
    if(m_out.is_open())
    {
        m_out << str << std::endl;
    }
}