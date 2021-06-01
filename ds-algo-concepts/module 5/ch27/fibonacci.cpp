#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 ..........n

int F[10];

int rfib(int n) // O(2^n)
{
    if (n <= 1)
        return n;
    else
    {
        return (rfib(n - 2) + rfib(n - 1));
    }
}

int mfib(int n) // <= O(n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
        {
            F[n - 2] = mfib(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = mfib(n - 1);
        }
    }

    return (F[n - 2] + F[n - 1]);
}

int main()
{
    // iterative  O(n)
    // int a =0, b =1, c, n=7;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a << " ";
    //     c = a+b;
    //     a = b;
    //     b = c;
    // }

    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    cout << rfib(9) << " " << endl;
    cout << mfib(9) << " ";

    return 0;
}