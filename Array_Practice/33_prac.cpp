#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findTriplet(int a[], int size, int x)
{
    sort(a, a + size);
    int ans = 0;
    for (int i = 0; i < size - 2; i++)
    {
        int l = i + 1;
        int r = size - 1;
        while (l < r)
        {
            if (a[i] + a[r] + a[l] == x)
            {
                ans++;
                break;
            }
            else if (a[i] + a[r] + a[l] < x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return ans;
}

int main()
{

    int arr1[] = {3, 2, 1, 4, 5};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d triplet is found in the array", findTriplet(arr1, m, 10));

    return 0;
}