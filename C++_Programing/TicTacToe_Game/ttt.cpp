#include <iostream>
#include <vector>
#include "ttt_functions.hpp"





int main()
{

    const vector<vector<char>> startingGameBoard 
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    vector<vector<char>> board {startingGameBoard};

    int whichPlayersTurn {1};

    int playersChoice {0};

    vector<int> previousMoves {};

    
    greeting();

    while(!endGameCheck())
    {
        drawBoard(board);

        pickSquare(whichPlayersTurn, playersChoice, previousMoves);

        drawBoard(board);

        system("clear");

        endGameCheck();
    }
    
    
    return 0;
}