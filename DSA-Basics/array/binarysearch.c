#include<stdio.h>

// Binary Search only Sorted array(Sorted Form) mein lagta hai !

// TC --> O(logN)

int binarySearch(int arr[], int n, int key){
    int start = 0, end = n-1;
    while(start<=end){
        int half = (start+end)/2;
        if(arr[half] == key){
            return half;
        }
        else if(arr[half]<key){
            start = half+1;
        }
        else{
            end = half-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,6,9,12,13};
    int n = sizeof(arr)/sizeof(arr[0]); // 20/4 = 5
    int key = 9;
    printf("%d",binarySearch(arr,n,key));
    return 0;
}