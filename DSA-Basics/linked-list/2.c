#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void insertionAtlast(struct Node **head, int val){
       struct Node *newNode = malloc(sizeof(struct Node));
       if(newNode == NULL){
        printf("Can't insert element\n");
        return;
       }
       newNode -> data = val;
       newNode -> next = NULL;
       if(*head == NULL){
        *head = newNode;
        return;
       }
       
    struct Node *temp = *head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp = temp -> next;
}

void printList(struct Node *head){
    struct Node *temp = *head;
    while(temp != NULL){
        printf("%d -> ",temp -> data);
    }
    temp = temp -> next;
    printf("NULL");
}

int main(){
    struct Node *head = NULL;
    insertionAtlast(&head,10);
    insertionAtlast(&head,20);
    insertionAtlast(&head,30);
    insertionAtlast(&head,40);
    printf(head);
    return 0;
}