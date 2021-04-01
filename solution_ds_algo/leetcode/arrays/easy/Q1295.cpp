// 1295. Find Numbers with Even Number of Digits

// Given an array nums of integers, return how many of them contain an even number of digits.

// Example 1:

// Input: nums = [12,345,2,6,7896]
// Output: 2
// Explanation:
// 12 contains 2 digits (even number of digits).
// 345 contains 3 digits (odd number of digits).
// 2 contains 1 digit (odd number of digits).
// 6 contains 1 digit (odd number of digits).
// 7896 contains 4 digits (even number of digits).
// Therefore only 12 and 7896 contain an even number of digits.
// Example 2:

// Input: nums = [555,901,482,1771]
// Output: 1
// Explanation:
// Only 1771 contains an even number of digits.

// Constraints:

// 1 <= nums.length <= 500
// 1 <= nums[i] <= 10^5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a = 120;
    // int count = 0;
    // // counting number of digits in a

    // while (a !=0)
    // {
    //     a = a/10;
    //     count ++;
    // }
    // cout << count;

    int nums[] = {437, 315, 322, 431, 686, 264, 442};
    int n = sizeof(nums) / sizeof(int);
    int count = 0;
    int arr[n];
    int even = 0;

    // checks the number of digits in an integer
    for (int i = 0; i < n; i++)
    {
        while (nums[i] != 0)
        {
            nums[i] = nums[i] / 10;
            count++;
        }
        arr[i] = count;
        count =0;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    

    to check how many of them are even
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
            cout << even << endl;
        }
        else
        {
            even;
        }
        
    }
    cout << even;

    return 0;
}