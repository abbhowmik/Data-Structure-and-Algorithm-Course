#include <stdio.h>
void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void maxElement(int arr[], int size)
{
    int maximum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    printf("The maximum element of the array is %d\n", maximum);
}

void minElement(int arr[], int size)
{
    int minimum;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    printf("The minimum element of the array is %d\n", minimum);
}

int main()
{
    int arr[] = {4, 2, 3, 6, 1, 5656};
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    printf("\n");
    maxElement(arr, size);
    minElement(arr, size);
    return 0;
}