#include <string.h>
#include <stdbool.h>

bool isValid(char* s) {
    char stack[strlen(s)+1];
    int top=-1;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            top++;
            stack[top]=s[i];
        }
        else{
            if(top==-1){
                return false;
            }
            if((s[i]==')' && stack[top]=='(') ||
            (s[i]==']' && stack[top]=='[') ||
            (s[i]=='}' && stack[top]=='{')){
                top--;
            }
            else{
                return false;
            }
        }
    }
    return top==-1;
}