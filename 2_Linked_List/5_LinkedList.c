#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; // the next pointer points the same type of node
};

void linkListTravel(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocating memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second nodes
    head->data = 8;
    head->next = second;

    // link second and third nodes
    second->data = 78;
    second->next = third;

    // link third and fourth nodes;
    third->data = 45;
    third->next = fourth;

    // terminate the list at the fourth nodes
    fourth->data = 67;
    fourth->next = NULL;

    linkListTravel(head);

    return 0;
}