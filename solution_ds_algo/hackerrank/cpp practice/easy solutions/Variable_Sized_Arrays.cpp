#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, size, val, which, index;
    cin >> n >> q;

    vector<vector<int>> nvec; // two dimensional vector of vector i.e; matrix
    for (int i = 0; i < n; i++)
    {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; j++)
        {
            cin >> val;
            ivec.push_back(val);
        }

        nvec.push_back(ivec);
    }

    for (int k = 0; k < q; k++)
    {
        cin >> which >> index;
        cout << nvec[which][index] << endl; // == nvec[i][j]
    }

    return 0;
}