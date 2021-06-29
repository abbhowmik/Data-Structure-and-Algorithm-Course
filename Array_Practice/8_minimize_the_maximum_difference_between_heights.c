#include <stdio.h>
#include <math.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

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

int difference(int arr[], int size, int k)
{
    SelectionSort(arr, size);

    // int A[] = {3, 10, 12, 16, 20};

    int ans = arr[size - 1] - arr[0];
    int smallest = arr[0] + k;
    int largest = arr[size - 1] - k;

    int mi, ma;
    for (int i = 0; i < size - 1; i++)
    {
        mi = fmin(smallest, arr[i + 1] - k);
        ma = fmax(largest, arr[i] + k);
        if (mi < 0)
            continue;
        ans = fmin(ans, ma - mi);
    }
    return ans;
}

int main()
{

    // int A[] = {3, 10, 12,16, 20};
    int A[] = {3, 10, 12, 20, 16};
    int n = sizeof(A) / sizeof(int);
    int k = 3;
    printArray(A, n);
    SelectionSort(A, n);
    printArray(A, n);
    int diff = difference(A, n, k);
    printf("The difference is %d\n", diff);

    return 0;
}
