#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr)
{
    if(ptr->top==-1)
        return 1;
    else
        return 0;
}

int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
        return 1;
    else
        return 0;
}

void push(struct stack * s, int value)
{
    if(isFull(s))
        printf("Stack Overflow");
    else
    {
        s->top++;
        s->arr[s->top] = value;
        printf("\n%d pushed in the stack", value);
    }
}

void pop(struct stack *s)
{
    if(isEmpty(s))
        printf("Stack underflow");
    else
    {
        int value = s->arr[s->top];
        s->top--;
        printf("\n%d popped from the stack", value);
    }
}

void peek(struct stack *s, int value)
{
    int pos = 0;
    while(s->arr[s->top] != value && s->top != -1)
    {
        pop(s);
        pos ++;
    }
    if(s->top == -1)
    {
        printf("\nElement Not Found");
    }
    else
    {
        printf("\n%d peeked", value);
    }
}

void stackTop(struct stack * s)
{
    printf("\n %d ", s->arr[s->top]);
}

void stackBottom(struct stack * s)
{
    printf("\n %d ", s->arr[0]);
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // s->arr[0] = 4;
    // s->top++;

    // if(isEmpty(s))
    // {
    //     printf("\nThe stack is empty");
    // }
    // else
    // {
    //     printf("The stack is not empty");
    // }


    push(s, 12);
    push(s, 14);
    push(s, 13);
    push(s, 16);
    push(s, 132);
    push(s, 1123);
    push(s, 145);
    push(s, 112);
    push(s, 17676);
    push(s, 11);
    push(s, 10);
    // peek(s,12);
    stackTop(s);
    stackBottom(s);

    return 0;
}