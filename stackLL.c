#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack * next;
};

struct stack *push(struct stack *s, int data)
{
    struct stack *n = (struct stack *)malloc(sizeof(struct stack));
    if(n==NULL)
        printf("Stack Overflow\n");
    else
    {
        n->data = data;
        n->next = s;
        s = n;
        return s;
    }

}

struct stack *pop(struct stack **s)
{
    struct stack * n = *s;
    if(*s==NULL)
        printf("The stack is already empty\n");
    else
    {
        *s = (*s)->next;
        
        int x = n->data;
        free(n);
        printf("The popped element is %d\n", x);
    }
}

void isEmpty(struct stack * s)
{
    if(s == NULL)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The stack is not empty\n");
    }
}

void isFull(struct stack *s)
{
    struct stack *n = (struct stack *)malloc(sizeof(struct stack));
    if(n == NULL)
        printf("The stack is FULL\n");
    else
        printf("The stack is not FULL\n");
}

void peek(struct stack *s)
{
    while(s != NULL)
    {
        printf("%d\t", s->data);
        s = s->next;
    }
    printf("\n");
}

int main()
{
    struct stack * s = NULL;
    isEmpty(s);
    s = push(s, 11);
    s = push(s, 12);
    s = push(s, 13);
    s = push(s, 14);
    s = push(s, 15);
    s = push(s, 16);
    s = push(s, 17);
    isFull(s);
    isEmpty(s);
    peek(s);
    pop(&s);
    peek(s);
    return 0;
}