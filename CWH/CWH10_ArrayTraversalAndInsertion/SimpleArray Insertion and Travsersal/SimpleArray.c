#include<stdio.h>

void main()
{
    int values[5];
    
    printf("Enter 5 Values\n");
    for(int i = 0; i < 5; ++i)
    {
        scanf("%d", &values[i]);
    }
    
    printf("Array\n");
    for(int i = 0; i < 5; ++i)
    {
        // printf("Elements %d is : %d\n", i, values[i]);
        printf("|%d", values[i]);
    }
    

}