#include <iostream>
using namespace std;

/* time complexity = O(n)

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return (power(base, exponent - 1) * base);
    }
}
*/

// reducing time complexity of above program
// int power(int base, int exponent)
// {
//     if (exponent == 0)
//     {
//         return 1;
//     }
//     else if (exponent % 2 == 0)
//     {
//        return (power(base*base, exponent/2)) ;
//     }
//     else
//     {
//         return base*(power(base*base,(exponent)/2));
//     }
    
// }

// iterative approach => solve this 

// int power(int base, int expo)
// {
//     int result;
//     for (int i = 1; i <= expo; i++)
//     {
//         base = base * base; 
//     }
    
// }

int main()
{
    int r;
    // r = power(2, 7); // base==2 , exponent == 4
    cout << r;

    return 0;
}