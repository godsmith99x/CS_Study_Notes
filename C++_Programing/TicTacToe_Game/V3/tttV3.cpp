#include <iostream>
#include <vector>
#include "ttt_functionsV3.hpp"




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

        //Uncomment the line below for debugging, if necissary
        //printPastChoices(pastChoices);

        updateBoard(whoseTurn, choice, board);
        
        //The game ends if their is a winning combination or the board is full. Otherwise we keep playing
        if (winningComboCheck(whoseTurn, board) || fullBoardCheck(pastChoices))
        {   
            //Game is over so ask them if they want to play again
            if(playAgain())
            {
                //If yes, reset the variables and keep going
                board = startingGameBoard;
                whoseTurn = 1;
                choice = 0;
                pastChoices = {};
                endGame = false;
            
            } else 
            {
                //If no, end the game
                endGame = true;
            }      
        
        } else
        {
            //If there is no winning combination and there are still empty squares, the game goes on
            changePlayers(whoseTurn);

            cout << "It's Player " << whoseTurn << "'s turn." << endl;
            cout << endl;

            resetChoice(choice);
        }
        
    }


    return 0;
}
