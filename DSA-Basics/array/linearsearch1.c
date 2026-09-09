#include<stdio.h>
int linearsearch(int arr[],int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {12, 45, 67, 78, 34, 78};
    int n = sizeof(arr)/sizeof(arr[0]); // 24/4 --> 6   --> Total size of an array / sizeof data type.
    int key = 14;
    printf("The index of element is: %d", linearsearch(arr, n, key));
    return 0;
}


// TC --> O(N)