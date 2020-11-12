#include <iostream>
#include <vector>
#include "ttt_functionsV2.hpp"




int main()
{

//Declare variables

    const vector<vector<char>> startingGameBoard 
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    vector<vector<char>> board {startingGameBoard};

    int whoseTurn {1};

    int choice {0};

    vector<int> pastChoices {};

    bool endGame {false};

 //Start of game

    greeting();
    
    while(endGame == false)
    {
        drawBoard(board);

        //Player takes a turn
        while(!choiceInRange(choice) || choiceTaken(choice, pastChoices))
        {
            chooseSquare(whoseTurn, choice);
        }

        addChoiceToPastChoices(choice, pastChoices);

        printPastChoices(pastChoices);

        updateBoard(whoseTurn, choice, board);
        
        winningComboCheck(whoseTurn, board, endGame);

        fullBoardCheck(pastChoices, endGame);
        
        changePlayers(whoseTurn);
    }

    playAgain(startingGameBoard, board, whoseTurn, choice, pastChoices, endGame);

    return 0;
}