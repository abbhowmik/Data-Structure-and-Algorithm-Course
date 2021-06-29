
#include <stdio.h>

void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void checkZeroSubArray(int a[], int n)
{
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            if (sum == 0)
            {
                f == 1;
                break;
            }
        }
        if (f == 1)
        {
            break;
        }
    }
    if (f == 1)
    {
        printf("Yes, Zero is found subarray in subarray");
    }
    else
    {
        printf("Yes, Zero is found subarray in subarray");
    }
}

int maxSumSubArray(int arr[], int size)
{
    int max_sum = 0;
    int cur_sum = 0;
    for (int i = 0; i < size; i++)
    {
        cur_sum = cur_sum + arr[i];
        if (cur_sum > max_sum)
        {
            max_sum = cur_sum;
        }
        if (cur_sum < 0)
        {
            cur_sum = 0;
        }
    }
    return max_sum;
}

int minSumSubArray(int arr[], int size)
{
    int min_sum = 0;
    int cur_sum = 0;
    for (int i = 0; i < size; i++)
    {
        cur_sum = cur_sum + arr[i];
        if (cur_sum < min_sum)
        {
            min_sum = cur_sum;
        }
        if (cur_sum > 0)
        {
            cur_sum = 0;
        }
    }
    return min_sum;
}

int main()
{
    int arr[] = {5, -4, -2, 6, -1};
    //           4 2 -3 1 6
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    int max = maxSumSubArray(arr, size);
    int min = minSumSubArray(arr, size);
    // if ((max + min) == 0)
    // {
    //     printf("Yes Zero is found\n");
    // }
    // else
    // {
    //     printf("Zero is not found");
    // }

    checkZeroSubArray(arr, size);

    return 0;
}
