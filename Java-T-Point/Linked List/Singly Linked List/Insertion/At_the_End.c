#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head;

void End(int item);

void main(){
    int choice, item;

    do{
        printf("Enter Data : ");
        scanf("%d", &item);

        End(item);

        printf("If you want to enter more data, so please PRESS '0' : ");
        scanf("%d", &choice);
    }while(choice==0);
}

void End(int item){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp;

    if(ptr==NULL){
        printf("Overflow\n");
    }
    else{
        ptr->data = item;

        if(head==NULL){
            ptr->next = NULL;
            head = ptr;
            printf("Node Inserted\n");
        }
        else{
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
                temp->next = ptr;
                ptr->next = NULL;
                printf("Node Inserted\n");
        }
    }
}