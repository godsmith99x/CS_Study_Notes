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

  vector <char> gameOptions {"⛰", "📄", "✂️", "🦎", "🖖"};

  srand (time(NULL));

  int computer = rand() % 5 + 1;

  int user = 0;

  cout << "=====================" << endl;
  cout << " rock paper scissors " << endl;
  cout << "=====================" << endl;

  cout << "   1) ⛰ " << endl;
  cout << "   2) 📄 " << endl;
  cout << "   3) ✂️ " << endl;
  cout << "   4) 🦎 " << endl;
  cout << "   5) 🖖 " << endl;
  cout << "   shoot! " << endl;

  cin >> user;
  cout << endl;

if ((computer == 1 && user == 2) || (computer == 1 && user == 5) || (computer == 2 && user == 3) || (computer == 2 && user == 4) || (computer == 3 && user == 1) || (computer == 3 && user == 5) || (computer == 4 && user == 1) || (computer == 4 && user == 3) || (computer == 5 && user == 2) || (computer == 5 && user == 4)) {
  cout << "You win!" << endl;
} else if ((user == 1 && computer == 2) || (user == 1 && computer == 5) || (user == 2 && computer == 3) || (user == 2 && computer == 4) || (user == 3 && computer == 1) || (user == 3 && computer == 5) || (user == 4 && computer == 1) || (user == 4 && computer == 3) || (user == 5 && computer == 2) || (user == 5 && computer == 4)) {
  cout << "Sorry, you lose." << endl;
} else if (computer == user) {
  cout << "It's a tie." << endl;
} else {
  cout << "Invalid answer" << endl;
} 
 


}