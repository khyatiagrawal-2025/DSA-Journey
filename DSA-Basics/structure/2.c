#include<stdio.h>
#include<string.h>
struct Student {
    int rollno;
    char name[50];
};

int main() {
    struct Student S1;
    S1.rollno = 101;
    strcpy(S1.name,"Pratigya");
    printf("%d\n",S1.rollno);
    printf("%s\n",S1.name);
    return 0;
}