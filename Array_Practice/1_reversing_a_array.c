#include <stdio.h>

void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void reversedArray(int arr[], int size)
{
    int a[45];
    for (int i = 0; i < size; i++)
    {
        a[size - i - 1] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int arr[] = {4, 2, 3, 6, 1};
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    printf("\n");
    printf("The reversed form of the array is:\n");
    reversedArray(arr, size);
    // arrayTraversal(arr, size);

    return 0;
}