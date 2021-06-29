#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *f = NULL;
struct Node *r = NULL;
int isEmpty(struct Node *f, struct Node *r)
{
    if (f == NULL)
    {
        return 1;
    }
    return 0;
}
int isFull(struct Node *f, struct Node *r)
{
    if (f == r)
    {
        return 1;
    }
    return 0;
}

void enqueue(int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue Overflow");
    }
    else
    {
        n->data = value;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
int dequeue()
{
    int value = -1;
    struct Node *ptr;
    if (f == NULL)
    {
        printf("Queue Underflow");
    }
    else
    {
        ptr = f;
        value = ptr->data;
        f = f->next;
        free(ptr);
    }
    return value;
}

int main()
{
    printf("Printing the element of the linklist\n");

    enqueue(23);
    enqueue(56);
    enqueue(90);
    enqueue(45);
    LinkedListTraversal(f);

    printf("Dequeue element is %d\n", dequeue());
    LinkedListTraversal(f);
    return 0;
}
