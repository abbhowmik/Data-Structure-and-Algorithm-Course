#include <stdio.h>

int multiply(int size, int Res[], int j)
{
    int carry = 0;
    for (int i = 0; i < size; i++)
    {
        int product = Res[i] * j + carry;
        Res[i] = product % 10;
        carry = product / 10;
    }
    while (carry)
    {
        Res[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
    return size;
}

int factorial(int number)
{
    int Res[1000];
    int size = 1;
    Res[0] = 1;
    for (int i = 2; i <= number; i++)
    {
        size = multiply(size, Res, i);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d", Res[i]);
    }
}
int main()
{
    factorial(5);

    return 0;
}