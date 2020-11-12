#include <iostream>
#include <vector>
#include "ttt_functionsV2.hpp"



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
int changePlayers(int &whoseTurn)
{
    if (whoseTurn == 1)
  {
    return whoseTurn = 2;
  } else
  {
    return whoseTurn = 1;
  }
} 

//Checks for winning combinations
bool winningComboCheck(const int &whoseTurn, const vector<vector<char>> &board, bool &endGame)
{
    //rows
    if (((board.at(0).at(0) == board.at(0).at(1)) && (board.at(0).at(1) == board.at(0).at(2))) ||
        ((board.at(1).at(0) == board.at(1).at(1)) && (board.at(1).at(1) == board.at(1).at(2))) ||
        ((board.at(2).at(0) == board.at(2).at(1)) && (board.at(2).at(1) == board.at(2).at(2))))
    {
        cout << "Player " << whoseTurn << " wins!" << endl;
        return endGame = true;
    }

    //columns
    if (((board.at(0).at(0) == board.at(1).at(0)) && (board.at(1).at(0) == board.at(2).at(0))) ||
        ((board.at(0).at(1) == board.at(1).at(1)) && (board.at(1).at(1) == board.at(2).at(1))) ||
        ((board.at(0).at(2) == board.at(1).at(2)) && (board.at(1).at(2) == board.at(2).at(2))))
    {
        cout << "Player " << whoseTurn << " wins!" << endl;
        return endGame = true;
    }

    //diagonals
    if (((board.at(0).at(0) == board.at(1).at(1)) && (board.at(1).at(1) == board.at(2).at(2))) ||
        ((board.at(0).at(2) == board.at(1).at(1)) && (board.at(1).at(1) == board.at(2).at(0))))
    {
        cout << "Player " << whoseTurn << " wins!" << endl;
        return endGame = true;
    }

    return endGame = false;
}

//Checks if all squares have been taken
bool fullBoardCheck(const vector<int> &pastChoices, bool &endGame)
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
    return endGame = true;
  } else if (currentBoardValue < fullBoardValue)
  {
    return endGame = false;
  } else
  {
    cout << "Error in storing previous moves." << endl;
    return endGame = true;
  } 
}

//Checks if players want to play again
bool playAgain(const vector<vector<char>> startingGameBoard, vector<vector<char>> board, int whoseTurn, int choice, vector<int> pastChoices, bool endGame)
{
    char yesNo {'x'};
    cout << "Would you like to play again? (y/n): ";
    cin >> yesNo;

    if (yesNo == 'y' || yesNo == 'Y')
    {
        cout << "Sweet! Let's play again." << endl;
        resetGame(startingGameBoard, board, whoseTurn, choice, pastChoices, endGame);
        //figure out how to jump back to start of game
    } else if (yesNo == 'n' || yesNo == 'N')
    {
        cout << "Too bad. See you next time!" << endl;
        return endGame = true;
    } else
    {
        cout << "That's an invalid selection. Select either 'y' for yes or 'n' for no." << endl;
        playAgain(startingGameBoard, board, whoseTurn, choice, pastChoices, endGame);
    } 
}

//Resets game variables
void resetGame(const vector<vector<char>> startingGameBoard, vector<vector<char>> board, int whoseTurn, int choice, vector<int> pastChoices, bool endGame)
{
  board = startingGameBoard;

  whoseTurn = 1;

  choice = 0;

  pastChoices = {};

  endGame = false;
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