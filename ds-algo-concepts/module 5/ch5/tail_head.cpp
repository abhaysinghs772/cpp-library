#include <iostream>
using namespace std;

// TAIL RECURSION
void func1(int n)
{
    if (n>0)
    {
        // printf("%d",n);
        cout << n << " ";
        func1(n-1);
    }
}

// HEAD RECURSION
void func2(int n)
{
    if (n>0)
    {
        func2(n-1);
        // printf("%d",n);
        cout << n << " ";
    }
    
}

int main()
{
    int x = 3;
    func1(x);
    cout<< endl;
    func2(x);
    return 0;
}  