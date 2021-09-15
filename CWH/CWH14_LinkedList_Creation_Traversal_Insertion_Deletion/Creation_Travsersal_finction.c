#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void create(int item);
void traverse();

void main(){
    int choice, item;
    do
    {
        printf("\n1.Intertion\n2.Traversal\n3.Exit\n");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("\nEnter Elements\n");
            scanf("%d", &item);

            // printf("\nInsertion of element\n");
            create(item);
            break;

        case 2:
        // printf("\nDisplaying elements\n");
            traverse();
            break;

        case 3:
            exit(0);
            break;
        
        default:
            printf("\nPlease enter valid choice\n");
        }
    } while (choice != 3);
}

void create(int item){
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    
    if(ptr == NULL){
        printf("\nOverFlow\n");
    }
    else{
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nInserted\n");
    }
}

void traverse()  
    {  
        struct Node *ptr;     
        ptr = head;   
        if(ptr == NULL)  
        {  
            printf("Empty list..");  
        }  
        else  
        {  
            printf("printing values . . . . .\n");   
            while (ptr!=NULL)  
            {  
                printf("\n%d", ptr->data);  
                ptr = ptr -> next;  
                // printf("Data = %d\n", ptr->data);
            }  
        }  
     }  