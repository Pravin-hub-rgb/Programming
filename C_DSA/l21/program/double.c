#include <stdio.h>
#include <stdlib.h>

struct Node
{
int data;
struct Node *next;
struct Node *prev;
};

void doubleTraversal(struct Node *ptr)
{
while (ptr != NULL)
{
printf("Element : %d\n", ptr->data);
ptr = ptr->next;
}
}

struct Node *insertATFirst(struct Node *head, int data)
{
struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
ptr->data = data;
ptr->next = head;
head->prev=ptr;
ptr->prev=NULL;
return ptr;
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
head->prev = NULL;

// link second and third nodes
second->data = 11;
second->next = third;
second->prev = head;

// link third and fourth nodes
third->data = 211;
third->next = fourth;
third->prev = second;

// terminate the list a the third node
fourth->data = 66;
fourth->next = NULL;
fourth->prev = third;

doubleTraversal(head);
head = insertATFirst(head, 69);
printf("After insertion\n");
doubleTraversal(head);
return 0;
}