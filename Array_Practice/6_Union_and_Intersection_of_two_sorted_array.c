#include <stdio.h>
#include <stdlib.h>

void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void unionOfTwoSortedArray(int a[], int b[], int aSize, int bSize)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int c[34];
    while (i < aSize && j < bSize)
    {
        if (a[i + 1] == a[i])
        {
            i++;
            i++;
        }
        if (b[j + 1] == b[j])
        {
            j++;
            j++;
        }
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }

        else if (a[i] == b[j])
        {
            c[k] = a[i];
            i++;
            j++;
            k++;
        }

        else if (a[i] > b[j])
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < aSize)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < bSize)
    {
        c[k] = b[j];
        k++;
        j++;
    }
    // printf("The Union form of the array is\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}

void intersectionOfTwoSortedArray(int a[], int b[], int aSize, int bSize)
{
    int c[34];
    int k = 0;
    for (int i = 0; i < aSize; i++)
    {
        for (int j = 0; j < bSize; j++)
        {
            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
                j++;
            }
        }
    }
    printf("The intersection of two sorted array is\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}

int main()
{

    int a[] = {1, 2, 3, 4, 5, 7, 8, 10};
    int aSize = sizeof(a) / sizeof(int);
    int b[] = {6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17};
    int bSize = sizeof(b) / sizeof(int);
    traversal(a, aSize);
    traversal(b, bSize);
    unionOfTwoSortedArray(a, b, aSize, bSize);
    printf("\n");
    intersectionOfTwoSortedArray(a, b, aSize, bSize);

    return 0;
}