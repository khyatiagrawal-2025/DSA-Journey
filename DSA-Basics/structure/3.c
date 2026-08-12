#include<stdio.h>
int main(){         // memory leak , dangling pointer , 
    int n;
    int arr[n];
    scanf("%d",&n);
    int *ptr = (int*)malloc(n*sizeof(int*arr[n])));
    return 0;
}