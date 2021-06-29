#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
}; // it is a abstract data type(ADT)

void creatArray(struct myArray *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int)); // reserve memory in heap not in stack, because stack's memory becomes destroyed after execution
}
void setValue(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;
    creatArray(&marks, 100, 5);
    setValue(&marks);
    show(&marks);

    return 0;
}
