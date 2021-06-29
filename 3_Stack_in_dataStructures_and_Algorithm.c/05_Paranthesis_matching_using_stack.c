#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
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

void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
        return -1; // if we dont write the return then there is no problem
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int paranthesisMatch(char *expression)
{
    struct stack *sp;
    sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 50;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] == '(')
        {
            push(sp, '(');
        }
        else if (expression[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char *exp = "())((5)*45(56)(*)(5454*54)()()";
    if (paranthesisMatch(exp))
    {
        printf("The paranthesis is matching\n");
    }
    else
    {
        printf("The paranthesis is not matching\n");
    }

    return 0;
}
