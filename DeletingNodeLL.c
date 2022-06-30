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
    printf("\n");
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

void delete_beg(struct node **h)
{
    // *h = *h->next;
    struct node*temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp = *h;
    temp = temp->next;
    *h = temp;
}

void delete_mid(struct node *h, int pos)
{
    for(int i=2; i< pos; i++) 
    {
         if(h->next!=NULL) 
         {
               h = h->next;
         }
    }

    h->next = h->next->next;
}

void delete_end(struct node *h)
{
    struct node*temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp = h;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    delete_beg(&head);
    printlist(head);
    delete_end(head);
    printlist(head);
    delete_mid(head, 4);
    printlist(head);

    return 0;
}