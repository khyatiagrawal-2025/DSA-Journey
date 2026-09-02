#include<stdio.h>
int main(){
    printf("Enter the size of an array\n");
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be search ");
    int target;
    int flag = -1;
    scanf("%d",&target);
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            flag = i;
            break;
        }
    }
    if(flag != -1){
        printf("Target is present on index %d",flag);
    }
    else{
        printf("Target not Found");
    }

    return 0;
}