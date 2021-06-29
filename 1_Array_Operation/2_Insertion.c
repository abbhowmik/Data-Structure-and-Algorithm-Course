#include <stdio.h>

void display(int arr[], int n)
{
    // traversal operation of the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
        printf("INsertion failed");
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        printf("Insertion successful\n");
        return 1;
    }
}

int main()
{
    int arr[100] = {3, 54, 65, 4, 5};
    int size = 5, element = 67, index = 3;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);

    return 0;
}