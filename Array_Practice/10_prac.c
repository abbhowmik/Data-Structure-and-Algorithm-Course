// Merge 2 sorted arrays without using Extra space.

#include <stdio.h>

void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void merge(int ar1[], int ar2[], int m, int n)
{
    // of ar2[] starting from the last element
    for (int i = n - 1; i >= 0; i--)
    {
        /* Find the smallest element greater than ar2[i].
        Move all elements one position ahead till the
        smallest greater element is not found */
        int j, last = ar1[m - 1];
        for (j = m - 2; j >= 0 && ar1[j] > ar2[i]; j--)
            ar1[j + 1] = ar1[j];

        // If there was a greater element
        if (j != m - 2 || last > ar2[i])
        {
            ar1[j + 1] = ar2[i];
            ar2[i] = last;
        }
    }
}

int main()
{
    int ar1[] = {3, 8, 9, 10, 12};
    int ar2[] = {2, 5, 7};
    int m = sizeof(ar1) / sizeof(int);
    int n = sizeof(ar2) / sizeof(int);
    arrayTraversal(ar1, m);
    printf("\n");
    arrayTraversal(ar2, n);
    merge(ar1, ar2, m, n);
    printf("\n");
    arrayTraversal(ar1, m);
    printf("\n");
    arrayTraversal(ar2, n);

    return 0;
}