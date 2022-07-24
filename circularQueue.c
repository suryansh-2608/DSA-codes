#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int * arr;
};

void enqueue(struct queue * q, int val)
{
    if((q->rear+1)%q->size == q->front)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        q->rear = (q->rear+1)%q->size;
        q->arr[q->rear] = val;
    }
}

int dequeue(struct queue * q)
{
    int val = -1;
    if(q->rear == q->front)
    {
        printf("The queue is already empty\n");
    }
    else
    {
        q->front = (q->front+1)%q->size;
        val = q->arr[q->front];
        return val;
    }
    

}

int main()
{
    struct queue q;
    q.size = 10;
    q.front = q.rear = -1;
    q.arr = (int *)malloc(q.size*sizeof(int));
    
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 


    return 0;
}