#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n], temp[n], j=0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;

    int front = 0;
    int rear = 0;
    while(front<rear){
        temp = arr[front];
        arr[front] = arr[rear];
        arr[rear] = temp;
        front++;
        rear--;
    }
    front = 0;
    rear = n-1
    while(front<rear){
        temp = arr[front];
        arr[front] = arr[rear];
        arr[rear] = temp;
        front++;
        rear--;
    }
    front = k;
    rear = n-1;
    while(front<rear){
        temp = arr[front];
        arr[front] = arr[rear];
        arr[rear] = temp;
        front++;
        rear--;
    }
    for(int i=0; i<n; i++){
        printf("%d ",temp[i]);
    }

    return 0;
}