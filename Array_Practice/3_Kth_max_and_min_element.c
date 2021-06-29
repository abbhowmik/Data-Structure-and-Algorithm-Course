// // K-th max element of the array
#include <stdio.h>
void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void maxElement(int arr[], int size, int k)
{
    printf("The No. %d maximum element of the array is %d", k, arr[size - k]);
}
void minElement(int arr[], int size, int k)
{
    printf("The No. %d minimum element of the array is %d", k, arr[0 + k - 1]);
}

int main()
{
    int arr[] = {4, 2, 3, 6, 1};
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    printf("\n");
    bubbleSort(arr, size);
    int k = 1;
    maxElement(arr, size, k);
    printf("\n");
    minElement(arr, size, k);
    return 0;
}
// // this code's time complexcity is (nlog(n))
