#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   
    struct Node *p = head;
   
    while (p->next!=NULL)
    {
        p=p->next;
       
    }
     ptr->data = data;
     ptr->next = NULL;
     p->next = ptr;
     return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory fornodes in linked list in heap (dynamic memory allocate)
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second nodes
    head->data = 7;
    head->next = second;

    // link second and third nodes
    second->data = 11;
    second->next = third;

    // link third and fourth nodes
    third->data = 211;
    third->next = fourth;

    // terminate the list a the third node
    fourth->data = 66;
    fourth->next = NULL;

    linkedListTraversal(head);
    insertAtEnd(head,8888);
    linkedListTraversal(head);

    return 0;
}