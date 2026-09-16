#include<stdio.h>

void bubblesort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main(){
    int arr[]={4,3,2,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

//Time Complexity -> O(N^2)
//Space Complexity --> O(1)