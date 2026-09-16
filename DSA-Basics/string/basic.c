
// Q -> WAP to print your Full Name taking user input first used  character type arr and ptr type string.

#include<stdio.h>
int main() {
    char arr[10];
    char *ptr;
    printf("Enter your full name: ");
    scanf(" %s", arr);
    ptr = arr;
    printf("Your full name is: %s", ptr);
    return 0;
}