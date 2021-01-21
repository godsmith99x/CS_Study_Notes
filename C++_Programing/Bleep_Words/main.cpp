#include <iostream>
#include "Bleep_Functions.hpp"

int main()
{
    std::string word {"broccoli"};
    std::string text {"Fuck that fucking broccoli-ass broccoli!"};

    Bleep(text, word);

    std::cout << text << std::endl;

    return 0;
}
