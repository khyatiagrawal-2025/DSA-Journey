#include<stdio.h>
#define size 5

//Insertion

int queue[size];
int front = -1;
int rear = -1;

void enqueue(int x){
    if(rear == size-1){
        printf("queue Overflow\n");
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear++;
    queue[rear] = x;
    printf("Value inserted in queue %d",x);
}

int main(){
    enqueue(10);
    return 0;
}