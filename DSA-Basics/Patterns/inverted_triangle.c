#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n>;i++){
        for(int j=1; j<=n-i+1; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    /*
    for(int i=n;i>=1;i--){
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    */
}

/*
OUTPUT -->
5
12345
1234
123
12
1
*/