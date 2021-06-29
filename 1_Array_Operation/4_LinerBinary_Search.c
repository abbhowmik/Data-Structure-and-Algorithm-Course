#include <stdio.h>

// int linerSearch(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

int binarySearch(int arr[], int size, int element)
{
    // binary search is just applied for a sorted array
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // linerSearch(for a unsort array)
    // int arr[] = {6, 34, 6, 7, 56, 5, 89, 5, 434, 3};
    // int element = 3;
    // int size = sizeof(arr) / sizeof(int);
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int searchIndex1 = linerSearch(arr, size, element);
    // printf("%d is found in %d index", element, searchIndex1);

    int arr[] = {5, 6, 7, 8, 9, 15, 67, 78};
    int element = 9;
    int size = sizeof(arr) / sizeof(int);
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d is found in %d index", element, searchIndex);

    return 0;
}
