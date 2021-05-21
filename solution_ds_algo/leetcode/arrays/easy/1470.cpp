#include <bits/stdc++.h>
using namespace std;

// Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

// Return the array in the form [x1,y1,x2,y2,...,xn,yn].

 

// Example 1:

// Input: nums = [2,5,1,3,4,7], n = 3
// Output: [2,3,5,4,1,7] 
// Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> result;
    for (int i = 0; i < n * 2; i++)
    {
        i % 2 == 0 ? result.push_back(nums[i / 2]) : result.push_back(nums[n + i / 2]);
    }
    return result;
}

int main()
{
    vector<int> nums = {2,5,1,3,4,7};
    vector<int> result;

    result = shuffle(nums, 3);

    for (int i = 0; i < result.size(); i++)
    {
        cout<< result[i] << " ";
    }
    

    return 0;
}