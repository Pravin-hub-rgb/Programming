#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueueF(struct queue *q, int val)
{
    if (isEmpty(q))
    {
        printf("Queue front is FULL\n");
    }
    else
    {
        q->f--;
        q->arr[q->f] = val;
        printf("Enqued element in Front element: %d\n", val);
    }
}
void enqueueR(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("This Queue is full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element in Rear : %d\n", val);
    }
}

int dequeueF(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("This Queue is empty\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int dequeueR(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("This Queue is empty\n");
    }
    else
    {
        q->f--;
        a = q->arr[q->f];
    }
    return a;
}
void print(struct queue *P)
{
    if (isEmpty(P))
    {
        printf("\nQueue is empty!!");
        exit(0);
    }
    int i;
    i = P->f;
    while (i != P->r)
    {
        printf("\n%d", P->arr[i]);
        i ++;
    }
    printf("\n%d\n", P->arr[P->r]);
}
int main()
{
    struct queue q;
    q.size = 4;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // Enqueue few elements
    enqueueR(&q, 12);
    enqueueR(&q, 15);
    enqueueR(&q, 1);
    print(&q);
    printf("Dequeuing element %d\n", dequeueF(&q));
    printf("Dequeuing element %d\n", dequeueF(&q));
    printf("Dequeuing element %d\n", dequeueF(&q));
    enqueueF(&q, 45);
    enqueueF(&q, 45);
    enqueueF(&q, 45);
    print(&q);


    return 0;
}