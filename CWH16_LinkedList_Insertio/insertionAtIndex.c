#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// Linked List Traversal Function
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


// Insertion At Index(Between)
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
    
}


void main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Alocation memory in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link First to Second Node
    head->data = 7;
    head->next = second;

    // Link Second to Third Node
    second->data = 11;
    second->next = third;

    // Link Third to Fourth Node
    third->data = 41;
    third->next = fourth;

    // Link Fourth as Last Node
    fourth->data = 66;
    fourth->next = NULL;

    // Linked List before insertion
    printf("Linked List before Insertion\n");
    Traversal(head);

    // Call insertion Function
    head = insertAtIndex(head, 56, 1);
    // Linked List after insertion
    printf("\nLinked List after Insertion\n");
    Traversal(head);
}


