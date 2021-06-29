#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// this is takes O(n^2) time, next solution takes O(n) time, so look at the second code
// int minLenSubarray1(int a[], int size, int x)
// {
//     int len = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         int s = 0;
//         for (int j = i; j < size; j++)
//         {
//             s += a[j];
//             if (s > x)
//             {
//                 len = min(len, j - i + 1);
//             }
//         }
//     }
//     return len;
// }

// this is a solution of O(n) time complexcity
int minLenSubarray2(int a[], int n, int x)
{
    int len = INT_MAX;
    int i = 0;
    int j = 0;
    int s = 0;
    while (i <= j and j < n)
    {
        // 1, 4, 45, 6, 0, 19
        while (s <= x and j < n)
        {
            s += a[j];
            j++;
        }

        while (s > x and i < j)
        {
            len = min(len, j - i);
            s -= a[i];
            i++;
        }
    }
    return len;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 0, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 51;
    // printf("Minimum length subarray is: %d", minLenSubarray(arr, size, x));
    printf("Minimum length subarray is: %d", minLenSubarray2(arr, size, x));

    return 0;
}