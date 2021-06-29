// we have to firstly buy and then sell a stock in such a way that the profit is maximum(just one time)
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

int stockBuyAndSell(int arr[], int size)
{
    int profit = 0;
    int minSoFar = 100;
    int diff;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minSoFar)
        {
            minSoFar = arr[i];
        }
        diff = arr[i] - minSoFar;
        profit = fmax(profit, diff);
    }
    return profit;
}
int main()
{
    int arr[] = {5, 3, 1, 2, 9, 7};
    int size = sizeof(arr) / sizeof(int);
    arrayTraversal(arr, size);
    int pft = stockBuyAndSell(arr, size);
    printf("The maximum profit is: %d\n", pft);

    return 0;
}
