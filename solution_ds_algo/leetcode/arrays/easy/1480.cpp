#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] = (nums[i] + nums[i - 1]);
    }
    return nums;
}

/*********************************UPSKILL**********************************/

// understand this logic
// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         partial_sum(begin(nums),end(nums),begin(nums));
//         return nums;
//     }
// };

int main()
{
    vector<int> nums{1, 2, 3, 4};

    vector<int> ans = runningSum(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}