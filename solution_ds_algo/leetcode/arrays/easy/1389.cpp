// Input: nums = [0,1,2,3,4], index = [0,1,2,2,1]
// Output: [0,4,1,3,2]
// Explanation:
// nums       index     target
// 0            0        [0]
// 1            1        [0,1]
// 2            2        [0,1,2]
// 3            2        [0,1,3,2]
// 4            1        [0,4,1,3,2]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {0, 1, 2, 3, 4};
    vector<int> index = {0, 1, 2, 2, 1};
    vector<int> target;

    /* with STL */
    int pos, val;
    for (int i = 0; i < nums.size(); i++)
    {
        pos = index[i];
        val = nums[i];

        // target.insert(target.begin() + pos, val);
        target[0 + pos] = val;
    }

    for (int i = 0; i < target.size(); i++)
        cout << target[i] << " ";
    /* with STL */

    return 0;
}
