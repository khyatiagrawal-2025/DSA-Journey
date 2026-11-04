#include <stdbool.h>

bool backspaceCompare(char* s, char* t) {
    char a[201], b[201];
    int top1 = -1, top2 = -1;

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == '#') {
            if(top1 >= 0)
                top1--;
        }
        else
            a[++top1] = s[i];
    }

    for(int i = 0; t[i] != '\0'; i++) {
        if(t[i] == '#') {
            if(top2 >= 0)
                top2--;
        }
        else
            b[++top2] = t[i];
    }

    if(top1 != top2)
        return false;

    for(int i = 0; i <= top1; i++) {
        if(a[i] != b[i])
            return false;
    }

    return true;
}