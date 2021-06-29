// we can buy and sell multiple time in a day

#include <stdio.h>
#include <math.h>

void arrayTraversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int stockBuyAndSellMultipleTime(int arr[], int size)
{
    int profit = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}
int main()
{
    int arr[] = {5, 2, 6, 1, 4, 7, 3, 6};
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    int pft = stockBuyAndSellMultipleTime(arr, size);
    printf("The maximum profit is: %d\n", pft);

    return 0;
}
