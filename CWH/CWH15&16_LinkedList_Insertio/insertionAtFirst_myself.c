#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void travsere(){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Iteration\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    
}

void insertionFirst(){

}

void insertionNode(int el){
    struct Node *head, *current, *temp = (struct Node *)malloc(sizeof(struct Node));

    for(int i = 0; i<el; i++){
        if(i==0){
            head = temp = current;
        }
        else{
            temp->next = current;
            temp = current;
        }
    }

    temp->next = NULL;
    temp = head;
}

void main(){
    int el;
    printf("Enter Number of Linked List Node : ");
    scanf("%d\n", &el);

    insertionFirst(el);
    travsere();

}