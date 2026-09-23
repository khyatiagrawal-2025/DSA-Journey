#include<stdio.h>

void print(int num, int n){
    if(num == n){
        return;
    }
    printf("%d ", num);
    print(num+1,n);
}

int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    print(num,n);
    return 0;
}