#include <iostream>

class Entity
{
public:
  float X, Y;

  //no arguments constructor
  Entity()
  {
      X = 0.0f;
      Y = 0.0f;
  }

  Entity(float x, float y)
  {
      X = x;
      Y = y;
  }

  void Print()
  {
    std::cout << X << ", " << Y << std::endl;
  }
};

int main()
{
    //call no arguments constructor
  Entity e;
  std::cout << e.X << std::endl;
  e.Print();

  //call constructor with arguments
  Entity e2(10.0f, 5.0f);
  e2.Print();
  std::cin.get();
}
