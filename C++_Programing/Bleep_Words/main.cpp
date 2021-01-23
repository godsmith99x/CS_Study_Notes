#include <iostream>
#include "Bleep_Functions.hpp"

int main()
{
    std::string word {"fart-nugget"};
    std::string text {"Poo poo caca fart-nugget!"};

    Bleep(text, word);

    std::cout << text << std::endl;

    return 0;
}
