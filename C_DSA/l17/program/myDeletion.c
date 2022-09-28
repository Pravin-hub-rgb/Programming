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

struct Node *deleteTheFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p1 = head;
    struct Node *p2 = head;
    int i = 0;
    while (i != index - 1)
    {
        p1 = p1->next;
        i++;
    }
    int j = 0;
    while (j != index)
    {
        p2 = p2->next;
        j++;
    }
    p1->next = p2->next;
    free(p2);
    return head;
}

struct Node *deleteAtEnd(struct Node *head)
{
    struct Node *p1 = head;
    struct Node *p2 = head->next;

    while (p2->next != NULL)
    {
        p1 = p1->next;
        p2 = p2->next;
    }
    p1->next = NULL;
    free(p2);
    return head;
}

struct Node *deleteAtNode(struct Node *head, struct Node *givenNode)
{
    struct Node *p1 = head;
    struct Node *p2 = head->next;
    while (p1->next != givenNode)
    {
        p1 = p1->next;
        p2 = p2->next;
    }
    p1->next = p2->next;
    free(p2);
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 8;
    head->next = second;
    second->data = 9;
    second->next = third;
    third->data = 7;
    third->next = fourth;
    fourth->data = 11;
    fourth->next = fifth;
    fifth->data = 2;
    fifth->next = NULL;

    linkedListTraversal(head);
    // head = deleteTheFirst(head);
    // head = deleteAtIndex(head, 2);
    // head = deleteAtEnd(head);
    head = deleteAtNode(head, third);
    printf("After deletion\n");
    linkedListTraversal(head);
    return 0;
}