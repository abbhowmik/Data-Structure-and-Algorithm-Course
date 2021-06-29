#include <stdio.h>
#include <math.h>

void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sbsqnc(int arr[], int size)
{
    int count = 1;
    int ans = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1] + 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }
        ans = fmax(ans, count);
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 7, 8, 101, 102, 103, 104, 105};
    int size = sizeof(arr) / sizeof(int);
    traversal(arr, size);
    int longestVal = sbsqnc(arr, size);
    printf("The longest consicutive subsequence of the array is: %d", longestVal);
    return 0;
}

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int a = 2;
//     int b = 3;
//     int c = fmax(a, b);
//     printf("The maximum is %d", c);
//     return 0;
// }