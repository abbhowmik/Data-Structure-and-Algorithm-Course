#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// another method wrap all the nodes into a function
struct Node *creatNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->left = NULL;
    n->right = NULL;
    n->data = data;
    return n;
}

int main()
{
    /*
    // constracting the root node
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = 4;
    p->left = NULL;
    p->right = NULL;

    // constrating the second node
    struct Node *p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->data = 2;
    p1->left = NULL;
    p1->right = NULL;

    // constrating the third node
    struct Node *p2 = (struct Node *)malloc(sizeof(struct Node));
    p2->data = 6;
    p2->left = NULL;
    p2->right = NULL;

    // linking the node to the root node
    p->left = p1;
    p->right = p2;
    */

    // another method
    // constracting of root, second and third node
    struct Node *p = creatNode(4);
    struct Node *p1 = creatNode(3);
    struct Node *p2 = creatNode(6);
    p->left = p1;
    p->right = p2;

    return 0;
}