// #include <stdio.h>

// int isSubset(int arr1[], int arr2[],
//              int m, int n)
// {
//     int i = 0;
//     int j = 0;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             if (arr2[i] == arr1[j])
//                 break;
//         }
//         if (j == m) // it means theat the loop is now end position and the element is not found
//             return 0;
//     }
//     return 1;
// }

// int main()
// {
//     int arr1[] = {11, 1, 13, 21, 3, 7};
//     int arr2[] = {11, 3, 56, 7, 1};

//     int m = sizeof(arr1) / sizeof(arr1[0]);
//     int n = sizeof(arr2) / sizeof(arr2[0]);

//     if (isSubset(arr1, arr2, m, n))
//         printf("arr2[] is subset of arr1[] ");
//     else
//         printf("arr2[] is not a subset of arr1[]");

//     return 0;
// } // here time complexcity is O(n^2)

// another approach which time complexcity (mlogm + nlogn)
#include <stdio.h>
void bubbleSort(int *arr, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        isSorted = 1;
        // printf("Working the pass No. %d\n", i + 1);
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

int isSubset(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    if (m < n)
    {
        return 0;
    }
    bubbleSort(arr1, m);
    bubbleSort(arr2, n);
    while (i < n && j < m)
    {
        if (arr1[j] < arr2[i])
            j++;
        else if (arr1[j] == arr2[i])
        {
            j++;
            i++;
        }
        else if (arr1[j] > arr2[i])
            return 0;
    }

    return (i < n) ? 0 : 1;
}

// Driver Code
int main()
{
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 3, 7, 1};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, arr2, m, n))
        printf("arr2[] is subset of arr1[] ");
    else
        printf("arr2[] is not a subset of arr1[] ");

    return 0;
}