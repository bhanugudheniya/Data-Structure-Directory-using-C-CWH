#include<stdio.h>

void printArr(int arr[], int num){
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sortArr(int arr[], int num){
    for (int i = 0; i < num-1; i++)
    {
        int indexOfMin = i, temp = 0;
        for (int j = i+1; j < num; j++)
        {
            if(arr[j] < arr[indexOfMin]){
                indexOfMin = j;
            }
        }
        // swaping
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
    
}

void main(){
    int arr[100];
    int num;

    printf("Enter number of elements\n");
    scanf("%d\n", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    printf("Before Sorting\n");
    printArr(arr, num);

    sortArr(arr, num);

    printf("\nAfter Sorting\n");
    printArr(arr, num);

}