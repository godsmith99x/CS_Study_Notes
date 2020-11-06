#include <iostream>
#include <vector>
#include "ttt_functions.hpp"


const vector<vector<char>> startingGameBoard 
{
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

vector<vector<char>> playingGameBoard
{
    startingGameBoard
};

vector<int> playerMoves {};

    
bool gameInPlay {true};


int main()
{

    greeting();

    while(gameInPlay == true)
    {
        displayBoard(playingGameBoard);

        player1Selection(playerMoves, playingGameBoard);

        gameInPlay = false;
    }
    
    return 0;
}