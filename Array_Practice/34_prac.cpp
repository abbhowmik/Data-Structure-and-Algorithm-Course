#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int rainWaterTripping(int arr[], int n)
{
    int left[n];
    int right[n];

    left[0] = arr[0];
    right[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (min(left[i], right[i])) - arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {3, 1, 2, 4, 0, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Rainwater can stay  in maximum %d blocks", rainWaterTripping(arr, size));

    return 0;
}