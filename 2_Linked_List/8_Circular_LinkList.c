#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    // while (ptr != head)
    // {
    //     printf("Element: %d\n", ptr->data);
    //     ptr = ptr->next;
    // }

    // another method
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next; // or head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    linkedListTraversal(head);
    printf("After\n");
    head = insertAtFirst(head, 100);
    // head = insertAtFirst(head, 400);
    linkedListTraversal(head);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedListTraversal(struct Node *head)
// {
//     struct Node *ptr = head;
//     do
//     {
//         printf("Element is %d\n", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
// }

// struct Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;

//     struct Node *p = head->next;
//     while (p->next != head)
//     {
//         p = p->next;
//     }
//     // At this point p points to the last node of this circular linked list

//     ptr->next = p->next;
//     p->next = ptr;
//     head = ptr;
//     return head;
// }

// int main()
// {

//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // Allocate memory for nodes in the linked list in Heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // Link first and second nodes
//     head->data = 4;
//     head->next = second;

//     // Link second and third nodes
//     second->data = 3;
//     second->next = third;

//     // Link third and fourth nodes
//     third->data = 6;
//     third->next = fourth;

//     // Terminate the list at the third node
//     fourth->data = 1;
//     fourth->next = head;

//     printf("Circular Linked list before insertion\n");
//     linkedListTraversal(head);
//     printf("Circular Linked list after insertion\n");
//     head = insertAtFirst(head, 54);
//     head = insertAtFirst(head, 58);
//     head = insertAtFirst(head, 59);
//     linkedListTraversal(head);
//     return 0;
// }