#include <iostream>
#include "log.hpp"

void initLog()
{
    log("Intializing Log");
}

void log(const char *message)
{
    std::cout << message << std::endl;
}