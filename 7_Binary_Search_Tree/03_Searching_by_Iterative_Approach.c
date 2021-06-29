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

struct Node *search(struct Node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
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
    return NULL;
}

int main()
{
    /*
            6
           / \
          3   8
         / \
        1   5


    */
    struct Node *p = creatNode(6);
    struct Node *p1 = creatNode(3);
    struct Node *p2 = creatNode(8);
    struct Node *p3 = creatNode(1);
    struct Node *p4 = creatNode(5);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    int element = 10;
    struct Node *n = search(p, element);

    if (n != NULL)
    {
        printf("%d... is found\n", n->data);
    }
    else
    {
        printf("%d element is not found", element);
    }

    return 0;
}