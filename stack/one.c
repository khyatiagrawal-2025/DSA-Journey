#include <stdio.h>

int top = -1;
int size;
int arr[100];

void push(int x) {
    if (top == size-1){
        printf("Stack Overflow");
        return;
    }

    top++;
    arr[top] = x;
}

int pop(){
    if(top == -1){
        printf("Stack Underflow\n");
    }
    int val = arr[top];
    top--;
    return val;
}

int main() {
    int x;
    scanf("%d", &size);
    for (int i = 0; i < size; i++){
        scanf("%d", &x);
        push(x);
    }
    for (int i = 0; i <= top; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
