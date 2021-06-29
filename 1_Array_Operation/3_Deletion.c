#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indDeletion(int arr[], int size, int index)
{
    // deletion of array's element
    if (size == 0)
    {
        printf("Deletion failed\n");
    }
    else
    {
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}

int main()
{
    int arr[45] = {3, 45, 6, 56, 3};
    int size = 5, index = 1;
    display(arr, size);
    indDeletion(arr, size, index);
    size = size - 1;
    display(arr, size);

    return 0;
}