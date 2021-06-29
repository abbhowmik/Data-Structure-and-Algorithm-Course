#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int chocolateDistribution(int a[], int n, int m)
{
    sort(a, a + n);
    int min = INT_MAX;
    for (int i = 0; i + m - 1 < n; i++)
    {
        int diff = a[i + m - 1] - a[i];
        if (diff < min)
        {
            min = diff;
        }
    }
    return min;
}

int main()
{
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    printf("The difference between maximum and minimum number of chocolete get by the students is: %d", chocolateDistribution(arr, size, x));

    return 0;
}