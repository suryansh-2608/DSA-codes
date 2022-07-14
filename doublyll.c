#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};



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


    return 0;
}