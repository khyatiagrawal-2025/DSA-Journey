#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    struct node n1,n2,n3,n4;
    n1.data = 6;
    n2.data = 9;
    n3.data = 12;
    n4.data = 4;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;
    printf("%d ->%d ->%d ->%d ->NULL",n1.data,n2.data,n3.data,n4.data);
    return 0;
}