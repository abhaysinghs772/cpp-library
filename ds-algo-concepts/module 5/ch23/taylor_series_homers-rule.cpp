#include <iostream>
using namespace std;

// HOMER's rule
// e ^ x = 1 + [x[1 + x / 2 [1 + x / 3 [1 + x / 4]]]]

// iteratively
// int main()
// {
//     double x,n;
//     x=3;
//     n=4;
//     double s =1;
//     for(;n>0; n--)
//     {
//         s = 1+ (x*s)/n;
//     }
//     cout << s;
//     return 0;
// }

// recursively

double e(double x, double n )
{
    static double s =1;
    if(n == 0)
        return s;

    s=1 + (x*s)/n;
    return e(x,n-1);    
}

int main()
{
    cout << e(3, 4);

    return 0;
}