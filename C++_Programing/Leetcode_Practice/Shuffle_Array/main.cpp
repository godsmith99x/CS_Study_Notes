#include <iostream>
#include <vector>


std::vector<int> nums1 = {2,5,1,3,4,7};
int n1 {3};
std::vector<int> nums2 = {1,2,3,4,4,3,2,1};
int n2 {4};
std::vector<int> nums3 = {1,1,2,2};
int n3 {2};

std::vector<int> shuffle(std::vector<int>& nums, int n);
void print(std::vector <int> const &a);

int main()
{
    print(shuffle(nums1, n1));
    print(shuffle(nums2, n2));
    print(shuffle(nums3, n3));
    return 0;
}

std::vector<int> shuffle(std::vector<int>& nums, int n)
{
    std::vector<int> output{};
    for(auto i = 0; i < n; i++)
    {
        output.push_back(nums.at(i));
        output.push_back(nums.at(i + n));
    }
    return output;

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