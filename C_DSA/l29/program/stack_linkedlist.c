#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *top)
{
    printf("Top->");
    while (top != NULL)
    {
        printf("%d->", top->data);
        top = top->next;
    }
    printf("\n");
}
int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int data)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        printf("Stack overflow");
    }
    else
    {
        p->data = data;
        p->next = top;
        top = p;
        return top;
    }
}
int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack underflow");
    }
    else
    {
        struct Node *n = *top;
        int x = n->data;
        *top = (*top)->next;
        free(n);
        return x;
    }
}

int peek(struct Node *top, int pos)
{
    struct Node *ptr = top;
    for (int i = 0; i < pos - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}
int stackTop(struct Node *top)
{
    return top->data;
}
int stackBottom(struct Node *top)
{
    struct Node *ptr = top;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}

int main()
{
    struct Node *top = NULL;

    top = push(top, 34);
    top = push(top, 36);
    top = push(top, 38);
    // push(top, 36);
    linkedListTraversal(top);
    int element = pop(&top);
    linkedListTraversal(top);
    // printf("The element at position %d is %d\n",0,peek(top,8));
    // printf("The element at top is %d",stackTop(top));
    printf("The element at bottom is %d", stackBottom(top));
    return 0;
}