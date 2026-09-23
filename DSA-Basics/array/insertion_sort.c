#include<stdio.h>

void insertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>0; j--){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {4,6,3,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}