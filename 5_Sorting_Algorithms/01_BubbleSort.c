#include <stdio.h>

// by default, Bubble sort is not Adaptive: if there was an sorted array then, if there were needed less time
// but by the following step, we can convert it into adaptive
// this code is a mixed with adaptive and for general

void displayArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int *arr, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        isSorted = 1;
        printf("Working the pass No. %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    // int A[] = {2, 4, 7, 8, 10};
    int A[] = {4, 34, 3, 1, 2};
    int size = 5;

    displayArray(A, size); // display before sorting

    bubbleSort(A, size); // sort the array
    // bubbleSort(A, size); // sort the array

    displayArray(A, size); // display the sorted array

    return 0;
}
// void bubbleSortAdaptive(int *A, int n)
// {
//     int temp;
//     int isSorted = 0;
//     for (int i = 0; i < n - 1; i++) // For number of pass
//     {
//         printf("Working on pass number %d\n", i + 1);
//         isSorted = 1;
//         for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
//         {
//             if (A[j] > A[j + 1])
//             {
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//                 isSorted = 0;
//             }
//         }
//         if (isSorted)
//         {
//             return;
//         }
//     }
// }
// void bubbleSort(int *A, int n)
// {
//     int temp;
//     int isSorted = 0;
//     for (int i = 0; i < n - 1; i++) // For number of pass
//     {
//         printf("Working on pass number %d\n", i + 1);
//         for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
//         {
//             if (A[j] > A[j + 1])
//             {
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     // int A[] = {12, 54, 65, 7, 23, 9};
//     int A[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
//     // int A[] = {1, 2, 3, 4, 5, 6};
//     int n = 11;
//     printArray(A, n); // Printing the array before sorting
//     bubbleSort(A, n); // Function to sort the array
//     printArray(A, n); // Printing the array before sorting
//     return 0;
// }
