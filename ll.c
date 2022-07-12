#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node
{
    int data;
    struct node *next;
} * first = NULL;

void create(int a[], int n)
{
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
    last = first;

    for(i=1; i<n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last=t;
    }

}

void Display(struct node * p)
{
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void count(struct node *p)
{
    int count = 0;
    while(p!=NULL)
    {
        count ++;
        p=p->next;
        

    }
    printf("\n%d", count);
}

int sum(struct node *p)
{
    int sum = 0;
    while(p!=NULL)
    {
        sum += p->data;
        p = p->next;
    }
    printf("\n%d", sum);
}

int max(struct node *p)
{
    int m = INT_MIN;
    while(p!=NULL)
    {
        if(m<p->data)
            m = p->data;
        p=p->next;
    }
    printf("\n%d", m);


}

int min(struct node *p)
{
    int m = INT_MAX;
    while(p!=NULL)
    {
        if(m>p->data)
            m = p->data;
        p=p->next;
    }
    printf("\n%d", m);


}

void search(struct node * p, int key)
{
    struct node *q;

    while(p!=NULL)
    {
        if(key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            printf("\nKey found!!!!!!!");
        }
        q=p;
        p = p->next;
    }
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    Display(first);
    count(first);
    sum(first);
    max(first);
    min(first);
    search(first, 5);
    return 0;
}