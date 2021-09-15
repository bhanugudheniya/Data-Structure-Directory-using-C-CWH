#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tsize, int usize){
    // int tsize, usize;
    // struct myArray *a = malloc(sizeof(struct myArray));

    /*
    (*a).total_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int *)malloc(tsize * sizeof(int));
    */
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void display(struct myArray *a){
    // struct myArray *a = malloc(sizeof(struct myArray));
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
    
}

void setElement(struct myArray *a){
    int n;
    for(int i = 0; i < a->used_size; i++)
    {
        printf("Enter Elements %d : ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

int main(){
    struct myArray marks;
    createArray(&marks, 10, 2);
    setElement(&marks);
    display(&marks);

    return 0;
}