#include <bits/stdc++.h>
using namespace std;

int main()
{
    // std::vector<int>::iterator low, up;
    // low = std::lower_bound(v.begin(), v.end(), 20);          
    // up = std::upper_bound(v.begin(), v.end(), 20);                   

    // std::cout << "lower_bound at position " << (low - v.begin()) << '\n';
    // std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

    // 4
    // 1
    // 4
    // 9
    // 15

    // Yes 1
    // No 5
    // Yes 6
    // Yes 8

    int n, num;
    cin >> n;
    vector<int> v1;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v1.push_back(num);
    }

    int q, value;
    cin >> q;
    vector<int>::iterator low;
    for (int i = 0; i < q; i++)
    {
        cin >> value;

        low = lower_bound(v1.begin(), v1.end(), value);
        if (value == v1[low - v1.begin()])
        {
            cout << "Yes " << (low - v1.begin()) + 1 << endl;
        }
        else
        {
            cout << "No " << (low - v1.begin()) + 1 << endl;
        }
    }

    return 0;
}

