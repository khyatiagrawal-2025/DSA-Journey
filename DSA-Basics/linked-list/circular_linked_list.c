#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *insertAtFirst(struct Node *head, int val){
    struct Node *newNode = malloc(sizeof(struct Node));
    // Base condition
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }
    newNode->data = val;
    // Check if empty or not
    if (head == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }
    struct Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    newNode->next = head;
    temp->next = newNode;
    head = newNode;
    return head;
}
int main(){
    struct Node *head = NULL;
    head = insertAtFirst(head, 10);
    head = insertAtFirst(head, 20);
    head = insertAtFirst(head, 30);
    head = insertAtFirst(head, 40);
    head = insertAtFirst(head, 50);
    head = insertAtFirst(head, 60);
    head = insertAtFirst(head, 70);
    head = insertAtFirst(head, 80);
    head = insertAtFirst(head, 90);
    head = insertAtFirst(head, 100);
    struct Node *temp = head;
    while (temp->next != head)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("%d->", temp->data);
    printf("head\n");

    struct Node *head = NULL;
    head = insertAtLast(head, 10);
    head = insertAtLast(head, 20);
    head = insertAtLast(head, 30);
    head = insertAtLast(head, 40);
    head = insertAtLast(head, 50);
    head = insertAtLast(head, 60);
    head = insertAtLast(head, 70);
    head = insertAtLast(head, 80);
    head = insertAtLast(head, 90);
    head = insertAtLast(head, 100);
    struct Node *temp = head;
    while (temp->next != head)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("%d->", temp->data);
    printf("head\n");
    
    return 0;
}

struct Node *insertAtLast(struct Node *head, int val){
    struct Node *newNode = malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }

    newNode->data = val;

    if (head == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }

    struct Node *temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;

    return head;
}