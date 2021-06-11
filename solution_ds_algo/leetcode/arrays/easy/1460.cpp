// Given two integer arrays of equal length target and arr.

// In one step, you can select any non-empty sub-array of arr and reverse it. You are allowed to make any number of steps.

// Return True if you can make arr equal to target, or False otherwise.

// Example 1:

// Input: target = [1,2,3,4], arr = [2,4,1,3]
// Output: true
// Explanation: You can follow the next steps to convert arr to target:
// 1- Reverse sub-array [2,4,1], arr becomes [1,4,2,3]
// 2- Reverse sub-array [4,2], arr becomes [1,2,4,3]
// 3- Reverse sub-array [4,3], arr becomes [1,2,3,4]
// There are multiple ways to convert arr to target, this is not the only way to do so.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> target = {1, 2, 2, 3};
    vector<int> arr = {1, 1, 2, 3};
    bool ans = 0;

    sort(target.begin(), target.end());
    sort(arr.begin(), arr.end());

    for (int i = 0; i < target.size(); i++)
    {
        if (target[i] != arr[i])
        {
            ans = 0;
            break;
        }
        else
        {
            ans = 1;
        }
    }
    cout << ans;

    return 0;
}