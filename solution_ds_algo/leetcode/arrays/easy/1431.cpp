#include <bits/stdc++.h>
using namespace std;

// Example 1:

// Input: candies = [2,3,5,1,3], extraCandies = 3
// Output: [true,true,true,false,true] 
// Explanation: 
// Kid 1 has 2 candies and if he or she receives all extra candies (3) will have 5 candies --- the greatest number of candies among the kids. 
// Kid 2 has 3 candies and if he or she receives at least 2 extra candies will have the greatest number of candies among the kids. 
// Kid 3 has 5 candies and this is already the greatest number of candies among the kids. 
// Kid 4 has 1 candy and even if he or she receives all extra candies will only have 4 candies. 
// Kid 5 has 3 candies and if he or she receives at least 2 extra candies will have the greatest number of candies among the kids.

vector<bool>kidsWithCandies(vector<int>& candies, int extra_candies)
{
    vector<bool>V;

    int max = *max_element(candies.begin(), candies.end());

    for (int i = 0; i < candies.size(); i++)
    {
        if (candies[i] + extra_candies >= max)
        {
            V.push_back(true);
        }
        else
        {
             V.push_back(false);
        }
        
    }
    return V;

}

int main()
{
    int extra_candies = 3;
    vector<int> candies= {2,3,5,1,3};
    vector<bool> result;

    result = kidsWithCandies(candies, extra_candies);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    

    return 0;
}