#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// void SelectionSort(int *a, int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = i, temp;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[j] < a[min])
//             {
//                 min = j;
//             }
//         }
//         temp = a[i];
//         a[i] = a[min];
//         a[min] = temp;
//     }
// }

void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        int temp;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{

    int A[] = {2, 55, 43, 2, 5, 4};
    int n = sizeof(A) / sizeof(A[0]);
    printArray(A, n);
    SelectionSort(A, n);
    printArray(A, n);

    return 0;
}
