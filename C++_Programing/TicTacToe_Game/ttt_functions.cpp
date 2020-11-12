#include <iostream>
#include <vector>
#include "ttt_functions.hpp"




void greeting()
{
    cout << endl;
    cout << "Howdy friend, let's play Tic Tac Toe!" << endl;
    cout << endl;
}


void drawBoard(const vector<vector<char>> &board) 
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

int pickSquare(int &whoseTurn, int &choice, vector<int> &pastChoices, vector<vector<char>> &board) 
{
  cout << "Player " << whoseTurn << ", pick your square (1-9): ";
  cin >> choice;
  cout << endl;

  //choiceInRange();

  //choiceAlreadyTaken();

  if (!choiceInRange(choice) || choiceAlreadyTaken(choice, pastChoices))
  {
    pickSquare();
  }

  saveChoiceUpdateBoard(choice, pastChoices, board);

  if (whoseTurn == 1)
  {
    return whoseTurn = 2;
  } else
  {
    return whoseTurn = 1;
  }
  
}


bool choiceInRange(const int &choice)
{
  if(choice >= 1 && choice <= 9)
  {
    return true;
  } else
  {
    return false;
  }
} 

bool choiceAlreadyTaken(const int &choice, const vector<int> &pastChoices)
{
  int countPastChoices {0};

  for (auto num : pastChoices)
  {
    if (choice == pastChoices.at(num))
    {
      ++countPastChoices;
    }
  }

  if (countPastChoices > 0)
  {
    return true;
  } else
  {
    return false;
  }
} 

void saveChoiceUpdateBoard(int &whoseTurn, int &choice, vector<int> &pastChoices, vector<vector<char>> &board)
{
  pastChoices.push_back(choice);

  switch (choice)
  {
  case 1:
    return board.at(0).at(0) = (whoseTurn == 1) ? 'X' : 'O';
    break;

  case 2:
    return board.at(0).at(1) = (whoseTurn == 1) ? 'X' : 'O';
    break;

  case 3:
    return board.at(0).at(2) = (whoseTurn == 1) ? 'X' : 'O';
    break;

  case 4:
    return board.at(1).at(0) = (whoseTurn == 1) ? 'X' : 'O';
    break;

  case 5:
    return board.at(1).at(1) = (whoseTurn == 1) ? 'X' : 'O';
    break;

  case 6:
    return board.at(1).at(2) = (whoseTurn == 1) ? 'X' : 'O';
    break;

  case 7:
    return board.at(2).at(0) = (whoseTurn == 1) ? 'X' : 'O';
    break;

  case 8:
    return board.at(2).at(1) = (whoseTurn == 1) ? 'X' : 'O';
    break;

  case 9:
    return board.at(2).at(2) = (whichPlayersTurn == 1) ? 'X' : 'O';
    break;
  
  default:
    cout << "Error assigning choice to square." << endl;
    break;
  }
}

bool endGameCheck()
{
  //boardFullCheck();

  //winningCombinations();

  if (winningCombinations())
  {
    cout << "That's a win!" << endl;
    return true;
  } else if (boardFullCheck())
  {
    cout << "It's a tie!" << endl;
    return true;
  } else
  {
    return false;
  }
}

bool boardFullCheck()
{
  const int fullBoardValue {1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9};
  int currentBoardValue {0};

  for (auto num : previousMoves)
  {
    currentBoardValue += previousMoves.at(num);
  }

  if (currentBoardValue == fullBoardValue)
  {
    return true;
  } else if (currentBoardValue < fullBoardValue)
  {
    return false;
  } else
  {
    cout << "Error in storing previous moves." << endl;
    return true;
  } 
}

bool winningCombinations()
{
  if (board.at(0).at(0) == board.at(0).at(1))
  {
    return true;
  } else
  {
    return false;
  }
}

void resetGame()
{
  board = startingGameBoard;

  whichPlayersTurn = 1;

  playersChoice = 0;

  previousMoves = {0};
}





