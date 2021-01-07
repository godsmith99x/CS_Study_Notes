#include <iostream>
#include <vector>

int findMaxConsecutiveOnes(std::vector<int> &nums);

int main()
{

  std::vector<int> nums{1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1};

  findMaxConsecutiveOnes(nums);

  std::cin.get();
}

int findMaxConsecutiveOnes(std::vector<int> &nums)
{
  int max{};
  int count{};
  for (auto i : nums)
  {
    if (1 == i)
    {
      count++;
      if (count > max)
      {
        max = count;
      }
    }
    else
    {
      count = 0;
    }
  }

  // std::cout << "Max is " << max << std::endl;
  return max;
}