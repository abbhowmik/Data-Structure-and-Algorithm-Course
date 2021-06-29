#include <stdio.h>

// int countLength(char st[])
// {
//     int count = 0;
//     char *ptr = st;
//     while (*ptr != '\0')
//     {
//         count++;
//         ptr++;
//     }
//     return count;
// }

void copyString(char st[], int length)
{
    char *ptr = st;
    char str[23];
    for (int i = 0; i < length; i++)
    {
        str[i] = st[i];
    }
    printf("The copied string is %s\n", str);
}

int main()
{
    // char c[] = "ashis";
    // printf("The length of the string by not using strlen is %d\n", countLength(c));
    // return 0;
    char st[] = "Ashis";
    int length = 5;
    printf("The original string is %s\n", st);
    copyString(st, length);
}