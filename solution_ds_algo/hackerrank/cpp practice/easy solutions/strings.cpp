#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Complete the program
    string a;
    string b;
    string c;

    char d;

    // printing length
    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;

    // concatenate
    c = a + b;
    cout << c << endl;

    // swapping
    swap(a[0], b[0]);

    cout << a << " " << b;

    return 0;
}