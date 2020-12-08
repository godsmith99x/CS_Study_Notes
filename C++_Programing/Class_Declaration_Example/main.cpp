#include <iostream>
#include "profile.hpp"

int main() 
{

  Profile sam {"Sam Drakkila", 30, "New York", "USA", "he/him"};

  sam.addHobby("listening to audiobooks and podcasts");
  sam.addHobby("playing rec sports like bowling and kickball");
  sam.addHobby("writing a speculative fiction novel");
  sam.addHobby("reading advice columns");

  std::cout << sam.viewProfile();

}