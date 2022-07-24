#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(struct node *ptr, int data)
{
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

int main()
{
    struct node *p1, *p2, *p3;
    p1 = create_node(p1, 2);
    p2 = create_node(p2, 3);
    p3 = create_node(p3, 4);
    return 0;
}