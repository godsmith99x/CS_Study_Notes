#include <iostream>
#include <vector>
#include <algorithm>
#include "ttt_functions.hpp"

const vector<vector<char>> startingGameBoard 
{
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

vector<vector<char>> board {startingGameBoard};

int whichPlayersTurn {1};

int playersChoice {0};

vector<int> previousMoves {0};


void greeting()
{
    cout << endl;
    cout << "Howdy friend, let's play Tic Tac Toe!" << endl;
    cout << endl;
}


void drawBoard() 
{

  cout << "     |     |      " << endl;

  cout << "  " << board.at(0).at(0) << "  |  " << board.at(0).at(1) << "  |  " << board.at(0).at(2) << endl;

  cout << "_____|_____|_____ \n";
  cout << "     |     |      \n";

  cout << "  " << board.at(1).at(0) << "  |  " << board.at(1).at(1) << "  |  " << board.at(1).at(2) << endl;

  cout << "_____|_____|_____ \n";
  cout << "     |     |      \n";

  cout << "  " << board.at(2).at(0) << "  |  " << board.at(2).at(1) << "  |  " << board.at(2).at(2) << endl;
  cout << "     |     |      \n";

  cout << endl;
    
}

void pickSquare() 
{
  cout << "Player " << whichPlayersTurn << ", pick your square (1-9): ";
  cin >> playersChoice;
  cout << endl;

  choiceInRange();

  choiceAlreadyTaken();

  if (!choiceInRange() || choiceAlreadyTaken())
  {
    pickSquare();
  }

  saveChoiceUpdateBoard();

  if (whichPlayersTurn == 1)
  {
    whichPlayersTurn = 2;
  } else
  {
    whichPlayersTurn = 1;
  }
  
}


bool choiceInRange()
{
  if(playersChoice >= 1 && playersChoice <= 9)
  {
    return true;
  } else
  {
    return false;
  }
} 

bool choiceAlreadyTaken()
{
  int countPreviousMoves {0};

  for (auto num : previousMoves)
  {
    if (playersChoice == previousMoves.at(num))
    {
      ++countPreviousMoves;
    }
  }

  if (countPreviousMoves > 0)
  {
    return true;
  } else
  {
    return false;
  }
} 

void saveChoiceUpdateBoard()
{
  previousMoves.push_back(playersChoice);

  switch (playersChoice)
  {
  case 1:
    board.at(0).at(0) = (whichPlayersTurn == 1) ? 'X' : 'O';
    break;

  case 2:
    board.at(0).at(1) = (whichPlayersTurn == 1) ? 'X' : 'O';
    break;

  case 3:
    board.at(0).at(2) = (whichPlayersTurn == 1) ? 'X' : 'O';
    break;

  case 4:
    board.at(1).at(0) = (whichPlayersTurn == 1) ? 'X' : 'O';
    break;

  case 5:
    board.at(1).at(1) = (whichPlayersTurn == 1) ? 'X' : 'O';
    break;

  case 6:
    board.at(1).at(2) = (whichPlayersTurn == 1) ? 'X' : 'O';
    break;

  case 7:
    board.at(2).at(0) = (whichPlayersTurn == 1) ? 'X' : 'O';
    break;

  case 8:
    board.at(2).at(1) = (whichPlayersTurn == 1) ? 'X' : 'O';
    break;

  case 9:
    board.at(2).at(2) = (whichPlayersTurn == 1) ? 'X' : 'O';
    break;
  
  default:
    cout << "Error assigning choice to square." << endl;
    break;
  }
}







