#include<stdio.h>
int main(){
    int x;
    x = printf("%d\n",2);
    printf("%d\n",x);
    printf("%c\n",'a'+2);
    printf("%d \n",'a'+2);
    printf("%d %d\n", 20||10, 0!=1);
    int a=9,b=6;
    printf("%d\n", a++ || b-- && ++b); //--> Logical operators.
    return 0;
}