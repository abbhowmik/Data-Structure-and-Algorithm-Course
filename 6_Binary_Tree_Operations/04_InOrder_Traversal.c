#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *creatNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->left = NULL;
    n->right = NULL;
    n->data = data;
    return n;
}
void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
int main()
{
    struct Node *p = creatNode(4);
    struct Node *p1 = creatNode(1);
    struct Node *p2 = creatNode(6);
    struct Node *p3 = creatNode(5);
    struct Node *p4 = creatNode(2);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    inOrder(p);
    return 0;
}