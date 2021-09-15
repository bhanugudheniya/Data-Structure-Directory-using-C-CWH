#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void Traversal(struct Node *ptr){
    if(ptr == NULL){
        printf("Underflow\n");
    }
    else{
        while (ptr != NULL)
        {
            printf("Element : %d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

struct Node * DeletionFromEnd(struct Node *head){
    struct Node *ptr = head;
    struct Node *q = head->next;

    while(q->next != NULL){
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = NULL;
    free(q);

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
    fourth->next = NULL;

    // Traverse before Deletion
    printf("Traverse before Deletion\n");
    Traversal(head);

    // Deletion Function
    head = DeletionFromEnd(head);

    // Traverse after Deletion
    printf("\nTraverse after Deletion\n");
    Traversal(head);
}