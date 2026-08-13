#include<stdio.h>
int main(){
    int arr[] = {4,6,9,12,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=6;
    printf("The key is %d", SearchElement(arr,n,k));
    return 0;
}
int SearchElement(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}