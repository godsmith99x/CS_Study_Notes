#include <iostream>
#include <vector>
#include "ttt_functionsV3.hpp"



//Prints out beginning of game greeting
void greeting()
{
    cout << endl;
    cout << "Howdy friend, let's play Tic Tac Toe!" << endl;
    cout << endl;
}

//Called when ever we need to draw the board
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

//Asks Player to input choice of square
int chooseSquare(const int &whoseTurn, int &choice) 
{
  cout << "Player " << whoseTurn << ", choose your square (1-9): ";
  cin >> choice;
  cout << endl;
  return choice;
}

//Checks if players choice falls between 1-9
bool choiceInRange(const int &choice)
{
  if(choice >= 1 && choice <= 9)
  {
    return true;
  } else
  {
    return false;
    cout << "Pick a selection between 1-9.";
  }
} 

//Checks to see if choice is already taken
bool choiceTaken(const int &choice, const vector<int> &pastChoices) 
{
    for (auto num: pastChoices)
    {
        if (num == choice)
        {
            return true;
        }
        
    //return false;
    }
    return false;
}

//Adds players current choice to past choices 
void addChoiceToPastChoices(const int &choice, vector<int> &pastChoices)
{
    pastChoices.push_back(choice);   
}

//Updates board with choice 
void updateBoard(const int &whoseTurn, const int &choice, vector<vector<char>> &board)
{
    switch (choice)
    {
    case 1:
        board.at(0).at(0) = (whoseTurn == 1) ? 'X' : 'O';
        break;

    case 2:
        board.at(0).at(1) = (whoseTurn == 1) ? 'X' : 'O';
        break;

    case 3:
        board.at(0).at(2) = (whoseTurn == 1) ? 'X' : 'O';
        break;

    case 4:
        board.at(1).at(0) = (whoseTurn == 1) ? 'X' : 'O';
        break;

    case 5:
        board.at(1).at(1) = (whoseTurn == 1) ? 'X' : 'O';
        break;

    case 6:
        board.at(1).at(2) = (whoseTurn == 1) ? 'X' : 'O';
        break;

    case 7:
        board.at(2).at(0) = (whoseTurn == 1) ? 'X' : 'O';
        break;

    case 8:
        board.at(2).at(1) = (whoseTurn == 1) ? 'X' : 'O';
        break;

    case 9:
        board.at(2).at(2) = (whoseTurn == 1) ? 'X' : 'O';
        break;
    
    default:
        cout << "Error updating the board." << endl;
        break;
    }
}

//Alternates between Player 1 and Player 2
void changePlayers(int &whoseTurn)
{
    if (whoseTurn == 1)
  {
    whoseTurn = 2;
  } else
  {
    whoseTurn = 1;
  }
} 

//Checks for winning combinations
bool winningComboCheck(const int &whoseTurn, const vector<vector<char>> &board)
{
    //rows
    if (((board.at(0).at(0) == board.at(0).at(1)) && (board.at(0).at(1) == board.at(0).at(2))) ||
        ((board.at(1).at(0) == board.at(1).at(1)) && (board.at(1).at(1) == board.at(1).at(2))) ||
        ((board.at(2).at(0) == board.at(2).at(1)) && (board.at(2).at(1) == board.at(2).at(2))))
    {
        cout << "Player " << whoseTurn << " wins!" << endl;
        cout << endl;
        return true;
    }

    //columns
    if (((board.at(0).at(0) == board.at(1).at(0)) && (board.at(1).at(0) == board.at(2).at(0))) ||
        ((board.at(0).at(1) == board.at(1).at(1)) && (board.at(1).at(1) == board.at(2).at(1))) ||
        ((board.at(0).at(2) == board.at(1).at(2)) && (board.at(1).at(2) == board.at(2).at(2))))
    {
        cout << "Player " << whoseTurn << " wins!" << endl;
        cout << endl;
        return true;
    }

    //diagonals
    if (((board.at(0).at(0) == board.at(1).at(1)) && (board.at(1).at(1) == board.at(2).at(2))) ||
        ((board.at(0).at(2) == board.at(1).at(1)) && (board.at(1).at(1) == board.at(2).at(0))))
    {
        cout << "Player " << whoseTurn << " wins!" << endl;
        cout << endl;
        return true;
    }

    return false;
}

//Checks if all squares have been taken
bool fullBoardCheck(const vector<int> &pastChoices)
{
  const int fullBoardValue {1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9};
  int currentBoardValue {0};

  for (auto num : pastChoices)
  {
    currentBoardValue += num;
  }

  if (currentBoardValue == fullBoardValue)
  {
    cout << "Game Over. It's a Tie." << endl;
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

//Checks if players want to play again
bool playAgain()
{
    char yesNo {'x'};
    cout << "Would you like to play again? (y/n): ";
    cin >> yesNo;
    cout << endl;

    if (yesNo == 'y' || yesNo == 'Y')
    {
        cout << "Sweet! Let's play again." << endl;
        cout << endl;
        return true;
    } else if (yesNo == 'n' || yesNo == 'N')
    {
        cout << "Too bad. See you next time!" << endl;
        cout << endl;
        return false;
    } else
    {
        cout << "That's an invalid selection. Select either 'y' for yes or 'n' for no." << endl;
        cout << endl;
        playAgain();
    } 
}

//Print out elements in a vector
void printPastChoices(vector<int> pastChoices)
{
  cout << "The past selections are: ";
  
  for (auto num : pastChoices)
  {
    cout << num << " ";
  }

  cout << endl;
  cout << endl;
}

//Resets choice
void resetChoice(int choice)
{
  choice = 0;
}

bool quitGame(int choice)
{
  if(choice == 'q' || choice == 'Q')
  {
    return true;
  } else
  {
    return false;
  }
}