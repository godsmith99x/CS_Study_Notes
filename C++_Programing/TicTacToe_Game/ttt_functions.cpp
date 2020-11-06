#include <iostream>
#include <vector>
#include "ttt_functions.hpp"


void greeting()
{
    cout << endl;
    cout << "Howdy friend, let's play Tic Tac Toe!" << endl;
    cout << endl;
}

void displayBoard(vector<vector<char>> board)
{
    cout << endl;
    cout << board.at(0).at(0) << " | " << board.at(0).at(1) << " | " << board.at(0).at(2) << endl;
    cout << "----------" << endl;
    cout << board.at(1).at(0) << " | " << board.at(1).at(1) << " | " << board.at(1).at(2) << endl;
    cout << "----------" << endl; 
    cout << board.at(2).at(0) << " | " << board.at(2).at(1) << " | " << board.at(2).at(2) << endl;
    cout << endl;
}

void player1Selection(vector<int> playerMoves, vector<vector<char>> playingGameBoard)
{
    bool moveComplete {false};
    int move;
    
    while(moveComplete == false)
    {
        cout << "Player 1, enter the number of the square you want to take: ";
        cin >> move;
        cout << endl;

        for (auto i : playerMoves)
        {
            if (move = playerMoves.at(i))
            {
                cout << "That move is already taken. Try again.";
                
            } else
            {
                playerMoves.push_back(move);
                
                if (move == 1)
                {
                    playingGameBoard.at(0).at(0) = 'X';
                    moveComplete = true; 
                } else if (move == 2)
                {
                    playingGameBoard.at(0).at(1) = 'X';
                    moveComplete = true;
                } else if (move == 3)
                {
                    playingGameBoard.at(0).at(2) = 'X';
                    moveComplete = true;
                } else if (move == 4)
                {
                    playingGameBoard.at(1).at(0) = 'X';
                    moveComplete = true;
                } else if (move == 5)
                {
                    playingGameBoard.at(1).at(1) = 'X';
                    moveComplete = true;
                } else if (move == 6)
                {
                    playingGameBoard.at(1).at(2) = 'X';
                    moveComplete = true;
                } else if (move == 7)
                {
                    playingGameBoard.at(2).at(0) = 'X';
                    moveComplete = true;
                } else if (move == 8)
                {
                    playingGameBoard.at(2).at(1) = 'X';
                    moveComplete = true;
                } else if (move == 9)
                {
                    playingGameBoard.at(2).at(2) = 'X';
                    moveComplete = true;
                } else
                {
                    cout << "Error, please try again.";
                }
            }  
        }
    }
    
    

}

