// // move all the negative element in the one side of the array
// // input = {2, -3 , 423,-5, 4, -1, 3, -9}
// // output= {2, 423, 4, 3, -3, -5, -1, -9}

// #include <stdio.h>

// void arrayTraversal(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// void move(int arr[], int size, int a[], int b[])
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < size)
//     {
//         if (arr[i] >= 0)
//         {
//             a[j] = arr[i];
//             i++;
//             j++;
//         }
//         else if (arr[i] < 0)
//         {
//             b[k] = a[i];
//             i++;
//             k++;
//         }
//     }
// }

// void merge(int arr[], int a[], int b[])
// {
//     int SIZE = 8;
//     int c[45];
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < SIZE)
//     {
//         if (a[i] > b[j])
//         {
//             c[k] = a[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             c[k] = b[j];
//             k++;
//             j++;
//         }
//     }
//     while (k != SIZE)
//     {
//         c[k] = b[j];
//         k++;
//         j++;
//     }
// }

// int main()
// {
//     int arr[] = {3, -1, 6, 4, -2, 1, 9, -6};
//     int a[34];
//     int b[34];
//     int size = sizeof(arr) / sizeof(int);
//     arrayTraversal(arr, size);
//     printf("\n");
//     move(arr, size, a, b);
//     merge(arr, a, b);
//     arrayTraversal(arr, size);

//     return 0;
// }

// // move all the negative element in the one side of the array
// // input = {2, -3 , 423,-5, 4, -1, 3, -9}
// // output= {2, 423, 4, 3, -3, -5, -1, -9}

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

void moveElement(int arr[], int size)
{
    int pivot = 0;
    int i = -1;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
}

int main()
{
    int arr[] = {3, -1, 6, -4, 1, -3, 9, -6};
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    printf("\n");
    moveElement(arr, size);
    arrayTraversal(arr, size);

    return 0;
}
