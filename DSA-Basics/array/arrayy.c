#include<stdio.h>
int main(){
    int a[10];
    int n;
    int max;
    int min;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        min = max = a[0];
        if(a[i]<min){
            min = a[i];
        }
        else{
            max = a[i];
        }
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d",max);
    return 0;
}
/*
OUTPUT -->
5
9 6 35 45 7
Minimum = 7
Maximum = 9
*/