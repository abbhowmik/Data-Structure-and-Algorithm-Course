#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1; // 1 means true
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("StackOverflow!, Cannot push %d element in the stack as the stack is full\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow!, Cannot pop from the stack as the stack is Empty\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// by peak operation, we can print the value of the stack element placed in index position
int peak(struct stack *sp, int i)
{
    int arrInd = sp->top - i;
    if (arrInd < 0)
    {
        printf("Not a valid position\n");
        return -1;
    }
    else
    {
        return sp->arr[arrInd];
    }
}
// int peak(struct stack *sp, int i)
// {
//     int arrInd = sp->top - i + 1;
//     if (arrInd < 0)
//     {
//         printf("Not a valid position\n");
//         return -1;
//     }
//     else
//     {
//         return sp->arr[arrInd];
//     }
// }

int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int stackBottom(struct stack *ptr)
{
    return ptr->arr[0];
}

int main()
{
    struct stack *sp; // it is a stack structure pointer, that stores the address of the stack's instances value
    sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 8;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    printf("Before pushing, Empty: %d\n", isEmpty(sp));
    printf("Before pushing, Full: %d\n", isFull(sp));

    printf("\n");

    push(sp, 2);
    push(sp, 9);
    push(sp, 78);
    push(sp, 45);
    push(sp, 39);
    push(sp, 5);
    push(sp, 15);
    push(sp, 52);
    // push(sp, 100); // here overflow happened

    for (int j = 0; j <= sp->top; j++)
    {
        printf("The value at position %d is %d\n", j + 1, peak(sp, j));
    }
    // for (int j = 1; j <= sp->top + 1; j++)
    // {
    //     printf("The value at position %d is %d\n", j, peak(sp, j));
    // }
    printf("\n");

    printf("The Top most Element of the stack is: %d\n", stackTop(sp));
    printf("The Bottom Element of the stack is: %d\n", stackBottom(sp));

    return 0;
}