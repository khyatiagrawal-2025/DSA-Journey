#include <string.h>
#include <stdbool.h>

bool isValid(char* s) {

    char stack[10000];
    int top = -1;

    for(int i = 0; s[i] != '\0'; i++) {

        // Opening brackets
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        }

        // Closing bracket ')'
        else if(s[i] == ')') {
            if(top == -1 || stack[top] != '(') {
                return false;
            }
            top--;
        }

        // Closing bracket '}'
        else if(s[i] == '}') {
            if(top == -1 || stack[top] != '{') {
                return false;
            }
            top--;
        }

        // Closing bracket ']'
        else if(s[i] == ']') {
            if(top == -1 || stack[top] != '[') {
                return false;
            }
            top--;
        }
    }

    return top == -1;
}