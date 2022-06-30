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

int main()
{
    struct node * head;
    struct node * head2;
    struct node * head3;

    head = (struct node *)malloc(sizeof(struct node));
    head2 = (struct node *)malloc(sizeof(struct node));
    head3 = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = head2;

    head2->data = 2;
    head2->next = head3;

    head3->data = 3;
    head3->next = NULL;

    printlist(head);

    return 0;
}