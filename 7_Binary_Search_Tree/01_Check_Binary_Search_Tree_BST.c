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

int isBST(struct Node *root)
{
    static struct Node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
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
    if (isBST(p))
    {
        printf("This is a Binary Search Tree\n", isBST(p));
    }
    else
    {
        printf("This is not a binary search tree");
    }
    // printf("%d", isBST(p));

    return 0;
}