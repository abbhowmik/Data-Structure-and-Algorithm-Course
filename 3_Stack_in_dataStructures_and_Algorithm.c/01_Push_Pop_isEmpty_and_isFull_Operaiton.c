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
        printf("Pushed element is %d\n", val);
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow!, Cannot pop from the stack as the stack is Empty\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
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
    push(sp, 52); // pushed 8 value
    // push(sp, 100);
    printf("\n");

    printf("After pushing, Empty: %d\n", isEmpty(sp));
    printf("After pushing, Full: %d\n", isFull(sp));

    printf("\n");
    printf("Popped %d element from the stack\n", pop(sp));
    printf("Popped %d element from the stack\n", pop(sp));
    printf("Popped %d element from the stack\n", pop(sp));
    // printf("Popped %d element from the stack\n", pop(sp));
    // printf("Popped %d element from the stack\n", pop(sp));
    // printf("Popped %d element from the stack\n", pop(sp));
    // printf("Popped %d element from the stack\n", pop(sp));
    // printf("Popped %d element from the stack\n", pop(sp));
    printf("\n");

    printf("After pushing, Empty: %d\n", isEmpty(sp));
    printf("After pushing, Full: %d\n", isFull(sp));

    return 0;
}