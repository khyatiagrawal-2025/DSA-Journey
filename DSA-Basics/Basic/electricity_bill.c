#include<stdio.h>
int main(){
    int unit;
    scanf("%d",&unit);
    int bill=0;
    if(unit<=100){
        bill = unit*10;
    }
    else if(unit<=200){
        bill = 100*10 + (unit-100)*15;
    }
    else if(unit<=300){
        bill = 100*10 + 100*15 + (unit-200)*20;
    }
    else{
        bill = 100*10 + 100*15 + 100*20 + (unit-300)*25;
    }
    printf("%d",bill);
    return 0;
}