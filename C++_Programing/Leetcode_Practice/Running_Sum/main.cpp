#include <iostream>
#include <vector>
#include <numeric>


std::vector<int> runningSum(std::vector<int>& nums);

void print(std::vector <int> const &a);

int main()
{
    std::vector<int> nums1 = {1,2,3,4};
    std::vector<int> nums2 = {1,1,1,1,1};
    std::vector<int> nums3 = {3,1,2,10,1};

    print(runningSum(nums1));
    print(runningSum(nums2));
    print(runningSum(nums3));
    return 0;
}


std::vector<int> runningSum(std::vector<int>& nums)
{
    std::vector<int> v (nums.size());
    std::partial_sum(nums.begin(), nums.end(), v.begin());
    return v;
}

void print(std::vector <int> const &a)
{
    std::cout << "The vector elements are : ";

    for(int i : a)
    {
        std::cout << i << ' ';
    }

    std::cout << std::endl;
}