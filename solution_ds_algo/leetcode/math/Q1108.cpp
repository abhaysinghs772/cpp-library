// Example 1:

// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Example 2:

// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string addr = "1.1.1.1";
    string result;

    for (int i = 0; i < addr.size(); i++)
    {
        if(addr[i] == '.')
        {
            result += "[.]";
        }
        else
        {
            result += addr[i];
        }
    }
    cout << result;

    return 0;
}