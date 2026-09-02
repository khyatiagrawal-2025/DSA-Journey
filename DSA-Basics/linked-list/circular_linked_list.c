#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

struct Node *insertAtFirst(struct Node *head, int val){
    struct Node *newNode = malloc(sizeof(struct Node));

    //base condition
    if(newNode == NULL){
        printf("Memory Allocation Failed\n");
        return head;
    }
    newNode -> data = val;

    //Kahi empty to nahi
    if(head == NULL){
        newNode -> next = newNode;
        return head;
    }
    struct Node *temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    newNode -> next = head;
    temp -> next = newNode;
    head = newNode;
    return head;
}

int main(){
    struct Node *head = NULL;
    head = insertAtFirst(head, 10);
    head = insertAtFirst(head,20);
    head = insertAtFirst(head,30);
    head = insertAtFirst(head,40);
    struct Node *temp = head;
    while(temp -> next != head){
        printf("%d -> ",temp->next);
    }
    printf("%d -> ",temp -> data);
    printf("Head");
    return 0;
}