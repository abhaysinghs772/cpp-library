#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int l, n;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    display(v);
    // 1 6 10 8 4
    
    return 0;
}