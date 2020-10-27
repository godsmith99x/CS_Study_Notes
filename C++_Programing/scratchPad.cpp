#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {

  string input = "turpentine and turtles";

  vector<char> vowels {'a', 'e', 'i', 'o', 'u'};

  vector<char> results {};

  for (int i = 0; i < input.size(); i++) {
    //cout << input.at(i) << endl;
    for (int i2 = 0; i2 < vowels.size(); i2++) {
      if (vowels.at(i2) == input.at(i)) {
        results.push_back(input.at(i));
      }
    }
  }

  for (int i = 0; i < results.size(); i++) {
    
    cout << results.at(i);
  }
}