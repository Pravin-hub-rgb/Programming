#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size, f, r;
    int *arr;
};

int isEmpty(struct queue s)
{
    if (s.f == s.r)
        return 1;
    else
        return 0;
}
int isFull(struct queue s)
{
    if (s.r == s.size - 1)
        return 1;
    else
        return 0;
}

void enqueue(struct queue q, int element)
{
    if (isFull(q))
        printf("Queue Overflow");
    else
    {
        q.r++;
        q.arr[q.r] = element;
        printf("Enqued element: %d\n", element);
    }
}
int dequeue(struct queue q)
{
    int a = -1;
    if (isEmpty(q))
        printf("Queue Underflow");
    else
    {
        q.f++;
        a = q.arr[q.f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 10;
    q.f = -1;
    q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(q, 5);
    enqueue(q, 4);
    enqueue(q, 3);
   
    return 0;
}