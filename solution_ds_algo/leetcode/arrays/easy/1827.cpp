// You are given an integer array nums (0-indexed). In one operation, you can choose an element of the array and increment it by 1.

// For example, if nums = [1,2,3], you can choose to increment nums[1] to make nums = [1,3,3].
// Return the minimum number of operations needed to make nums strictly increasing.

// An array nums is strictly increasing if nums[i] < nums[i+1] for all 0 <= i < nums.length - 1. An array of length 1 is trivially strictly increasing.

// Example 1:

// Input: nums = [1,1,1]
// Output: 3
// Explanation: You can do the following operations:
// 1) Increment nums[2], so nums becomes [1,1,2].
// 2) Increment nums[1], so nums becomes [1,2,2].
// 3) Increment nums[2], so nums becomes [1,2,3].
// Example 2:

// Input: nums = [1,5,2,4,1]
// Output: 14
// Example 3:

// Input: nums = [8]
// Output: 0

#include <bits/stdc++.h>
using namespace std;

// if (n == 1)
// {
//     cout << 0;
// }
// else
// {
//     for (int i = 1; i < n; i++)
//     {
//         if(nums[i] > nums[i-1])
//         {
//             continue;
//         }
//         else
//         {
//             count += (nums[i-1] - nums[i]) + 1;
//             nums[i] = nums[i-1] + 1;
//         }
//     }
// }
// cout << count ;

// for (int i = 1; i < n; i++)
// {
//     if (nums[i] == a1)
//     {
//         nums[i]++;
//         count++;
//     }
//     else if (nums[i] < a1)
//     {
//         int diff =  a1 - nums[i] ;
//         nums[i] += diff + 1;
//         count+= diff + 1;
//     }
//     a1 = nums[i];
// }
// cout << count ;

int main()
{
    vector<int> nums{1, 1, 1};
    int n = nums.size();
    int count = 0;
    int a1 = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] <= a1)
        {
            count += (a1 - nums[i]) + 1;
            nums[i] = a1 + 1;
        }
        a1 = nums[i];
    }
    cout << count;

    return 0;
}