#include <iostream>
#include "log.hpp"

int main()
{
    initLog();
    log("Hello World!");
    std::cin.get();
}