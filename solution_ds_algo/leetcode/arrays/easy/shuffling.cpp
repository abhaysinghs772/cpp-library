// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
//         vector<int> result;
//         for(int i = 0; i < n*2; i++)
//         {
//             if(i % 2 == 0) // if result's i is even 
//             {
//                 result.push_back(nums[i/2]); // then result's i is initialised by nums even place
//             }
//             else
//             {
//                 result.push_back(nums[n+i/2]);
//             }    
//         }
//         return result;
        
//     }
// };


// fASTER CODE THEN ABOVE'S ONE

// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
//         vector<int> result;
        // for(int i = 0; i < n*2; i++)
        // {
        //    i %2 ==0 ? result.push_back(nums[i/2]) : result.push_back(nums[n + i/2]);
        // }
//         return result;
        
//     }
// };


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int nums[] = {1, 2, 3, 4, 5, 6};
//     int size = sizeof(nums) / sizeof(int);
//     int n = size/2;

//     int shuffled[n*2];

//     for (int i = 0; i < n*2; i++)
//     {
//         if (i%2 == 0)
//         {
//             shuffled[i] = nums[i/2];
//         }
//         else
//         {
//             shuffled[i] = nums[n + i/2];
//         }
//     }
    
//     for (int j = 0; j < n*2; j++)
//     {
//         cout << shuffled[j] << " ";
//     }
    
//     return 0;
// }