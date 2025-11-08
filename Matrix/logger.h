#ifndef LOGGER_H
#define LOGGER_H
#include <fstream>

class Logger
{
    private:
        std::ofstream m_out;
    public:
        Logger(const std::string& file);
        ~Logger();
        bool isOpen();
        void log(const std::string& str);
};
#endif