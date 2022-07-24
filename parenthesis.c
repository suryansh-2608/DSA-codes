#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
void push(struct stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parenthesisMatch(char * exp)
{
    struct stack * sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for(int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i]=='(')
        {
            push(sp, '(');
        }
        else if(exp[i]==')')
        {
            if(isEmpty(sp))
            {
                printf("Unbalanced\n");
                exit(0);
            }
            else
            {
                pop(sp);
            }
        }
    }

    if(isEmpty(sp))
    {
        printf("Balanced\n");
    }
    else
    {
        printf("Unbalanced");
    }
}

int main()
{
    char * exp = "(8() (* 9)";
    parenthesisMatch(exp);
    
    return 0;
}