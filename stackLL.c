#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack * next;
};

struct stack *push(struct stack *s, int data)
{

}

struct stack *pop(struct stack *s)
{

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
        printf("The stack is not FULL");
}

void peek(struct stack *s, int data)
{

}

int main()
{
    
    return 0;
}