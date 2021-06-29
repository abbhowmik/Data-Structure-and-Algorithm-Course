#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int maxElementOfArray(int *a, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

void countSort(int a[], int n)
{
    int i, j;

    // find the maximum element of the array a
    int max = maxElementOfArray(a, n);

    // creat a new array of max+1 size
    int *count = (int *)malloc((max + 1) * sizeof(int));

    // initialize the count's array's element to 0
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    // Increment the corresponding index in the count array
    for (i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }

    i = 0; // counter for the count array
    j = 0; // counter for the given array a

    while (i <= max)
    {
        if (count[i] > 0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{

    int a[] = {7, 90, 10, 3, 34, 34, 32, 3};
    int n = sizeof(a) / sizeof(a[0]);
    printArray(a, n);
    // printf("The maximum element of the array is %d\n", maxElementOfArray(a, n));
    countSort(a, n);
    printArray(a, n);

    return 0;
}