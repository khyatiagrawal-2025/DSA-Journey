#include<stdio.h>
#include<string.h>
int main(){
    char greetings[] = "Hello World!";
    greetings[0] = 'J';
    printf("%s",greetings);
    return 0;
}