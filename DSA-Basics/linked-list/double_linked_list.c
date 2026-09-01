#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
int main(){
    struct node n1;
    n1.data = 10;
    n1.next = NULL;
    n1.prev = NULL;
    printf("%d --> %d --> %d\n",n1.prev,n1.data,n1.next);
    return 0;
}
