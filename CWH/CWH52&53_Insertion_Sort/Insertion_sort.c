#include<stdio.h>

void show(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void sort(int arr[], int n){
    int key, j;
    for(int i = 0; i <= n-1; i++){
        key = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void main(){
    int arr[] = {3, 4, 1, 9, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sorting\n");
    show(arr, n);
    sort(arr, n);
    printf("\nAfter Sorting\n");
    show(arr, n);
}