// 832. Flipping an Image

// Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.

// To flip an image horizontally means that each row of the image is reversed.

// For example, flipping [1,1,0] horizontally results in [0,1,1].
// To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

// For example, inverting [0,1,1] results in [1,0,0].

// Example 1:

// Input: image = [[1,1,0],[1,0,1],[0,0,0]]
// Output: [[1,0,0],[0,1,0],[1,1,1]]
// Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
// Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
// Example 2:

// Input: image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
// Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
// Explanation: First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
// Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]

// Constraints:

// n == image.length
// n == image[i].length
// 1 <= n <= 20
// images[i][j] is either 0 or 1.

#include <bits/stdc++.h>
using namespace std;
// int a[] = {1, 2, 3, 4, 10 , 11};
// int n = sizeof(a) / sizeof(int);
// // result = {4,3,2,1}

// for (int i = 0; i < n / 2; i++)
// {
//     int temp = a[i];
//     a[i] = a[n - i - 1];
//     a[n - i - 1] = temp;
// }

// for (int i = 0; i < n; i++)
// {
//     cout << a[i] << " ";
// }

int main()
{
    // Initialize a vector in C++
    // vector<int> vect{ 10, 20, 30 };

    vector<vector<int>> imag{{1, 0, 0}, {0, 1, 0}, {1, 1, 1}};
    int n = imag.size();
    // flip horizontally
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (imag[i].size()) / 2; j++)
        {
            int temp = 0;
            temp = imag[i][j];
            imag[i][j] = imag[i][n - j - 1];
            imag[i][n - j - 1] = temp;
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (imag[i].size()); j++)
        {
            cout << imag[i][j] << " ";
        }
        cout << endl;
    }

    // invert
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (imag[i].size()); j++)
        {
            if (imag[i][j] == 0)
            {
                imag[i][j] = 1;
            }
            else if (imag[i][j] == 1)
            {
                imag[i][j] = 0;
            }
        }
    }
    
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (imag[i].size()); j++)
        {
            cout << imag[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}