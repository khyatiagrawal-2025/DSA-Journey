#include<stdio.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

void dequeue(int x){
    if(front == rear){
        front = rear-1;
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear++;
    
}