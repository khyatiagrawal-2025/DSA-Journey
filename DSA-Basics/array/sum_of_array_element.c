// WAP to sum of array element taking user input.

#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    scanf("%d",&n);
    int arr[100];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}