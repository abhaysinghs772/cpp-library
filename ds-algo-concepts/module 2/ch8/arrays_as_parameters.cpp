#include <iostream>
#include <cstdlib>

using namespace std;

/************************ PASSING ARRAY AS PARAMETER *****************************************/

// void func(int A[], int n)
// void func(int *A, int n) // array can also be passed by * symbol
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout<< A[i] << " ";
//     }
    
// }

/************************ RETURNING ARRAY TO MAIN FUNCTION ************************************/
int* func(int n)
{
    int *p;
    p = (int*)malloc(n*sizeof(int));
    return p;
}


int main()
{
    //1. PASSING ARRAY AS PARAMETER

    // int A[5]= {1,2,3,4,5};
    // func(A,5);

    //2. RETURNING ARRAY TO MAIN FUNCTION
    int *A;
    A = func(5);

    return 0;
}