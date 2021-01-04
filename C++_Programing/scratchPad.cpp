#include <iostream>

class Entity
{
public:
  float X, Y;

  Entity()
  {
      X = 0.0f;
      Y = 0.0f;
  }

  void Print()
  {
    std::cout << X << ", " << Y << std::endl;
  }
};

int main()
{

  Entity e;
  std::cout << e.X << std::endl;
  e.Print();
  std::cin.get();
}