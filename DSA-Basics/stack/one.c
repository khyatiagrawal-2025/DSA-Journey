#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int top = -1;
int size;
int arr[100];

void push(int x) { //Insert
    if (top == size-1){
        printf("Stack Overflow\n");
        return;
    }

    top++;
    arr[top] = x;
}

int pop(){ //Remove/Delete
    if(top == -1){
        printf("Stack Underflow\n");
    }
    int val = arr[top];
    top--;
    return val;
}

int isSize(){
    return top+1;
}

int peek(){
    if(top == -1){
        printf("Stack Empty\n");
        return -1;
    }
    return arr[top];
}

bool isEmpty(){
    if(top == -1){
        return true;
    }
    return false;
}

int main() {
    int x;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &x);
        push(x);
    }
    push(10);

    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d \n", arr[i]);
    }
    
    printf("isSize: %d\n", isSize());
    printf("Peek: %d\n", peek());
    printf("Is Empty: %d\n", isEmpty());
    printf("Pop: %d\n", pop());
    printf("Size after Pop: %d\n", isSize());
    
    return 0;
}