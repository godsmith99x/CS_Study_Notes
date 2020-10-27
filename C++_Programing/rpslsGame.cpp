#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
using namespace std; 

/*

    Scissors cuts Paper.
    Paper covers Rock.
    Rock crushes Lizard.
    Lizard poisons Spock.
    Spock smashes Scissors.
    Scissors decapitate Lizard.
    Lizard eats Paper.
    Paper disproves Spock.
    Spock vaporizes Rock.
    (and as it always has) Rock crushes Scissors.

*/


int main () {

 bool done {false};
 while (!done) {
    
    vector <wchar_t> gameOptions {L'⛰', L'📄', L'✂️', L'🦎', L'🖖'};

    srand (time(NULL));

    wchar_t computerChoice = gameOptions.at(rand() % 5);

    int userSelect = 0;

    cout << "=====================" << endl;
    cout << " rock paper scissors " << endl;
    cout << "=====================" << endl;

    cout << "   1) ⛰ " << endl;
    cout << "   2) 📄 " << endl;
    cout << "   3) ✂️ " << endl;
    cout << "   4) 🦎 " << endl;
    cout << "   5) 🖖 " << endl;
    cout << "   shoot! " << endl;

    cin >> userSelect;
    cout << endl;

    wchar_t userChoice = gameOptions.at(userSelect - 1);

/*
    switch (userChoice) {
    case gameOptions[0] :
      cout << "You chose ⛰" << endl;
      break;
    case gameOptions[1] :
      cout << "You chose 📄" << endl;
      break;
    case gameOptions[2] :
      cout << "You chose ✂️" << endl;
      break;
    case gameOptions[3] :
      cout << "You chose 🦎" << endl;
      break;
    case gameOptions[4] :
      cout << "You chose 🖖" << endl;
      break;
    default :
      cout << "Error" << endl;
      break;
    }

     switch (computerChoice) {
    case gameOptions[0] :
      cout << "The computer chose ⛰" << endl;
      break;
    case gameOptions[1] :
      cout << "The computer chose 📄" << endl;
      break;
    case gameOptions[2]:
      cout << "The computer chose ✂️" << endl;
      break;
    case gameOptions[3] :
      cout << "The computer chose 🦎" << endl;
      break;
    case gameOptions[4] :
      cout << "The computer chose 🖖" << endl;
      break;
    default :
      cout << "Error" << endl;
      break;
    }

  */
    //wcout << "You chose " << userChoice << "." << " The Computer chose " << computerChoice << "." << endl;
    
    if ((computerChoice == gameOptions.at(0) && userChoice == gameOptions.at(1)) || (computerChoice == gameOptions.at(0) && userChoice == gameOptions.at(4)) || (computerChoice == gameOptions.at(1) && userChoice == gameOptions.at(2)) || (computerChoice == gameOptions.at(1) && userChoice == gameOptions.at(3)) || (computerChoice == gameOptions.at(2) && userChoice == gameOptions.at(0)) || (computerChoice == gameOptions.at(2) && userChoice == gameOptions.at(4)) || (computerChoice == gameOptions.at(3) && userChoice == gameOptions.at(0)) || (computerChoice == gameOptions.at(3) && userChoice == gameOptions.at(2)) || (computerChoice == gameOptions.at(4) && userChoice == gameOptions.at(1)) || (computerChoice == gameOptions.at(4) && userChoice == gameOptions.at(3))) {
      cout << "You win!" << endl;
    } else if ((userChoice == gameOptions.at(0) && computerChoice == gameOptions.at(1)) || (userChoice == gameOptions.at(0) && computerChoice == gameOptions.at(4)) || (userChoice == gameOptions.at(1) && computerChoice == gameOptions.at(2)) || (userChoice == gameOptions.at(1) && computerChoice == gameOptions.at(3)) || (userChoice == gameOptions.at(2) && computerChoice == gameOptions.at(0)) || (userChoice == gameOptions.at(2) && computerChoice == 5) || (userChoice == gameOptions.at(3) && computerChoice == gameOptions.at(0)) || (userChoice == gameOptions.at(3) && computerChoice == gameOptions.at(2)) || (userChoice == gameOptions.at(4) && computerChoice == gameOptions.at(1)) || (userChoice == gameOptions.at(4) && computerChoice == gameOptions.at(3))) {
      cout << "Sorry, you lose." << endl;
    } else if (computerChoice == userChoice) {
      cout << "It's a tie." << endl;
    } else {
      cout << "Invalid answer" << endl;
    }

    char playAgain {'y'};
    cout << "Would you like to play again, y/n?" << endl;
    cin >> playAgain;

    if (playAgain == 'y') {

    } else {
      done = true;
    }
    
    
  }
}