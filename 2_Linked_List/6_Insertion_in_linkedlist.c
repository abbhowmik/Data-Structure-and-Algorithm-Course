#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkListTravel(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// case 1
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// case 2
struct Node *insertAtIndex(struct Node *head, int index, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// case 3
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// case 4
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocate memory for nodes in the linked list in Heap
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

    printf("Linked list before insertion\n");
    linkListTravel(head);
    // printf("Linked list after insertion\n");
    // head = insertAtFirst(head, 56);
    // linkListTravel(head);
    printf("\n");
    // head = insertAtIndex(head, 2, 100);
    // head = insertAtEnd(head, 200);
    head = insertAfterNode(head, third, 500);
    linkListTravel(head);

    return 0;
}