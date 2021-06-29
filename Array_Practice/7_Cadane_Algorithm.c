//cadane's algorithm: find the maximum sum of a array's subarray

#include <stdio.h>

void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

int main()
{
    int arr[] = {5, -4, -2, 6, -1};
    //           4 2 -3 1 6
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    int max = maxSumSubArray(arr, size);
    printf("The sum of the maximum subarray is %d\n", max);
    return 0;
}
