// find duplicate in an array of N + 1 Integers
#include <stdio.h>

void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int findDuplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                return arr[i];
            }
        }
    }
}

int main()
{
    int arr[] = {2, 3, 4, 1, 6, 1};
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    printf("\n");
    int duplicate = findDuplicate(arr, size);
    // int duplicate1 = findDuplicate(arr, size);
    printf("%d", duplicate);
    // printf("%d", duplicate1);

    return 0;
}