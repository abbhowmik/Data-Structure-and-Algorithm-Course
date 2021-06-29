#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *creatNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->left = NULL;
    n->right = NULL;
    n->data = data;
    return n;
}

void insertNode(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("%d matched with the binary search tree, so %d cannot be inserted\n", key, key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = creatNode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

int main()
{
    /*
            5
           / \
          3   7
         / \
        1   4


    */
    struct node *p = creatNode(5);
    struct node *p1 = creatNode(3);
    struct node *p2 = creatNode(7);
    struct node *p3 = creatNode(1);
    struct node *p4 = creatNode(4);

    // linking the nodes
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    insertNode(p, 7);
    printf("%d", p->right->right->data);
    return 0;
}
