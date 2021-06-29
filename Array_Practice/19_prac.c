// find maximum product subarray
#include <stdio.h>
#include <math.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int maProduct(int a[], int n)
{
    int product = a[0];
    int ma = a[0];
    int mi = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < 0)
        {
            swap(&mi, &ma);
            ma = fmax(a[i], ma * a[i]);
            mi = fmin(a[i], mi * a[i]);
            if (ma > product)
            {
                product = ma;
            }
        }
        if (a[i] >= a[i - 1] && a[i - 1] < 0 && a[i - 2] < 0)
        {
            if ((product * a[i]) >= product)
            {
                product = product * a[i];
            }
        }
    }
    return product;
}

int main()
{
    int arr[] = {5, -4, -2, 6, 1};
    int size = sizeof(arr) / sizeof(int);
    int mul = maProduct(arr, size);
    printf("The max product of the subarray is %d\n", mul);
    return 0;
}
