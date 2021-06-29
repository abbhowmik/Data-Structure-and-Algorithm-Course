// find all pair of integer array whose sum is equal to given number
#include <stdio.h>

void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void findAllPairs(int arr[], int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int arr[] = {4, 2, 3, 6, 1};
    int size = sizeof(arr) / sizeof(int);
    int k = 1;
    arrayTraversal(arr, size);
    printf("\n");
    findAllPairs(arr, size, k);

    return 0;
}