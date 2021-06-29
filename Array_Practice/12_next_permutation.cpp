// to find the next grater permutation
#include <stdio.h>

void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reversedArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        swap(&arr[size - i - 1], &arr[i]);
    }
}

void reverseFromIndex(int arr[], int index, int size)
{
    for (int i = index; i < size / 2; i++)
    {
        swap(&arr[i], &arr[size - i]);
    }
}

void nextPermutation(int a[], int size)
{
    int Idx = -1;
    for (int i = size - 1; i < 0; i--)
    {
        if (a[i] > a[i - 1])
        {
            Idx = i;
            break;
        }
    }
    if (Idx == -1)
    {
        reversedArray(a, size);
    }
    else
    {
        int prev = Idx;
        for (int i = Idx + 1; i < size; i++)
        {
            if (a[i] > a[Idx - 1] && a[i] <= a[prev])
            {
                prev = i;
            }
        }
        swap(&a[Idx - 1], &a[prev]);
        // reverseFromIndex(a, Idx, size);
    }
}
int main()
{
    // int a = 2;
    // int b = 3;
    // printf("%d %d", a, b);
    // swap(&a, &b);
    // printf("\n");
    // printf("%d %d", a, b);
    // printf("\n");
    // int arr[] = {1, 4, 5, 4};
    int arr[] = {1, 2, 3, 6, 5, 4};
    // int arr[] = {1, 2, 4, 6, 5, 3};
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);

    // arrayTraversal(arr, size);
    nextPermutation(arr, size);
    printf("\n");
    arrayTraversal(arr, size);
    // reversedArray(arr, size);
    // printf("\n");
    // arrayTraversal(arr, size);
    // reverseFromIndex(arr, 3, size);

    //     printf("\n");
    // arrayTraversal(arr, size);
    return 0;
}
