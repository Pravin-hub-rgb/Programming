#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size, f, r;
    int *arr;
};

int isEmpty(struct circularQueue *s)
{
    if (s->f == s->r)
        return 1;
    else
        return 0;
}
int isFull(struct circularQueue *s)
{
    if ((s->r+1)%s->size==s->f)
        return 1;
    else
        return 0;
}

void enqueue(struct circularQueue *q, int element)
{
    if (isFull(q))
        printf("Queue Overflow");
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r] = element;
        printf("Enqued element: %d\n", element);
    }
}
int dequeue(struct circularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
        printf("Queue Underflow");
    else
    {
        q->f=(q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct circularQueue q;
    q.size = 5;
    q.f = 0;
    q.r = 0; // as -1 is unreachable in circular incrementation
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
    enqueue(&q, 5);
 
   
    return 0;
}