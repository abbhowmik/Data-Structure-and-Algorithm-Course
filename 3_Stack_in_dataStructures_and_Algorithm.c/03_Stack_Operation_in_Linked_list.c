// stack follows the LIFO(last in first out) rules

// stack by linked list

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
        int x = n->data;
        *top = (*top)->next;
        free(n);
        return x;
    }
}

int main()
{
    struct Node *top = NULL;
    top = push(top, 5);
    top = push(top, 7);
    top = push(top, 89);
    top = push(top, 100);

    linkedlistTraversal(top);
    // printf("\n");
    int element = pop(&top); // we send the actual address because if we change the top's vlaue from the pop function, the value is not reflected here
    //                          // we can make top into a global funciton
    printf("Popped element is %d\n", element);
    linkedlistTraversal(top);

    return 0;
}