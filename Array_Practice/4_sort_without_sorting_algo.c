#include <stdio.h>

void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *a, int *b);
void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;

    while (mid <= hi)
    {
        switch (a[mid])
        {
        case 0:
            swap(&a[lo++], &a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&a[mid], &a[hi--]);
            break;
        }
    }
}

/* UTILITY FUNCTIONS */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int arr[] = {1, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    printf("\n");
    sort012(arr, size);
    arrayTraversal(arr, size);

    return 0;
}