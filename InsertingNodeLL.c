#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

void printlist(struct node * h)
{
    while(h!=NULL)
    {
        printf("%d\t", h->data);
        h = h->next;
    }
}

void insert_beg(struct node **h, int data)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = data;
    t->next = (*h);
    (*h) = t;
    
}

void insert_after(struct node *h, int data)
{
    if(h == NULL)
    {
        printf("Previous node can't be NULL\n");
        return;
    }
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = data;
    t->next = h->next;
    h->next = t;


}

void insert_end(struct node **h, int data)
{
    struct node * t = (struct node *)malloc(sizeof(struct node));
    struct node * last = *h;
    t->data = data;
    t->next = NULL;
    if(*h == NULL)
    {
        *h = t;
        return;
    }
    else
    {
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = t;
    }
    
}

int main()
{
    struct node *head = NULL;

    insert_beg(&head, 12);
    insert_beg(&head, 10);
    insert_beg(&head, 11);
    insert_beg(&head, 7);
    insert_beg(&head, 3);
    insert_after(head->next, 6);
    insert_end(&head, 73);

    printlist(head);

    return 0;
}