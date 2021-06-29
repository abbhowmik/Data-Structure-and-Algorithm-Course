#include <stdio.h>

void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void rotateArrayCyclically(int a[], int size)
{
    int key = a[size - 1];
    int pivot = 0;
    int i = 0;
    for (int i = size - 2; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }

    a[pivot] = key;
}

int main()
{
    int arr[] = {4, 2, 3, 6, 1};
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    printf("\n");
    rotateArrayCyclically(arr, size);
    arrayTraversal(arr, size);

    return 0;
}