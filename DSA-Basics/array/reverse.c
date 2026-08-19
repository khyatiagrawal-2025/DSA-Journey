#include<stdio.h>
int main(){
    printf("Hello world");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    /*
    for(int i=0, j=n-1; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    */
    int front = 0, rear = n-1;
    while(front<rear){
        int temp = arr[front];
        arr[front] = arr[rear];
        arr[rear] = temp;
        front++;
        rear--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}