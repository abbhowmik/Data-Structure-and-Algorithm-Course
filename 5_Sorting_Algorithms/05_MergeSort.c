#include <stdio.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int a[], int mid, int low, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int b[100];
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}
void mergeSort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, mid, low, high);
    }
}

int main()
{
    int A[] = {3, 45, 6, 67, 3, 5, 16, 56, 4, 34, 34, 6, 76, 7, 78, 88, 6, 5, 54, 343, 100000, 56, 9, 0, 10};
    int n = sizeof(A) / sizeof(A[0]);
    printArray(A, n);
    mergeSort(A, 0, n - 1);
    printArray(A, n);

    return 0;
}