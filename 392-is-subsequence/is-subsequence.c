#include <string.h>
#include <stdbool.h>

bool isSubsequence(char* s, char* t) {

    int n = strlen(s);
    int m = strlen(t);

    int i = 0;
    int j = 0;

    while (i < n && j < m) {

        if (s[i] == t[j]) {
            i++;
        }

        j++;
    }

    return i == n;
}