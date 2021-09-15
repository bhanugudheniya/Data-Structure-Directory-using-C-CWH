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

// Insertion At End
struct Node * insertAtEnd(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;     // p is a pointer, there starting point is head. 

    while (p->next != NULL)
    {
        p=p->next;
    }
    
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;

    return head;
    
};




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
    head = insertAtEnd(head, 56);
    // Linked List after insertion
    printf("\nLinked List after Insertion\n");
    Traversal(head);
}


