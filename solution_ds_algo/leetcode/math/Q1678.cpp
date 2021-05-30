// Example 1:

// Input: command = "G()(al)"
// Output: "Goal"
// Explanation: The Goal Parser interprets the command as follows:
// G -> G
// () -> o
// (al) -> al
// The final concatenated result is "Goal".
// Example 2:

// Input: command = "G()()()()(al)"
// Output: "Gooooal"
// Example 3:

// Input: command = "(al)G(al)()()G"
// Output: "alGalooG"

// Constraints:

// 1 <= command.length <= 100
// command consists of "G", "()", and/or "(al)" in some order.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string com = "()()";
    string ans;
    for (int i = 0; i < com.size();)
    {
        if(com[i]== 'G') ans+= 'G', i++;
        else if(com.substr(i, 2) == "()") ans+= "o", i+=2;
        else ans += "al", i+=4; 
    }
    cout << ans;

    return 0;
}