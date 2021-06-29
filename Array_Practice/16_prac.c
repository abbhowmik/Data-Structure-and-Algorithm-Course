// Rearrange array in alternating positive and negative items with O(1) space complexcity

#include <stdio.h>

void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void alternate(int a[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (a[i] < 0 && a[j] > 0)
        {
            swap(&a[i], &a[j]);
            i++;
            j--;
        }
        else if (a[i] > 0 && a[j] < 0)
        {
            i++;
            j--;
        }
        else if (a[i] > 0)
        {
            i++;
        }
        else if (a[j] < 0)
        {
            i--;
        }
    }
    if (i == 0 && i == size)
    {
        printf("%d \n", a[i]);
    }
    else
    {
        int k = 0;
        while (k < size && i < size)
        {
            swap(&a[k], &a[i]);
            k = k + 2;
            i++;
        }
    }
}

int main()
{
    int arr[] = {3, -1, -6, 4, 1, -3, 9, -6};
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    printf("\n");
    alternate(arr, size);
    arrayTraversal(arr, size);

    return 0;
}
