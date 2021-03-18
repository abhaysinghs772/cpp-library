#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n, q1, q2, value;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v1.push_back(value);
    }
    cin >> q1;
    v1.erase(v1.begin() + q1 - 1);

    cin >> q1 >> q2;
    v1.erase(v1.begin() + q1 - 1, v1.begin() + q2 - 1);

    cout << v1.size() << endl;

    display(v1);

    return 0;
}