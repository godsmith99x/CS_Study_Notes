#include <iostream>
#include <vector>

std::vector<int> Count_Down(int n);

int main()
{

  Count_Down(10);
}

std::vector<int> Count_Down(int n)
{
  std::vector<int> Counter{};

  return (n < 1) ? Counter.push_back(0) : Count_Down(n - 1);
}