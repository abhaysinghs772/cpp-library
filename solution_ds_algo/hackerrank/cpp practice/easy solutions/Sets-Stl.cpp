// SETS
// set<int>::iterator itr=s.find(val); //Gives the iterator to the element val if it is found otherwise returns s.end() .

//Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    set<int> mySet;
    set<int>::iterator itr;

    for (int i = 0; i < q; i++)
    {
        int y, x;
        cin >> y >> x;
        if (y == 1)
        {
            mySet.insert(x);
        }
        if (y == 2)
        {
            mySet.erase(x);
        }
        if (y == 3)
        {
            itr = mySet.find(x);
            if (mySet.find(x) != mySet.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}

// logic for 3rd query can also be written as

//   {
//             if(s.end()==s.find(x))
//                 cout<<"No"<<endl;
//             else
//                 cout<<"Yes"<<endl;
//         }

//    }
