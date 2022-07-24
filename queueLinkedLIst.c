#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void LinkedListTraversal(struct node *ptr)
{
     while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(struct node ** f, struct node ** r, int val)
{
    struct node * n = (struct node *)malloc(sizeof(struct node));
    if(n == NULL)
    {
        printf("The queue is FULL\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if(*f == NULL)
        {
            *f = *r = n;
        }
        else
        {
            (*r)->next = n;
            *r = n;
        }
    }
}

int dequeue(struct node **f, struct node **r)
{
    int val = -1;
    struct node * ptr = *f;
    if(*f == NULL)
    {
        printf("The queue is empty\n");
    }
    else
    {
        *f = (*f)->next;
        val = ptr->data;
        free(ptr);
        printf("The element dequeued is %d\n", val);
    }
}

int main()
{
    struct node * front = NULL;
    struct node *rear = NULL;
    LinkedListTraversal(front);

    enqueue(&front, &rear, 4);
    enqueue(&front, &rear, 5);
    enqueue(&front, &rear, 6);

    LinkedListTraversal(front);

    dequeue(&front, &rear);

    LinkedListTraversal(front);


    return 0;
}