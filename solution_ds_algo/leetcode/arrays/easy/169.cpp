// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:
// Input: nums = [3,2,3]
// Output: 3

// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

/*************shoter algo **********************/
// 1.
// int majorityElement(vector<int>& nums) {
//     int maxi = nums.size()/2;
//     sort(nums.begin(),nums.end());
//     for(int i =0; i< nums.size(); i++)
//     {
//         if(nums[i] == nums[i + maxi]){
//             return nums[i];
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int diff_ele = nums[0];
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (diff_ele = nums[i])
        {
            count += 1;
            if (count > n / 2)
            {
                return diff_ele;
            }
            else
            {
                diff_ele = nums[i + 1];
            }
        }
        else
        {
            count = 0;
        }
    }
    return diff_ele;
}

int main()
{
    vector<int> nums = {1, 2, 1, 3, 3, 3, 4, 5, 2, 2, 2, 2};
    int ans = majorityElement(nums);
    cout << ans;

    return 0;
}