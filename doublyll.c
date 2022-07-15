#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

void linkedListTraversal(struct node * head)
{
    struct node * ptr = head;
    while (ptr!=NULL)
    {
        printf("Element is %d\n", ptr->data);
        ptr= ptr->next;
    }
    
}

struct node * insert_beg(struct node *head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data =data;
    return ptr;
}


int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;


    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));


    head->data = 4;
    head->next = second;
    head->prev = NULL;


    second->data = 3;
    second->next = third;
    second->prev = head;


    third->data = 8;
    third->next = fourth;
    third->prev = second;
 

    fourth->data = 1;
    fourth->next = NULL;
    fourth->prev = third;

    linkedListTraversal(head);
    head = insert_beg(head, 12);
    linkedListTraversal(head);

    return 0;
}