#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void Traverse(struct Node *head){
    struct Node *ptr = head;

    do
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    
}

struct Node * insertionAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}

void main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    printf("\nBefore Insertion\n");
    Traverse(head);

    head = insertionAtFirst(head, 52);

    printf("\nAfter Insertion\n");
    Traverse(head);
}