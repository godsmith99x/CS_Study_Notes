#include <vector>
#include <string>
#include <memory>

class Player
{
private:
  std::string name;
  int health;
  int xp;

public:
  void talk(std::string);
  bool isDead();
};



int main() 
{
  //creates a frank and a hero object on the stack
  Player frank;
  Player hero;

  //creates a vector of player objects called players
  std::vector<Player> players {frank};

  players.push_back(hero);

  //uses a smart pointer to dynamically allocate an enemy object on the heap
  std::unique_ptr<Player> enemy {new Player};

  enemy -> talk("Fuck you!");

  
  return 0;
}