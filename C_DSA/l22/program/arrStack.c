#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
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

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    int hold;
    if (isEmpty(ptr))
    {
        printf("Stack underflow");
        return -1;
    }
    else
    {
        hold = ptr->arr[ptr->top];
        ptr->top--;
        return hold;
    }
}

int peek(struct stack *ptr, int i)
{
    int arrInd = ptr->top - i + 1;
    if (arrInd < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else
    {
        return ptr->arr[arrInd];
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack)); // we are making this so that we can pass this into a fuction
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 55);
    push(s, 56);
    push(s, 57);
    // printf("just poped %d\n", pop(s));

    // printing value from the stack
    for (int i = 0; i <= s->top + 1; i++)
    {
        printf("The value at position %d is %d\n", i, peek(s, i));
    }

    return 0;
}