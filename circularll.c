#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void traverse(struct node *head)
{
    struct node * p = head;
    do
    {
        printf("\t%d", p->data);
        p = p->next;
    }while(p != head);
    
}

struct node * insert_beg(struct node *head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data =data;

    struct node * p = head->next;
    while(p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}


struct node * insert_end(struct node *head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data =data;
    struct node * p = head;
    while(p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    
    return head;
}

struct node * insert_pos(struct node *head,struct node *prevNode, int data )
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data =data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
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


    second->data = 3;
    second->next = third;


    third->data = 6;
    third->next = fourth; 

    fourth->data = 1;
    fourth->next = head;

    traverse(head);
    printf("\n");

    head = insert_beg(head, 11);

    traverse(head);
    printf("\n");

    head = insert_end(head, 12);

    traverse(head);
    printf("\n");

    head = insert_pos(head, second, 145);

    traverse(head);
    printf("\n");

    

    return 0;
}