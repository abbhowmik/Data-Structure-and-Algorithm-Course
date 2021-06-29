#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int countInversion(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 5, 4, 3, 2, 5};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    printf("\n");

    int ct = countInversion(arr, size);
    printf("The count is: %d", ct);

    return 0;
}