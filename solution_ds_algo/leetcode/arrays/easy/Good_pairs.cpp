#include <bits/stdc++.h>
using namespace std;

// 1512. Number of Good Pairs

// Given an array of integers nums.

// A pair (i,j) is called good if nums[i] == nums[j] and i < j.

// Return the number of good pairs.

// Example 1:

// Input: nums = [1,2,3,1,1,3]
// Output: 4
// Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
// Example 2:

// Input: nums = [1,1,1,1]
// Output: 6
// Explanation: Each pair in the array are good.
// Example 3:

// Input: nums = [1,2,3]
// Output: 0

int main()
{
    int nums[] = {1, 1, 1, 1};
    int result = 0;
    int n = sizeof(nums) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << " for i ==" << i << endl;
        for (int j = i + 1; j < n; j++)
        {
            cout << "\nValue of j is " << j << endl; 
            if (nums[i] == nums[j] && i < j)  // runtime 0 ms
            {
                result++;
            }
            // (nums[i] == nums[j])? result++ : result // slower then the above code :- runtime 4 ms
        }
        cout << "result ==" << result << "\n";
    }
    cout << "\n"
         << result;

    return 0;
}