#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int top;
    int size;
    char *arr;
};

int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
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
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int precedence(char c)
{
    if (c == '*' || c == '/')
    {
        return 3;
    }
    else if (c == '+' || c == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isOperator(char c)
{
    if (c == '*' || c == '/' || c == '+' || c == '-')
    {
        return 1;
    }
    return 0;
}

char *infixToPostfix(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 20;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char)); // here +1 is because there is a null terminated character at the end
    int i = 0;                                                          // track infix traversal
    int j = 0;                                                          // track prefix append or addition
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    // char *infix = "x-y/x-k*d";
    char *infix = "p - q - r / a";
    printf("Postfix is:  %s", infixToPostfix(infix));

    return 0;
}
