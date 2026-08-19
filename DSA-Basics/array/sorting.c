#include<stdio.h>
int main(){
    printf("Hello World");
    int n;
    scanf("%d",&n);
    int *arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            printf("Array is not sorted");
            break;
        }
        else{
            printf("Array is sorted");
        }
    }

    return 0;
}