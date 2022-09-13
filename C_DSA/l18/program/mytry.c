#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
}

circularTraversal(struct Node * head)
{
    struct Node * ptr = head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}

struct Node * insertAtFirst(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p = head->next;
    while(p->next!=head)
    {
                p=p->next;
    }
    // At this point p points to the last node of this circular linked list
    p->next=ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node * head=(struct Node *)malloc(sizeof(struct Node));
    struct Node * element2=(struct Node *)malloc(sizeof(struct Node));
    struct Node * element3=(struct Node *)malloc(sizeof(struct Node));
    struct Node * element4=(struct Node *)malloc(sizeof(struct Node));
    head->data=1;
    head->next=element2;
    element2->data=2;
    element2->next=element3;
    element3->data=3;
    element3->next=element4;
    element4->data=4;
    element4->next=head;
    
    circularTraversal(head);
    head = insertAtFirst(head,88);
    printf("After insertion\n");
    circularTraversal(head);
    return 0;
}