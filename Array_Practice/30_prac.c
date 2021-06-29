#include <stdio.h>

void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Count(int arr[], int N, int K)
{
    // Traverse the array
    for (int i = 0; i < N;)
    {
        int cnt = 1;
        while ((i + 1) < N && arr[i] == arr[i + 1])
        {
            cnt++;
            i++;
        }
        if (cnt > (N / K))
        {

            printf("%d ", arr[i]);
        }
        i++;
    }
}
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 5};
    int size = sizeof(arr) / sizeof(int);
    int k = 5;
    traversal(arr, size);
    Count(arr, size, k);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (int i = 1; i <= 5; i++)
//     {
//         printf("\n");
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//     }
//     return 0;
// }
