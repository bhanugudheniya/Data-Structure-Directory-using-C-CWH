#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *head;

void Beginning(int item);

void main(){
    int choice, item;

    do{
        printf("Enter Data : ");
        scanf("%d", &item);

        Beginning(item);    // calling function

        printf("If you want to enter more data, so please PRESS '0' : ");
        scanf("%d", &choice);
    }while(choice==0);      // execute "do" section while choice fill by user as '0'
}

void Beginning(int item){
    // make a node as a pointer using malloc as dynamic memory
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    if(ptr == NULL){
        printf("Overflow\n");
    }
    else{
        ptr->data = item;
        ptr->next = head;
        head = ptr;
    }
}