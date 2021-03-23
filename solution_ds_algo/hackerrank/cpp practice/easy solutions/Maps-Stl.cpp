#include <bits/stdc++.h>
using namespace std;

int main()
{
    int queries, marks, type;
    string name;
    map<string, int> myMap;
    cin >> queries;
   
    map<string, int>::iterator itr;

    while (queries--)
    {
        cin >> type >> name;
        if (type == 1)
        {
            cin >> marks;
            myMap[name] += marks;
            // myMap.insert(make_pair(name, marks)); // this will only insert/ initialisize value in the map 
        }
        if (type == 2)
        {
            myMap.erase(name);
        }
        if (type == 3)
        {
            itr = myMap.find(name);
            if ((itr != myMap.end()))
            {
                cout << myMap[name] << endl;
            }
            else
            {
                cout << '0' << endl;
            }
        }
    }

    return 0;
}