#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
// void insertionSort(int a[], int n)
// {
//     int key;
//     int j;
//     for (int i = 1; i <= n - 1; i++)
//     {
//         key = a[i];

//         j = i - 1;
//         while (j >= 0 && a[j] > key) // it is decending order sorting, ,,,for accending order, we can write a[j]<key
//         {
//             a[j + 1] = a[j];
//             j--;
//         }
//         a[j + 1] = key;
//     }
// }

void insertionSort(int arr[], int size)
{
    int key;
    int j;
    for (int i = 0; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int a[] = {12, 54, 65, 7, 23, 9, 54, 5, 343, 4, 3, 434, 4, 34, 5};
    int n = sizeof(a) / sizeof(a[0]);
    printArray(a, n);
    insertionSort(a, n);
    printArray(a, n);
    return 0;
}