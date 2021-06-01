// Example 1:

// Input: s = "RLRRLLRLRL"
// Output: 4
// Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.
// Example 2:

// Input: s = "RLLLLRRRLR"
// Output: 3
// Explanation: s can be split into "RL", "LLLRRR", "LR", each substring contains same number of 'L' and 'R'.
// Example 3:

// Input: s = "LLLLRRRR"
// Output: 1
// Explanation: s can be split into "LLLLRRRR".
// Example 4:

// Input: s = "RLRRRLLRLL"
// Output: 2
// Explanation: s can be split into "RL", "RRRLLRLL", since each substring contains an equal number of 'L' and 'R'


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "RLLLLRRRLR";
    int bV = 0;
    int ans = 0;

    for(int i = 0; i < s.size(); i++)
    {
        (s[i]=='R')? bV = bV - 1 : bV = bV + 1;
        if(bV==0) ans = ans +1;
    }
    cout << ans;    
    
    return 0;
}