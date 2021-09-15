#include<stdio.h>
#include<stdlib.h>

// create struct
struct Node
{
    int data;
    struct Node *next;
};

// Travsersal Function
void Traversal(struct Node *ptr){
    while (ptr!=NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

void main(){
    // create linked list node 
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory for node in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link Head Node to Second
    head->data = 7;
    head->next = second;

    // Link Second Node to Third
    second->data = 11;
    second->next = third;

    // Third Node To Null
    third->data = 16;
    third->next = NULL;

    Traversal(head);
}
