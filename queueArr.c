#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct queue * q)
{
    if(q->front == q->rear)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue * q)
{
    if(q->rear == q->size-1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue * q, int val)
{
    if(isFull(q))
    {
        printf("\nQueue Overflow");
    }
    else
    {
        q->rear = q->rear+1;
        q->arr[q->rear] = val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if(isEmpty(q))
    {
        printf("\nQueue Underflow");
    }
    else
    {
        q->front ++;
        a = q->arr[q->front];
        return a;
    }
    
    
}

void printQueue(struct queue *q)
{
    for(int i = 0; i<q->size; i++)
    {
        printf("%d\t", q->arr[i]);
    }
    printf("\n");
}


int main()
{
    struct queue q;
    printf("please tell the total number of elements in the queue: ");
    scanf("%d", &q.size);
    printf("\n");
    q.front = q.rear = -1;
    q.arr = (int *)malloc(q.size*sizeof(int));

    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    // printf("Dequeuing element %d\n", dequeue(&q));
    // printf("Dequeuing element %d\n", dequeue(&q));
    // printf("Dequeuing element %d\n", dequeue(&q)); 
    // enqueue(&q, 45);
    // enqueue(&q, 45);
    // enqueue(&q, 45);

    printQueue(&q);
 
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
}