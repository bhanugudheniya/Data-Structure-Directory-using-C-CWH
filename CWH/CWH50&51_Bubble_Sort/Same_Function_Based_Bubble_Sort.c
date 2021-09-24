// Sorting Array in same function

#include<stdio.h>

void UnsortedArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void SortedArr(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int iter = 0; iter < n; iter++){
        printf("%d ", arr[iter]);
    }
    printf("\n");
}

void main(){
    int arr[] = {5, 6, 4, 34, 11, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array\n");
    UnsortedArr(arr, n);
    printf("\nSorted Array\n");
    SortedArr(arr, n);
}