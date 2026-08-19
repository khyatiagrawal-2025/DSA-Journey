//to insert an element at last
#include<stdio.h>//c k liye
#include<stdlib.h>//pointer or malloc wgera k liye
struct Node {//structure-multiple data types ek jgh store ho skte hain
    int data;
    struct Node *next;
};//single node hoga to sirf ek hi node ka data print krwa skta h aage access nhi krega
void insertElement(struct Node **head, int val){//ek function bnaya h element insert krane k liye
    struct Node *newNode = malloc(sizeof(struct  Node));//new node k liye space bnane k liye
    //base condition
    if(newNode==NULL){
        printf("can't insert\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;//kuch na kuch insert kra skte h iska mtlb
//yahan value insert kra skte h agr null hoga to
    if(*head==NULL){
        *head = newNode;//insert kr diya
        return;
    }
    struct Node *temp = *head;
     while(temp->next!=NULL){
        temp = temp->next;
     }
     temp->next = newNode;
}
void printlist(struct Node *head){
    struct Node *temp = head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main() {//jo elements insert honge wo
    struct Node *head = NULL;
    insertElement(&head,10);
    insertElement(&head,20);
    insertElement(&head,30);
    insertElement(&head,30);
    printlist(head);
    return 0;
}