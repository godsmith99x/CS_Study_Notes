#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(const vector<int> &v);
void printVector(const vector< pair <int, int>> &v);



int main()
{

    vector<int> nums {22, -5, 3, 10, 1, 52, 99, 23};

    int target {5};
    
    //begin answer for Leetcode TwoSum
    vector< pair<int, int> > numsWithIndex {};

    for(int i = 0; i < nums.size(); ++i)
    {
        pair<int, int> temp {nums.at(i), i};
        numsWithIndex.push_back(temp);
    }

    sort(numsWithIndex.begin(), numsWithIndex.end());

    int long iterator1 {0};
    int iterator2 {nums.size() - 1};

    while (iterator1 < iterator2)
    {
        if((numsWithIndex.at(iterator1).first + numsWithIndex.at(iterator2).first) == target)
        {
            vector<int> answer {numsWithIndex.at(iterator1).second, numsWithIndex.at(iterator2).second};
            printVector(answer);
            //For Leetcode, return answer
            //return answer;
            break;
        } else if((numsWithIndex.at(iterator1).first + numsWithIndex.at(iterator2).first) < target)
        {
            ++iterator1;
        } else 
        {
            --iterator2;
        }

    }
    
    
    



    return 0;
}



void printVector(const vector<int> &v)
{
    for(auto i : v)
    {
        cout << i << " ";
    }

    cout << endl;
}

void printVector(const vector< pair <int, int>> &v)
{
    for(const auto &i : v)
    {
        cout << "(" << i.first << ", " << i.second << ") ";
    }

    cout << endl;
}