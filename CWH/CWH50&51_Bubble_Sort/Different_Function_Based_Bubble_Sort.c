// Different function for swap

#include<stdio.h>

void UnsortedArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void SortedArr(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }    
}

void showArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void main(){
    int arr[] = {5, 6, 4, 34, 11, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array\n");
    UnsortedArr(arr, n);
    SortedArr(arr, n);
    printf("\nSorted Array\n");
    showArr(arr, n);
}