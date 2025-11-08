#ifndef READER_H
#define READER_H
#include <fstream>

class Reader
{
    private:
        std::ifstream m_in;
    public:
        Reader(const std::string& file);
        ~Reader();

        bool isOpen();
};









#endif