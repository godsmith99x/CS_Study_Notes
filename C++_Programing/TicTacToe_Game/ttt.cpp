#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

using namespace std;

int main()
{

    const vector<vector<char>> startingGameBoard 
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    vector<vector<char>> playingGameBoard
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    vector<vector<char>> player1
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    vector<vector<char>> player2
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    bool gameInPlay {true};

    while(gameInPlay == true)
    {

        gameInPlay = false;
    }
    
    return 0;
}