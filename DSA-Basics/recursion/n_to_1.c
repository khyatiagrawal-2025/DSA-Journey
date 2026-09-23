#include<stdio.h>

void nNumber(int n){
    if(n==0){
        return;
    }
    printf("%d ",n);
    nNumber(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    nNumber(n);
    return 0;
}


/*
void nNumber(int n){
    printf("%d ",n);
    nNumber(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    nNumber(n); // Stack Overflow !
    return 0;
}
*/


/*
void n_Number(int n){
    for(int i=n; i>0; i--){
        printf("%d",i);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    n_Number(n); // Output --> 5 54321
    return 0;
}
*/