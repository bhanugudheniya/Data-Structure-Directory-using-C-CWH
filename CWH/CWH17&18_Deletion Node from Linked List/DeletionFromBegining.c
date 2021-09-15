#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *ptr){
    if(ptr == NULL){
        printf("Empty List\n");
    }
    else{
        while (ptr != NULL)
        {
            printf("Element : %d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

struct Node * DeletionFromBegining(struct Node *head){
    struct Node *ptr = head;    // set ptr as head
    head = head->next;          // set next node as head
    free(ptr);                  // free ptr
    return head;
}

void main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    
    // Allocate heap memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;

    // Traverse before deletion
    printf("Traverse before deletion\n");
    Traversal(head);

    // Deletion function calling
    head = DeletionFromBegining(head);

    // Traverse after deletion
    printf("\nTraverse after deletion\n");
    Traversal(head);

}