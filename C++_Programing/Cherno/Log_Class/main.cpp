//
// Created by joel on 1/2/21.
//

#include <iostream>

class Log
{
public:

    enum Level : unsigned char
    {
        Error = 0, Warning, Info
    };

private:
    Level m_LogLevel = Info;
public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }

    void ErrorMessage(const char* message) const
    {
        if (m_LogLevel >= Error)
        {
            std::cout << "[Error] " << message << std::endl;
        }
    }

    void WarnMessage(const char* message) const
    {
        if (m_LogLevel >= Warning)
        {
            std::cout << "[WARNING]: " << message << std::endl;
        }
    }

    void InfoMessage(const char* message) const
    {
        if (m_LogLevel >= Info)
        {
            std::cout << "[Info]: " << message << std::endl;
        }
    }

};

int main()
{
    Log log;
    log.SetLevel(Log::Error);
    log.WarnMessage("Hello");
    log.ErrorMessage("Hello");
    log.InfoMessage("Hello");
    std::cin.get();
}
