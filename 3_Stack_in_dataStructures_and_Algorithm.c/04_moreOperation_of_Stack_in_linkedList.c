#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(struct Node *top, int position)
{
    struct Node *ptr = top;
    for (int i = 0; (i < position - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}
int stackTop(struct Node *top)
{
    return top->data;
}
int stackBottom(struct Node *top)
{
    struct Node *ptr = top;
    for (int i = 0; (i < 3); i++)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}

int main()
{
    struct Node *top = NULL;
    top = push(top, 5);
    top = push(top, 7);
    top = push(top, 89);
    top = push(top, 100);

    linkedlistTraversal(top);
    printf("\n");
    for (int i = 1; i <= 4; i++)
    {
        printf("Value at position %d is %d\n", i, peek(top, i));
    }

    printf("The Bottom element of the stack is %d", stackBottom(top));

    return 0;
}