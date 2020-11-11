#include <iostream>
#include <vector>
#include <algorithm>
#include "ttt_functions.hpp"





int main()
{

    greeting();

    while(!endGameCheck())
    {
        drawBoard();

        pickSquare();

        drawBoard();

        system("clear");

        endGameCheck();
    }
    
    
    return 0;
}