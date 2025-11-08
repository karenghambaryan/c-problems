#include <iostream>
#include <fstream>
#include <string>
#include "reader.h"
Reader::Reader(const std::string& file)
{
    m_in.open(file);
    if(!m_in.is_open())
    {
        std::cout << "Cant open file" << std::endl;
    }
    
}
Reader::~Reader()
{
    if(m_in.is_open())
    {
        m_in.close();
    }
}
bool Reader::isOpen() 
{
    return m_in.is_open();
}
